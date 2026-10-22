// ==== public void HFPFJNKNJND() { }   @0xb537d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__HFPFJNKNJND(void *__this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000000191719f & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_lvl_);
    bRam000000000191719f = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c53c40;
  uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x70), lVar3 == 0)) ||
     (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0)) goto LAB_00c53c40;
  uVar1 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar3 == 0) {
LAB_00c53a34:
    uVar5 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)((long)__this + 0x38) == 0) ||
         (lVar3 = UnityEngine_Object__get_name(*(long *)((long)__this + 0x38),0), lVar3 == 0))
      goto LAB_00c53c40;
      uVar1 = System_String__Contains(lVar3,_Str_lvl_,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)((long)__this + 0x38) == 0) ||
           (lVar3 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x38),0),
           lVar3 == 0)) goto LAB_00c53c40;
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar3,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        lVar3 = lStack_38;
        if (lVar4 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar4 == 0) goto LAB_00c53c40;
          }
          uVar5 = Level__get_gui(lVar4,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar4 == 0) goto LAB_00c53c40;
            uVar5 = Level__get_gui(lVar4,0);
            uVar6 = *(undefined8 *)((long)__this + 0x38);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar1 = UnityEngine_Object__op_Equality(uVar5,uVar6,0);
            uVar1 = uVar1 & 0xffffffff;
            goto LAB_00c53b8c;
          }
        }
        uVar1 = 0;
        goto LAB_00c53b8c;
      }
    }
    uVar1 = 0;
    lVar3 = 0;
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar3 == 0) goto LAB_00c53c40;
    }
    uVar5 = Level__get_gui(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) == 0) goto LAB_00c53a34;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) goto LAB_00c53c40;
    uVar5 = Level__get_gui(lVar3,0);
    uVar6 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,uVar6,0);
    if ((uVar1 & 1) == 0) goto LAB_00c53a34;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar3 == 0) || (lVar3 = Level__get_gui(lVar3,0), lVar3 == 0)) goto LAB_00c53c40;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___);
    uVar1 = 1;
    lVar3 = lStack_38;
  }
LAB_00c53b8c:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (((uVar1 & 1) == 0) && (*(char *)((long)__this + 0x30) != '\0')) {
      auVar7 = *(undefined1 (*) [16])((long)__this + 0x5c);
    }
    else {
      auVar7 = NEON_fmov(0x3f800000,4);
    }
    if (lVar3 == 0) {
LAB_00c53c40:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    func_0x016decc0(&uStack_80,lVar3 + 100,0x48);
    if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_e0 = auVar7._0_8_;
    uStack_d8 = auVar7._8_8_;
    func_0x016decc0(auStack_d0,&uStack_80,0x48);
    UnityEngine_UI_Selectable__set_colors(lVar3,&uStack_e0,0);
  }
  return;
}


// ==== public void FJJJEMJAMGO(GameObject MIPKEALMBHI) { }   @0xb558ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FJJJEMJAMGO(void *__this,void *MIPKEALMBHI)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *CIDKMFLFJEJ;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 extraout_s0;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
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
  uVar2 = UnityEngine_Object__op_Equality(MIPKEALMBHI,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55ff4;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x150), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c55ff4;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(__this);
  uVar8 = _Str_SetButton__;
  if (MIPKEALMBHI == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(long *)MIPKEALMBHI + 0x168))
                      (MIPKEALMBHI,*(undefined8 *)(*(long *)MIPKEALMBHI + 0x170));
  }
  uVar1 = _Str___last__;
  plVar4 = *(long **)((long)__this + 0x38);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(uVar8,uVar3,uVar1,uVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  *(void **)((long)__this + 0x38) = MIPKEALMBHI;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar6 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar6,MIPKEALMBHI,0);
  uVar9 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)__this + 0x58) = uVar9;
  if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)__this + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar6 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar6,0);
        *(long *)((long)__this + 0x20) = lVar6;
        if ((lVar6 == 0) || (*(void **)(lVar6 + 0x10) = MIPKEALMBHI, MIPKEALMBHI == (void *)0x0))
        goto LAB_00c55ff4;
        uVar8 = UnityEngine_Object__get_name(MIPKEALMBHI,0);
        uVar2 = GamePadController__EODAOKKOJLL(uVar8,uVar8);
        lVar6 = *(long *)((long)__this + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar7 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
        if ((uVar2 & 1) != 0) {
          if (lVar7 == 0) goto LAB_00c55ff4;
          lVar7 = UnityEngine_Transform__get_parent(lVar7,0);
        }
        *(long *)(lVar6 + 0x20) = lVar7;
        lVar6 = *(long *)((long)__this + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar6 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar6 + 0x18) = plStack_a8;
        lVar6 = *(long *)((long)__this + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar6 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar6 + 0x28) = plStack_a8;
        lVar6 = *(long *)((long)__this + 0x20);
        if (((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) ||
           (lVar7 = UnityEngine_Object__get_name(*(long *)(lVar6 + 0x20),0), lVar7 == 0))
        goto LAB_00c55ff4;
        uVar2 = System_String__Contains(lVar7,_Str_lvl_,0);
        uVar14 = 0x3f800000;
        uVar12 = 0x3f800000;
        uVar9 = 0x3f800000;
        if ((uVar2 & 1) == 0) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar7 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar7 == 0))
          goto LAB_00c55ff4;
          uVar9 = UnityEngine_Transform__get_localScale(lVar7,0);
        }
        *(undefined4 *)(lVar6 + 0x30) = uVar9;
        *(undefined4 *)(lVar6 + 0x34) = uVar12;
        *(undefined4 *)(lVar6 + 0x38) = uVar14;
        lVar6 = *(long *)((long)__this + 0x20);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar8 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar6 + 0x28),0);
        *(undefined4 *)(lVar6 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar6 + 0x40) = uVar12;
        uVar2 = GamePadController__PJOJJBEIFAE(uVar8,*(undefined8 *)((long)__this + 0x20));
        if ((uVar2 & 1) == 0) {
          lVar6 = *(long *)((long)__this + 0x20);
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar9 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x28),0);
          *(undefined4 *)(lVar6 + 0x44) = uVar9;
          *(undefined4 *)(lVar6 + 0x48) = uVar12;
        }
        if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)((long)__this + 0x28),*(undefined8 *)((long)__this + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar6 = lStack_78;
    } while (lStack_78 == 0);
    uVar8 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar8,MIPKEALMBHI,0);
  } while ((uVar2 & 1) == 0);
  *(long *)((long)__this + 0x20) = lVar6;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)((long)__this + 0x20) == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28);
  if (lVar6 == 0) goto LAB_00c55ff4;
  fVar10 = (float)UnityEngine_RectTransform__get_pivot(lVar6,0);
  fVar13 = 0.5;
  if (fVar10 == 0.5) {
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar6 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar6,0);
    if (fVar13 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar6 == 0)) goto LAB_00c55ff4;
    fVar10 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar6,0);
    lVar6 = *(long *)((long)__this + 0x20);
    if ((lVar6 == 0) || (lVar7 = *(long *)(lVar6 + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    fVar15 = *(float *)(lVar6 + 0x44);
    fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar7,0);
    lVar6 = *(long *)((long)__this + 0x20);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar17 = *(float *)(lVar6 + 0x3c);
    fVar19 = *(float *)(lVar6 + 0x30);
    fVar18 = *(float *)(lVar6 + 0x44);
    fVar16 = *(float *)(lVar6 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar6 + 0x28),0);
    lVar6 = *(long *)((long)__this + 0x20);
    if (lVar6 == 0) goto LAB_00c55ff4;
    fVar11 = ABS(fVar17 + -0.5);
    fVar17 = fVar13 * fVar11;
    if (fVar18 < 0.0) {
      fVar17 = -(fVar13 * fVar11);
    }
    fVar18 = ABS(*(float *)(lVar6 + 0x40) + -0.5);
    fVar13 = fVar10 * fVar18;
    if (*(float *)(lVar6 + 0x48) < 0.0) {
      fVar13 = -(fVar10 * fVar18);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar15 + ABS(fVar19) * fVar17,fVar16 + ABS(*(float *)(lVar6 + 0x34)) * fVar13,lVar7,0
              );
  }
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x10), lVar6 != 0)) {
    uVar8 = UnityEngine_Object__get_name(lVar6,0);
    uVar2 = GamePadController__EODAOKKOJLL(uVar8,uVar8);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar6 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar6,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar2 & 1) != 0) {
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


// ==== private void DJHKBCNIBNG() { }   @0xb5647c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__DJHKBCNIBNG(void *__this)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam00000000019171a9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171a9 = 1;
  }
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar3 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)((long)__this + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (*(long *)((long)__this + 0x28),&plStack_78,
               _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    uStack_58 = uStack_70;
    plStack_60 = plStack_78;
    uStack_50 = uStack_68;
    do {
      do {
        uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                          (&plStack_60,
                           _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                          );
        if ((uVar2 & 1) == 0) goto LAB_00c566a4;
        func_0x00b947ec(&plStack_60,&plStack_78,
                        _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                       );
        plVar1 = plStack_78;
      } while (plStack_78 == (long *)0x0);
      lVar4 = plStack_78[2];
      uVar3 = *(undefined8 *)((long)__this + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Equality(lVar4,uVar3,0);
    } while ((uVar2 & 1) == 0);
    if (*(long *)((long)__this + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_Object__get_name(*(long *)((long)__this + 0x38),0);
    uVar2 = GamePadController__EODAOKKOJLL(uVar3,uVar3);
    if ((uVar2 & 1) != 0) {
      if (*(long *)((long)__this + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar4 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x38),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar4 = UnityEngine_Transform__get_parent(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&plStack_78,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(plStack_78,0,0);
      if ((uVar2 & 1) != 0) {
        if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        (**(code **)(*plStack_78 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x5c),*(undefined4 *)((long)__this + 0x60),
                   *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                   plStack_78,*(undefined8 *)(*plStack_78 + 0x2b0));
      }
    }
    GamePadController__HFPFJNKNJND(__this);
    if (plVar1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__set_localScale
              ((int)plVar1[6],*(undefined4 *)((long)plVar1 + 0x34),(int)plVar1[7],plVar1[4],0);
    if (plVar1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_RectTransform__set_pivot
                      (*(undefined4 *)((long)plVar1 + 0x3c),(int)plVar1[8],plVar1[5],0);
    uVar2 = GamePadController__PJOJJBEIFAE(uVar3,plVar1);
    if ((uVar2 & 1) == 0) {
      if (plVar1[5] == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)((long)plVar1 + 0x44),(int)plVar1[9],plVar1[5],0);
    }
LAB_00c566a4:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
              (&plStack_60,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
              );
  }
  return;
}


// ==== public void .ctor() { }   @0xb56eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171ae & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_MLCNINCNANA__TypeInfo);
    bRam00000000019171ae = 1;
  }
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_MLCNINCNANA__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_MLCNINCNANA___ctor__);
  *(undefined8 *)((long)__this + 0x28) = uVar1;
  *(undefined8 *)((long)__this + 100) = 0x3f8000003f400000;
  *(undefined8 *)((long)__this + 0x5c) = 0x3f4000003f400000;
  *(undefined8 *)((long)__this + 0x74) = 0x3f8000003f59db23;
  *(undefined8 *)((long)__this + 0x6c) = 0x3f6be76d3f79f55a;
  *(undefined8 *)((long)__this + 0x84) = 0x3f8000003f228f5c;
  *(undefined8 *)((long)__this + 0x7c) = 0x3f30a3d73f39b3d0;
  *(undefined2 *)((long)__this + 0x8c) = 0x101;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



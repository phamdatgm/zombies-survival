// ==== private bool ANCEANGJPLH(GameObject AOHDLBGLGCF) { }   @0xb52e94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__ANCEANGJPLH(void *__this,void *AOHDLBGLGCF)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  long *aplStack_90 [10];
  undefined4 uStack_34;
  
  if ((bRam000000000191719d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_GraphicRaycaster___);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_RaycastResult__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    func_0x00a67900(&Str_CheckForOvelapsByBackground_Hits__);
    bRam000000000191719d = 1;
  }
  uStack_34 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c531f4;
    uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x1b0), lVar5 == 0)) goto LAB_00c531f4;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
LAB_00c531f4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar5,aplStack_90,_Method_UnityEngine_Component_GetComponent_GraphicRaycaster___)
        ;
        plVar1 = aplStack_90[0];
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
        lVar5 = func_0x00a67b44(_UnityEngine_EventSystems_PointerEventData_TypeInfo);
        UnityEngine_EventSystems_PointerEventData___ctor(lVar5,uVar6,0);
        if (((AOHDLBGLGCF == (void *)0x0) ||
            (lVar4 = UnityEngine_GameObject__get_transform(AOHDLBGLGCF,0), lVar4 == 0)) ||
           (uVar7 = UnityEngine_Transform__get_position(lVar4,0), lVar5 == 0)) goto LAB_00c531f4;
        *(undefined4 *)(lVar5 + 0x104) = uVar7;
        *(undefined4 *)(lVar5 + 0x108) = in_s1;
        lVar4 = func_0x00a67b44(_System_Collections_Generic_List_RaycastResult__TypeInfo);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
                  (lVar4,_Method_System_Collections_Generic_List_RaycastResult___ctor__);
        if (plVar1 == (long *)0x0) goto LAB_00c531f4;
        (**(code **)(*plVar1 + 0x248))(plVar1,lVar5,lVar4,*(undefined8 *)(*plVar1 + 0x250));
        if (lVar4 == 0) goto LAB_00c531f4;
        uStack_34 = *(undefined4 *)(lVar4 + 0x18);
        uVar6 = System_Int32__ToString(&uStack_34,0);
        uVar6 = System_String__Concat(_Str_CheckForOvelapsByBackground_Hits__,uVar6,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar6,0,0);
        if (0 < *(int *)(lVar4 + 0x18)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                    (lVar4,0,aplStack_90,
                     _Method_System_Collections_Generic_List_RaycastResult__get_Item__);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c531f4;
          uVar6 = *(undefined8 *)(lVar5 + 0x1b0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          bVar2 = UnityEngine_Object__op_Equality(aplStack_90[0],uVar6,0);
          goto LAB_00c531d8;
        }
      }
    }
  }
  bVar2 = 0;
LAB_00c531d8:
  return (bool)(bVar2 & 1);
}


// ==== private static void .cctor() { }   @0xb56878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController___cctor(void)

{
  if ((bRam00000000019171a2 & 1) == 0) {
    func_0x00a67900(&GamePadController_TypeInfo);
    func_0x00a67900(&Str_B);
    func_0x00a67900(&Str_A);
    bRam00000000019171a2 = 1;
  }
  **(undefined8 **)(_GamePadController_TypeInfo + 0xb8) = _Str_A;
  *(undefined8 *)(*(long *)(_GamePadController_TypeInfo + 0xb8) + 8) = _Str_B;
  return;
}


// ==== public void BBNJMJMLBCA() { }   @0xb56b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__BBNJMJMLBCA(void *__this)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  void *__this_00;
  undefined8 uVar9;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171a7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SaveLastGarageButton__);
    bRam00000000019171a7 = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar5 == 0) {
LAB_00c56c94:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar5 == 0) goto LAB_00c56c94;
  plVar7 = *(long **)(lVar5 + 0x40);
  *(long **)((long)__this + 0x48) = plVar7;
  uVar9 = _Str_SaveLastGarageButton__;
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  }
  plVar7 = (long *)System_String__Concat(uVar9,uVar8,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(__this_00);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
  lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  if (lVar5 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar9,0,0);
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
  plVar7 = *(long **)(lVar5 + 0x1e8);
  if ((plVar7 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar5 + 0x1e8) == 0) goto LAB_00c16768;
    uVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x1e8),0);
    if ((*(long *)(lVar5 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar8,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar5 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar7 = *(long **)(lVar5 + 0x1e8);
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar5 + 0x20) = uVar8, uVar1 != 1 &&
         (*(undefined8 *)(lVar5 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar5 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar5 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar8 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar8 = System_String__Format(_Str__0_f2_,uVar8,0);
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar5 + 0x40) = uVar8, uVar1 != 5)) &&
         (*(undefined8 *)(lVar5 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar5 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar5,0);
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x5b0));
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


// ==== public void OJPBPDDLDGB() { }   @0xb56d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__OJPBPDDLDGB(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam00000000019171ac & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ac = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x560), lVar4 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (iVar1 == iVar5) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar6 = *(long *)(lVar4 + (long)iVar5 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_00c56ea8;
          if ((*(char *)(lVar6 + 0x70) == '\0') && (*(char *)(lVar6 + 0x68) != '\0')) {
            return;
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
      }
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
        *(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x48) = 0;
        return;
      }
    }
  }
LAB_00c56ea8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KCAHLEAKNNK() { }   @0xb48bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__KCAHLEAKNNK(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *__this_00;
  int iVar9;
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
  long in_stack_ffffffffffffffb8;
  
  if ((bRam00000000019171b1 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnWindowSwitched__);
    func_0x00a67900(&Str_achievements_button);
    func_0x00a67900(&Str_encyclopedia_button);
    bRam00000000019171b1 = 1;
  }
  if (*(char *)((long)__this + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c49438;
  uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_OnWindowSwitched__;
  if ((uVar3 & 1) != 0) {
    plVar4 = *(long **)((long)__this + 0x50);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar11 = System_String__Concat(uVar11,uVar5,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar11,0,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c49438;
  uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar3 & 1) == 0) goto LAB_00c49274;
  lVar6 = GamePadController__KNABINMBNJC();
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
  goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar10 + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  if ((uVar3 & 1) != 0) {
    GamePadController__FNHCGKNKDNJ(__this,0);
    goto LAB_00c48f2c;
  }
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
  goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar10 + 0x60);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  lVar10 = *(long *)(_GUIWindow_TypeInfo + 0xb8);
  if ((uVar3 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar10 + 0x10);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar10 == 0))
    goto LAB_00c49438;
    uVar5 = *(undefined8 *)(lVar10 + 0x78);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar6 == 0) goto LAB_00c49438;
        uVar11 = UnityEngine_Object__get_name(lVar6,0);
        uVar3 = System_String__op_Equality(uVar11,_Str_encyclopedia_button,0);
        if ((uVar3 & 1) == 0) {
          uVar11 = UnityEngine_Object__get_name(lVar6,0);
          uVar3 = System_String__op_Equality(uVar11,_Str_achievements_button,0);
          if ((uVar3 & 1) == 0) goto LAB_00c48f2c;
        }
        lVar10 = *(long *)(_GUIWindow_TypeInfo + 0xb8);
        goto LAB_00c48e4c;
      }
    }
  }
  else {
LAB_00c48e4c:
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00c49438;
    *(long *)(*(long *)(lVar10 + 0x10) + 0x38) = lVar6;
  }
LAB_00c48f2c:
  uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar6 + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  if ((uVar3 & 1) == 0) {
LAB_00c49050:
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c49438;
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
    if ((uVar3 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar3 & 1) != 0) {
        uVar11 = *(undefined8 *)((long)__this + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) != 0) {
          GamePadController__FJJJEMJAMGO(__this,*(undefined8 *)((long)__this + 0x48));
          *(undefined8 *)((long)__this + 0x48) = 0;
          return;
        }
      }
    }
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c49438;
    uVar11 = *(undefined8 *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) != 0) {
      if (**(long **)(_GUIWindow_TypeInfo + 0xb8) != 0) {
        GamePadController__FJJJEMJAMGO
                  (__this,*(undefined8 *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x38));
        if (**(long **)(_GUIWindow_TypeInfo + 0xb8) != 0) {
          *(undefined8 *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x38) = 0;
          return;
        }
      }
      goto LAB_00c49438;
    }
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c49050;
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
    if (lVar6 == 0) goto LAB_00c49438;
    lVar6 = DAFNMLEKHAD__DCOOPMCEMNE(lVar6,0);
    if (lVar6 == 0) {
      lVar10 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(lVar6 + 0x10);
      if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar10 = Level__FHMGLDDPEDJ(uVar12,0);
    }
    if (*(long *)((long)__this + 0x50) != 0) {
      uVar11 = Level__get_gui(*(long *)((long)__this + 0x50),0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00c491d0;
      lVar10 = *(long *)((long)__this + 0x50);
      if (lVar10 == 0) goto LAB_00c49438;
      goto LAB_00c49404;
    }
LAB_00c491d0:
    if ((lVar6 != 0) && (lVar10 != 0)) {
      uVar11 = Level__get_gui(lVar10,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar3 & 1) != 0) {
        iVar1 = *(int *)(lVar6 + 0x10);
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar9 = *(int *)(*(long *)(_Level_TypeInfo + 0xb8) + 4);
        if (iVar9 <= iVar1) {
          iVar1 = *(int *)(lVar6 + 0x10);
          if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar9 = *(int *)(*(long *)(_Level_TypeInfo + 0xb8) + 4);
          }
          if ((iVar1 != iVar9) || (uVar3 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0), (uVar3 & 1) != 0))
          goto LAB_00c49274;
        }
LAB_00c49404:
        lVar6 = Level__get_gui(lVar10,0);
        if (lVar6 == 0) goto LAB_00c49438;
        plVar4 = (long *)UnityEngine_Component__get_gameObject(lVar6,0);
        if ((bRam00000000019171a4 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
          func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__)
          ;
          func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                         );
          func_0x00a67900(&
                          Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                         );
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
        uVar3 = UnityEngine_Object__op_Equality(plVar4,0,0);
        if ((uVar3 & 1) != 0) {
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
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
              (lVar6 = *(long *)(lVar6 + 0x150), lVar6 == 0)) ||
             (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
          goto LAB_00c55ff4;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
          if ((uVar3 & 1) != 0) {
            return;
          }
        }
        GamePadController__DJHKBCNIBNG(__this);
        uVar11 = _Str_SetButton__;
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        }
        uVar2 = _Str___last__;
        plVar7 = *(long **)((long)__this + 0x38);
        if (plVar7 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar11 = System_String__Concat(uVar11,uVar5,uVar2,uVar8,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
        *(long **)((long)__this + 0x38) = plVar4;
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
        if (lVar6 == 0) goto LAB_00c55ff4;
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar6,plVar4,0);
        uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        *(undefined4 *)((long)__this + 0x58) = uVar12;
        if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (*(long *)((long)__this + 0x28),&plStack_a8,
                   _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
        uStack_88 = uStack_a0;
        plStack_90 = plStack_a8;
        uStack_80 = uStack_98;
        do {
          do {
            uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                              (&plStack_90,
                               _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                              );
            if ((uVar3 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
              __this_00 = (void *)func_0x00a67b44(_MLCNINCNANA_TypeInfo);
              MLCNINCNANA___ctor(__this_00);
              *(void **)((long)__this + 0x20) = __this_00;
              if ((__this_00 == (void *)0x0) ||
                 (*(long **)((long)__this_00 + 0x10) = plVar4, plVar4 == (long *)0x0))
              goto LAB_00c55ff4;
              uVar11 = UnityEngine_Object__get_name(plVar4,0);
              uVar3 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
              lVar6 = *(long *)((long)__this + 0x20);
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
              lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
              if ((uVar3 & 1) != 0) {
                if (lVar10 == 0) goto LAB_00c55ff4;
                lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
              }
              *(long *)(lVar6 + 0x20) = lVar10;
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
                 (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar6 + 0x20),0), lVar10 == 0))
              goto LAB_00c55ff4;
              uVar3 = System_String__Contains(lVar10,_Str_lvl_,0);
              uVar17 = 0x3f800000;
              uVar15 = 0x3f800000;
              uVar12 = 0x3f800000;
              if ((uVar3 & 1) == 0) {
                if ((*(long *)((long)__this + 0x20) == 0) ||
                   (lVar10 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar10 == 0))
                goto LAB_00c55ff4;
                uVar12 = UnityEngine_Transform__get_localScale(lVar10,0);
              }
              *(undefined4 *)(lVar6 + 0x30) = uVar12;
              *(undefined4 *)(lVar6 + 0x34) = uVar15;
              *(undefined4 *)(lVar6 + 0x38) = uVar17;
              lVar6 = *(long *)((long)__this + 0x20);
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
              uVar11 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar6 + 0x28),0);
              *(undefined4 *)(lVar6 + 0x3c) = extraout_s0;
              *(undefined4 *)(lVar6 + 0x40) = uVar15;
              uVar3 = GamePadController__PJOJJBEIFAE(uVar11,*(undefined8 *)((long)__this + 0x20));
              if ((uVar3 & 1) == 0) {
                lVar6 = *(long *)((long)__this + 0x20);
                if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
                uVar12 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x28),0);
                *(undefined4 *)(lVar6 + 0x44) = uVar12;
                *(undefined4 *)(lVar6 + 0x48) = uVar15;
              }
              if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c55ff4;
              func_0x00b7fe44(*(long *)((long)__this + 0x28),*(undefined8 *)((long)__this + 0x20),
                              _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
              goto LAB_00c55e20;
            }
            func_0x00b947ec(&plStack_90,&lStack_78,
                            _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                           );
            lVar6 = lStack_78;
          } while (lStack_78 == 0);
          uVar11 = *(undefined8 *)(lStack_78 + 0x10);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar11,plVar4,0);
        } while ((uVar3 & 1) == 0);
        *(long *)((long)__this + 0x20) = lVar6;
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
        if (*(long *)((long)__this + 0x20) == 0) {
          return;
        }
        lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28);
        if (lVar6 == 0) goto LAB_00c55ff4;
        fVar13 = (float)UnityEngine_RectTransform__get_pivot(lVar6,0);
        fVar16 = 0.5;
        if (fVar13 == 0.5) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar6 == 0))
          goto LAB_00c55ff4;
          UnityEngine_RectTransform__get_pivot(lVar6,0);
          if (fVar16 != 0.5) goto LAB_00c55e68;
        }
        else {
LAB_00c55e68:
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar6 == 0))
          goto LAB_00c55ff4;
          fVar13 = 0.5;
          UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar6,0);
          lVar6 = *(long *)((long)__this + 0x20);
          if ((lVar6 == 0) || (lVar10 = *(long *)(lVar6 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
          fVar18 = *(float *)(lVar6 + 0x44);
          fVar16 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
          lVar6 = *(long *)((long)__this + 0x20);
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
          fVar20 = *(float *)(lVar6 + 0x3c);
          fVar22 = *(float *)(lVar6 + 0x30);
          fVar21 = *(float *)(lVar6 + 0x44);
          fVar19 = *(float *)(lVar6 + 0x48);
          UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar6 + 0x28),0);
          lVar6 = *(long *)((long)__this + 0x20);
          if (lVar6 == 0) goto LAB_00c55ff4;
          fVar14 = ABS(fVar20 + -0.5);
          fVar20 = fVar16 * fVar14;
          if (fVar21 < 0.0) {
            fVar20 = -(fVar16 * fVar14);
          }
          fVar21 = ABS(*(float *)(lVar6 + 0x40) + -0.5);
          fVar16 = fVar13 * fVar21;
          if (*(float *)(lVar6 + 0x48) < 0.0) {
            fVar16 = -(fVar13 * fVar21);
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (fVar18 + ABS(fVar22) * fVar20,fVar19 + ABS(*(float *)(lVar6 + 0x34)) * fVar16,
                     lVar10,0);
        }
        if ((*(long *)((long)__this + 0x20) != 0) &&
           (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x10), lVar6 != 0)) {
          uVar11 = UnityEngine_Object__get_name(lVar6,0);
          uVar3 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
          if ((uVar3 & 1) != 0) {
            if ((*(long *)((long)__this + 0x20) == 0) ||
               (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x20), lVar6 == 0))
            goto LAB_00c55ff4;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar6,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
            if ((uVar3 & 1) != 0) {
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
    }
  }
LAB_00c49274:
  uVar11 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c49334:
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c49438;
    uVar11 = *(undefined8 *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
    goto LAB_00c49438;
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(_GUIWindow_TypeInfo + 0xb8) + 0x30), lVar6 == 0)) ||
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar6,&stack0xffffffffffffffb8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___),
       in_stack_ffffffffffffffb8 == 0)) goto LAB_00c49438;
    if (*(char *)(in_stack_ffffffffffffffb8 + 0xd8) == '\0') {
      return;
    }
    lVar6 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
  }
  else {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c49438;
    uVar11 = *(undefined8 *)(lVar6 + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c49334;
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) ||
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar6,&stack0xffffffffffffffb8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___),
       in_stack_ffffffffffffffb8 == 0)) goto LAB_00c49438;
    if (*(char *)(in_stack_ffffffffffffffb8 + 0xd8) == '\0') goto LAB_00c49334;
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  }
  if (lVar6 != 0) {
    GamePadController__FJJJEMJAMGO(__this,*(undefined8 *)(lVar6 + 0x30));
    return;
  }
LAB_00c49438:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== public void FKBCEHJHEBP() { }   @0xb531f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FKBCEHJHEBP(void *__this)

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
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
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
  uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c5371c;
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
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
      uVar16 = 0x3f800000;
      uVar17 = 0x3f800000;
      uVar18 = 0x3f800000;
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = *(undefined4 *)((long)__this + 0x5c);
      uVar18 = *(undefined4 *)((long)__this + 0x60);
      uVar17 = *(undefined4 *)((long)__this + 100);
      uVar16 = *(undefined4 *)((long)__this + 0x68);
    }
    uStack_98 = CONCAT44(uVar18,uVar19);
    uStack_90 = CONCAT44(uVar16,uVar17);
    uVar13 = func_0x00c57430(&uStack_98,0,0,0);
    uVar13 = System_String__Concat(_Str_color__,uVar13,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar13,0,0);
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
      uVar15 = 0;
      do {
        if (uVar4 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar14 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_00c5371c;
        if (*(int *)(lVar14 + 0x28) == 0) {
          uVar13 = UnityEngine_Object__get_name(lVar14,0);
          uVar8 = System_String__op_Inequality(uVar13,_Str_back_button,0);
          if ((uVar8 & 1) == 0) goto LAB_00c53524;
        }
        else {
LAB_00c53524:
          uVar13 = UnityEngine_Object__get_name(lVar14,0);
          uVar8 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
          if ((uVar8 & 1) == 0) {
            func_0x016decc0(&uStack_e0,lVar14 + 100,0x48);
            if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uStack_138 = uVar19;
            uStack_134 = uVar18;
            uStack_130 = uVar17;
            uStack_12c = uVar16;
            func_0x016decc0(auStack_128,&uStack_e0,0x48);
            UnityEngine_UI_Selectable__set_colors(lVar14,&uStack_138,0);
          }
          else {
            lVar14 = UnityEngine_Component__get_transform(lVar14,0);
            if ((lVar14 == 0) || (lVar14 = UnityEngine_Transform__get_parent(lVar14,0), lVar14 == 0)
               ) goto LAB_00c5371c;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar14,&plStack_88,_Method_UnityEngine_Component_GetComponent_Image___);
            plVar6 = plStack_88;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Inequality(plVar6,0,0);
            if ((uVar8 & 1) != 0) {
              if (plVar6 == (long *)0x0) goto LAB_00c5371c;
              bVar7 = *(char *)((long)__this + 0x30) != '\0';
              lVar14 = 0x6c;
              if (bVar7) {
                lVar14 = 0x7c;
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
                        (*(undefined4 *)((long)__this + lVar14),
                         *(undefined4 *)((long)__this + lVar1),*(undefined4 *)((long)__this + lVar2)
                         ,*(undefined4 *)((long)__this + lVar3),plVar6,
                         *(undefined8 *)(*plVar6 + 0x2b0));
            }
          }
        }
        uVar4 = *(uint *)(lVar9 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar4);
    }
  }
  GamePadController__HFPFJNKNJND(__this);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = System_Boolean__ToString((long)__this + 0x30,0);
  uVar5 = _Str_ChangeButtonSelectedColor__IsGamePadInpu;
  uVar13 = _Str___gui_object__;
  if (plVar10 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  uVar13 = System_String__Concat(uVar5,uVar11,uVar13,uVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  return;
}


// ==== public void KBLMMLBPPKO() { }   @0xb567b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__KBLMMLBPPKO(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000019171a3 & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171a3 = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar3,0,0);
  }
  *(undefined8 *)((long)__this + 0x20) = 0;
  return;
}


// ==== public void AGMBMNONINL() { }   @0xb56c98

/* WARNING: Possible PIC construction at 0x00c76cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00c76cf8) */
/* WARNING: Removing unreachable block (ram,0x00c76e58) */
/* WARNING: Removing unreachable block (ram,0x00c76cfc) */
/* WARNING: Removing unreachable block (ram,0x00c76d00) */
/* WARNING: Removing unreachable block (ram,0x00c76e8c) */
/* WARNING: Removing unreachable block (ram,0x00c76ea0) */
/* WARNING: Removing unreachable block (ram,0x00c76d04) */
/* WARNING: Removing unreachable block (ram,0x00c76ee8) */
/* WARNING: Removing unreachable block (ram,0x00c76f18) */
/* WARNING: Removing unreachable block (ram,0x00c76f1c) */
/* WARNING: Removing unreachable block (ram,0x00c76d14) */
/* WARNING: Removing unreachable block (ram,0x00c76d1c) */
/* WARNING: Removing unreachable block (ram,0x00c76d54) */
/* WARNING: Removing unreachable block (ram,0x00c76da4) */
/* WARNING: Removing unreachable block (ram,0x00c76da8) */
/* WARNING: Removing unreachable block (ram,0x00c76dd8) */
/* WARNING: Removing unreachable block (ram,0x00c76de0) */
/* WARNING: Removing unreachable block (ram,0x00c76e24) */
/* WARNING: Removing unreachable block (ram,0x00c76f24) */
/* WARNING: Removing unreachable block (ram,0x00c76f44) */
/* WARNING: Removing unreachable block (ram,0x00c76f4c) */
/* WARNING: Removing unreachable block (ram,0x00c76f98) */
/* WARNING: Removing unreachable block (ram,0x00c76f50) */
/* WARNING: Removing unreachable block (ram,0x00c76fb8) */
/* WARNING: Removing unreachable block (ram,0x00c76fd4) */
/* WARNING: Removing unreachable block (ram,0x00c77010) */
/* WARNING: Removing unreachable block (ram,0x00c77018) */
/* WARNING: Removing unreachable block (ram,0x00c77040) */
/* WARNING: Removing unreachable block (ram,0x00c77098) */
/* WARNING: Removing unreachable block (ram,0x00c770a0) */
/* WARNING: Removing unreachable block (ram,0x00c770cc) */
/* WARNING: Removing unreachable block (ram,0x00c77128) */
/* WARNING: Removing unreachable block (ram,0x00c77138) */
/* WARNING: Removing unreachable block (ram,0x00c770a4) */
/* WARNING: Removing unreachable block (ram,0x00c77390) */
/* WARNING: Removing unreachable block (ram,0x00c773c0) */
/* WARNING: Removing unreachable block (ram,0x00c773c8) */
/* WARNING: Removing unreachable block (ram,0x00c774ec) */
/* WARNING: Removing unreachable block (ram,0x00c773cc) */
/* WARNING: Removing unreachable block (ram,0x00c77524) */
/* WARNING: Removing unreachable block (ram,0x00c77538) */
/* WARNING: Removing unreachable block (ram,0x00c773d4) */
/* WARNING: Removing unreachable block (ram,0x00c773e4) */
/* WARNING: Removing unreachable block (ram,0x00c77470) */
/* WARNING: Removing unreachable block (ram,0x00c77478) */
/* WARNING: Removing unreachable block (ram,0x00c773e8) */
/* WARNING: Removing unreachable block (ram,0x00c774b8) */
/* WARNING: Removing unreachable block (ram,0x00c7751c) */
/* WARNING: Removing unreachable block (ram,0x00c7757c) */
/* WARNING: Removing unreachable block (ram,0x00c773f8) */
/* WARNING: Removing unreachable block (ram,0x00c774a4) */
/* WARNING: Removing unreachable block (ram,0x00c77400) */
/* WARNING: Removing unreachable block (ram,0x00c77410) */
/* WARNING: Removing unreachable block (ram,0x00c77414) */
/* WARNING: Removing unreachable block (ram,0x00c7741c) */
/* WARNING: Removing unreachable block (ram,0x00c77420) */
/* WARNING: Removing unreachable block (ram,0x00c77430) */
/* WARNING: Removing unreachable block (ram,0x00c77434) */
/* WARNING: Removing unreachable block (ram,0x00c77584) */
/* WARNING: Removing unreachable block (ram,0x00c77440) */
/* WARNING: Removing unreachable block (ram,0x00ccc6ac) */
/* WARNING: Removing unreachable block (ram,0x00ccc6d8) */
/* WARNING: Removing unreachable block (ram,0x00ccc6f0) */
/* WARNING: Removing unreachable block (ram,0x00ccc704) */
/* WARNING: Removing unreachable block (ram,0x00ccc718) */
/* WARNING: Removing unreachable block (ram,0x00ccc71c) */
/* WARNING: Removing unreachable block (ram,0x00ccc724) */
/* WARNING: Removing unreachable block (ram,0x00ccc728) */
/* WARNING: Removing unreachable block (ram,0x00c7701c) */
/* WARNING: Removing unreachable block (ram,0x00c771f4) */
/* WARNING: Removing unreachable block (ram,0x00c7721c) */
/* WARNING: Removing unreachable block (ram,0x00c77224) */
/* WARNING: Removing unreachable block (ram,0x00c772c0) */
/* WARNING: Removing unreachable block (ram,0x00c77228) */
/* WARNING: Removing unreachable block (ram,0x00c772f4) */
/* WARNING: Removing unreachable block (ram,0x00c77308) */
/* WARNING: Removing unreachable block (ram,0x00c77230) */
/* WARNING: Removing unreachable block (ram,0x00c77350) */
/* WARNING: Removing unreachable block (ram,0x00c77380) */
/* WARNING: Removing unreachable block (ram,0x00c77384) */
/* WARNING: Removing unreachable block (ram,0x00c77240) */
/* WARNING: Removing unreachable block (ram,0x00c772b0) */
/* WARNING: Removing unreachable block (ram,0x00c77248) */
/* WARNING: Removing unreachable block (ram,0x00c77258) */
/* WARNING: Removing unreachable block (ram,0x00c7725c) */
/* WARNING: Removing unreachable block (ram,0x00c77264) */
/* WARNING: Removing unreachable block (ram,0x00c77268) */
/* WARNING: Removing unreachable block (ram,0x00c77278) */
/* WARNING: Removing unreachable block (ram,0x00c7727c) */
/* WARNING: Removing unreachable block (ram,0x00c7738c) */
/* WARNING: Removing unreachable block (ram,0x00c77288) */
/* WARNING: Removing unreachable block (ram,0x00cca6e0) */
/* WARNING: Removing unreachable block (ram,0x00cca708) */
/* WARNING: Removing unreachable block (ram,0x00cca71c) */
/* WARNING: Removing unreachable block (ram,0x00cca730) */
/* WARNING: Removing unreachable block (ram,0x00cca734) */
/* WARNING: Removing unreachable block (ram,0x00cca750) */
/* WARNING: Removing unreachable block (ram,0x00cca75c) */
/* WARNING: Removing unreachable block (ram,0x00cca81c) */
/* WARNING: Removing unreachable block (ram,0x00cca760) */
/* WARNING: Removing unreachable block (ram,0x00cca76c) */
/* WARNING: Removing unreachable block (ram,0x00cca774) */
/* WARNING: Removing unreachable block (ram,0x00cca79c) */
/* WARNING: Removing unreachable block (ram,0x00cca780) */
/* WARNING: Removing unreachable block (ram,0x00cca78c) */
/* WARNING: Removing unreachable block (ram,0x00cca7a8) */
/* WARNING: Removing unreachable block (ram,0x00cca7d8) */
/* WARNING: Removing unreachable block (ram,0x00cca7dc) */
/* WARNING: Removing unreachable block (ram,0x00cca7e4) */
/* WARNING: Removing unreachable block (ram,0x00cca7e8) */
/* WARNING: Removing unreachable block (ram,0x00c76f54) */
/* WARNING: Removing unreachable block (ram,0x00c76f64) */
/* WARNING: Removing unreachable block (ram,0x00c76f68) */
/* WARNING: Removing unreachable block (ram,0x00c76f70) */
/* WARNING: Removing unreachable block (ram,0x00c76f74) */
/* WARNING: Removing unreachable block (ram,0x00ccab7c) */
/* WARNING: Removing unreachable block (ram,0x00ccaba8) */
/* WARNING: Removing unreachable block (ram,0x00ccabb4) */
/* WARNING: Removing unreachable block (ram,0x00ccabc4) */
/* WARNING: Removing unreachable block (ram,0x00ccabc8) */
/* WARNING: Removing unreachable block (ram,0x00ccabd0) */
/* WARNING: Removing unreachable block (ram,0x00ccabd4) */
/* WARNING: Removing unreachable block (ram,0x00ccabe0) */
/* WARNING: Removing unreachable block (ram,0x00ccabe4) */
/* WARNING: Removing unreachable block (ram,0x00c76e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__AGMBMNONINL(void *__this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar5;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 in_x4;
  undefined8 unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  int iVar24;
  ulong unaff_x21;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar28;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  code *pcVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if ((bRam00000000019171a8 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Clear__);
    bRam00000000019171a8 = 1;
  }
  lVar28 = _Method_System_Collections_Generic_List_MLCNINCNANA__Clear__;
  lVar23 = *(long *)((long)__this + 0x28);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  uVar9 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0xc0));
  if ((uVar9 & 1) == 0) {
    *(undefined4 *)(lVar23 + 0x18) = 0;
    return;
  }
  iVar6 = *(int *)(lVar23 + 0x18);
  *(undefined4 *)(lVar23 + 0x18) = 0;
  if (iVar6 < 1) {
    return;
  }
  puVar10 = *(undefined8 **)(lVar23 + 0x10);
  uVar9 = 0;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if (puVar10 == (undefined8 *)0x0) {
      func_0x00a67914(&System_ArgumentNullException_TypeInfo);
      uVar12 = func_0x00a67b44();
      uVar14 = func_0x00a67914(&Str_array);
      System_ArgumentNullException___ctor(uVar12,uVar14,0);
    }
    else {
      if (iVar6 < 0) {
        func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
        uVar12 = func_0x00a67b44();
        puVar13 = &Str_length___0;
      }
      else {
        iVar5 = func_0x00a5cb74(puVar10,0);
        unaff_x20 = puVar10;
        if ((int)uVar9 < iVar5) {
          func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
          uVar12 = func_0x00a67b44();
          puVar13 = &Str_index___lower_bound;
          unaff_x21 = uVar9;
        }
        else {
          uVar4 = (int)uVar9 - iVar5;
          iVar5 = System_Array__get_Length(puVar10);
          if ((int)uVar4 <= iVar5 - iVar6) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            iVar5 = func_0x016df200(*puVar10);
            puVar25 = (undefined1 *)((long)puVar10 + (long)iVar5 * (long)(int)uVar4 + 0x20);
            uVar9 = (ulong)(iVar5 * iVar6);
            goto SUB_016decb0;
          }
          func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
          uVar12 = func_0x00a67b44();
          puVar13 = &Str_index___length___size;
          unaff_x21 = (ulong)uVar4;
        }
      }
      uVar14 = func_0x00a67914(puVar13);
      System_IndexOutOfRangeException___ctor(uVar12,uVar14,0);
    }
    uVar14 = func_0x00a67914(&Method_System_Array_Clear__);
    auVar30 = func_0x00a67a20(uVar12,uVar14);
    lVar23 = auVar30._8_8_;
    lVar28 = auVar30._0_8_;
    *(code **)((long)register0x00000008 + -0x40) = System_Array__System_Collections_IList_IndexOf;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = uVar12;
    if (lVar28 != 0) break;
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    System_ArgumentNullException___ctor(uVar14,uVar12,0);
    uVar12 = func_0x00a67914(&Method_System_Array_IndexOf__);
    puVar10 = (undefined8 *)func_0x00a67a20(uVar14,uVar12);
    puVar3 = (undefined8 *)((long)register0x00000008 + -0x60);
    *(code **)((long)register0x00000008 + -0x60) = System_Array__System_Collections_IList_Clear;
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar14;
    uVar9 = func_0x00a5cb74(puVar10,0);
    uVar9 = uVar9 & 0xffffffff;
    iVar6 = System_Array__get_Length(puVar10);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x30 = *puVar3;
  }
  uVar11 = func_0x00a5cb74(lVar28,0);
  uVar26 = uVar11 & 0xffffffff;
  uVar4 = System_Array__get_Length(lVar28);
  uVar20 = (ulong)uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar27 = 0x1918000;
  uVar9 = uVar26;
  uVar21 = uVar20;
  if ((bRam0000000001918524 & 1) == 0) {
    func_0x00a67900(&object___TypeInfo);
    bRam0000000001918524 = 1;
  }
  if (lVar28 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    uVar9 = 0;
    System_ArgumentNullException___ctor(uVar14,uVar12);
  }
  else {
    iVar6 = func_0x00a5cbb8(lVar28);
    if (iVar6 == 1) {
      uVar7 = func_0x00a5cb74(lVar28,0);
      uVar8 = (uint)uVar11;
      uVar1 = uVar7 - uVar8;
      unaff_x24 = (ulong)uVar1;
      if (uVar1 == 0 || (int)uVar7 < (int)uVar8) {
        uVar27 = (ulong)uVar7;
        iVar6 = System_Array__get_Length(lVar28);
        if ((int)(iVar6 + uVar7) < (int)uVar8) goto LAB_00f6a538;
        if ((-1 < (int)uVar4) &&
           (iVar6 = System_Array__get_Length(lVar28), (int)uVar4 <= (int)(uVar1 + iVar6))) {
          lVar15 = func_0x00a67a34(lVar28,_object___TypeInfo);
          iVar6 = uVar4 + uVar8;
          if (lVar15 == 0) {
            if ((int)uVar8 < iVar6) {
              do {
                plVar17 = (long *)System_Array__GetValue(lVar28,uVar26);
                if (plVar17 == (long *)0x0) {
                  if (lVar23 == 0) {
                    return;
                  }
                }
                else {
                  uVar9 = (**(code **)(*plVar17 + 0x138))
                                    (plVar17,lVar23,*(undefined8 *)(*plVar17 + 0x140));
                  if ((uVar9 & 1) != 0) {
                    return;
                  }
                }
                uVar4 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar4;
                uVar26 = (ulong)((int)uVar26 + 1);
              } while (uVar4 != 0);
            }
          }
          else if (lVar23 == 0) {
            if ((int)uVar8 < iVar6) {
              if (uVar8 <= *(uint *)(lVar15 + 0x18)) {
                uVar8 = *(uint *)(lVar15 + 0x18);
              }
              do {
                uVar4 = (uint)uVar26;
                if (uVar8 == uVar4) goto LAB_00f6a534;
                if (*(long *)(lVar15 + (long)(int)uVar4 * 8 + 0x20) == 0) {
                  return;
                }
                uVar1 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar1;
                uVar26 = (ulong)(uVar4 + 1);
              } while (uVar1 != 0);
            }
          }
          else if ((int)uVar8 < iVar6) {
            plVar17 = (long *)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
            lVar28 = (long)iVar6 - (long)(int)uVar8;
            do {
              if (*(uint *)(lVar15 + 0x18) <= (uint)uVar26) {
LAB_00f6a534:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              plVar16 = (long *)*plVar17;
              if ((plVar16 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar16 + 0x138))
                                    (plVar16,lVar23,*(undefined8 *)(*plVar16 + 0x140)),
                 (uVar9 & 1) != 0)) {
                return;
              }
              uVar26 = (ulong)((uint)uVar26 + 1);
              lVar28 = lVar28 + -1;
              plVar17 = plVar17 + 1;
            } while (lVar28 != 0);
          }
          return;
        }
        func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
        uVar14 = func_0x00a67b44();
        lVar23 = func_0x00a67914(&Str_count);
        puVar13 = &Str_Count_must_be_positive_and_count_must_re;
      }
      else {
LAB_00f6a538:
        func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
        uVar14 = func_0x00a67b44();
        lVar23 = func_0x00a67914(&Str_startIndex);
        puVar13 = &Str_Index_was_out_of_range__Must_be_non_nega;
      }
      uVar9 = func_0x00a67914(puVar13);
      uVar21 = 0;
      System_ArgumentOutOfRangeException___ctor(uVar14,lVar23);
    }
    else {
      func_0x00a67914(&System_RankException_TypeInfo);
      uVar14 = func_0x00a67b44();
      uVar12 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
      System_RankException___ctor(uVar14,uVar12);
    }
  }
  uVar12 = func_0x00a67914(&Method_System_Array_IndexOf__);
  auVar30 = func_0x00a67a20(uVar14,uVar12);
  lVar15 = auVar30._0_8_;
  *(code **)((long)register0x00000008 + -0x90) = System_Array__Reverse;
  *(ulong *)((long)register0x00000008 + -0x80) = uVar20;
  *(ulong *)((long)register0x00000008 + -0x78) = uVar27;
  *(long *)((long)register0x00000008 + -0x70) = lVar23;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar14;
  uVar20 = 0x1918000;
  uVar11 = uVar9 & 0xffffffff;
  uVar26 = auVar30._8_8_ & 0xffffffff;
  if ((bRam0000000001918525 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Reverse_object___);
    func_0x00a67900(&object___TypeInfo);
    bRam0000000001918525 = 1;
  }
  if (lVar15 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar12 = func_0x00a67b44();
    uVar14 = func_0x00a67914(&Str_array);
    System_ArgumentNullException___ctor(uVar12,uVar14,0);
    goto LAB_00f6a854;
  }
  iVar6 = func_0x00a5cb74(lVar15,0);
  iVar24 = (int)uVar9;
  iVar5 = auVar30._8_4_;
  if (iVar24 < 0) {
LAB_00f6a788:
    puVar13 = &Str_index;
    if (iVar6 <= iVar5) {
      puVar13 = &Str_length;
    }
    uVar14 = func_0x00a67914(puVar13);
    func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
    lVar15 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_Non_negative_number_required_);
    uVar21 = 0;
    System_ArgumentOutOfRangeException___ctor(lVar15,uVar14,uVar12);
    uVar14 = func_0x00a67914(&Method_System_Array_Reverse__);
    func_0x00a67a20(lVar15,uVar14);
  }
  else {
    uVar4 = iVar6 - iVar5;
    uVar20 = (ulong)uVar4;
    if (uVar4 != 0 && iVar5 <= iVar6) goto LAB_00f6a788;
    iVar6 = System_Array__get_Length(lVar15);
    if (iVar24 <= (int)(uVar4 + iVar6)) {
      iVar6 = func_0x00a5cbb8(lVar15);
      if (iVar6 == 1) {
        lVar18 = func_0x00a67a34(lVar15,_object___TypeInfo);
        lVar23 = _Method_System_Array_Reverse_object___;
        if (lVar18 == 0) {
          iVar6 = iVar24 + iVar5 + -1;
          if (iVar5 < iVar6) {
            do {
              uVar14 = System_Array__GetValue(lVar15,uVar26);
              uVar12 = System_Array__GetValue(lVar15,iVar6);
              System_Array__SetValue(lVar15,uVar12,uVar26);
              System_Array__SetValue(lVar15,uVar14,iVar6);
              uVar4 = (int)uVar26 + 1;
              uVar26 = (ulong)uVar4;
              iVar6 = iVar6 + -1;
            } while ((int)uVar4 < iVar6);
          }
          return;
        }
        *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x90) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x88) = lVar28;
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        lVar28 = tpidr_el0;
        *(long *)((long)register0x00000008 + -0xd0) = lVar28;
        *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(lVar28 + 0x28);
        lVar28 = *(long *)(_Method_System_Array_Reverse_object___ + 0x38);
        if (lVar28 == 0) {
          func_0x00a9e42c(_Method_System_Array_Reverse_object___,uVar26,uVar9 & 0xffffffff);
          lVar28 = *(long *)(lVar23 + 0x38);
        }
        uVar9 = (ulong)*(uint *)(*(long *)(lVar28 + 0x18) + 0xfc);
        puVar25 = (undefined1 *)
                  ((long)register0x00000008 + (uVar9 + 0xf & 0x1fffffff0) * -4 + -0xd0);
SUB_016decb0:
        memset(puVar25,0,uVar9);
        return;
      }
      func_0x00a67914(&System_RankException_TypeInfo);
      uVar12 = func_0x00a67b44();
      uVar14 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
      System_RankException___ctor(uVar12,uVar14);
      goto LAB_00f6a854;
    }
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar12 = func_0x00a67b44();
  uVar14 = func_0x00a67914(&Str_Offset_and_length_were_out_of_bounds_for);
  System_ArgumentException___ctor(uVar12,uVar14,0);
LAB_00f6a854:
  auVar2._8_8_ = lVar15;
  auVar2._0_8_ = lVar28;
  uVar14 = func_0x00a67914(&Method_System_Array_Reverse__);
  auVar30 = func_0x00a67a20(uVar12,uVar14);
  lVar23 = auVar30._0_8_;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -0xb0) = System_Array__Sort;
  *(ulong *)((long)register0x00000008 + -0xa8) = uVar11;
  *(long *)((long)register0x00000008 + -0xa0) = lVar15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar12;
  if (lVar23 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    uVar9 = 0;
    System_ArgumentNullException___ctor(uVar14,uVar12);
    uVar12 = func_0x00a67914(&Method_System_Array_Sort__);
    pcVar29 = System_Array__Sort;
    auVar31 = func_0x00a67a20(uVar14,uVar12);
    uVar26 = auVar31._8_8_;
    auVar30._8_8_ = in_x4;
    auVar30._0_8_ = auVar31._0_8_;
  }
  else {
    uVar9 = func_0x00a5cb74(lVar23,0);
    uVar9 = uVar9 & 0xffffffff;
    uVar21 = System_Array__get_Length(lVar23);
    uVar21 = uVar21 & 0xffffffff;
    auVar2._8_8_ = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x98);
    uVar26 = 0;
    pcVar29 = *(code **)((long)register0x00000008 + -0xb0);
    uVar11 = *(ulong *)((long)register0x00000008 + -0xa8);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x90);
  }
  do {
    uVar12 = auVar30._8_8_;
    lVar28 = auVar30._0_8_;
    *(code **)(puVar25 + -0x40) = pcVar29;
    *(ulong *)(puVar25 + -0x30) = unaff_x24;
    *(long *)(puVar25 + -0x28) = auVar2._0_8_;
    *(ulong *)(puVar25 + -0x20) = uVar20;
    *(ulong *)(puVar25 + -0x18) = uVar11;
    *(long *)(puVar25 + -0x10) = auVar2._8_8_;
    *(undefined8 *)(puVar25 + -8) = uVar14;
    if (lVar28 == 0) {
      func_0x00a67914(&System_ArgumentNullException_TypeInfo);
      uVar14 = func_0x00a67b44();
      uVar12 = func_0x00a67914(&Str_keys);
      uVar27 = 0;
      System_ArgumentNullException___ctor(uVar14,uVar12);
    }
    else {
      iVar6 = (int)uVar21;
      uVar11 = uVar9 & 0xffffffff;
      uVar27 = uVar9;
      uVar22 = uVar21;
      iVar5 = func_0x00a5cbb8();
      uVar20 = uVar26;
      if (iVar5 == 1) {
        if (uVar26 == 0) {
          uVar27 = func_0x00a5cb74(lVar28,0);
          unaff_x24 = uVar27 & 0xffffffff;
          if (iVar6 < 0) {
LAB_00f6aa84:
            puVar13 = &Str_length;
            if (-1 < iVar6) {
              puVar13 = &Str_index;
            }
            uVar14 = func_0x00a67914(puVar13);
            func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
            uVar12 = func_0x00a67b44();
            uVar19 = func_0x00a67914(&Str_Non_negative_number_required_);
            uVar22 = 0;
            System_ArgumentOutOfRangeException___ctor(uVar12,uVar14,uVar19);
            uVar14 = func_0x00a67914(&Method_System_Array_Sort__);
            func_0x00a67a20(uVar12,uVar14);
            goto LAB_00f6aaf0;
          }
LAB_00f6a984:
          if ((int)uVar9 < (int)unaff_x24) goto LAB_00f6aa84;
          iVar5 = System_Array__get_Length(lVar28);
          uVar4 = (int)uVar9 - (int)unaff_x24;
          unaff_x24 = (ulong)uVar4;
          if ((iVar6 <= (int)(iVar5 - uVar4)) &&
             ((uVar26 == 0 ||
              (iVar5 = System_Array__get_Length(uVar26), (int)uVar4 <= iVar5 - iVar6)))) {
            if (1 < iVar6) {
              uVar9 = uVar9 & 0xffffffff;
              uVar21 = uVar21 & 0xffffffff;
              *(undefined8 *)(puVar25 + -0x40) = *(undefined8 *)(puVar25 + -0x40);
              *(undefined8 *)(puVar25 + -0x38) = unaff_x25;
              *(undefined8 *)(puVar25 + -0x30) = *(undefined8 *)(puVar25 + -0x30);
              *(undefined8 *)(puVar25 + -0x28) = *(undefined8 *)(puVar25 + -0x28);
              *(undefined8 *)(puVar25 + -0x20) = *(undefined8 *)(puVar25 + -0x20);
              *(undefined8 *)(puVar25 + -0x18) = *(undefined8 *)(puVar25 + -0x18);
              *(undefined8 *)(puVar25 + -0x10) = *(undefined8 *)(puVar25 + -0x10);
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              if ((bRam000000000191852d & 1) == 0) {
                func_0x00a67900(&object___TypeInfo,uVar26,uVar9,uVar21);
                bRam000000000191852d = 1;
              }
              *(undefined8 *)(puVar25 + -0x58) = 0;
              *(undefined8 *)(puVar25 + -0x50) = 0;
              *(undefined8 *)(puVar25 + -0x48) = 0;
              *(undefined8 *)(puVar25 + -0x70) = 0;
              *(undefined8 *)(puVar25 + -0x68) = 0;
              *(undefined8 *)(puVar25 + -0x60) = 0;
              lVar23 = func_0x00a67a34(lVar28,_object___TypeInfo);
              if ((lVar23 == 0) ||
                 ((lVar15 = func_0x00a67a34(uVar26,_object___TypeInfo), uVar26 != 0 && (lVar15 == 0)
                  ))) {
                System_Array_SorterGenericArray___ctor(puVar25 + -0x70,lVar28,uVar26,uVar12);
                System_Array_SorterGenericArray__IntrospectiveSort(puVar25 + -0x70,uVar9,uVar21);
              }
              else {
                System_Array_SorterObjectArray___ctor(puVar25 + -0x58,lVar23,lVar15,uVar12);
                System_Array_SorterObjectArray__IntrospectiveSort(puVar25 + -0x58,uVar9,uVar21);
              }
              return;
            }
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar14 = func_0x00a67b44();
          puVar13 = &Str_Offset_and_length_were_out_of_bounds_for;
        }
        else {
          iVar5 = func_0x00a5cbb8(uVar26);
          if (iVar5 != 1) goto LAB_00f6aa00;
          uVar4 = func_0x00a5cb74(lVar28,0);
          unaff_x24 = (ulong)uVar4;
          uVar8 = func_0x00a5cb74(uVar26,0);
          if (uVar4 == uVar8) {
            if (-1 < iVar6) goto LAB_00f6a984;
            goto LAB_00f6aa84;
          }
LAB_00f6aaf0:
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar14 = func_0x00a67b44();
          puVar13 = &Str_The_arrays__lower_bounds_must_be_identic;
        }
        auVar2._8_8_ = uVar12;
        auVar2._0_8_ = lVar28;
        uVar12 = func_0x00a67914(puVar13);
        uVar27 = 0;
        System_ArgumentException___ctor(uVar14,uVar12);
        uVar21 = uVar22;
      }
      else {
LAB_00f6aa00:
        uVar21 = uVar22;
        func_0x00a67914(&System_RankException_TypeInfo);
        uVar14 = func_0x00a67b44();
        uVar12 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
        System_RankException___ctor(uVar14,uVar12);
        auVar2 = auVar30;
      }
    }
    uVar12 = func_0x00a67914(&Method_System_Array_Sort__);
    pcVar29 = System_Array__Sort;
    auVar31 = func_0x00a67a20(uVar14,uVar12);
    auVar30._8_8_ = uVar21;
    auVar30._0_8_ = auVar31._0_8_;
    uVar21 = uVar27 & 0xffffffff;
    uVar9 = auVar31._8_8_ & 0xffffffff;
    uVar26 = 0;
    puVar25 = puVar25 + -0x40;
  } while( true );
}


// ==== private bool PJOJJBEIFAE(MLCNINCNANA DBCKMAANOIL) { }   @0xb56904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__PJOJJBEIFAE(void *__this,void *DBCKMAANOIL)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam00000000019171ad & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ad = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((DBCKMAANOIL == (void *)0x0) || ((uVar2 & 1) == 0)) {
      return false;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) {
      lVar5 = *(long *)(lVar3 + 0x280);
      lVar3 = *(long *)((long)DBCKMAANOIL + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((bRam000000000191c553 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar3,0);
        bRam000000000191c553 = 1;
      }
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((bRam000000000191c502 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam000000000191c502 = 1;
      }
      if (lVar5 == 0 && lVar3 == 0) {
        bVar1 = 1;
      }
      else {
        if (lVar3 == 0) {
          lVar3 = lVar5;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
        }
        else {
          if (lVar5 != 0) {
            bVar1 = lVar5 == lVar3;
            goto LAB_0148e6ec;
          }
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
        }
        bVar1 = UnityEngine_Object__IsNativeObjectAlive(lVar3);
        bVar1 = bVar1 ^ 1;
      }
LAB_0148e6ec:
      return (bool)(bVar1 & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



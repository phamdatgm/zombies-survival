// ==== public void ButtonRateMeNever() { }   @0xaebf5c

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeNever(void *__this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lStack_68;
  
  if ((bRam0000000001916e9a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916e9a = 1;
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
LAB_00bec030:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20) == 0)) goto LAB_00bec030;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
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
  plVar16 = (long *)(lVar6 + 0x20);
  lVar13 = *plVar16;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x30), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x140), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x138), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x150), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar17 = (float)UnityEngine_Time__get_time(0);
  if (fVar17 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar14 = *(undefined8 *)(*plVar16 + 0x70);
  uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0xa8), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x178), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x170), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar16;
    if ((uVar7 & 1) == 0) {
      if (lVar6 != 0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(lVar6,1);
        if (*(long *)(lVar6 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x310),0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar6 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)(lVar6 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(lVar6,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar13 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar13 == 0) goto LAB_00c0b6e0;
          }
          uVar14 = System_Int32__ToString(lVar13 + 0x10,0);
          pvVar10 = (void *)System_String__Concat(_Str_Hide_lvl__,uVar14,0);
          Main__GEMDEAMAGPG(pvVar10,false);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar13 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar13,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(lVar6);
        }
        *(undefined1 *)(lVar6 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (lVar6 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar8 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar16 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar16,1,0);
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
      uVar14 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar14 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) == 0) {
        pvVar10 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        pvVar10 = *(void **)(lVar6 + 0x28);
      }
      if (pvVar10 != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(pvVar10,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
  uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
    uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(*plVar16 + 0xd0);
    uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar16 == 0) ||
         ((lVar6 = *(long *)(*plVar16 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x70), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar16;
        if (lVar6 == 0) goto LAB_00c37710;
LAB_00c37690:
        lVar6 = *(long *)(lVar6 + 0xa8);
        if (lVar6 == 0) goto LAB_00c37710;
        iVar11 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar16 == 0) goto LAB_00c37710;
      uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
      uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
      lVar6 = *plVar16;
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
    plVar16 = *(long **)(lVar13 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar14 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar14, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar10 = Translate__JJJNIPAKLJF
                        ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_SECOND);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(void **)(lVar6 + 0x30) = pvVar10, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar10 = Translate__JJJNIPAKLJF((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_HP);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(void **)(lVar6 + 0x40) = pvVar10;
    uVar14 = System_String__Concat(lVar6,0);
    if (plVar16 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar16 + 0x5a8))(plVar16,uVar14,*(undefined8 *)(*plVar16 + 0x5b0));
    lVar6 = *(long *)(lVar13 + 200);
    if (lVar6 == 0) goto LAB_00c10f6c;
    iVar11 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x70), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar16;
    if (lVar6 == 0) goto LAB_00c37710;
    if ((uVar7 & 1) == 0) {
LAB_00c376a0:
      lVar6 = *(long *)(lVar6 + 0x78);
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x70);
    }
    if (lVar6 == 0) {
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
  lVar13 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x20) = _Str_Try_to_Show__;
  lVar9 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar9 == 0) goto LAB_00c485b8;
  uVar14 = UnityEngine_Object__get_name(lVar9,0);
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar14, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___current__;
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 4) ||
     (*(undefined8 *)(lVar13 + 0x38) = uVar14, *(uint *)(lVar13 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str___last__;
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar9,0);
  }
  uVar5 = *(uint *)(lVar13 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar13 + 0x48) = uVar14, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x50) = _Str____Child__;
  plVar16 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar14 = 0;
  if (plVar16 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x58) = uVar14;
  pvVar10 = (void *)System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar10,false);
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,lVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,lVar6,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  lVar13 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar13 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar13,0);
    lVar13 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar14 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if (((uVar7 & 1) != 0) && (iVar11 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar13 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (lVar13 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar18 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar18;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
        fVar17 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar17) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar13,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar13 == 0) goto LAB_00c485b8;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar13,uVar14,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar17 = (float)iVar3 / (float)iVar4;
            if (fVar17 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar13 == 0)
               ) goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar13 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar13 == 0)) goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar13 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar17) {
                  if ((fVar17 <= 1.61) || (1.8 <= fVar17)) {
                    if (fVar17 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar13 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x70);
                    uVar19 = 0x3f51eb85;
                    uVar18 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar13 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x70);
                    uVar19 = 0x3f5eb852;
                    uVar18 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar13 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x70);
                  uVar19 = 0x3f733333;
                  uVar18 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar17) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar13 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar17) {
                  if (*(long *)(lVar13 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar13 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar13 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x60);
                  uVar19 = 0x3f51eb85;
                  uVar18 = 0x41a00000;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar13 + 0x60);
                  uVar19 = 0x3f5eb852;
                  uVar18 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar13 == 0)) goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0x60);
                uVar18 = 0xc0a00000;
                uVar19 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar18,uVar19,lVar6,uVar14);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar13,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar6);
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
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar17 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar17) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
            goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar13 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
              goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar13 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
                if ((uVar7 & 1) == 0) {
                  lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
                  if (lVar13 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar13,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar13 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar13 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar13 + 0x2c) == 3) {
                      lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
                      if (lVar13 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar13,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar17) {
                          if (1.8 <= fVar17) {
                            uVar19 = 0x3f59999a;
                            uVar18 = 0x42700000;
                          }
                          else {
                            uVar18 = 0x428c0000;
                            uVar19 = 0;
                          }
                        }
                        else {
                          uVar18 = 0x41a00000;
                          uVar19 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar17) {
                  if (fVar17 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar13 + 0xe8);
                    uVar19 = 0x3f733333;
                    uVar18 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0xe8);
                uVar18 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar17) {
                  if (1.8 <= fVar17) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar13 + 0xb0);
                  uVar19 = 0x3f6e147b;
                  uVar18 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0xb0);
                uVar18 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar19 = 0;
            }
            else {
              if (fVar17 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0x188);
                uVar18 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar13 + 0x188);
              if (1.8 <= fVar17) {
                uVar19 = 0x3f51eb85;
                uVar18 = 0x42180000;
              }
              else {
                uVar19 = 0x3f733333;
                uVar18 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar18,uVar19,lVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar13,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar13 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar13 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar13 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar13 + 0x6c) != '\0') {
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
              if (lVar13 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar13,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
                  goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar13 == 0))
                    goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar14 = UnityEngine_Object__Instantiate_object_
                                       (uVar14,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar13 + 0x90) = uVar14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar13,1,0);
  lVar13 = 8;
  if (iVar11 == 0) {
    lVar13 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(long *)((long)puVar12 + lVar13) = lVar6;
  if (*(char *)(lVar6 + 0x23) != '\0') {
    uVar14 = GUIWindow__FAAELIPKLCB(lVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar14,0);
  }
  lVar13 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar13 + 0x20) = _Str_Window__Show__;
  uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar14, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___last__;
  uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar9,0);
  }
  uVar5 = *(uint *)(lVar13 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar13 + 0x38) = uVar14, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str____Child__;
  plVar16 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar14 = 0;
  if (plVar16 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x48) = uVar14;
  pvVar10 = (void *)System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar10,false);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
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
    uVar14 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar15 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
        if ((uVar7 & 1) == 0) {
          uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar15 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
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
        lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar13 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar10 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar10);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
        (lVar13 = *(long *)(lVar13 + 0x78), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         ((lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0 ||
          (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)) goto LAB_00c485b8;
      uVar18 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar13,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0))
      goto LAB_00c485b8;
      lVar13 = *(long *)(lVar13 + 0x3e0);
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
      if ((lVar9 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar9,0), lVar13 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0 ||
          (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)))) goto LAB_00c485b8;
      uVar18 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar18,lVar13,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
       ((lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0 ||
        (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
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
        (lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x68), lVar13 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar13,*(undefined1 *)(lVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x78);
    uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,uVar15,0);
      if ((uVar7 & 1) != 0) {
        uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar15 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
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
        uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar18;
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
    }
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar15 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
    if ((uVar7 & 1) == 0) {
      uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
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
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar10);
      if (bVar2) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar14 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
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
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar15 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
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
           (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar10 == (void *)0x0)
           ) goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar10);
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


// ==== public void ButtonRateMeLater() { }   @0xaec654

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeLater(void *__this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  long lStack_68;
  
  if ((bRam0000000001916e9f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e9f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x19) != '\0') &&
     (*(int *)((long)__this + 0x88) != 0)) {
    if (*(long *)((long)__this + 0x58) == 0) goto LAB_00bec868;
    uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x58),0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (*(long *)((long)__this + 0x60) == 0))
             || (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar8 == 0))
          goto LAB_00bec868;
          uVar13 = BridgePHP__SendRateMe
                             (lVar8,*(undefined4 *)((long)__this + 0x88),
                              *(undefined8 *)(*(long *)((long)__this + 0x60) + 0x180),0);
          UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar13,0);
        }
        if ((bRam0000000001916ea0 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          func_0x00a67900(&Translate_TypeInfo);
          func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
          bRam0000000001916ea0 = 1;
        }
        if (*(char *)((long)__this + 0x98) != '\0') {
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
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar8 != 0) {
          DAFNMLEKHAD__DCLEGMOJBPN(lVar8,0xffffffff);
          if ((*(long *)((long)__this + 0x38) != 0) &&
             (lVar8 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x38),0),
             lVar8 != 0)) {
            UnityEngine_GameObject__SetActive(lVar8,0,0);
            if (*(long *)((long)__this + 0x58) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),0,0);
              if (*(long *)((long)__this + 0x48) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x48),1,0);
                plVar14 = *(long **)((long)__this + 0x30);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
                   (pvVar9 = Translate__JJJNIPAKLJF
                                       ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                        _Str_RATE_ME_REWARD_RECEIVED), plVar14 != (long *)0x0)) {
                  (**(code **)(*plVar14 + 0x5a8))(plVar14,pvVar9,*(undefined8 *)(*plVar14 + 0x5b0));
                  if (*(long *)((long)__this + 0x50) != 0) {
                    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x50),0,0);
                    if (*(long *)((long)__this + 0x20) != 0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (0x43a28000,*(long *)((long)__this + 0x20),1,0);
                      if (cRam0000000001916e67 == '\0') {
                        func_0x00a67900(&Main_TypeInfo);
                        cRam0000000001916e67 = '\x01';
                      }
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      pvVar9 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                      if (pvVar9 != (void *)0x0) {
                        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                          (&stack0xffffffffffffffb0,0);
                        DAFNMLEKHAD__DIMKKHJDHFJ(pvVar9,iVar3 + 0x14);
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        SoundScript__GIGBLEBBIEK
                                  (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60));
                        *(undefined1 *)((long)__this + 0x98) = 1;
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
                          AnalyticsController__BHBKBILKNBE();
                          return;
                        }
                      }
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
      goto LAB_00bec868;
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
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x19) == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = -(*(byte *)((long)__this + 0x98) & 1);
  }
  if (lVar8 == 0) {
LAB_00bec868:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__DCLEGMOJBPN(lVar8,iVar3);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20) == 0)) goto LAB_00bec868;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar8 == 0) {
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
  plVar14 = (long *)(lVar8 + 0x20);
  lVar15 = *plVar14;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x30), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x140), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x138), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x150), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar17 = (float)UnityEngine_Time__get_time(0);
  if (fVar17 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar14 + 0x70);
  uVar16 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0xa8), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x178), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x170), lVar8 == 0)) ||
       (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    lVar8 = *plVar14;
    if ((uVar7 & 1) == 0) {
      if (lVar8 != 0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(lVar8,1);
        if (*(long *)(lVar8 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar8 + 0x310),0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar8 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(lVar8,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar15 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar15 == 0) goto LAB_00c0b6e0;
          }
          uVar13 = System_Int32__ToString(lVar15 + 0x10,0);
          pvVar9 = (void *)System_String__Concat(_Str_Hide_lvl__,uVar13,0);
          Main__GEMDEAMAGPG(pvVar9,false);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar15 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar15,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(lVar8);
        }
        *(undefined1 *)(lVar8 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (lVar8 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(lVar8 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar10 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x48), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0xb8), lVar8 == 0)) goto LAB_00c37710;
    uVar10 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar10 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar14 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar14,1,0);
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
    lVar8 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar15 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (lVar8 != 0) {
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) == 0) {
        pvVar9 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        pvVar9 = *(void **)(lVar8 + 0x28);
      }
      if (pvVar9 != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(pvVar9,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
  uVar16 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
    uVar16 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar14 + 0xd0);
    uVar16 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar8 + 0x78) != '\0')) {
      if ((*plVar14 == 0) ||
         ((lVar8 = *(long *)(*plVar14 + 0xa0), lVar8 == 0 ||
          (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x70), lVar8 == 0)) ||
         (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = *plVar14;
        if (lVar8 == 0) goto LAB_00c37710;
LAB_00c37690:
        lVar8 = *(long *)(lVar8 + 0xa8);
        if (lVar8 == 0) goto LAB_00c37710;
        iVar3 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar14 == 0) goto LAB_00c37710;
      uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
      uVar16 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
      lVar8 = *plVar14;
      if (lVar8 == 0) goto LAB_00c37710;
      if ((uVar7 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar15 = *(long *)(lVar8 + 0x20);
    *(undefined1 *)(lVar8 + 0x78) = 1;
    if (lVar15 == 0) goto LAB_00c37710;
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
    plVar14 = *(long **)(lVar15 + 0x4e8);
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
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar9 = Translate__JJJNIPAKLJF
                       ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_SECOND);
    if ((*(uint *)(lVar8 + 0x18) < 3) ||
       (*(void **)(lVar8 + 0x30) = pvVar9, *(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar8 + 0x38) = _Str____1_;
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar9 = Translate__JJJNIPAKLJF((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_HP);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_00c10f68;
    *(void **)(lVar8 + 0x40) = pvVar9;
    uVar13 = System_String__Concat(lVar8,0);
    if (plVar14 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x5b0));
    lVar8 = *(long *)(lVar15 + 200);
    if (lVar8 == 0) goto LAB_00c10f6c;
    iVar3 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x70), lVar8 == 0)) ||
       (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_00c37710;
    if ((uVar7 & 1) == 0) {
LAB_00c376a0:
      lVar8 = *(long *)(lVar8 + 0x78);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x70);
    }
    if (lVar8 == 0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar3 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar3,0);
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
  lVar15 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x20) = _Str_Try_to_Show__;
  lVar11 = UnityEngine_Component__get_gameObject(lVar8,0);
  if (lVar11 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar11,0);
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar13, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___current__;
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
  if ((*(uint *)(lVar15 + 0x18) < 4) ||
     (*(undefined8 *)(lVar15 + 0x38) = uVar13, *(uint *)(lVar15 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar11,0);
  }
  uVar6 = *(uint *)(lVar15 + 0x18);
  if ((uVar6 < 6) || (*(undefined8 *)(lVar15 + 0x48) = uVar13, uVar6 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x50) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar6 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar6 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x58) = uVar13;
  pvVar9 = (void *)System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar9,false);
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar13,lVar8,0);
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
  uVar7 = UnityEngine_Object__op_Equality(uVar13,lVar8,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar15 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar15 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar15,0);
    lVar15 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar13 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if (((uVar7 & 1) != 0) && (iVar3 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar15 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x20) == '\0') {
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
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
      if (((uVar7 & 1) != 0) && (*(char *)(lVar8 + 0x21) != '\0')) {
        fVar17 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar17) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar15,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar15,uVar13,0);
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
        if (*(char *)(lVar8 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar15,0);
          if ((uVar7 & 1) != 0) {
            iVar4 = UnityEngine_Screen__get_width(0);
            iVar5 = UnityEngine_Screen__get_height(0);
            fVar17 = (float)iVar4 / (float)iVar5;
            if (fVar17 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0)
               ) goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar15 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar15 == 0)) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar15 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar17) {
                  if ((fVar17 <= 1.61) || (1.8 <= fVar17)) {
                    if (fVar17 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x70);
                    uVar18 = 0x3f51eb85;
                    uVar16 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x70);
                    uVar18 = 0x3f5eb852;
                    uVar16 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x70);
                  uVar18 = 0x3f733333;
                  uVar16 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar17) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar15 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar17) {
                  if (*(long *)(lVar15 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar15 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x60);
                  uVar18 = 0x3f51eb85;
                  uVar16 = 0x41a00000;
                }
                else {
                  uVar13 = *(undefined8 *)(lVar15 + 0x60);
                  uVar18 = 0x3f5eb852;
                  uVar16 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar15 == 0)) goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0x60);
                uVar16 = 0xc0a00000;
                uVar18 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar16,uVar18,lVar8,uVar13);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar15,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar8);
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
        if (*(char *)(lVar8 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar8);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar15,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar4 = UnityEngine_Screen__get_width(0);
          iVar5 = UnityEngine_Screen__get_height(0);
          fVar17 = (float)iVar4 / (float)iVar5;
          if (1.51 < fVar17) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar15 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar15 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
                if ((uVar7 & 1) == 0) {
                  lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
                  if (lVar15 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar15,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar15 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar15 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar15 + 0x2c) == 3) {
                      lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
                      if (lVar15 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar15,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar17) {
                          if (1.8 <= fVar17) {
                            uVar18 = 0x3f59999a;
                            uVar13 = 0x42700000;
                          }
                          else {
                            uVar13 = 0x428c0000;
                            uVar18 = 0;
                          }
                        }
                        else {
                          uVar13 = 0x41a00000;
                          uVar18 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar17) {
                  if (fVar17 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar15 + 0xe8);
                    uVar18 = 0x3f733333;
                    uVar13 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0xe8);
                uVar13 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar17) {
                  if (1.8 <= fVar17) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar15 + 0xb0);
                  uVar18 = 0x3f6e147b;
                  uVar13 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0xb0);
                uVar13 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar18 = 0;
            }
            else {
              if (fVar17 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0x188);
                uVar13 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar15 + 0x188);
              if (1.8 <= fVar17) {
                uVar18 = 0x3f51eb85;
                uVar13 = 0x42180000;
              }
              else {
                uVar18 = 0x3f733333;
                uVar13 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar13,uVar18,lVar8,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar15,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar15 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar15 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar15 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar15 + 0xc) != '\0') {
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
               (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar15 + 0x6c) != '\0') {
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
              if (lVar15 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar15,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar15 + 0x90) = uVar13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar15,1,0);
  lVar15 = 8;
  if (iVar3 == 0) {
    lVar15 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(long *)((long)puVar12 + lVar15) = lVar8;
  if (*(char *)(lVar8 + 0x23) != '\0') {
    uVar13 = GUIWindow__FAAELIPKLCB(lVar8);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar13,0);
  }
  lVar15 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar15 + 0x20) = _Str_Window__Show__;
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
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar13, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar11,0);
  }
  uVar6 = *(uint *)(lVar15 + 0x18);
  if ((uVar6 < 4) || (*(undefined8 *)(lVar15 + 0x38) = uVar13, uVar6 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str____Child__;
  plVar14 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar6 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar6 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x48) = uVar13;
  pvVar9 = (void *)System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar9,false);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
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
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
        goto LAB_00c485b8;
        uVar16 = *(undefined8 *)(lVar8 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
        if ((uVar7 & 1) == 0) {
          uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
          goto LAB_00c485b8;
          uVar16 = *(undefined8 *)(lVar8 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar8,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar8,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar8 == 0))
        goto LAB_00c485b8;
        lVar8 = *(long *)(lVar8 + 0x178);
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
        if ((lVar15 == 0) || (uVar6 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar8 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar8,uVar6 & 1,0);
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
       (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar9 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar9);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
        (lVar15 = *(long *)(lVar15 + 0x78), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
         ((lVar15 = *(long *)(lVar15 + 0x70), lVar15 == 0 ||
          (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1d0), lVar15 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1b8), lVar15 == 0)) goto LAB_00c485b8;
      uVar18 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1d0), lVar15 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar15,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      lVar15 = *(long *)(lVar15 + 0x3e0);
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
      lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar11 == 0) || (uVar6 = DAFNMLEKHAD__EFDKHACIIEC(lVar11,0), lVar15 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,uVar6 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0 ||
          (lVar15 = *(long *)(lVar15 + 0x1b8), lVar15 == 0)))) goto LAB_00c485b8;
      uVar18 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar18,lVar15,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
       ((lVar15 = *(long *)(lVar15 + 0x60), lVar15 == 0 ||
        (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
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
        (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x68), lVar15 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar15,*(undefined1 *)(lVar8 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar8 + 0x78);
    uVar16 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,uVar16,0);
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
             (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
          goto LAB_00c485b8;
          uVar16 = *(undefined8 *)(lVar8 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
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
        lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
           (lVar8 = *(long *)(lVar8 + 0x4e0), lVar8 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar8,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar18;
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
    goto LAB_00c485b8;
    uVar16 = *(undefined8 *)(lVar8 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar8,0);
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
      pvVar9 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar9);
      if (bVar2) {
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
            lVar8 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar8 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
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
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_00c485b8;
      lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0);
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
        if (lVar8 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar8 + 0x104);
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
         (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar8,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar8,0);
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
    goto LAB_00c485b8;
    uVar16 = *(undefined8 *)(lVar8 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
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
             (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar8,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar8,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar9 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar9);
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



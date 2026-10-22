// ==== public void GOKBDNDJPBA(bool MHJLKCIBEPG, bool DLCMLDLHLLC, bool GBCADCAJDEN) { }   @0xb07e7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__GOKBDNDJPBA(void *__this,bool MHJLKCIBEPG,bool DLCMLDLHLLC,bool GBCADCAJDEN)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  if ((bRam0000000001916f57 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f57 = 1;
  }
  if ((*(long *)((long)__this + 0x640) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x640),0), lVar2 != 0))
  {
    UnityEngine_GameObject__SetActive(lVar2,MHJLKCIBEPG,0);
    if ((*(long *)((long)__this + 0x648) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x648),0), lVar2 != 0
       )) {
      UnityEngine_GameObject__SetActive(lVar2,~MHJLKCIBEPG & 1,0);
      if (0 < *(int *)(*(long *)(_GUIGarage_TypeInfo + 0xb8) + 4)) {
        if (*(long *)((long)__this + 0x638) == 0) goto LAB_00c08130;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (0x43480000,*(long *)((long)__this + 0x638),1,0);
      }
      if (MHJLKCIBEPG) {
        if (*(long *)((long)__this + 0x498) == 0) goto LAB_00c08130;
        uVar3 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this + 0x498),0);
        if ((uVar3 & 1) != 0) {
          uVar7 = *(undefined8 *)((long)__this + 0x78);
          uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar8,uVar7,0);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c08130;
            Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
        }
      }
      uVar7 = *(undefined8 *)((long)__this + 0x610);
      iVar12 = *(int *)(*(long *)(_GUIGarage_TypeInfo + 0xb8) + 4);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      fVar10 = (float)iVar12;
      if (MHJLKCIBEPG) {
        lVar2 = *(long *)((long)__this + 0x640);
        if (DLCMLDLHLLC) {
          in_s2 = 0.0;
          uVar7 = GUIGarage__OFMEDMJLPNE(0,0xc3960000,0,fVar10,0x40400000,__this,lVar2,GBCADCAJDEN);
          UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar7,0);
        }
        else {
          if (lVar2 == 0) goto LAB_00c08130;
          UnityEngine_RectTransform__set_anchoredPosition(0,fVar10,lVar2,0);
        }
        plVar4 = *(long **)((long)__this + 0x610);
        if (plVar4 == (long *)0x0) goto LAB_00c08130;
        plVar5 = (long *)((long)__this + 0x620);
      }
      else {
        lVar2 = *(long *)((long)__this + 0x648);
        if (DLCMLDLHLLC) {
          in_s2 = 0.0;
          uVar7 = GUIGarage__OFMEDMJLPNE(0,0xc3960000,0,fVar10,0x40400000,__this,lVar2,GBCADCAJDEN);
          UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar7,0);
        }
        else {
          if (lVar2 == 0) goto LAB_00c08130;
          UnityEngine_RectTransform__set_anchoredPosition(0,fVar10,lVar2,0);
        }
        plVar4 = *(long **)((long)__this + 0x610);
        if (plVar4 == (long *)0x0) goto LAB_00c08130;
        plVar5 = (long *)((long)__this + 0x618);
      }
      lVar2 = *plVar5;
      if ((bRam000000000191db6f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
        bRam000000000191db6f = 1;
      }
      lVar6 = plVar4[0x1b];
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (lVar2 != 0) {
          UnityEngine_Sprite__get_rect(lVar2,0);
          if (cRam0000000001916788 == '\0') {
            func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
            cRam0000000001916788 = '\x01';
          }
          in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
          fVar10 = fVar10 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          *(bool *)(plVar4 + 7) = in_s2 * in_s2 + fVar10 * fVar10 < 9.9999994e-11;
          uVar7 = UnityEngine_Sprite__get_texture(lVar2,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = 0;
LAB_01550934:
          bVar1 = UnityEngine_Object__op_Equality(uVar7,uVar8,0);
          *(byte *)((long)plVar4 + 0x39) = bVar1 & 1;
          plVar4[0x1b] = lVar2;
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar4);
          (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
          UnityEngine_UI_Image__TrackSprite(plVar4);
          return;
        }
      }
      else {
        lVar6 = plVar4[0x1b];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar6,lVar2,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (plVar4[0x1b] != 0) {
          UnityEngine_Sprite__get_rect(plVar4[0x1b],0);
          fVar9 = in_s2;
          fVar11 = fVar10;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
          if ((uVar3 & 1) == 0) {
            if (cRam0000000001916788 == '\0') {
              func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
              cRam0000000001916788 = '\x01';
            }
            fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
            fVar11 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          }
          else {
            if (lVar2 == 0) goto LAB_01550984;
            UnityEngine_Sprite__get_rect(lVar2,0);
          }
          *(bool *)(plVar4 + 7) = in_s2 == fVar9 && fVar10 == fVar11;
          if (plVar4[0x1b] != 0) {
            uVar7 = UnityEngine_Sprite__get_texture(plVar4[0x1b],0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
            uVar8 = 0;
            if ((uVar3 & 1) != 0) {
              if (lVar2 == 0) goto LAB_01550984;
              uVar8 = UnityEngine_Sprite__get_texture(lVar2,0);
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
LAB_00c08130:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MKJAANBPFJH() { }   @0xb08ab8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MKJAANBPFJH(void *__this)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  long *plVar5;
  byte abStack_24 [4];
  
  if ((bRam0000000001916f5c & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_Ads__);
    bRam0000000001916f5c = 1;
  }
  plVar5 = *(long **)((long)__this + 0x8a8);
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
  if (lVar2 != 0) {
    bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(lVar2,0);
    abStack_24[0] = ~bVar1 & 1;
    if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = System_Boolean__ToString(abStack_24,0);
    uVar3 = System_String__Concat(_Str_Ads__,uVar3,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0));
      plVar5 = *(long **)((long)__this + 0x8b0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
          (pvVar4 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar4 != (void *)0x0))
         && (pvVar4 = AdvController__MMPJLHNFLAK(pvVar4), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x5a8))(plVar5,pvVar4,*(undefined8 *)(*plVar5 + 0x5b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCloseWindow() { }   @0xb08ec8

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCloseWindow(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  void *pvStack_68;
  
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar5 == 0) {
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
  plVar15 = (long *)(lVar5 + 0x20);
  lVar12 = *plVar15;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x30), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x140), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x138), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x150), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
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
  uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0xa8), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x178), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x170), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    pvVar7 = (void *)*plVar15;
    if ((uVar6 & 1) == 0) {
      if (pvVar7 != (void *)0x0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(pvVar7,1);
        if (*(long *)((long)pvVar7 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar7 + 0x310),0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)((long)pvVar7 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)((long)pvVar7 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(pvVar7,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar5 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar5 == 0) goto LAB_00c0b6e0;
          }
          uVar13 = System_Int32__ToString(lVar5 + 0x10,0);
          uVar13 = System_String__Concat(_Str_Hide_lvl__,uVar13,0);
          Main__GEMDEAMAGPG(uVar13,0,0);
          uVar6 = Main__KCHOEBEIOCE(0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar5 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar5,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(pvVar7);
        }
        *(undefined1 *)((long)pvVar7 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (pvVar7 == (void *)0x0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)((long)pvVar7 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar8 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x48), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0xb8), lVar5 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar15 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar15,1,0);
joined_r0x00c37634:
    if ((uVar6 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar5 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar12 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(lVar12,0,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      uVar13 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      uVar13 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) == 0) {
        lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      if (lVar5 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar5,0,0);
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
  uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar6 & 1) == 0) {
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37480;
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xd0);
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if (((uVar6 & 1) == 0) || (*(char *)(lVar5 + 0x78) != '\0')) {
      if ((*plVar15 == 0) ||
         ((lVar5 = *(long *)(*plVar15 + 0xa0), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c37710;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x70), lVar5 == 0)) ||
         (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *plVar15;
        if (lVar5 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar7 = *(void **)(lVar5 + 0xa8);
        if (pvVar7 == (void *)0x0) goto LAB_00c37710;
        iVar10 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar15 == 0) goto LAB_00c37710;
      uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
      lVar5 = *plVar15;
      if (lVar5 == 0) goto LAB_00c37710;
      if ((uVar6 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar12 = *(long *)(lVar5 + 0x20);
    *(undefined1 *)(lVar5 + 0x78) = 1;
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
    lVar5 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar13 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar5 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(undefined8 *)(lVar5 + 0x20) = uVar13, *(int *)(lVar5 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar5 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
    if ((*(uint *)(lVar5 + 0x18) < 3) ||
       (*(undefined8 *)(lVar5 + 0x30) = uVar13, *(uint *)(lVar5 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar5 + 0x38) = _Str____1_;
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar5 + 0x40) = uVar13;
    uVar13 = System_String__Concat(lVar5,0);
    if (plVar15 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar15 + 0x5a8))(plVar15,uVar13,*(undefined8 *)(*plVar15 + 0x5b0));
    pvVar7 = *(void **)(lVar12 + 200);
    if (pvVar7 == (void *)0x0) goto LAB_00c10f6c;
    iVar10 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x70), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    lVar5 = *plVar15;
    if (lVar5 == 0) goto LAB_00c37710;
    if ((uVar6 & 1) == 0) {
LAB_00c376a0:
      pvVar7 = *(void **)(lVar5 + 0x78);
    }
    else {
      pvVar7 = *(void **)(lVar5 + 0x70);
    }
    if (pvVar7 == (void *)0x0) {
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
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x20) = _Str_Try_to_Show__;
  lVar12 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar12,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar13, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar13, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar12,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar13, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar13;
  uVar13 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar13,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar13,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar13 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((((ulong)pvVar9 & 1) != 0) && (iVar10 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar6 & 1) == 0) goto LAB_00c46b74;
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
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)((long)pvVar7 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar13,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar2 / (float)iVar3;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
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
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
              if ((uVar6 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar18 = 0.82;
                    fVar16 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar18 = 0.87;
                    fVar16 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x70);
                  fVar18 = 0.95;
                  fVar16 = 55.0;
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
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar6 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar18 = 0.82;
                  fVar16 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar18 = 0.87;
                  fVar16 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar5 + 0x60);
                fVar16 = -5.0;
                fVar18 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar7,pvVar9,fVar16,fVar18);
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
    uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
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
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
              if ((uVar6 & 1) == 0) {
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
                uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
                if ((uVar6 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar6 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            fVar18 = 0.85;
                            fVar16 = 60.0;
                          }
                          else {
                            fVar16 = 70.0;
                            fVar18 = 0.0;
                          }
                        }
                        else {
                          fVar16 = 20.0;
                          fVar18 = 0.0;
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
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar5 + 0xe8);
                    fVar18 = 0.95;
                    fVar16 = 70.0;
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
                pvStack_68 = *(void **)(lVar5 + 0xe8);
                fVar16 = 30.0;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar5 + 0xb0);
                  fVar18 = 0.93;
                  fVar16 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xb0);
                fVar16 = -25.0;
              }
LAB_00c4729c:
              fVar18 = 0.0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0x188);
                fVar16 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar5 + 0x188);
              if (1.8 <= fVar16) {
                fVar18 = 0.82;
                fVar16 = 38.0;
              }
              else {
                fVar18 = 0.95;
                fVar16 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar7,pvStack_68,fVar16,fVar18);
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
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
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
              uVar6 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar5 + 0x90) = uVar13;
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
  lVar5 = 8;
  if (iVar10 == 0) {
    lVar5 = 0;
  }
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *(void **)((long)puVar11 + lVar5) = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    uVar13 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,uVar13,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar13, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar12,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar13, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar13;
  uVar13 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar6 = Main__KCHOEBEIOCE(0);
  if ((uVar6 & 1) != 0) {
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
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(lVar5 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
        if ((uVar6 & 1) == 0) {
          uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar5 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar6 & 1) != 0) {
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
        lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar12 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar12,0), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
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
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar6 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) != 0) goto LAB_00c47948;
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
      uVar17 = 0;
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
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar5,0);
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar12 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar12,0), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
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
    uVar13 = *(undefined8 *)(lVar5 + 0x78);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,uVar14,0);
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar5 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
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
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar5 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar6 & 1) != 0) {
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
      uVar6 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
      if ((uVar6 & 1) != 0) {
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
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar6 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
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
      pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar7 == (void *)0x0) goto LAB_00c485b8;
      pvVar7 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar7,-1,true);
      if (pvVar7 == (void *)0x0) {
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
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar7);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
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
        if ((lVar5 == 0) || (pvVar7 = *(void **)(lVar5 + 0x20), pvVar7 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar7);
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


// ==== public void ButtonAchievementsGPGS() { }   @0xb094b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonAchievementsGPGS(void *__this)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *__this_00;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  byte abStack_38 [4];
  undefined4 auStack_34 [3];
  
  if ((bRam0000000001916f66 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f66 = 1;
  }
  plVar2 = (long *)UnityEngine_Social__get_localUser(0);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00c09554;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00c09554:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) != '\0') {
        uVar4 = 0;
        if ((bRam000000000191cc8e & 1) == 0) {
          uVar4 = func_0x00a67900(&UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo);
          bRam000000000191cc8e = 1;
        }
        plVar2 = (long *)UnityEngine_SocialPlatforms_ActivePlatform__get_Instance(uVar4);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_014a5c2c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)
                 func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,3);
LAB_014a5c2c:
                    /* WARNING: Could not recover jumptable at 0x014a5c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(plVar2,puVar3[1]);
        return;
      }
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), __this_00 != (void *)0x0)
       ) {
      if ((bRam0000000001916e10 & 1) == 0) {
        func_0x00a67900(&System_Action_SignInStatus__TypeInfo,0);
        func_0x00a67900(&bool_TypeInfo);
        func_0x00a67900(&Method_BridgePHP_OnSocialLogin__);
        func_0x00a67900(&BridgePHP_TypeInfo);
        func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&string___TypeInfo);
        func_0x00a67900(&Str_SocialLogin__time__);
        func_0x00a67900(&Str__);
        func_0x00a67900(&Str_RETURN____SocialLogin_in_progres_);
        func_0x00a67900(&Str____isProgress__);
        func_0x00a67900(&Str___auth__);
        bRam0000000001916e10 = 1;
      }
      abStack_38[0] = 0;
      lVar6 = func_0x00a679a0(_string___TypeInfo,8);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = _Str_SocialLogin__time__;
          auStack_34[0] = UnityEngine_Time__get_time(0);
          uVar4 = System_Single__ToString(auStack_34,0);
          if ((1 < *(uint *)(lVar6 + 0x18)) &&
             (*(undefined8 *)(lVar6 + 0x28) = uVar4, *(uint *)(lVar6 + 0x18) != 2)) {
            *(undefined8 *)(lVar6 + 0x30) = _Str___auth__;
            plVar2 = (long *)UnityEngine_Social__get_localUser(0);
            if (plVar2 == (long *)0x0) goto LAB_00bda000;
            lVar5 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_00bd9e30;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)
                     func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bd9e30:
            abStack_38[0] = (*(code *)*puVar3)(plVar2,puVar3[1]);
            abStack_38[0] = abStack_38[0] & 1;
            if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_bool_TypeInfo);
            }
            uVar4 = System_Boolean__ToString(abStack_38,0);
            if ((3 < *(uint *)(lVar6 + 0x18)) &&
               (*(undefined8 *)(lVar6 + 0x38) = uVar4, *(uint *)(lVar6 + 0x18) != 4)) {
              *(undefined8 *)(lVar6 + 0x40) = _Str__;
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = System_Boolean__ToString(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b,0);
              if ((5 < *(uint *)(lVar6 + 0x18)) &&
                 (*(undefined8 *)(lVar6 + 0x48) = uVar4, *(uint *)(lVar6 + 0x18) != 6)) {
                *(undefined8 *)(lVar6 + 0x50) = _Str____isProgress__;
                uVar4 = System_Boolean__ToString((char *)((long)__this_00 + 0xa5),0);
                if (7 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x58) = uVar4;
                  uVar4 = System_String__Concat(lVar6,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__GEMDEAMAGPG(uVar4,1,0);
                  if (*(char *)((long)__this_00 + 0xa5) == '\0') {
                    *(undefined1 *)((long)__this_00 + 0xa5) = 1;
                    if (*(char *)((long)__this_00 + 0xa4) == '\0') {
                      pvVar1 = BridgePHP__GetServerConfig(__this_00);
                      UnityEngine_MonoBehaviour__StartCoroutine(__this_00,pvVar1,0);
                    }
                    lVar6 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
                    uVar4 = func_0x00a67b44(_System_Action_SignInStatus__TypeInfo);
                    System_Action___Il2CppFullySharedGenericType____ctor
                              (uVar4,__this_00,_Method_BridgePHP_OnSocialLogin__,0);
                    if (lVar6 == 0) goto LAB_00bda000;
                    GooglePlayGames_PlayGamesPlatform__Authenticate(lVar6,uVar4,0);
                  }
                  else {
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    Main__GEMDEAMAGPG(_Str_RETURN____SocialLogin_in_progres_,1,0);
                  }
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
LAB_00bda000:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatUnlockAllLevels() { }   @0xb09ad4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatUnlockAllLevels(void *__this)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000001916f6a & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f6a = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
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
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x120), lVar2 != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (lVar2,&lStack_68,_Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__
              );
    uStack_48 = uStack_60;
    lStack_50 = lStack_68;
    uStack_40 = uStack_58;
    while (uVar1 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                             (&lStack_50,
                              _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                             ), (uVar1 & 1) != 0) {
      func_0x00b947ec(&lStack_50,&lStack_68,
                      _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__)
      ;
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      DJKGLJOCFCE__MHHDNMHEMKH(lStack_68,0x29a,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
              (&lStack_50,_Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__)
    ;
    iVar3 = 1;
    while( true ) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar2 == 0)) break;
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
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
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar2 == 0) break;
      DAFNMLEKHAD__NODNJNKEFKM(lVar2,0,iVar3,0);
      iVar3 = iVar3 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MNIKOMAODMK() { }   @0xb0b958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MNIKOMAODMK(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  
  if ((bRam0000000001916f6e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Vector2___TypeInfo);
    bRam0000000001916f6e = 1;
  }
  if (*(long *)((long)__this + 0x500) != 0) {
    uVar1 = func_0x00a679a0(_UnityEngine_Vector2___TypeInfo,
                            *(undefined4 *)(*(long *)((long)__this + 0x500) + 0x18));
    lVar2 = *(long *)((long)__this + 0x500);
    *(undefined8 *)((long)__this + 0x508) = uVar1;
    if (lVar2 != 0) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar3) {
          return;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_00c0ba38:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar2 + lVar4 + 0x20);
        if (lVar2 == 0) break;
        lVar5 = *(long *)((long)__this + 0x508);
        fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
        uVar7 = 0x41880000;
        if (fVar6 < 0.0) {
          uVar7 = 0xc1880000;
        }
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_00c0ba38;
        *(undefined4 *)(lVar5 + lVar4 + 0x20) = uVar7;
        *(undefined4 *)(lVar5 + lVar4 + 0x24) = 0;
        lVar2 = *(long *)((long)__this + 0x500);
        lVar4 = lVar4 + 8;
        uVar3 = uVar3 + 1;
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HGHFFNAJALJ() { }   @0xb0be7c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__HGHFFNAJALJ(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)((long)__this + 0x8f0);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c0bedc;
        UnityEngine_GameObject__SetActive(lVar2,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c0bedc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AGFKGLDJDLE() { }   @0xb0b780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__AGFKGLDJDLE(void *__this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  undefined4 uStack_3c;
  long *plStack_38;
  
  if ((bRam0000000001916f75 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_UpdateMap);
    bRam0000000001916f75 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar10 == 0)) {
LAB_00c0b950:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar1 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar1) {
    uVar11 = 0;
    do {
      if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      pvVar9 = *(void **)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (pvVar9 == *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
        GUIGarage__PGEEGDGGHLL(__this,pvVar9,1);
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c0b950;
      bVar2 = Level__get_IsEvent(pvVar9);
      if (bVar2) {
        Level__FKJAANMGOMP(pvVar9,0);
      }
      Level__HMPEMADOAAL(pvVar9,0);
      uVar1 = *(uint *)(lVar10 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar1);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0b950;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar9 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), pvVar9 == (void *)0x0))
    goto LAB_00c0b950;
    BridgePHP__RefreshUserProfileAndEvents(pvVar9);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar4 = _Str_UpdateMap;
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
  lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar10 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = DAFNMLEKHAD__LLEFEIHEJDE(lVar10,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar4,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar10 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar10 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar4 = *(long **)(lVar10 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar5 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar5 + 0x10)) {
    if (*(long *)(lVar10 + 0x1e8) == 0) goto LAB_00c16768;
    uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar10 + 0x1e8),0);
    if ((*(long *)(lVar10 + 0x1e8) == 0) ||
       (lVar5 = UnityEngine_Component__get_transform(*(long *)(lVar10 + 0x1e8),0), lVar5 == 0))
    goto LAB_00c16768;
    uVar7 = UnityEngine_Transform__get_parent(lVar5,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar5 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar5 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar5,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar10 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar4 = *(long **)(lVar10 + 0x1e8);
  lVar10 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar10 != 0))
  {
    uVar1 = *(uint *)(lVar10 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar10 + 0x20) = uVar6, uVar1 != 1 &&
         (*(undefined8 *)(lVar10 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar10 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar10 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar10 + 0x40) = uVar6, uVar1 != 5)) &&
         (*(undefined8 *)(lVar10 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar10 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar10 + 0x18)) {
          *(undefined8 *)(lVar10 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar10,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar8,*(undefined8 *)(*plVar4 + 0x5b0));
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


// ==== public void ButtonSwitchUpgradesOrColors() { }   @0xb0ca54

/* WARNING: Removing unreachable block (ram,0x00c080c0) */
/* WARNING: Removing unreachable block (ram,0x00c080c4) */
/* WARNING: Removing unreachable block (ram,0x00c080e8) */
/* WARNING: Removing unreachable block (ram,0x00c080ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSwitchUpgradesOrColors(void *__this)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  
  if ((*(long *)((long)__this + 0x640) == 0) ||
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x640),0), lVar5 == 0))
  {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
  uVar2 = ~uVar2 & 1;
  if ((bRam0000000001916f57 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f57 = 1;
  }
  if ((*(long *)((long)__this + 0x640) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x640),0), lVar5 != 0))
  {
    UnityEngine_GameObject__SetActive(lVar5,uVar2,0);
    if ((*(long *)((long)__this + 0x648) != 0) &&
       (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x648),0), lVar5 != 0
       )) {
      UnityEngine_GameObject__SetActive(lVar5,~uVar2 & 1,0);
      if (0 < *(int *)(*(long *)(_GUIGarage_TypeInfo + 0xb8) + 4)) {
        if (*(long *)((long)__this + 0x638) == 0) goto LAB_00c08130;
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (0x43480000,*(long *)((long)__this + 0x638),1,0);
      }
      if (uVar2 != 0) {
        if (*(long *)((long)__this + 0x498) == 0) goto LAB_00c08130;
        uVar3 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this + 0x498),0);
        if ((uVar3 & 1) != 0) {
          uVar8 = *(undefined8 *)((long)__this + 0x78);
          uVar9 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar9,uVar8,0);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c08130;
            Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
        }
      }
      uVar8 = *(undefined8 *)((long)__this + 0x610);
      iVar14 = *(int *)(*(long *)(_GUIGarage_TypeInfo + 0xb8) + 4);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      fVar12 = (float)iVar14;
      if (uVar2 == 0) {
        fVar10 = 0.0;
        uVar8 = GUIGarage__OFMEDMJLPNE
                          (0,0xc3960000,0,fVar12,0x40400000,__this,
                           *(undefined8 *)((long)__this + 0x648),0);
        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar8,0);
        plVar4 = *(long **)((long)__this + 0x610);
        if (plVar4 == (long *)0x0) goto LAB_00c08130;
        plVar6 = (long *)((long)__this + 0x618);
      }
      else {
        fVar10 = 0.0;
        uVar8 = GUIGarage__OFMEDMJLPNE
                          (0,0xc3960000,0,fVar12,0x40400000,__this,
                           *(undefined8 *)((long)__this + 0x640),0);
        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar8,0);
        plVar4 = *(long **)((long)__this + 0x610);
        if (plVar4 == (long *)0x0) goto LAB_00c08130;
        plVar6 = (long *)((long)__this + 0x620);
      }
      lVar5 = *plVar6;
      if ((bRam000000000191db6f & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar5,0);
        bRam000000000191db6f = 1;
      }
      lVar7 = plVar4[0x1b];
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (lVar5 != 0) {
          UnityEngine_Sprite__get_rect(lVar5,0);
          if (cRam0000000001916788 == '\0') {
            func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
            cRam0000000001916788 = '\x01';
          }
          fVar10 = fVar10 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
          fVar12 = fVar12 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          *(bool *)(plVar4 + 7) = fVar10 * fVar10 + fVar12 * fVar12 < 9.9999994e-11;
          uVar8 = UnityEngine_Sprite__get_texture(lVar5,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar9 = 0;
LAB_01550934:
          bVar1 = UnityEngine_Object__op_Equality(uVar8,uVar9,0);
          *(byte *)((long)plVar4 + 0x39) = bVar1 & 1;
          plVar4[0x1b] = lVar5;
          UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar4);
          (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
          UnityEngine_UI_Image__TrackSprite(plVar4);
          return;
        }
      }
      else {
        lVar7 = plVar4[0x1b];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar7,lVar5,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (plVar4[0x1b] != 0) {
          UnityEngine_Sprite__get_rect(plVar4[0x1b],0);
          fVar11 = fVar10;
          fVar13 = fVar12;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
          if ((uVar3 & 1) == 0) {
            if (cRam0000000001916788 == '\0') {
              func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
              cRam0000000001916788 = '\x01';
            }
            fVar11 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
            fVar13 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
          }
          else {
            if (lVar5 == 0) goto LAB_01550984;
            UnityEngine_Sprite__get_rect(lVar5,0);
          }
          *(bool *)(plVar4 + 7) = fVar10 == fVar11 && fVar12 == fVar13;
          if (plVar4[0x1b] != 0) {
            uVar8 = UnityEngine_Sprite__get_texture(plVar4[0x1b],0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
            uVar9 = 0;
            if ((uVar3 & 1) != 0) {
              if (lVar5 == 0) goto LAB_01550984;
              uVar9 = UnityEngine_Sprite__get_texture(lVar5,0);
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
LAB_00c08130:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatUnlockOneMoreLevel() { }   @0xb0ce18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatUnlockOneMoreLevel(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  void *pvStack_68;
  
  if ((bRam0000000001916f7d & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f7d = 1;
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
LAB_00c0cfe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar5 = DAFNMLEKHAD__DCOOPMCEMNE(lVar5,0);
  if (lVar5 == 0) {
    return;
  }
  uVar15 = *(undefined4 *)(lVar5 + 0x10);
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined4 **)(_Level_TypeInfo + 0xb8) = uVar15;
  DJKGLJOCFCE__MHHDNMHEMKH(lVar5,0x29a,0);
  iVar2 = *(int *)(lVar5 + 0x10);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar5 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar5 == 0)) goto LAB_00c0cfe0;
  iVar2 = iVar2 + 1;
  if (iVar2 < *(int *)(lVar5 + 0x18)) {
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
    if (lVar5 == 0) goto LAB_00c0cfe0;
    DAFNMLEKHAD__NODNJNKEFKM(lVar5,0,iVar2,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
  pvVar6 = *(void **)((long)__this + 0x70);
  if (pvVar6 == (void *)0x0) goto LAB_00c0cfe0;
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
  lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar8 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar8, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
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
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar8, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
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
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar8, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar8;
  uVar8 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar8,0,0);
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,pvVar6,0);
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
  uVar9 = UnityEngine_Object__op_Equality(uVar8,pvVar6,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar11 = (void *)UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (((ulong)pvVar11 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar11 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar11 = GUIWindow__FEHHGIGJIKL(pvVar11);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(pvVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(pvVar11,0);
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
      if (((uVar9 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar11,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar11,uVar8,0);
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
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
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
            uVar8 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
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
                    pvVar11 = *(void **)(lVar5 + 0x70);
                    fVar16 = 0.82;
                    fVar14 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar11 = *(void **)(lVar5 + 0x70);
                    fVar16 = 0.87;
                    fVar14 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar11 = *(void **)(lVar5 + 0x70);
                  fVar16 = 0.95;
                  fVar14 = 55.0;
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
                  pvVar11 = *(void **)(lVar5 + 0x60);
                  fVar16 = 0.82;
                  fVar14 = 20.0;
                }
                else {
                  pvVar11 = *(void **)(lVar5 + 0x60);
                  fVar16 = 0.87;
                  fVar14 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                pvVar11 = *(void **)(lVar5 + 0x60);
                fVar14 = -5.0;
                fVar16 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar6,pvVar11,fVar14,fVar16);
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
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
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
            uVar8 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar5 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar11 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(pvVar11,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar11 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            fVar16 = 0.85;
                            fVar14 = 60.0;
                          }
                          else {
                            fVar14 = 70.0;
                            fVar16 = 0.0;
                          }
                        }
                        else {
                          fVar14 = 20.0;
                          fVar16 = 0.0;
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
                    pvStack_68 = *(void **)(lVar5 + 0xe8);
                    fVar16 = 0.95;
                    fVar14 = 70.0;
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
                pvStack_68 = *(void **)(lVar5 + 0xe8);
                fVar14 = 30.0;
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
                  pvStack_68 = *(void **)(lVar5 + 0xb0);
                  fVar16 = 0.93;
                  fVar14 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xb0);
                fVar14 = -25.0;
              }
LAB_00c4729c:
              fVar16 = 0.0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0x188);
                fVar14 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar5 + 0x188);
              if (1.8 <= fVar14) {
                fVar16 = 0.82;
                fVar14 = 38.0;
              }
              else {
                fVar16 = 0.95;
                fVar14 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar6,pvStack_68,fVar14,fVar16);
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
                uVar8 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(pvVar6,uVar8,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar8 = UnityEngine_Object__Instantiate_object_
                                      (uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar5 + 0x90) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *puVar12 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    uVar8 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,uVar8,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
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
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar8, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
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
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar8, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar10 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  uVar8 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar8,0,0);
  uVar9 = Main__KCHOEBEIOCE(0);
  if ((uVar9 & 1) != 0) {
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
         (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar5 + 0x50);
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
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar5 + 0x68);
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
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar5 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
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
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
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
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar5,0);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar5 == 0))
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
    UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar5 + 0x78);
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
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar5 + 0x80);
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
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar5 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
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
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) == 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
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
      uVar9 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
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
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar9 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
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
      pvVar6 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar6 == (void *)0x0) goto LAB_00c485b8;
      pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,-1,true);
      if (pvVar6 == (void *)0x0) {
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
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar6);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
    }
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar5,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar5 == 0) || (pvVar6 = *(void **)(lVar5 + 0x20), pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar6);
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


// ==== private void NFDIHKCAIKE() { }   @0xb0dbe4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__NFDIHKCAIKE(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(long *)((long)__this + 0x4b0) != 0) {
    UnityEngine_UI_Image__set_sprite
              (*(long *)((long)__this + 0x4b0),*(undefined8 *)((long)__this + 0x378),0);
    lVar4 = *(long *)((long)__this + 0x560);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar2 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_00c0dc88;
          if (*(char *)(lVar2 + 0x70) != '\0') {
            lVar3 = *(long *)(lVar2 + 0x30);
            if (lVar3 == 0) goto LAB_00c0dc88;
            if ((*(int *)(lVar3 + 0x18) == 1) && (0 < *(int *)(lVar3 + 0x20))) {
              *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) * 0x12;
              ShopItem__KGOOJPBMMBK(lVar2,0);
            }
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar1);
      }
      return;
    }
  }
LAB_00c0dc88:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void LLAEHJGOFLG() { }   @0xb0b3a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__LLAEHJGOFLG(void *__this)

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


// ==== public void NJHAGLAALCJ(bool MDIDBDKGGJI) { }   @0xb0e5a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__NJHAGLAALCJ(void *__this,bool MDIDBDKGGJI)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001916f88 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f88 = 1;
  }
  bVar1 = GUIGarage__DCFAACLJPKH(__this);
  if (bVar1) {
    if (!MDIDBDKGGJI) {
      if ((*(long *)((long)__this + 0x268) != 0) &&
         (lVar5 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x268),0),
         lVar5 != 0)) {
        UnityEngine_Transform__SetParent(lVar5,*(undefined8 *)((long)__this + 0x278),0);
        if (*(long *)((long)__this + 0x270) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x270),0,0);
          if ((*(long *)((long)__this + 0x1c0) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1c0),0),
             lVar5 != 0)) {
            if (pcRam000000000191c3f8 == (code *)0x0) {
              pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
            }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c3f8)(lVar5,0);
            return;
          }
        }
      }
LAB_00c0e728:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar5 != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar5 == 0) goto LAB_00c0e728;
      }
      uVar2 = Level__get_IsTutorial(lVar5,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)((long)__this + 0x268) != 0) {
          lVar5 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x268),0);
          if ((*(long *)((long)__this + 0x70) != 0) &&
             (uVar3 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x70),0),
             lVar5 != 0)) {
            UnityEngine_Transform__SetParent(lVar5,uVar3,0);
            if (*(long *)((long)__this + 0x270) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x270),1,0);
              if (*(long *)((long)__this + 0x1c8) != 0) {
                UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 0x1c8),0);
              }
              lVar5 = GUIGarage__KEPPKPEAEOO(__this);
              *(long *)((long)__this + 0x1c8) = lVar5;
              if (lVar5 == 0) {
                func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                uVar4 = func_0x00a67b44();
                uVar3 = func_0x00a67914(&Str_routine_is_null);
                System_NullReferenceException___ctor(uVar4,uVar3,0);
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
                  (*pcRam000000000191c488)(__this,lVar5);
                  return;
                }
                func_0x00a67914(&System_ArgumentException_TypeInfo);
                uVar4 = func_0x00a67b44();
                uVar3 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
                System_ArgumentException___ctor(uVar4,uVar3,0);
              }
              uVar3 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
              auVar6 = func_0x00a67a20(uVar4,uVar3);
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
              return;
            }
          }
        }
        goto LAB_00c0e728;
      }
    }
  }
  return;
}


// ==== private void Update() { }   @0xb0f67c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__Update(void *__this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((bRam0000000001916f8d & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&GUIGarage_TypeInfo);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f8d = 1;
  }
  if ((*(long *)((long)__this + 0xa8) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xa8),0), lVar4 == 0))
  goto LAB_00c0ffb4;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
  if ((uVar5 & 1) == 0) {
    if ((*(long *)((long)__this + 0x78) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x78),0), lVar4 == 0)
       ) goto LAB_00c0ffb4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if ((*(long *)((long)__this + 0x70) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x70),0),
         lVar4 == 0)) goto LAB_00c0ffb4;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)((long)__this + 0x100) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x100),0),
           lVar4 == 0)) goto LAB_00c0ffb4;
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar5 & 1) != 0) {
          uVar6 = *(undefined8 *)((long)__this + 0x40);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c0ffb4;
            RatingController__JIGMJDHGBCJ(*(long *)((long)__this + 0x40),0);
          }
        }
        goto LAB_00c0fd8c;
      }
      if ((*(long *)((long)__this + 0x150) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x150),0),
         lVar4 == 0)) goto LAB_00c0ffb4;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
      if ((((uVar5 & 1) != 0) &&
          (fVar11 = (float)UnityEngine_Time__get_time(0),
          0.7 < fVar11 - *(float *)((long)__this + 0x2e8))) &&
         (((uVar5 = UnityEngine_Input__get_anyKey(0), (uVar5 & 1) != 0 &&
           (uVar5 = UnityEngine_Input__GetKeyDown(0x1b,0), (uVar5 & 1) == 0)) ||
          (iVar3 = UnityEngine_Input__get_touchCount(0), 0 < iVar3)))) {
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
        if (lVar4 == 0) goto LAB_00c0ffb4;
        DAFNMLEKHAD__MAGBBGBDPDJ(lVar4,*(int *)(lVar4 + 0x108) + 1,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar4 == 0) goto LAB_00c0ffb4;
        if (*(int *)(lVar4 + 0x108) == 1) {
          uVar6 = GUIGarage__IHHAEHDPGIC(__this);
          UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar6,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar3 = Main__FAOGGIELDDF();
        if (0x20 < iVar3) {
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
          if (lVar4 == 0) goto LAB_00c0ffb4;
          if (*(int *)(lVar4 + 0x108) == 2) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0ffb4;
            uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
              goto LAB_00c0ffb4;
              NotificationsManager__KHDFDGMBOIJ(lVar4,0);
            }
          }
        }
        uVar12 = UnityEngine_Time__get_time(0);
        **(undefined4 **)(_GUIGarage_TypeInfo + 0xb8) = uVar12;
        if (*(long *)((long)__this + 0x150) == 0) goto LAB_00c0ffb4;
        GUIWindow__JGDCBENNDFO(*(long *)((long)__this + 0x150),1,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = Main__KCHOEBEIOCE(0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar4 == 0))
          goto LAB_00c0ffb4;
          GamePadController__KCAHLEAKNNK(lVar4,0);
        }
      }
      fVar11 = (float)UnityEngine_Time__get_time(0);
      if (0.5 < fVar11 - *(float *)((long)__this + 0x348)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar4 == 0))
        goto LAB_00c0ffb4;
        uVar7 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar7) {
          uVar10 = 0;
          do {
            if (uVar7 <= uVar10) goto LAB_00c0ffb8;
            pvVar9 = *(void **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (pvVar9 == (void *)0x0) goto LAB_00c0ffb4;
            bVar2 = Level__get_IsEvent(pvVar9);
            if (bVar2) {
              Level__FKJAANMGOMP(pvVar9,0);
            }
            uVar7 = *(uint *)(lVar4 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar7);
        }
        uVar12 = UnityEngine_Time__get_time(0);
        *(undefined4 *)((long)__this + 0x348) = uVar12;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar4 != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar4 == 0) goto LAB_00c0ffb4;
        }
        Level__FOOFLNEEJFI(lVar4,0);
        pvVar9 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (pvVar9 == (void *)0x0) goto LAB_00c0ffb4;
        bVar2 = Level__get_IsEvent(pvVar9);
        if (bVar2) {
          uVar6 = *(undefined8 *)((long)__this + 0x48);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c0ffb4;
            RatingEventController__JIGMJDHGBCJ(*(long *)((long)__this + 0x48),0);
          }
        }
      }
      if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (-1 < **(int **)(_Level_TypeInfo + 0xb8)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar4 == 0))
        goto LAB_00c0ffb4;
        uVar7 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar7) {
          uVar10 = 0;
          do {
            if (uVar7 <= uVar10) {
LAB_00c0ffb8:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            pvVar9 = *(void **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (pvVar9 == (void *)0x0) goto LAB_00c0ffb4;
            iVar3 = *(int *)((long)pvVar9 + 0x10);
            if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (iVar3 == **(int **)(_Level_TypeInfo + 0xb8) + 1) {
LAB_00c0fc68:
              Level__BBGODPBKHPF(pvVar9,0);
            }
            else {
              bVar2 = Level__get_IsEvent(pvVar9);
              if (bVar2) {
                iVar3 = *(int *)((long)pvVar9 + 0x30);
                if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (iVar3 == **(int **)(_Level_TypeInfo + 0xb8)) goto LAB_00c0fc68;
              }
            }
            uVar7 = *(uint *)(lVar4 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar7);
        }
      }
    }
    else {
      if (*(char *)((long)__this + 0x470) == '\0') {
        if (*(char *)((long)__this + 0x471) != '\0') {
          puVar8 = (undefined8 *)((long)__this + 0x440);
          goto LAB_00c0fd70;
        }
      }
      else {
        puVar8 = (undefined8 *)((long)__this + 0x448);
LAB_00c0fd70:
        GUIGarage__HHOKAGMFIHE(__this,*puVar8);
      }
      GUIGarage__DGGEFHKGJCD(__this);
    }
    GUIGarage__KMDEAFLJMND(__this);
  }
  else {
    if ((*(long *)((long)__this + 0x668) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)__this + 0x668) + 0x20), lVar4 == 0)) goto LAB_00c0ffb4;
    fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
    if (-760.0 < fVar11) {
      if (*(int *)((long)__this + 0x6c8) != 0) {
        uVar6 = 0;
        goto LAB_00c0fcd4;
      }
      goto LAB_00c0fcdc;
    }
    if ((*(long *)((long)__this + 0x668) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)__this + 0x668) + 0x20), lVar4 == 0)) goto LAB_00c0ffb4;
    fVar11 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
    if (fVar11 <= -3060.0) {
      if (*(int *)((long)__this + 0x6c8) != 2) {
        uVar6 = 2;
        goto LAB_00c0fcd4;
      }
    }
    else if (*(int *)((long)__this + 0x6c8) != 1) {
      uVar6 = 1;
LAB_00c0fcd4:
      GUIGarage__BCDFPFLJKPJ(__this,uVar6,0);
    }
LAB_00c0fcdc:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0ffb4;
    Menu__MEHOMCOOPFM(**(long **)(_Menu_TypeInfo + 0xb8),0);
  }
LAB_00c0fd8c:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0ffb4;
  uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((*(long *)((long)__this + 0x1e0) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)__this + 0x1e0) + 0x20), lVar4 == 0)) goto LAB_00c0ffb4;
    cVar1 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x28);
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if (cVar1 == '\0') {
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)((long)__this + 0x1e0);
        if (lVar4 == 0) goto LAB_00c0ffb4;
        if (*(char *)(lVar4 + 0x34) == '\0') {
          GUIProgressBarWWW__APFABOGFKED(lVar4,0);
        }
      }
    }
    else if ((uVar5 & 1) == 0) {
      if ((*(long *)((long)__this + 0x1e0) == 0) ||
         (lVar4 = *(long *)(*(long *)((long)__this + 0x1e0) + 0x20), lVar4 == 0)) goto LAB_00c0ffb4;
      UnityEngine_GameObject__SetActive(lVar4,1,0);
    }
    if ((*(long *)((long)__this + 0xb8) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xb8),0), lVar4 == 0)
       ) goto LAB_00c0ffb4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c0ffb4;
      RateMe__EBAIMKLHIPA(*(long *)((long)__this + 0x50),0);
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
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
    if (lVar4 == 0) goto LAB_00c0ffb4;
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)((long)__this + 0x1a8) == 0) goto LAB_00c0ffb4;
      uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x1a8),0);
      if (((uVar5 & 1) == 0) && (iVar3 = UnityEngine_Input__get_touchCount(0), iVar3 == 5)) {
        GUIGarage__ButtonLogsShow(__this);
      }
    }
  }
  if (0 < *(int *)((long)__this + 0x6e8)) {
    if (*(long *)((long)__this + 0x1d0) == 0) {
LAB_00c0ffb4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x1d0),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)((long)__this + 0x6e8) < 2) {
        *(int *)((long)__this + 0x6e8) = *(int *)((long)__this + 0x6e8) + 1;
      }
      else {
        GUIGarage__FHCEPLEAMGA(__this);
        *(undefined4 *)((long)__this + 0x6e8) = 0;
      }
    }
  }
  return;
}


// ==== private void IMJEJKHBIMO() { }   @0xb10b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__IMJEJKHBIMO(void *__this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  float in_s3;
  float fVar9;
  
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar2 == 0) || (uVar3 = DAFNMLEKHAD__DPJPKMHLGMO(lVar2,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar2 = 0x770;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0x768;
  }
  lVar2 = *(long *)((long)__this + lVar2);
  if ((bRam000000000191db6f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
    bRam000000000191db6f = 1;
  }
  lVar6 = plVar5[0x1b];
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
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
      uVar4 = UnityEngine_Sprite__get_texture(lVar2,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = 0;
LAB_01550934:
      bVar1 = UnityEngine_Object__op_Equality(uVar4,uVar7,0);
      *(byte *)((long)plVar5 + 0x39) = bVar1 & 1;
      plVar5[0x1b] = lVar2;
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar5);
      (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      UnityEngine_UI_Image__TrackSprite(plVar5);
      return;
    }
  }
  else {
    lVar6 = plVar5[0x1b];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar6,lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (plVar5[0x1b] != 0) {
      UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
      fVar8 = in_s2;
      fVar9 = in_s3;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar3 & 1) == 0) {
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
        uVar4 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
        uVar7 = 0;
        if ((uVar3 & 1) != 0) {
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


// ==== public void MIFJGEDDEML() { }   @0xb10d9c

/* WARNING: Removing unreachable block (ram,0x00c46a08) */
/* WARNING: Removing unreachable block (ram,0x00c46a18) */
/* WARNING: Removing unreachable block (ram,0x00c475f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MIFJGEDDEML(void *__this)

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
  float fVar16;
  void *pvStack_68;
  
  if ((bRam0000000001916f93 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_HP);
    func_0x00a67900(&Str_SECOND);
    func_0x00a67900(&Str____1_);
    bRam0000000001916f93 = 1;
  }
  plVar12 = *(long **)((long)__this + 0x4e8);
  lVar5 = func_0x00a679a0(_string___TypeInfo,5);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  uVar6 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
  if (lVar5 == 0) goto LAB_00c10f6c;
  if ((*(int *)(lVar5 + 0x18) == 0) ||
     (*(undefined8 *)(lVar5 + 0x20) = uVar6, *(int *)(lVar5 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x28) = _Str__;
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
  uVar6 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
  if ((*(uint *)(lVar5 + 0x18) < 3) ||
     (*(undefined8 *)(lVar5 + 0x30) = uVar6, *(uint *)(lVar5 + 0x18) == 3)) goto LAB_00c10f68;
  *(undefined8 *)(lVar5 + 0x38) = _Str____1_;
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
  uVar6 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
  if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_00c10f68;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  uVar6 = System_String__Concat(lVar5,0);
  if (plVar12 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x5b0));
  pvVar7 = *(void **)((long)__this + 200);
  if (pvVar7 == (void *)0x0) goto LAB_00c10f6c;
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
  pvVar10 = (void *)UnityEngine_Object__op_Inequality(uVar6,0,0);
  pvVar10 = GUIWindow__FEHHGIGJIKL(pvVar10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(pvVar10,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(pvVar10,0);
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
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar10,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      uVar6 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar10,uVar6,0);
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
                    pvVar10 = *(void **)(lVar5 + 0x70);
                    fVar16 = 0.82;
                    fVar14 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar10 = *(void **)(lVar5 + 0x70);
                    fVar16 = 0.87;
                    fVar14 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar10 = *(void **)(lVar5 + 0x70);
                  fVar16 = 0.95;
                  fVar14 = 55.0;
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
                  pvVar10 = *(void **)(lVar5 + 0x60);
                  fVar16 = 0.82;
                  fVar14 = 20.0;
                }
                else {
                  pvVar10 = *(void **)(lVar5 + 0x60);
                  fVar16 = 0.87;
                  fVar14 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                pvVar10 = *(void **)(lVar5 + 0x60);
                fVar14 = -5.0;
                fVar16 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar7,pvVar10,fVar14,fVar16);
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
                            (lVar5,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar10 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(pvVar10,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar10 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            fVar16 = 0.85;
                            fVar14 = 60.0;
                          }
                          else {
                            fVar14 = 70.0;
                            fVar16 = 0.0;
                          }
                        }
                        else {
                          fVar14 = 20.0;
                          fVar16 = 0.0;
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
                    pvStack_68 = *(void **)(lVar5 + 0xe8);
                    fVar16 = 0.95;
                    fVar14 = 70.0;
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
                pvStack_68 = *(void **)(lVar5 + 0xe8);
                fVar14 = 30.0;
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
                  pvStack_68 = *(void **)(lVar5 + 0xb0);
                  fVar16 = 0.93;
                  fVar14 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xb0);
                fVar14 = -25.0;
              }
LAB_00c4729c:
              fVar16 = 0.0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0x188);
                fVar14 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar5 + 0x188);
              if (1.8 <= fVar14) {
                fVar16 = 0.82;
                fVar14 = 38.0;
              }
              else {
                fVar16 = 0.95;
                fVar14 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar7,pvStack_68,fVar14,fVar16);
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
  puVar11[1] = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    uVar6 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,uVar6,0);
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
  uVar9 = Main__KCHOEBEIOCE(0);
  if ((uVar9 & 1) != 0) {
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
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar5,0);
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
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
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
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
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
      pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar7 == (void *)0x0) goto LAB_00c485b8;
      pvVar7 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar7,-1,true);
      if (pvVar7 == (void *)0x0) {
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
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar7);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
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
        if ((lVar5 == 0) || (pvVar7 = *(void **)(lVar5 + 0x20), pvVar7 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar7);
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


// ==== public void EOFBGHALHON() { }   @0xb1124c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__EOFBGHALHON(void *__this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
  lVar1 = *(long *)((long)__this + 0x4f0);
  if (lVar1 != 0) {
    fVar7 = 50.0;
    lVar4 = 0;
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) {
        return;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
LAB_00c1130c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar1 = *(long *)(lVar1 + lVar4 + 0x20);
      if (lVar1 == 0) break;
      fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
      lVar2 = *(long *)((long)__this + 0x4f8);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_00c1130c;
      lVar2 = lVar2 + lVar4;
      uVar3 = uVar3 + 1;
      fVar7 = fVar7 - fVar5 * 50.0 * *(float *)(lVar2 + 0x24);
      lVar4 = lVar4 + 8;
      UnityEngine_RectTransform__set_anchoredPosition
                (fVar6 - fVar5 * 50.0 * *(float *)(lVar2 + 0x20),fVar7,lVar1,0);
      lVar1 = *(long *)((long)__this + 0x4f0);
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatAddGold() { }   @0xb11874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatAddGold(void *__this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
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
  
  if ((bRam0000000001916f9c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f9c = 1;
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
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar3 = DAFNMLEKHAD__HPDEBBJNCIK(lVar6,0);
  iVar3 = iVar3 + 1000;
  if ((bRam0000000001916f23 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,iVar3,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_g);
    bRam0000000001916f23 = 1;
  }
  uStack_50 = *(undefined4 *)(lVar6 + 0x4c);
  uStack_58 = *(undefined8 *)(lVar6 + 0x44);
  uStack_60 = *(undefined8 *)(lVar6 + 0x3c);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,iVar3,0);
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  *(undefined4 *)(lVar6 + 0x4c) = uStack_88;
  *(undefined8 *)(lVar6 + 0x44) = uStack_90;
  *(undefined8 *)(lVar6 + 0x3c) = uStack_98;
  uStack_a0 = uStack_88;
  uStack_a8 = uStack_90;
  uStack_b0 = uStack_98;
  uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(_Str_g,uVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
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
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00becd9c;
      GUIGarage__GMHOEBNFADN(lVar5,uVar1,iVar3,0,0);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uStack_c0 = *(undefined4 *)(lVar6 + 0x4c);
        uStack_c8 = *(undefined8 *)(lVar6 + 0x44);
        uStack_d0 = *(undefined8 *)(lVar6 + 0x3c);
        lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
        if (lVar6 != 0) {
          return;
        }
      }
    }
  }
LAB_00becd9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsNotifications() { }   @0xb12008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsNotifications(void *__this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  void *__this_00;
  long lVar6;
  undefined8 uVar7;
  float in_s2;
  float fVar8;
  float in_s3;
  float fVar9;
  
  if ((bRam0000000001916fa1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916fa1 = 1;
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
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar2 == 0) || (bVar1 = DAFNMLEKHAD__PHOGLOAEGLO(lVar2,0), __this_00 == (void *)0x0)) {
LAB_00c121d8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__IEECMAPKMJI(__this_00,(bool)(~bVar1 & 1));
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), lVar2 == 0)) goto LAB_00c121d8;
  AnalyticsController__GINNFMLCJBK(lVar2,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 == 0) goto LAB_00c121d8;
  uVar3 = DAFNMLEKHAD__PHOGLOAEGLO(lVar2,0);
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_NotificationsManager_TypeInfo);
    if ((uVar3 & 1) != 0) goto LAB_00c121a0;
LAB_00c121b8:
    NotificationsManager__CMOPLEDPKKH(false);
  }
  else {
    if ((uVar3 & 1) == 0) goto LAB_00c121b8;
LAB_00c121a0:
    NotificationsManager__BLNLJPJIGHC(0);
  }
  if ((bRam0000000001916f67 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f67 = 1;
  }
  plVar5 = *(long **)((long)__this + 0x758);
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
  if ((lVar2 == 0) || (uVar3 = DAFNMLEKHAD__PHOGLOAEGLO(lVar2,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar2 = 0x710;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0x718;
  }
  lVar2 = *(long *)((long)__this + lVar2);
  if ((bRam000000000191db6f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar2,0);
    bRam000000000191db6f = 1;
  }
  lVar6 = plVar5[0x1b];
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
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
      uVar4 = UnityEngine_Sprite__get_texture(lVar2,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = 0;
LAB_01550934:
      bVar1 = UnityEngine_Object__op_Equality(uVar4,uVar7,0);
      *(byte *)((long)plVar5 + 0x39) = bVar1 & 1;
      plVar5[0x1b] = lVar2;
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar5);
      (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      UnityEngine_UI_Image__TrackSprite(plVar5);
      return;
    }
  }
  else {
    lVar6 = plVar5[0x1b];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar6,lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (plVar5[0x1b] != 0) {
      UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
      fVar8 = in_s2;
      fVar9 = in_s3;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar3 & 1) == 0) {
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
        uVar4 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
        uVar7 = 0;
        if ((uVar3 & 1) != 0) {
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


// ==== private bool DCFAACLJPKH() { }   @0xb0e72c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage__DCFAACLJPKH(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916fa6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fa6 = 1;
  }
  pvVar1 = *(void **)((long)__this + 0x370);
  if (pvVar1 == (void *)0x0) {
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
    pvVar1 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    pvVar1 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar1,0);
    *(void **)((long)__this + 0x370) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return false;
    }
  }
  if (*(int *)((long)pvVar1 + 0x3c) != 0) {
    return false;
  }
  return true;
}


// ==== public void FJCMAMFOKNL() { }   @0xb13b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__FJCMAMFOKNL(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fab & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fab = 1;
  }
  if (*(long *)((long)__this + 0x3b0) != 0) {
    plVar3 = *(long **)(*(long *)((long)__this + 0x3b0) + 0x28);
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
    if (lVar1 != 0) {
      uStack_24 = DAFNMLEKHAD__LOCFCFJIAIH(lVar1,0);
      uVar2 = System_Int32__ToString(&uStack_24,0);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
        if (*(long *)((long)__this + 0x3c0) != 0) {
          plVar3 = *(long **)(*(long *)((long)__this + 0x3c0) + 0x28);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar1 != 0) {
            uStack_24 = DAFNMLEKHAD__HPDEBBJNCIK(lVar1,0);
            uVar2 = System_Int32__ToString(&uStack_24,0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
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


// ==== public void ButtonBuyUpgrade(ShopItem item) { }   @0xb14d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonBuyUpgrade(void *__this,void *item)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iStack_64;
  long lStack_58;
  
  if ((bRam0000000001916fb0 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_LVL);
    func_0x00a67900(&Str_BUY);
    func_0x00a67900(&Str__DESC);
    func_0x00a67900(&Str_BOUGHT);
    bRam0000000001916fb0 = 1;
  }
  iStack_64 = 0;
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
  if (pvVar8 == (void *)0x0) goto LAB_00c15490;
  pvVar8 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar8,-1,true);
  if (pvVar8 != (void *)0x0) {
    *(void **)((long)__this + 0x568) = item;
    uVar9 = UnityEngine_Input__GetKey(0x130,0);
    if ((uVar9 & 1) == 0) {
      if ((*(long *)((long)__this + 0x98) != 0) &&
         (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (*(long *)((long)__this + 0x98),&lStack_58,
                     _Method_UnityEngine_Component_GetComponent_RectTransform___),
         item != (void *)0x0)) {
        iVar4 = ShopItem__HJICMDCENKN(item,0xffffffff,0);
        iVar5 = ShopItem__EKBFKEBGGOP(item);
        plVar13 = *(long **)((long)__this + 0x5b0);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Translate_TypeInfo);
        }
        lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
        if (lVar10 != 0) {
          if (iVar4 == iVar5) {
            uVar11 = Translate__JJJNIPAKLJF(lVar10,_Str_BOUGHT,0);
            if (plVar13 == (long *)0x0) goto LAB_00c15490;
            (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x5b0));
            if ((*(long *)((long)__this + 0x5d8) == 0) ||
               (lVar10 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x5d8),0),
               lVar10 == 0)) goto LAB_00c15490;
            UnityEngine_GameObject__SetActive(lVar10,0,0);
            if (*(long *)((long)__this + 0x5e8) == 0) goto LAB_00c15490;
            iVar4 = iVar4 + -1;
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x5e8),0,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
            if ((uVar9 & 1) != 0) {
              if (lStack_58 == 0) goto LAB_00c15490;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43a78000,lStack_58,1,0);
            }
            bVar2 = false;
          }
          else {
            uVar11 = Translate__JJJNIPAKLJF(lVar10,_Str_BUY,0);
            if (plVar13 == (long *)0x0) goto LAB_00c15490;
            (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x5b0));
            if ((*(long *)((long)__this + 0x5d8) == 0) ||
               (lVar10 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x5d8),0),
               lVar10 == 0)) goto LAB_00c15490;
            UnityEngine_GameObject__SetActive(lVar10,1,0);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c15490;
            uVar6 = Menu__LDBOEHFLNFA(**(long **)(_Menu_TypeInfo + 0xb8),item,0);
            if (*(long *)((long)__this + 0x5e8) == 0) goto LAB_00c15490;
            UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x5e8),uVar6 & 1,0);
            lVar10 = *(long *)((long)__this + 0x5d8);
            if (lVar10 == 0) goto LAB_00c15490;
            uVar7 = 0xc3820000;
            if ((uVar6 & 1) == 0) {
              uVar7 = 0;
            }
            UnityEngine_RectTransform__get_anchoredPosition(lVar10,0);
            UnityEngine_RectTransform__set_anchoredPosition(uVar7,lVar10,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
            if ((uVar9 & 1) == 0) {
              bVar2 = true;
            }
            else {
              if (lStack_58 == 0) goto LAB_00c15490;
              bVar2 = true;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43cd0000,lStack_58,1,0);
            }
          }
          if ((*(long *)((long)item + 0x60) != 0) && (*(long *)((long)__this + 0x5a8) != 0)) {
            UnityEngine_UI_Image__set_sprite
                      (*(long *)((long)__this + 0x5a8),
                       *(undefined8 *)(*(long *)((long)item + 0x60) + 0xd8),0);
            plVar13 = *(long **)((long)__this + 0x5a8);
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x3f8))(plVar13,*(undefined8 *)(*plVar13 + 0x400));
              plVar13 = *(long **)((long)__this + 0x5b8);
              lVar10 = func_0x00a679a0(_string___TypeInfo,5);
              if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Translate_TypeInfo);
              }
              if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                 (uVar11 = Translate__JJJNIPAKLJF
                                     (**(long **)(_Translate_TypeInfo + 0xb8),
                                      *(undefined8 *)((long)item + 0x20),0), lVar10 != 0)) {
                if ((*(int *)(lVar10 + 0x18) != 0) &&
                   (*(undefined8 *)(lVar10 + 0x20) = uVar11, *(int *)(lVar10 + 0x18) != 1)) {
                  iStack_64 = iVar4 + 1;
                  *(undefined8 *)(lVar10 + 0x28) = _Str__;
                  uVar11 = System_Int32__ToString(&iStack_64,0);
                  if ((2 < *(uint *)(lVar10 + 0x18)) &&
                     (*(undefined8 *)(lVar10 + 0x30) = uVar11, *(uint *)(lVar10 + 0x18) != 3)) {
                    *(undefined8 *)(lVar10 + 0x38) = _Str__;
                    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
                      uVar11 = Translate__JJJNIPAKLJF
                                         (**(long **)(_Translate_TypeInfo + 0xb8),_Str_LVL,0);
                      if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_00c15494;
                      *(undefined8 *)(lVar10 + 0x40) = uVar11;
                      uVar11 = System_String__Concat(lVar10,0);
                      if (plVar13 != (long *)0x0) {
                        (**(code **)(*plVar13 + 0x5a8))
                                  (plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x5b0));
                        plVar13 = *(long **)((long)__this + 0x5c0);
                        lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
                        uVar11 = System_String__Concat
                                           (*(undefined8 *)((long)item + 0x20),_Str__DESC,0);
                        if ((lVar10 != 0) &&
                           (uVar11 = Translate__JJJNIPAKLJF(lVar10,uVar11,0), plVar13 != (long *)0x0
                           )) {
                          (**(code **)(*plVar13 + 0x5a8))
                                    (plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x5b0));
                          lVar10 = *(long *)((long)__this + 0x5c8);
                          iVar4 = ShopItem__HJICMDCENKN(item,0xffffffff,0);
                          bVar3 = ShopItem__MLHKDEGPJGI(item,iVar4);
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30(_Menu_TypeInfo);
                          }
                          if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                              (lVar12 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20),
                              lVar12 != 0)) && (lVar10 != 0)) {
                            lVar1 = 0x390;
                            if (!bVar3) {
                              lVar1 = 0x380;
                            }
                            UnityEngine_UI_Image__set_sprite
                                      (lVar10,*(undefined8 *)(lVar12 + lVar1),0);
                            plVar13 = *(long **)((long)__this + 0x5d0);
                            uVar7 = ShopItem__HJICMDCENKN(item,0xffffffff,0);
                            iStack_64 = ShopItem__OKADMIPJHCA(item,uVar7,0);
                            uVar11 = System_Int32__ToString(&iStack_64,0);
                            if (plVar13 != (long *)0x0) {
                              (**(code **)(*plVar13 + 0x5a8))
                                        (plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x5b0));
                              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar9 = Main__KCHOEBEIOCE(0);
                              if ((uVar9 & 1) != 0) {
                                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
                                if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0))
                                goto LAB_00c15490;
                                if (*(char *)(*(long *)(lVar10 + 0x58) + 0x30) != '\0') {
                                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                    lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
                                    if (lVar10 == 0) goto LAB_00c15490;
                                  }
                                  if (*(long *)(lVar10 + 0x58) == 0) goto LAB_00c15490;
                                  GamePadController__BBNJMJMLBCA(*(long *)(lVar10 + 0x58),0);
                                }
                              }
                              if (*(long *)((long)__this + 0x98) != 0) {
                                GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0x98),1,0);
                                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                uVar9 = Main__KCHOEBEIOCE(0);
                                if ((uVar9 & 1) == 0) {
                                  return;
                                }
                                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
                                if ((lVar10 != 0) && (*(long *)(lVar10 + 0x58) != 0)) {
                                  if (*(char *)(*(long *)(lVar10 + 0x58) + 0x30) == '\0') {
                                    return;
                                  }
                                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                    lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
                                    if (lVar10 == 0) goto LAB_00c15490;
                                  }
                                  lVar10 = *(long *)(lVar10 + 0x58);
                                  if (bVar2) {
                                    if (*(long *)((long)__this + 0x5d8) == 0) goto LAB_00c15490;
                                    uVar11 = UnityEngine_Component__get_gameObject
                                                       (*(long *)((long)__this + 0x5d8),0);
                                  }
                                  else {
                                    uVar11 = *(undefined8 *)((long)__this + 0x5e0);
                                  }
                                  if (lVar10 != 0) {
                                    GamePadController__FJJJEMJAMGO(lVar10,uVar11,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00c15490;
                  }
                }
LAB_00c15494:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
            }
          }
        }
      }
LAB_00c15490:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIGarage__ButtonBuyUpgradeConfirm(__this,0);
  }
  return;
}


// ==== public void ButtonRateMeNever() { }   @0xb157b4

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonRateMeNever(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  void *pvStack_68;
  
  if ((bRam0000000001916fb4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fb4 = 1;
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
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__DCLEGMOJBPN(lVar5,0xffffffff,0);
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar5 == 0) {
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
  plVar15 = (long *)(lVar5 + 0x20);
  lVar12 = *plVar15;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x30), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x140), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x138), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x150), lVar12 == 0)) ||
     (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
  if ((uVar6 & 1) != 0) {
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
  uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0xa8), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar12 = *(long *)(*plVar15 + 0x178), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37408;
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x170), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    pvVar7 = (void *)*plVar15;
    if ((uVar6 & 1) == 0) {
      if (pvVar7 != (void *)0x0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(pvVar7,1);
        if (*(long *)((long)pvVar7 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar7 + 0x310),0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)((long)pvVar7 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)((long)pvVar7 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(pvVar7,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar5 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar5 == 0) goto LAB_00c0b6e0;
          }
          uVar13 = System_Int32__ToString(lVar5 + 0x10,0);
          uVar13 = System_String__Concat(_Str_Hide_lvl__,uVar13,0);
          Main__GEMDEAMAGPG(uVar13,0,0);
          uVar6 = Main__KCHOEBEIOCE(0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar5 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar5,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) = 0;
          GUIGarage__AGFKGLDJDLE(pvVar7);
        }
        *(undefined1 *)((long)pvVar7 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (pvVar7 == (void *)0x0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)((long)pvVar7 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar8 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x48), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0xb8), lVar5 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar15 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar15,1,0);
joined_r0x00c37634:
    if ((uVar6 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar5 = **(long **)(_GUIWindow_TypeInfo + 0xb8);
    lVar12 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(lVar12,0,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      uVar13 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      uVar13 = *(undefined8 *)(lVar5 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) == 0) {
        lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      if (lVar5 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar5,0,0);
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
  uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
  if ((uVar6 & 1) == 0) {
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar6 & 1) != 0) goto LAB_00c37480;
    if (*plVar15 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar15 + 0xd0);
    uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if (((uVar6 & 1) == 0) || (*(char *)(lVar5 + 0x78) != '\0')) {
      if ((*plVar15 == 0) ||
         ((lVar5 = *(long *)(*plVar15 + 0xa0), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c37710;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x70), lVar5 == 0)) ||
         (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = *plVar15;
        if (lVar5 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar7 = *(void **)(lVar5 + 0xa8);
        if (pvVar7 == (void *)0x0) goto LAB_00c37710;
        iVar10 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar15 == 0) goto LAB_00c37710;
      uVar13 = *(undefined8 *)(*plVar15 + 0xa8);
      uVar14 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
      lVar5 = *plVar15;
      if (lVar5 == 0) goto LAB_00c37710;
      if ((uVar6 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar12 = *(long *)(lVar5 + 0x20);
    *(undefined1 *)(lVar5 + 0x78) = 1;
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
    lVar5 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar13 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar5 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(undefined8 *)(lVar5 + 0x20) = uVar13, *(int *)(lVar5 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar5 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SECOND,0);
    if ((*(uint *)(lVar5 + 0x18) < 3) ||
       (*(undefined8 *)(lVar5 + 0x30) = uVar13, *(uint *)(lVar5 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar5 + 0x38) = _Str____1_;
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c10f6c;
    uVar13 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_HP,0);
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar5 + 0x40) = uVar13;
    uVar13 = System_String__Concat(lVar5,0);
    if (plVar15 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar15 + 0x5a8))(plVar15,uVar13,*(undefined8 *)(*plVar15 + 0x5b0));
    pvVar7 = *(void **)(lVar12 + 200);
    if (pvVar7 == (void *)0x0) goto LAB_00c10f6c;
    iVar10 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar15 == 0) || (lVar5 = *(long *)(*plVar15 + 0x70), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c37710;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    lVar5 = *plVar15;
    if (lVar5 == 0) goto LAB_00c37710;
    if ((uVar6 & 1) == 0) {
LAB_00c376a0:
      pvVar7 = *(void **)(lVar5 + 0x78);
    }
    else {
      pvVar7 = *(void **)(lVar5 + 0x70);
    }
    if (pvVar7 == (void *)0x0) {
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
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x20) = _Str_Try_to_Show__;
  lVar12 = UnityEngine_Component__get_gameObject(pvVar7,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar12,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar13, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar13, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar12,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar13, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar13;
  uVar13 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar13,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar13,pvVar7,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar13 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((((ulong)pvVar9 & 1) != 0) && (iVar10 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(char *)((long)pvVar7 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar6 & 1) == 0) goto LAB_00c46b74;
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
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)((long)pvVar7 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar13,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)((long)pvVar7 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
          goto LAB_00c485b8;
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar2 / (float)iVar3;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
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
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
              if ((uVar6 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar18 = 0.82;
                    fVar16 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar5 + 0x70);
                    fVar18 = 0.87;
                    fVar16 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x70);
                  fVar18 = 0.95;
                  fVar16 = 55.0;
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
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar6 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar18 = 0.82;
                  fVar16 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar5 + 0x60);
                  fVar18 = 0.87;
                  fVar16 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar5 + 0x60);
                fVar16 = -5.0;
                fVar18 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar7,pvVar9,fVar16,fVar18);
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
    uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
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
          uVar6 = AdvController__EDNAEPDDBPJ(lVar5,0);
          if ((uVar6 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
              if ((uVar6 & 1) == 0) {
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
                uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
                if ((uVar6 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(pvVar7,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar6 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            fVar18 = 0.85;
                            fVar16 = 60.0;
                          }
                          else {
                            fVar16 = 70.0;
                            fVar18 = 0.0;
                          }
                        }
                        else {
                          fVar16 = 20.0;
                          fVar18 = 0.0;
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
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar5 + 0xe8);
                    fVar18 = 0.95;
                    fVar16 = 70.0;
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
                pvStack_68 = *(void **)(lVar5 + 0xe8);
                fVar16 = 30.0;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar5 + 0xb0);
                  fVar18 = 0.93;
                  fVar16 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0xb0);
                fVar16 = -25.0;
              }
LAB_00c4729c:
              fVar18 = 0.0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar5 + 0x188);
                fVar16 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar5 + 0x188);
              if (1.8 <= fVar16) {
                fVar18 = 0.82;
                fVar16 = 38.0;
              }
              else {
                fVar18 = 0.95;
                fVar16 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar7,pvStack_68,fVar16,fVar18);
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
      uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
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
              uVar6 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(pvVar7,uVar13,0);
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar5 + 0x90) = uVar13;
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
  lVar5 = 8;
  if (iVar10 == 0) {
    lVar5 = 0;
  }
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *(void **)((long)puVar11 + lVar5) = pvVar7;
  if (*(char *)((long)pvVar7 + 0x23) != '\0') {
    uVar13 = GUIWindow__FAAELIPKLCB(pvVar7);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar7,uVar13,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar13, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar12 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar12,0);
  }
  uVar4 = *(uint *)(lVar5 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar13, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar15 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar13 = 0;
  if (plVar15 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    uVar4 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar13;
  uVar13 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  uVar6 = Main__KCHOEBEIOCE(0);
  if ((uVar6 & 1) != 0) {
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
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
        goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(lVar5 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
        if ((uVar6 & 1) == 0) {
          uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar5 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar6 & 1) != 0) {
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
        lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar12 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar12,0), lVar5 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
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
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar6 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar6 & 1) != 0) goto LAB_00c47948;
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
      uVar17 = 0;
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
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar5,0);
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
      lVar12 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar12 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar12,0), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,uVar4 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar6 & 1) == 0) {
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
    uVar13 = *(undefined8 *)(lVar5 + 0x78);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar14,uVar13,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar13,uVar14,0);
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar5 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
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
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar5 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar5 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
      if ((uVar6 & 1) != 0) {
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
      uVar6 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar5,0);
      if ((uVar6 & 1) != 0) {
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
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar5 == 0) goto LAB_00c485b8;
            uVar6 = UnityEngine_AudioSource__get_isPlaying(lVar5,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),false);
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
      pvVar7 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar7 == (void *)0x0) goto LAB_00c485b8;
      pvVar7 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar7,-1,true);
      if (pvVar7 == (void *)0x0) {
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
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar7 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar7 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar7);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar5,0);
    }
    uVar13 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar13,uVar14,0);
    if ((uVar6 & 1) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
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
        if ((lVar5 == 0) || (pvVar7 = *(void **)(lVar5 + 0x20), pvVar7 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar7);
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


// ==== public void OHFNNEHCIEH() { }   @0xb15998

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__OHFNNEHCIEH(void *__this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000001916fb7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fb7 = 1;
  }
  *(undefined2 *)((long)__this + 0x470) = 0;
  uVar3 = *(undefined8 *)((long)__this + 0x448);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)((long)__this + 0x440);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)((long)__this + 0x440);
      if (plVar2 != (long *)0x0) {
        uVar5 = *(undefined4 *)((long)__this + 0x45c);
        uVar6 = *(undefined4 *)((long)__this + 0x458);
        uVar7 = *(undefined4 *)((long)__this + 0x454);
        uVar8 = *(undefined4 *)((long)__this + 0x450);
        plVar4 = *(long **)((long)__this + 0x448);
        (**(code **)(*plVar2 + 0x2a8))
                  (uVar8,uVar7,uVar6,uVar5,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c15a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x2a8))
                    (uVar8,uVar7,uVar6,uVar5,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void ButtonAchievements() { }   @0xb1676c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonAchievements(void *__this)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000001916fbc & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916fbc = 1;
  }
  GUIGarage__EGEFDJDCKDJ(__this);
  if (*(long *)((long)__this + 0xf8) != 0) {
    GUIWindow__HEGIHOAJOKK(*(long *)((long)__this + 0xf8),0,0);
    lVar2 = *(long *)((long)__this + 0x228);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar2 != 0) {
      iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar2,iVar1 == 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb16a4c

/* WARNING: Removing unreachable block (ram,0x00c13a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__Awake(void *__this)

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


// ==== public void ButtonSettingsGFX() { }   @0xb1713c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsGFX(void *__this)

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
  
  if ((bRam0000000001916fc4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fc4 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  Menu__EFBCOMMLAGE(**(long **)(_Menu_TypeInfo + 0xb8),0);
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


// ==== public void ButtonSettingsGameCenter() { }   @0xb1740c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsGameCenter(void *__this)

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


// ==== public void BECFMMKIPHJ() { }   @0xb17494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__BECFMMKIPHJ(void *__this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001916fcc & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fcc = 1;
  }
  bVar1 = GUIGarage__DCFAACLJPKH(__this);
  if (((!bVar1) || (*(long *)((long)__this + 0x238) == 0)) ||
     (*(long *)(*(long *)((long)__this + 0x238) + 0x18) == 0)) {
    return;
  }
  if ((*(long *)((long)__this + 0x2f0) != 0) &&
     (lVar2 = UnityEngine_GameObject__get_gameObject(*(long *)((long)__this + 0x2f0),0), lVar2 != 0)
     ) {
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x1c0) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1c0),0), lVar2 != 0
       )) {
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(char *)((long)__this + 0x250) != '\0') {
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
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x108) == 0) {
          return;
        }
        if (*(long *)((long)__this + 0x1d0) != 0) {
          lVar2 = UnityEngine_GameObject__get_transform(*(long *)((long)__this + 0x1d0),0);
          if ((*(long *)((long)__this + 0x70) != 0) &&
             (uVar4 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x70),0),
             lVar2 != 0)) {
            UnityEngine_Transform__SetParent(lVar2,uVar4,0);
            if (*(long *)((long)__this + 0x1c0) != 0) {
              lVar2 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x1c0),0);
              if ((*(long *)((long)__this + 0x70) != 0) &&
                 (uVar4 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x70),0),
                 lVar2 != 0)) {
                UnityEngine_Transform__SetParent(lVar2,uVar4,0);
                if ((*(long *)((long)__this + 0x1c0) != 0) &&
                   (lVar2 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x1c0),0),
                   lVar2 != 0)) {
                  UnityEngine_Transform__SetAsLastSibling(lVar2,0);
                  lVar2 = *(long *)((long)__this + 0x238);
                  if (lVar2 != 0) {
                    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00c17730:
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b58();
                    }
                    if (*(long *)(lVar2 + 0x20) != 0) {
                      lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x20),0);
                      if ((*(long *)((long)__this + 0x70) != 0) &&
                         (uVar4 = UnityEngine_Component__get_transform
                                            (*(long *)((long)__this + 0x70),0), lVar2 != 0)) {
                        UnityEngine_Transform__SetParent(lVar2,uVar4,0);
                        lVar2 = *(long *)((long)__this + 0x238);
                        if (lVar2 != 0) {
                          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00c17730;
                          if ((*(long *)(lVar2 + 0x20) != 0) &&
                             (lVar2 = UnityEngine_Component__get_transform
                                                (*(long *)(lVar2 + 0x20),0), lVar2 != 0)) {
                            UnityEngine_Transform__SetAsLastSibling(lVar2,0);
                            if (*(long *)((long)__this + 0x2f0) != 0) {
                              lVar2 = UnityEngine_GameObject__get_transform
                                                (*(long *)((long)__this + 0x2f0),0);
                              if ((*(long *)((long)__this + 0x70) != 0) &&
                                 (uVar4 = UnityEngine_Component__get_transform
                                                    (*(long *)((long)__this + 0x70),0), lVar2 != 0))
                              {
                                UnityEngine_Transform__SetParent(lVar2,uVar4,0);
                                if ((*(long *)((long)__this + 0x2f0) != 0) &&
                                   (lVar2 = UnityEngine_GameObject__get_transform
                                                      (*(long *)((long)__this + 0x2f0),0),
                                   lVar2 != 0)) {
                                  UnityEngine_Transform__SetAsLastSibling(lVar2,0);
                                  if (*(long *)((long)__this + 0x1c8) != 0) {
                                    UnityEngine_MonoBehaviour__StopCoroutine
                                              (__this,*(long *)((long)__this + 0x1c8),0);
                                  }
                                  lVar2 = GUIGarage__KEPPKPEAEOO(__this);
                                  *(long *)((long)__this + 0x1c8) = lVar2;
                                  if (lVar2 == 0) {
                                    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                                    uVar5 = func_0x00a67b44();
                                    uVar4 = func_0x00a67914(&Str_routine_is_null);
                                    System_NullReferenceException___ctor(uVar5,uVar4,0);
                                  }
                                  else {
                                    if (pcRam000000000191c478 == (code *)0x0) {
                                      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb)
                                      ;
                                    }
                                    uVar3 = (*pcRam000000000191c478)(__this);
                                    if ((uVar3 & 1) != 0) {
                                      if (pcRam000000000191c488 == (code *)0x0) {
                                        pcRam000000000191c488 =
                                             (code *)func_0x00a678c4(&UNK_005ac95e);
                                      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                      (*pcRam000000000191c488)(__this,lVar2);
                                      return;
                                    }
                                    func_0x00a67914(&System_ArgumentException_TypeInfo);
                                    uVar5 = func_0x00a67b44();
                                    uVar4 = func_0x00a67914(&
                                                  Str_Coroutines_can_only_be_stopped_on_a_Mono);
                                    System_ArgumentException___ctor(uVar5,uVar4,0);
                                  }
                                  uVar4 = func_0x00a67914(&
                                                  Method_UnityEngine_MonoBehaviour_StartCoroutine__)
                                  ;
                                  auVar6 = func_0x00a67a20(uVar5,uVar4);
                                  if (pcRam000000000191c488 == (code *)0x0) {
                                    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                                  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
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


// ==== public void OCLHKDAFKLI() { }   @0xb1787c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__OCLHKDAFKLI(void *__this)

{
  long lVar1;
  bool bVar2;
  
  if ((bRam0000000001916fcf & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fcf = 1;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) == 0) {
    bVar2 = false;
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
    lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_00c179b0;
    bVar2 = 2 < *(int *)(lVar1 + 0x108);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
      (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x1f0), lVar1 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar1,bVar2);
    return;
  }
LAB_00c179b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



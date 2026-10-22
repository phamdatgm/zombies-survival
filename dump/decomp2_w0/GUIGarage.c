// ==== private void KNHFEOEMGNL() { }   @0xb079e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__KNHFEOEMGNL(void *__this)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
  if ((bRam0000000001916f55 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001916f55 = 1;
  }
  plVar6 = *(long **)((long)__this + 0x7a8);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
    lVar8 = *(long *)(**(long **)(_Translate_TypeInfo + 0xb8) + 0x40);
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
    if ((lVar5 != 0) && (lVar8 != 0)) {
      uVar1 = *(uint *)(lVar5 + 0x94);
      if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_00c07b80:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      if ((lVar8 != 0) && (plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x5a8))
                  (plVar6,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(*plVar6 + 0x5b0));
        if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
          plVar6 = *(long **)((long)__this + 0x7a0);
          lVar8 = *(long *)(**(long **)(_Translate_TypeInfo + 0xb8) + 0x40);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar5 != 0) && (lVar8 != 0)) {
            uVar1 = *(uint *)(lVar5 + 0x94);
            if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_00c07b80;
            lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            if ((lVar8 != 0) && (plVar6 != (long *)0x0)) {
              lVar8 = *(long *)(lVar8 + 0x20);
              if ((bRam000000000191db6f & 1) == 0) {
                func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar8,0);
                bRam000000000191db6f = 1;
              }
              lVar5 = plVar6[0x1b];
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
              if ((uVar3 & 1) == 0) {
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar3 = UnityEngine_Object__op_Inequality(lVar8,0,0);
                if ((uVar3 & 1) == 0) {
                  return;
                }
                if (lVar8 != 0) {
                  UnityEngine_Sprite__get_rect(lVar8,0);
                  if (cRam0000000001916788 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                    cRam0000000001916788 = '\x01';
                  }
                  in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                  in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
                  *(bool *)(plVar6 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
                  uVar4 = UnityEngine_Sprite__get_texture(lVar8,0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar7 = 0;
LAB_01550934:
                  bVar2 = UnityEngine_Object__op_Equality(uVar4,uVar7,0);
                  *(byte *)((long)plVar6 + 0x39) = bVar2 & 1;
                  plVar6[0x1b] = lVar8;
                  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar6);
                  (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
                  UnityEngine_UI_Image__TrackSprite(plVar6);
                  return;
                }
              }
              else {
                lVar5 = plVar6[0x1b];
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar3 = UnityEngine_Object__op_Inequality(lVar5,lVar8,0);
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
                  uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
                  if ((uVar3 & 1) == 0) {
                    if (cRam0000000001916788 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                      cRam0000000001916788 = '\x01';
                    }
                    fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                    fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
                  }
                  else {
                    if (lVar8 == 0) goto LAB_01550984;
                    UnityEngine_Sprite__get_rect(lVar8,0);
                  }
                  *(bool *)(plVar6 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
                  if (plVar6[0x1b] != 0) {
                    uVar4 = UnityEngine_Sprite__get_texture(plVar6[0x1b],0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                    }
                    uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
                    uVar7 = 0;
                    if ((uVar3 & 1) != 0) {
                      if (lVar8 == 0) goto LAB_01550984;
                      uVar7 = UnityEngine_Sprite__get_texture(lVar8,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonEasterEgg1() { }   @0xb08364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonEasterEgg1(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916f59 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f59 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)((long)__this + 0x78) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x78),0), lVar3 == 0)
       ) {
LAB_00c08484:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = _CarController_TypeInfo;
      lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
      if (lVar4 == 0) goto LAB_00c08484;
      if ((*(char *)(lVar4 + 0x3c8) == '\0') &&
         (iVar1 = *(int *)((long)__this + 0x510) + 1, *(int *)((long)__this + 0x510) = iVar1,
         iVar1 == 10)) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
          if (lVar4 == 0) goto LAB_00c08484;
        }
        CarController__AEFMMNHIGLH(lVar4,0);
        *(undefined4 *)((long)__this + 0x510) = 0;
      }
    }
  }
  return;
}


// ==== public void ButtonCarNext() { }   @0xb08ca4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCarNext(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *__this_00;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam0000000001916f5e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f5e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  __this_00 = (void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (__this_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170df & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170df = 1;
  }
  uVar9 = *(undefined8 *)((long)__this_00 + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((*(long *)((long)__this_00 + 0x20) == 0) ||
      (lVar7 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x78), lVar7 == 0)) ||
     (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) {
LAB_00c36c88:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this_00 + 0x20) == 0) ||
     (lVar7 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x1b0), lVar7 == 0)) goto LAB_00c36c88;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if ((*(long *)((long)__this_00 + 0x20) == 0) ||
     (lVar7 = *(long *)(*(long *)((long)__this_00 + 0x20) + 0x30), lVar7 == 0)) goto LAB_00c36c88;
  uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar7 == 0)) goto LAB_00c36c88;
  uVar6 = Car__NBMGBADFACE(0);
  iVar2 = -3;
  if ((uVar6 & 1) != 0) {
    iVar2 = -2;
  }
  iVar2 = iVar2 + *(int *)(lVar7 + 0x18);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (iVar2 <= *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
    return;
  }
  uVar6 = UnityEngine_Input__GetKey(0x130,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((uVar6 & 1) == 0) {
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
     (lVar7 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar7 == 0)) goto LAB_00c35de4;
  iVar2 = *(int *)(lVar7 + 0x18);
  plVar11 = (long *)((long)__this_00 + 0x20);
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar9 = *(undefined8 *)(*plVar11 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar7 = *(long *)(*plVar11 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar7 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar7,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar11 == 0) goto LAB_00c35de4;
  uVar9 = *(undefined8 *)(*plVar11 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_00c35de4;
    lVar7 = *(long *)(*plVar11 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    uVar1 = Car__NBMGBADFACE(0);
    if (lVar7 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar7,iVar3 < (int)((iVar2 - (~uVar1 & 1)) + -2),0);
  }
  if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x428), lVar7 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar7,0,0);
  if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x438), lVar7 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar7,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar8 = *(long *)(lVar7 + 0x40);
  if (lVar8 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar8 = *(long *)(lVar7 + 0x40);
      if (lVar8 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar8 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar7 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar7 + 0x2c) == 1) {
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
        if (lVar7 == 0) goto LAB_00c35de4;
        lVar7 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar7,1,0);
        if (lVar7 != 0) {
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
          if ((lVar7 == 0) || (lVar7 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar7,1,0), lVar7 == 0))
          goto LAB_00c35de4;
          uVar6 = DJKGLJOCFCE__MCDLFBJCNNA(lVar7,0);
          if ((uVar6 & 1) == 0) {
            if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x430), lVar7 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar7,0,0);
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
  lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,0xffffffff,1,0);
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar8 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar7 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x478), lVar7 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar7,1,0);
    if (*plVar11 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar11,0,0);
    if (iVar2 == -1) {
      lVar7 = Car__get_Current(0);
      if (lVar7 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar7 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x120), lVar7 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar7,&lStack_a8,
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
        lVar7 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar7,0);
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
        lVar7 = Car__get_Current(0);
        if ((lVar7 == 0) || (*plVar11 == 0)) goto LAB_00c35de4;
        plVar5 = *(long **)(*plVar11 + 0x488);
        if (*(int *)(lVar7 + 0x20) < 1) {
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
             (uVar9 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar5 == (long *)0x0)
             ) goto LAB_00c35de4;
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x5b0));
          if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x490), lVar7 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar7,0,0);
        }
        else {
          lVar7 = Car__get_Current(0);
          if ((lVar7 == 0) ||
             (uVar9 = System_Int32__ToString(lVar7 + 0x20,0), plVar5 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x5b0));
        }
        if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x480), lVar7 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar7,1,0);
        if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4c0), lVar7 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar7,1,0);
        if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x498), lVar7 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar7,0,0);
        if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4a0), lVar7 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar7,0,0);
        if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4b8), lVar7 == 0)) goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar7,0,0);
        goto LAB_00c35704;
      }
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar7 + 0x470) = 1;
      if (*(long *)(lVar7 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar7 + 0x480),0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x498), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4a0), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4c0), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4b8), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      lVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      uVar9 = System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar9 = System_String__Concat(_Str__color__faaf32_,uVar9,_Str___color_,0);
      if (lVar7 == 0) goto LAB_00c35de4;
      uVar9 = System_String__Replace(lVar7,_Str__x_,uVar9,0);
      if ((*plVar11 == 0) || (plVar5 = *(long **)(*plVar11 + 0x4c8), plVar5 == (long *)0x0))
      goto LAB_00c35de4;
      lVar7 = *plVar5;
    }
    else {
LAB_00c3550c:
      lVar7 = Car__get_Current(0);
      if (((lVar7 == 0) || (*plVar11 == 0)) || (lVar8 = *(long *)(*plVar11 + 0x480), lVar8 == 0))
      goto LAB_00c35de4;
      iVar3 = *(int *)(lVar7 + 0x44);
      UnityEngine_GameObject__SetActive(lVar8,0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x498), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4a0), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,0,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4c0), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x4b8), lVar7 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar7,1,0);
      if (iVar3 != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        lVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar10 = **(long **)(_Translate_TypeInfo + 0xb8);
        lVar8 = Car__get_Current(0);
        if (lVar8 == 0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)(lVar8 + 0x44);
        uVar9 = System_Int32__ToString(&uStack_64,0);
        uVar9 = System_String__Concat(_Str_EVENT_,uVar9,0);
        if (lVar10 == 0) goto LAB_00c35de4;
        uVar9 = Translate__JJJNIPAKLJF(uVar9,uVar9);
        goto LAB_00c35640;
      }
      if (*plVar11 == 0) goto LAB_00c35de4;
      plVar5 = *(long **)(*plVar11 + 0x4c8);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar9 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar5 == (long *)0x0)) goto LAB_00c35de4;
      lVar7 = *plVar5;
    }
    (**(code **)(lVar7 + 0x5a8))(plVar5,uVar9,*(undefined8 *)(lVar7 + 0x5b0));
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar8 == 0) goto LAB_00c35de4;
    }
    if (99 < *(int *)(lVar8 + 0x10)) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar8 == 0) goto LAB_00c35de4;
      }
      if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c35de4;
      iVar2 = EventContest__get_car_id(*(long *)(lVar8 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x50), lVar8 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar8,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar7 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x50), lVar8 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar8,0);
      if (iVar3 != *(int *)(lVar7 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x478), lVar7 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar7,0,0);
    if (*plVar11 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar11,1,0);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar7 + 0x40) != 0) {
    if (iVar2 == -1) {
      lVar7 = Car__get_Current(0);
      if (lVar7 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar7 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar7 = plVar5[8];
        if (lVar7 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar7 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar7 = plVar5[8];
            if (lVar7 == 0) goto LAB_00c35de4;
          }
          if ((*plVar5 == 0) || (lVar8 = *(long *)(*plVar5 + 0x28), lVar8 == 0)) goto LAB_00c35de4;
          if (*(int *)(lVar7 + 0x10) < *(int *)(lVar8 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar7 = plVar5[8];
              if (lVar7 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar5 + 0x2c) != *(int *)(lVar7 + 0x10)) {
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
              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar7 == 0) ||
                 (lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar8 == 0))
              goto LAB_00c35de4;
              lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,*(undefined4 *)(lVar7 + 0x10),1,0);
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
                if (lVar7 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar7,0);
                plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar5 == 0) || (lVar7 = plVar5[8], lVar7 == 0)) ||
                   (lVar8 = *(long *)(*plVar5 + 0x28), lVar8 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar7 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(lVar7 + 0x10) * 8 + 0x20);
                if (lVar8 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar8 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar5 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar7 = plVar5[8];
                    if (lVar7 == 0) goto LAB_00c35de4;
                  }
                  lVar8 = *plVar11;
                  if (lVar8 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar7 + 0x10) < *(int *)((long)plVar5 + 0x2c)) {
                    lVar7 = *(long *)(lVar8 + 0x438);
                    *(undefined1 *)(lVar8 + 0x470) = 1;
                  }
                  else {
                    lVar7 = *(long *)(lVar8 + 0x428);
                    *(undefined1 *)(lVar8 + 0x471) = 1;
                  }
                  if (lVar7 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar7,1,0);
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
        lVar7 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar7 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *plVar11;
        if (lVar7 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar7 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar7 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar11 != 0) {
    plVar5 = *(long **)(*plVar11 + 1000);
    lVar7 = Car__get_Current(0);
    if ((lVar7 != 0) && (plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x5a8))
                (plVar5,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(*plVar5 + 0x5b0));
      if (*plVar11 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar11,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(__this_00);
        Menu__INMDNKGHGEO(__this_00);
        Menu__FMEHJALLGBK(__this_00);
        uVar9 = *(undefined8 *)((long)__this_00 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
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


// ==== private IEnumerator ILOEHAPOFHA(GUIGarage.GDKKPEEJJAO FHOFNGHGNGF) { }   @0xb08f9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage__ILOEHAPOFHA(void *__this,int FHOFNGHGNGF)

{
  void *pvVar1;
  
  if ((bRam0000000001916f63 & 1) == 0) {
    func_0x00a67900(&GUIGarage_DJJFFDPEJKB_TypeInfo);
    bRam0000000001916f63 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGarage_DJJFFDPEJKB_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(int *)((long)pvVar1 + 0x28) = FHOFNGHGNGF;
  return pvVar1;
}


// ==== private void MFHPABKGJEH() { }   @0xb096a0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MFHPABKGJEH(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)((long)__this + 0x6f0);
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
        if (lVar2 == 0) goto LAB_00c09700;
        UnityEngine_GameObject__SetActive(lVar2,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c09700:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonFullScreenToggle() { }   @0xb0afdc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonFullScreenToggle(void *__this)

{
  uint uVar1;
  
  uVar1 = UnityEngine_Screen__get_fullScreen(0);
  if (pcRam000000000191bad8 == (code *)0x0) {
    pcRam000000000191bad8 = (code *)func_0x00a678c4(&UNK_005b84d2);
  }
                    /* WARNING: Could not recover jumptable at 0x01470e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191bad8)(~uVar1 & 1);
  return;
}


// ==== public void DonateWindowSilver() { }   @0xb0ba3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateWindowSilver(void *__this)

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
          if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          if (*(long *)(lVar1 + 0x20) != 0) {
            UnityEngine_UI_Toggle__set_isOn(*(long *)(lVar1 + 0x20),1,0);
            *(undefined4 *)((long)__this + 0x6c8) = 0;
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


// ==== public void ButtonMainMenu() { }   @0xb0bf48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMainMenu(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lStack_68;
  
  lVar4 = *(long *)((long)__this + 0x60);
  if (lVar4 == 0) {
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
  lVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar6,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar7, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar7, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar6,0);
  }
  uVar11 = *(uint *)(lVar5 + 0x18);
  if ((uVar11 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar7, uVar11 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar11 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar11 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar7;
  uVar7 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,lVar4,0);
  if ((uVar8 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,lVar4,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar5 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar14 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar14;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)(lVar4 + 0x21) != '\0')) {
        fVar13 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar13) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar5,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar5,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar4 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (bVar1) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar13 = (float)iVar2 / (float)iVar3;
            if (fVar13 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar13) {
                  if ((fVar13 <= 1.61) || (1.8 <= fVar13)) {
                    if (fVar13 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x70);
                    uVar15 = 0x3f51eb85;
                    uVar14 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x70);
                    uVar15 = 0x3f5eb852;
                    uVar14 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x70);
                  uVar15 = 0x3f733333;
                  uVar14 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar13) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar13) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x60);
                  uVar15 = 0x3f51eb85;
                  uVar14 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar5 + 0x60);
                  uVar15 = 0x3f5eb852;
                  uVar14 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0x60);
                uVar14 = 0xc0a00000;
                uVar15 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,uVar7);
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
        GUIWindow__IPELKJAHFGL(lVar4);
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
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar4 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar4);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (!bVar1) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar13 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar13) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
                if ((uVar8 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar5 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar5 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar5 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar13) {
                          if (1.8 <= fVar13) {
                            uVar15 = 0x3f59999a;
                            uVar14 = 0x42700000;
                          }
                          else {
                            uVar14 = 0x428c0000;
                            uVar15 = 0;
                          }
                        }
                        else {
                          uVar14 = 0x41a00000;
                          uVar15 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar13) {
                  if (fVar13 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar5 + 0xe8);
                    uVar15 = 0x3f733333;
                    uVar14 = 0x428c0000;
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
                uVar14 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar13) {
                  if (1.8 <= fVar13) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar5 + 0xb0);
                  uVar15 = 0x3f6e147b;
                  uVar14 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0xb0);
                uVar14 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar15 = 0;
            }
            else {
              if (fVar13 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0x188);
                uVar14 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar5 + 0x188);
              if (1.8 <= fVar13) {
                uVar15 = 0x3f51eb85;
                uVar14 = 0x42180000;
              }
              else {
                uVar15 = 0x3f733333;
                uVar14 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,lStack_68);
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
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
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
              uVar8 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar5 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  plVar9 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar9[2] = *plVar9;
  *plVar9 = lVar4;
  if (*(char *)(lVar4 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(lVar4);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar4,uVar7,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar7, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar6,0);
  }
  uVar11 = *(uint *)(lVar5 + 0x18);
  if ((uVar11 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar7, uVar11 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar11 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar11 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar7;
  uVar7 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
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
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar4 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
        if ((uVar8 & 1) == 0) {
          uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar4 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar4,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar4,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        lVar4 = *(long *)(lVar4 + 0x178);
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
        if ((pvVar10 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar4 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar4,bVar1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
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
      uVar14 = 0;
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
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar10 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,bVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar14 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar14,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)(lVar4 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar4 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar4 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
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
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x4e0), lVar4 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar4,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar14;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar4,0);
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
      if (lVar4 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar4,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar4 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
            if ((uVar8 & 1) == 0) {
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
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_00c485b8;
      lVar4 = DAFNMLEKHAD__DKJLCJPBPPN(lVar4,0xffffffff,1,0);
      if (lVar4 == 0) {
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
        if (lVar4 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar4 + 0x104);
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
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar4,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar4,0);
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar4 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar4,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar4,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar4,0);
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


// ==== private void FKANPAEENNP() { }   @0xb0c658

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__FKANPAEENNP(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  
  if ((bRam0000000001916f77 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Vector2___TypeInfo);
    bRam0000000001916f77 = 1;
  }
  if (*(long *)((long)__this + 0x4f0) != 0) {
    uVar2 = func_0x00a679a0(_UnityEngine_Vector2___TypeInfo,
                            *(undefined4 *)(*(long *)((long)__this + 0x4f0) + 0x18));
    lVar3 = *(long *)((long)__this + 0x4f0);
    *(undefined8 *)((long)__this + 0x4f8) = uVar2;
    if (lVar3 != 0) {
      uVar4 = 0;
      do {
        if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar4) {
          return;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_00c0c78c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = (long)(int)uVar4;
        lVar3 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
        if (lVar3 == 0) break;
        fVar7 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
        lVar3 = *(long *)((long)__this + 0x4f0);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_00c0c78c;
        lVar3 = *(long *)(lVar3 + lVar5 * 8 + 0x20);
        if (lVar3 == 0) break;
        lVar6 = *(long *)((long)__this + 0x4f8);
        fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
        if (fVar7 == 0.0) {
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          fVar7 = 17.0;
          if (in_s1 < 0.0) {
            fVar7 = -17.0;
          }
          in_s1 = 0.0;
        }
        else {
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          in_s1 = 17.0;
          if (fVar8 < 0.0) {
            in_s1 = -17.0;
          }
          fVar7 = 0.0;
        }
        if (uVar1 <= uVar4) goto LAB_00c0c78c;
        lVar6 = lVar6 + lVar5 * 8;
        *(float *)(lVar6 + 0x20) = in_s1;
        *(float *)(lVar6 + 0x24) = fVar7;
        lVar3 = *(long *)((long)__this + 0x4f0);
        uVar4 = uVar4 + 1;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonStartRaceGoWithLowHP() { }   @0xb0cafc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonStartRaceGoWithLowHP(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916f7b & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f7b = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    lVar1 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),1,0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCheatShowRewarded(GameObject _go) { }   @0xb0d3a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatShowRewarded(void *__this,void *_go)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916f7f & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_double_reward);
    func_0x00a67900(&Str_free_gold);
    func_0x00a67900(&Str_free_upgrade);
    bRam0000000001916f7f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0d5c0;
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(_go,0,0);
      if ((uVar1 & 1) != 0) {
        if ((_go != (void *)0x0) && (lVar2 = UnityEngine_Object__get_name(_go,0), lVar2 != 0)) {
          uVar1 = System_String__Contains(lVar2,_Str_double_reward,0);
          if ((uVar1 & 1) == 0) {
            lVar2 = UnityEngine_Object__get_name(_go,0);
            if (lVar2 != 0) {
              uVar1 = System_String__Contains(lVar2,_Str_free_gold,0);
              if ((uVar1 & 1) == 0) {
                lVar2 = UnityEngine_Object__get_name(_go,0);
                if (lVar2 == 0) goto LAB_00c0d5c0;
                uVar1 = System_String__Contains(lVar2,_Str_free_upgrade,0);
                if ((uVar1 & 1) == 0) {
                  return;
                }
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                 (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
                uVar3 = 1;
                goto LAB_00c0d59c;
              }
            }
          }
          else {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
              uVar3 = 0;
LAB_00c0d59c:
              if ((bRam00000000019171d1 & 1) == 0) {
                func_0x00a67900(&MaxSdkAndroid_TypeInfo,uVar3,0);
                func_0x00a67900(&NNPDABJADNE_TypeInfo);
                bRam00000000019171d1 = 1;
              }
              if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar1 = MaxSdkAndroid__IsInitialized(0);
              if ((uVar1 & 1) != 0) {
                uVar5 = *(undefined8 *)(lVar2 + 0x40);
                uStack_48 = _NNPDABJADNE_TypeInfo;
                uStack_40 = 0xffffffffffffffff;
                uStack_38 = uVar3;
                uVar4 = System_Enum__ToString(&uStack_48,0);
                if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
                }
                MaxSdkAndroid__ShowRewardedAd(uVar5,uVar4,0,0);
              }
              return;
            }
          }
        }
LAB_00c0d5c0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== private void KFELMMODBGC() { }   @0xb0aeac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__KFELMMODBGC(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  uint uVar5;
  
  if ((bRam0000000001916f83 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f83 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        __this_00 = *(void **)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (__this_00 == (void *)0x0) goto LAB_00c0afd4;
        if (*(int *)((long)__this_00 + 0x10) == 7) {
          Achievement__PPHJGAMIKLM(__this_00);
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
          if (lVar2 == 0) goto LAB_00c0afd4;
          uVar3 = DAFNMLEKHAD__HIFFBAOPBGD(lVar2,*(undefined4 *)((long)__this_00 + 0x10),0);
          if ((uVar3 & 1) != 0) {
            GUIGarage__MAKGMMFFGPG(__this);
          }
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c0afd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSETSaves() { }   @0xb0e1b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSETSaves(void *__this)

{
  byte bVar1;
  long lVar2;
  void *__this_00;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_34 [4];
  
  if ((bRam0000000001916f86 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916f86 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
  if (lVar6 == 0) {
LAB_00c0e390:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(long *)(lVar6 + 0x88) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
      if (lVar6 == 0) goto LAB_00c0e390;
    }
    UnityEngine_MonoBehaviour__StopCoroutine(__this,*(undefined8 *)(lVar6 + 0x88),0);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c0e390;
    uVar4 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)((long)_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
        if (lVar6 == 0) goto LAB_00c0e390;
        uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (lVar6 == 0) goto LAB_00c0e390;
          UnityEngine_AudioSource__Stop(lVar6,0);
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
  if (lVar6 == 0) goto LAB_00c0e390;
  bVar1 = *(byte *)((long)__this + 0x880);
  if ((bRam0000000001916f10 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___,bVar1,0);
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str_Server);
    func_0x00a67900(&Str_Main_playerProfile_IsFirstSync__);
    func_0x00a67900(&Str_IsFirstSync__);
    func_0x00a67900(&Str_);
    bRam0000000001916f10 = 1;
  }
  auStack_34[0] = 0;
  if ((bVar1 & 1) == 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x41) = 1;
    if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Array_Empty_object___;
    if (**(long **)((long)_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c00dec;
    lVar7 = *(long *)(**(long **)((long)_Menu_TypeInfo + 0xb8) + 0x50);
    lVar5 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
    if (lVar5 == 0) {
      func_0x00a9e42c(_Method_System_Array_Empty_object___);
      lVar5 = *(long *)(lVar2 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x00a9e3d0();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = func_0x00a9e3d0();
    }
    if (lVar7 == 0) goto LAB_00c00dec;
    BridgePHP__StartServerConnect(lVar7,3,**(undefined8 **)(lVar2 + 0xb8),0);
  }
  else {
    DAFNMLEKHAD__GKCLIHIJGIE(lVar6,1,1);
    if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)((long)_Menu_TypeInfo + 0xb8) == 0) ||
       (*(long *)(**(long **)((long)_Menu_TypeInfo + 0xb8) + 0x40) == 0)) goto LAB_00c00dec;
    AnalyticsController__LNJAADGHIHB(_Menu_TypeInfo,_Str_Server);
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
              (lVar2,_Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    uVar3 = _Str_;
    lVar2 = *(long *)(_BridgePHP_TypeInfo + 0xb8);
    *(undefined8 *)(lVar2 + 0x30) = _Str_;
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined1 *)(lVar2 + 0x40) = 0;
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
    if (__this_00 != (void *)0x0) {
      DAFNMLEKHAD__AIDICNFBHKK(__this_00,true);
      auStack_34[0] = *(int *)(lVar6 + 0x18) == 1;
      if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = System_Boolean__ToString(auStack_34,0);
      uVar3 = System_String__Concat(_Str_IsFirstSync__,uVar3,0);
      Main__GEMDEAMAGPG(uVar3,0,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar6 != 0) {
        auStack_34[0] = *(int *)(lVar6 + 0x18) == 1;
        uVar3 = System_Boolean__ToString(auStack_34,0);
        uVar3 = System_String__Concat(_Str_Main_playerProfile_IsFirstSync__,uVar3,0);
        Main__GEMDEAMAGPG(uVar3,0,0);
        DAFNMLEKHAD__BJKKICMFANH();
        return;
      }
    }
  }
LAB_00c00dec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DonateItem(DonateItem item) { }   @0xb0ec68

/* WARNING: Removing unreachable block (ram,0x00c0a8d0) */
/* WARNING: Removing unreachable block (ram,0x00c0a8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DonateItem(void *__this,void *item)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  byte bVar11;
  uint uVar12;
  long lVar15;
  long lVar16;
  int iVar13;
  int iVar14;
  void *pvVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong uVar22;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  undefined8 *puVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 unaff_x30;
  double dVar29;
  double extraout_d0;
  double dVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_58;
  double in_stack_ffffffffffffffc8;
  
  if ((bRam0000000001916f8a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_item_gold_0);
    func_0x00a67900(&Str_item_silver_4);
    func_0x00a67900(&Str_silver);
    func_0x00a67900(&Str_fuel);
    func_0x00a67900(&Str_Amount_error_in_SpecialOffer__);
    bRam0000000001916f8a = 1;
  }
  if (item == (void *)0x0) goto LAB_00c0f678;
  iVar13 = *(int *)((long)item + 0x2c);
  if (iVar13 == 2) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0f678;
    uVar19 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
    if ((uVar20 & 1) == 0) {
      iVar13 = *(int *)((long)item + 0x2c);
      goto LAB_00c0f038;
    }
    if (*(int *)((long)item + 0x28) < 1) {
LAB_00c0efa0:
      fVar31 = *(float *)((long)item + 0x34);
      if (cRam00000000019168a8 == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam00000000019168a8 = '\x01';
      }
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      func_0x016dece0((double)fVar31,&stack0xffffffffffffffc8);
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
      pvVar17 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar17 != (void *)0x0) {
        DAFNMLEKHAD__HPDEBBJNCIK(pvVar17);
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
              plVar28 = *(long **)((long)__this + 0x608);
              uVar19 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
              uVar19 = System_String__Concat(uVar19,_Str__,0);
              if (plVar28 != (long *)0x0) {
                (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x5b0));
                plVar28 = *(long **)((long)__this + 0x5f0);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                   (uVar19 = Translate__JJJNIPAKLJF
                                       (**(long **)(_Translate_TypeInfo + 0xb8),_Str_NO_MONEY_1,0),
                   plVar28 != (long *)0x0)) {
                  (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x5b0));
                  if (*(long *)((long)__this + 0x600) != 0) {
                    UnityEngine_UI_Image__set_sprite
                              (*(long *)((long)__this + 0x600),*(undefined8 *)((long)__this + 0x388)
                               ,0);
                    *(undefined4 *)((long)__this + 0x6c8) = 1;
                    plVar28 = *(long **)((long)__this + 0x5f8);
                    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
                       (uVar19 = Translate__JJJNIPAKLJF
                                           (**(long **)(_Translate_TypeInfo + 0xb8),_Str_NO_MONEY_2,
                                            0), plVar28 != (long *)0x0)) {
                      (**(code **)(*plVar28 + 0x5a8))
                                (plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x5b0));
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
      goto LAB_00c0f678;
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
    pvVar17 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar17 == (void *)0x0) goto LAB_00c0f678;
    iVar13 = DAFNMLEKHAD__HPDEBBJNCIK(pvVar17);
    fVar31 = *(float *)((long)item + 0x34);
    if ((float)iVar13 < fVar31) goto LAB_00c0efa0;
    iVar13 = *(int *)((long)item + 0x28);
    if (iVar13 == 999) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0f678;
      lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
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
      pvVar17 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar17 == (void *)0x0) || (iVar13 = DAFNMLEKHAD__HDABOKNLKGK(pvVar17), lVar18 == 0))
      goto LAB_00c0f678;
      FuelManager__PNAAGCJLMLB(lVar18,0x18 - iVar13,0,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar17 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), pvVar17 == (void *)0x0))
      goto LAB_00c0f678;
      FuelManager__JKGPIEKIJNG(pvVar17);
LAB_00c0f4ec:
      fVar31 = *(float *)((long)item + 0x34);
    }
    else {
      if (iVar13 == 99) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar18 == 0))
        goto LAB_00c0f678;
        uVar19 = 0x18;
        uVar21 = 0;
LAB_00c0f4e4:
        FuelManager__PNAAGCJLMLB(lVar18,uVar19,uVar21,0);
        goto LAB_00c0f4ec;
      }
      if (iVar13 == 1) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar18 == 0))
        goto LAB_00c0f678;
        uVar19 = 1;
        uVar21 = 1;
        goto LAB_00c0f4e4;
      }
    }
    if (cRam00000000019168a8 == '\0') {
      func_0x00a67900(&System_Math_TypeInfo);
      cRam00000000019168a8 = '\x01';
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    dVar30 = (double)fVar31;
    dVar29 = (double)func_0x016dece0(dVar30,&stack0xffffffffffffffc8);
    if (0.0 <= fVar31) {
      if (dVar29 == 0.5) {
        dVar29 = 1.0;
        goto LAB_00c0f56c;
      }
      in_stack_ffffffffffffffc8 = (double)(long)(dVar30 + 0.5);
    }
    else if (dVar29 == -0.5) {
      dVar29 = -1.0;
LAB_00c0f56c:
      if (((long)in_stack_ffffffffffffffc8 & 1U) != 0) {
        in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 + dVar29;
      }
    }
    else {
      in_stack_ffffffffffffffc8 = (double)(long)(dVar30 + -0.5);
    }
    iVar13 = -0x80000000;
    if (in_stack_ffffffffffffffc8 != INFINITY) {
      iVar13 = (int)in_stack_ffffffffffffffc8;
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
    lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    lVar18 = UnityEngine_Component__get_gameObject(item,0);
    if ((lVar18 == 0) || (uVar19 = UnityEngine_Object__get_name(lVar18,0), lVar26 == 0)) {
LAB_00c0f678:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    puVar23 = (undefined8 *)&Str_fuel;
LAB_00c0f618:
    DAFNMLEKHAD__JMNEPHGKIPE(lVar26,iVar13,*puVar23,uVar19,0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
  }
  else if (iVar13 == 1) {
    if (*(int *)((long)item + 0x28) < 1) goto LAB_00c0efa0;
    lVar18 = UnityEngine_Component__get_gameObject(item,0);
    if (lVar18 == 0) goto LAB_00c0f678;
    uVar19 = UnityEngine_Object__get_name(lVar18,0);
    uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_0,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar18 == 0) goto LAB_00c0f678;
    if ((uVar20 & 1) == 0) goto LAB_00c0f074;
    if (*(long *)(lVar18 + 0x38) == 0) goto LAB_00c0f678;
    AdvController__FCHOPNGPCPN(*(long *)(lVar18 + 0x38),1,0);
  }
  else if (iVar13 == 0) {
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
    pvVar17 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar17 == (void *)0x0) goto LAB_00c0f678;
    iVar13 = DAFNMLEKHAD__HPDEBBJNCIK(pvVar17);
    fVar31 = *(float *)((long)item + 0x34);
    if ((float)iVar13 < fVar31) goto LAB_00c0efa0;
    if (cRam00000000019168a8 == '\0') {
      func_0x00a67900(&System_Math_TypeInfo);
      cRam00000000019168a8 = '\x01';
    }
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    dVar30 = (double)fVar31;
    dVar29 = (double)func_0x016dece0(dVar30,&stack0xffffffffffffffc8);
    if (0.0 <= fVar31) {
      if (dVar29 == 0.5) {
        dVar29 = 1.0;
        goto LAB_00c0f134;
      }
      in_stack_ffffffffffffffc8 = (double)(long)(dVar30 + 0.5);
    }
    else if (dVar29 == -0.5) {
      dVar29 = -1.0;
LAB_00c0f134:
      if (((long)in_stack_ffffffffffffffc8 & 1U) != 0) {
        in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 + dVar29;
      }
    }
    else {
      in_stack_ffffffffffffffc8 = (double)(long)(dVar30 + -0.5);
    }
    iVar13 = -0x80000000;
    if (in_stack_ffffffffffffffc8 != INFINITY) {
      iVar13 = (int)in_stack_ffffffffffffffc8;
    }
    lVar18 = UnityEngine_Component__get_gameObject(item,0);
    if (lVar18 == 0) goto LAB_00c0f678;
    uVar19 = UnityEngine_Object__get_name(lVar18,0);
    uVar20 = System_String__op_Equality(uVar19,_Str_item_silver_4,0);
    if ((uVar20 & 1) == 0) {
      if (0 < *(int *)((long)item + 0x28)) {
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
        if (lVar18 == 0) goto LAB_00c0f678;
        iVar14 = DAFNMLEKHAD__LOCFCFJIAIH(lVar18,0);
        DAFNMLEKHAD__JLEEMPONONF(lVar18,*(int *)((long)item + 0x28) + iVar14,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
LAB_00c0f3b8:
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        lVar18 = UnityEngine_Component__get_gameObject(item,0);
        if ((lVar18 == 0) || (uVar19 = UnityEngine_Object__get_name(lVar18,0), lVar26 == 0))
        goto LAB_00c0f678;
        puVar23 = (undefined8 *)&Str_silver;
        goto LAB_00c0f618;
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
      lVar18 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar18 == 0) goto LAB_00c0f678;
      uVar20 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar18,0);
      if ((uVar20 & 1) == 0) {
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
        if (lVar18 == 0) goto LAB_00c0f678;
        DAFNMLEKHAD__BDKMDDIBAAD(lVar18,1,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        goto LAB_00c0f3b8;
      }
    }
  }
  else {
LAB_00c0f038:
    if (iVar13 == 3) {
      if (*(int *)((long)item + 0x28) < 1) {
        uVar19 = System_String__Concat
                           (_Str_Amount_error_in_SpecialOffer__,*(undefined8 *)((long)item + 0x20),0
                           );
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__EEKNCFLMGDP(uVar19,0);
      }
      else {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (lVar18 == 0) goto LAB_00c0f678;
LAB_00c0f074:
        uVar19 = *(undefined8 *)(lVar18 + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
        if ((uVar20 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar18 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48), lVar18 == 0))
          goto LAB_00c0f678;
          Purchaser__AEEDBGLDLIN(lVar18,*(undefined8 *)((long)item + 0x20));
        }
      }
    }
  }
  uStack_58 = unaff_x30;
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
  lVar18 = _Str_;
  lStack_70 = _Str_;
  iVar13 = *(int *)((long)__this + 0x6d0);
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
  lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar26 == 0) goto LAB_00c071ec;
  iVar14 = *(int *)(lVar26 + 0x94);
  lStack_68 = lStack_70;
  if (iVar13 != iVar14) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lStack_70 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_SILVER,0);
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lStack_68 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_GOLD,0);
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c071ec;
    lVar18 = Translate__JJJNIPAKLJF
                       (**(long **)(_Translate_TypeInfo + 0xb8),_Str_FUEL_CANISTER_DESC,0);
  }
  lVar26 = *(long *)((long)__this + 0x650);
  if (lVar26 != 0) {
    uVar12 = *(uint *)(lVar26 + 0x18);
    if (0 < (int)uVar12) {
      uVar25 = 0;
      do {
        if (uVar12 <= uVar25) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar27 = *(long *)(lVar26 + (long)(int)uVar25 * 8 + 0x20);
        if (lVar27 == 0) goto LAB_00c071ec;
        uVar19 = *(undefined8 *)(lVar27 + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
        if (((uVar20 & 1) != 0) && (*(char *)((long)__this + 0x6d4) == '\0')) {
          plVar28 = *(long **)(lVar27 + 0x38);
          uVar19 = System_Int32__ToString(lVar27 + 0x28,0);
          if (plVar28 == (long *)0x0) goto LAB_00c071ec;
          (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x5b0));
        }
        lVar15 = UnityEngine_Component__get_gameObject(lVar27,0);
        if (lVar15 == 0) goto LAB_00c071ec;
        uVar19 = UnityEngine_Object__get_name(lVar15,0);
        uVar20 = System_String__op_Equality(uVar19,_Str_item_silver_4,0);
        if ((uVar20 & 1) == 0) {
          lVar15 = UnityEngine_Component__get_gameObject(lVar27,0);
          if (lVar15 == 0) goto LAB_00c071ec;
          uVar19 = UnityEngine_Object__get_name(lVar15,0);
          uVar20 = System_String__op_Equality(uVar19,_Str_item_fuel_4,0);
          if ((uVar20 & 1) != 0) {
            if (*(long *)((long)__this + 0x6a0) != 0) {
              cVar1 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
              lVar15 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x6a0),0);
              if (lVar15 != 0) {
                UnityEngine_GameObject__SetActive(lVar15,cVar1 == '\0',0);
                lVar15 = *(long *)((long)__this + 0x6a8);
                if (lVar15 != 0) {
                  bVar10 = cVar1 != '\0';
                  goto LAB_00c06cd4;
                }
              }
            }
            goto LAB_00c071ec;
          }
        }
        else {
          uVar19 = *(undefined8 *)(lVar27 + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
          if ((uVar20 & 1) != 0) {
            lVar15 = *(long *)(lVar27 + 0x50);
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
            lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if ((lVar16 == 0) || (uVar12 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar16,0), lVar15 == 0))
            goto LAB_00c071ec;
            UnityEngine_GameObject__SetActive(lVar15,~uVar12 & 1,0);
          }
          uVar19 = *(undefined8 *)(lVar27 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
          if ((uVar20 & 1) != 0) {
            lVar15 = *(long *)(lVar27 + 0x58);
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
            lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if ((lVar16 == 0) || (bVar11 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar16,0), lVar15 == 0))
            goto LAB_00c071ec;
            bVar10 = (bool)(bVar11 & 1);
LAB_00c06cd4:
            UnityEngine_GameObject__SetActive(lVar15,bVar10,0);
          }
        }
        if (iVar13 == iVar14) goto LAB_00c07090;
        lVar15 = UnityEngine_Component__get_gameObject(lVar27,0);
        if (lVar15 == 0) goto LAB_00c071ec;
        uVar19 = UnityEngine_Object__get_name(lVar15,0);
        uVar12 = _PrivateImplementationDetails___ComputeStringHash(uVar19,0);
        if (uVar12 < 0x6cbc5537) {
          if (uVar12 < 0x27d22aea) {
            if (uVar12 == 0x26d22956) {
              uVar20 = System_String__op_Equality(uVar19,_Str_item_fuel_2,0);
              if ((uVar20 & 1) != 0) {
                if (lVar18 != 0) {
                  plVar28 = *(long **)(lVar27 + 0x48);
                  uVar19 = _Str_1;
                  goto LAB_00c06f48;
                }
                goto LAB_00c071ec;
              }
            }
            else if ((uVar12 == 0x27d22ae9) &&
                    (uVar20 = System_String__op_Equality(uVar19,_Str_item_fuel_3,0),
                    (uVar20 & 1) != 0)) {
              plVar28 = *(long **)(lVar27 + 0x48);
              uVar19 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
              if (lVar18 == 0) goto LAB_00c071ec;
LAB_00c06f48:
              uVar19 = System_String__Replace(lVar18,_Str__x_,uVar19,0);
              if (plVar28 == (long *)0x0) goto LAB_00c071ec;
LAB_00c07078:
              (**(code **)(*plVar28 + 0x5a8))(plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x5b0));
            }
          }
          else if (uVar12 == 0x6abc5210) {
            uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_2,0);
            if ((uVar20 & 1) != 0) {
              plVar28 = *(long **)(lVar27 + 0x48);
              puVar23 = (undefined8 *)&Str___2;
              goto LAB_00c07004;
            }
          }
          else if (uVar12 == 0x6bbc53a3) {
            uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_3,0);
            if ((uVar20 & 1) != 0) {
              plVar28 = *(long **)(lVar27 + 0x48);
              puVar23 = (undefined8 *)&Str___3;
              goto LAB_00c07004;
            }
          }
          else if ((uVar12 == 0x6cbc5536) &&
                  (uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_0,0), (uVar20 & 1) != 0
                  )) {
            plVar28 = *(long **)(lVar27 + 0x48);
            if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
              uVar19 = Translate__JJJNIPAKLJF
                                 (**(long **)(_Translate_TypeInfo + 0xb8),_Str_FREE_GOLD,0);
joined_r0x00c07074:
              if (plVar28 != (long *)0x0) goto LAB_00c07078;
            }
            goto LAB_00c071ec;
          }
        }
        else if (uVar12 < 0x71bc5d16) {
          if (uVar12 == 0x6dbc56c9) {
            uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_1,0);
            if ((uVar20 & 1) != 0) {
              plVar28 = *(long **)(lVar27 + 0x48);
              puVar23 = (undefined8 *)&Str___1;
              goto LAB_00c07004;
            }
          }
          else if (uVar12 == 0x70bc5b82) {
            uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_4,0);
            if ((uVar20 & 1) != 0) {
              plVar28 = *(long **)(lVar27 + 0x48);
              puVar23 = (undefined8 *)&Str___4;
              goto LAB_00c07004;
            }
          }
          else if ((uVar12 == 0x71bc5d15) &&
                  (uVar20 = System_String__op_Equality(uVar19,_Str_item_gold_5,0), (uVar20 & 1) != 0
                  )) {
            plVar28 = *(long **)(lVar27 + 0x48);
            puVar23 = (undefined8 *)&Str___5;
LAB_00c07004:
            uVar19 = *puVar23;
            lVar15 = lStack_68;
LAB_00c0706c:
            uVar19 = System_String__Concat(lVar15,uVar19,0);
            goto joined_r0x00c07074;
          }
        }
        else if (uVar12 == 0xb5f94774) {
          uVar20 = System_String__op_Equality(uVar19,_Str_item_silver_3,0);
          if ((uVar20 & 1) != 0) {
            plVar28 = *(long **)(lVar27 + 0x48);
            puVar23 = (undefined8 *)&Str___3;
            goto LAB_00c07064;
          }
        }
        else if (uVar12 == 0xb6f94907) {
          uVar20 = System_String__op_Equality(uVar19,_Str_item_silver_2,0);
          if ((uVar20 & 1) != 0) {
            plVar28 = *(long **)(lVar27 + 0x48);
            puVar23 = (undefined8 *)&Str___2;
            goto LAB_00c07064;
          }
        }
        else if ((uVar12 == 0xb7f94a9a) &&
                (uVar20 = System_String__op_Equality(uVar19,_Str_item_silver_1,0), (uVar20 & 1) != 0
                )) {
          plVar28 = *(long **)(lVar27 + 0x48);
          puVar23 = (undefined8 *)&Str___1;
LAB_00c07064:
          uVar19 = *puVar23;
          lVar15 = lStack_70;
          goto LAB_00c0706c;
        }
LAB_00c07090:
        uVar19 = *(undefined8 *)(lVar27 + 0x60);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar20 = UnityEngine_Object__op_Inequality(uVar19,0,0);
        if ((uVar20 & 1) != 0) {
          lVar27 = *(long *)(lVar27 + 0x60);
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
          if ((lVar15 == 0) || (uVar12 = DAFNMLEKHAD__MHBEPDHNNFH(lVar15,0), lVar27 == 0))
          goto LAB_00c071ec;
          UnityEngine_GameObject__SetActive(lVar27,~uVar12 & 1,0);
        }
        uVar12 = *(uint *)(lVar26 + 0x18);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)uVar12);
    }
    if (iVar13 != iVar14) {
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
      if (lVar18 == 0) goto LAB_00c071ec;
      *(undefined4 *)((long)__this + 0x6d0) = *(undefined4 *)(lVar18 + 0x94);
    }
    if (*(char *)((long)__this + 0x6d4) == '\0') {
      *(undefined1 *)((long)__this + 0x6d4) = 1;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar18 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar18 != 0) {
      uVar19 = 0;
      if ((bRam00000000019170dc & 1) == 0) {
        func_0x00a67900(&System_DateTime_TypeInfo,0);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&System_TimeSpan_TypeInfo);
        bRam00000000019170dc = 1;
        uVar19 = extraout_x1;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar19 = extraout_x1_00;
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo,uVar19);
        cRam0000000001916e67 = '\x01';
        uVar19 = extraout_x1_01;
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar19 = extraout_x1_02;
      }
      auVar32._8_8_ = uVar19;
      auVar32._0_8_ = _Main_TypeInfo;
      lVar26 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar26 != 0) {
        uVar19 = *(undefined8 *)(lVar26 + 0xe0);
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar21 = System_DateTime__get_Now(0);
        uStack_58 = System_DateTime__op_Subtraction(uVar19,uVar21,0);
        if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_TimeSpan_TypeInfo);
        }
        uVar19 = System_TimeSpan__get_TotalMinutes(&uStack_58,0);
        if (0.0 <= extraout_d0) {
          uVar12 = 0;
        }
        else {
          auVar33._8_8_ = 0;
          auVar33._0_8_ = extraout_x1_03;
          auVar32 = auVar33 << 0x40;
          if (*(long *)(lVar18 + 0x38) == 0) goto LAB_00c3443c;
          uVar19 = AdvController__HNDMJBICLJF(*(long *)(lVar18 + 0x38),1,0);
          uVar12 = (uint)uVar19;
        }
        uVar20 = CONCAT71(0,0.0 <= extraout_d0);
        auVar32[8] = 0.0 <= extraout_d0;
        auVar32._0_8_ = uVar19;
        auVar32._9_7_ = 0;
        if (*(long *)(lVar18 + 0x20) != 0) {
          lVar26 = *(long *)(*(long *)(lVar18 + 0x20) + 0x690);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar20;
          auVar32 = auVar9 << 0x40;
          if (lVar26 != 0) {
            auVar32 = UnityEngine_GameObject__SetActive(lVar26,uVar20,0);
            if (*(long *)(lVar18 + 0x20) != 0) {
              lVar26 = *(long *)(*(long *)(lVar18 + 0x20) + 0x688);
              auVar2._8_8_ = 0;
              auVar2._0_8_ = auVar32._8_8_;
              auVar32 = auVar2 << 0x40;
              if (lVar26 != 0) {
                auVar33 = UnityEngine_Component__get_gameObject(lVar26,0);
                auVar3._8_8_ = 0;
                auVar3._0_8_ = auVar33._8_8_;
                auVar32 = auVar3 << 0x40;
                if (auVar33._0_8_ != 0) {
                  auVar32 = UnityEngine_GameObject__SetActive(auVar33._0_8_,extraout_d0 < 0.0,0);
                  if (extraout_d0 < 0.0) {
                    if (*(long *)(lVar18 + 0x20) == 0) goto LAB_00c3443c;
                    lVar26 = *(long *)(*(long *)(lVar18 + 0x20) + 0x688);
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = auVar32._8_8_;
                    auVar32 = auVar4 << 0x40;
                    if (lVar26 == 0) goto LAB_00c3443c;
                    auVar32 = UnityEngine_UI_Selectable__set_interactable(lVar26,uVar12 & 1,0);
                    if (*(long *)(lVar18 + 0x20) == 0) goto LAB_00c3443c;
                    lVar26 = *(long *)(*(long *)(lVar18 + 0x20) + 0x688);
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = auVar32._8_8_;
                    auVar32 = auVar5 << 0x40;
                    if (lVar26 == 0) goto LAB_00c3443c;
                    plVar28 = (long *)UnityEngine_UI_Selectable__get_image(lVar26,0);
                    uVar19 = 0;
                    auVar32._8_8_ = 0;
                    auVar32._0_8_ = plVar28;
                    if ((uVar12 & 1) == 0) {
                      if (*(long *)(lVar18 + 0x20) == 0) goto LAB_00c3443c;
                      uVar19 = *(undefined8 *)(*(long *)(lVar18 + 0x20) + 0x680);
                    }
                    auVar32._8_8_ = uVar19;
                    if (plVar28 == (long *)0x0) goto LAB_00c3443c;
                    auVar32 = (**(code **)(*plVar28 + 0x348))
                                        (plVar28,uVar19,*(undefined8 *)(*plVar28 + 0x350));
                  }
                  if ((*(long *)(lVar18 + 0x20) != 0) &&
                     (lVar18 = *(long *)(*(long *)(lVar18 + 0x20) + 0x6d8), lVar18 != 0)) {
                    if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
                      uVar20 = 0;
                      uVar24 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
                      do {
                        uVar22 = auVar32._8_8_;
                        uVar19 = auVar32._0_8_;
                        if (uVar24 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b58();
                        }
                        lVar26 = *(long *)(lVar18 + 0x20 + uVar20 * 8);
                        if ((extraout_d0 < 0.0 & uVar12) == 0) {
LAB_00c343f8:
                          uVar24 = 0;
                        }
                        else {
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar22 = extraout_x1_04;
                          }
                          if (cRam0000000001916e67 == '\0') {
                            func_0x00a67900(&Main_TypeInfo);
                            cRam0000000001916e67 = '\x01';
                            uVar22 = extraout_x1_05;
                          }
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar22 = extraout_x1_06;
                          }
                          lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          auVar6._8_8_ = 0;
                          auVar6._0_8_ = uVar22;
                          auVar32 = auVar6 << 0x40;
                          if (lVar27 == 0) goto LAB_00c3443c;
                          auVar32 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar27,0,0);
                          uVar24 = auVar32._8_8_;
                          uVar19 = 0;
                          if (auVar32._0_8_ == 0) goto LAB_00c343f8;
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar24 = extraout_x1_07;
                          }
                          if (cRam0000000001916e67 == '\0') {
                            func_0x00a67900(&Main_TypeInfo);
                            cRam0000000001916e67 = '\x01';
                            uVar24 = extraout_x1_08;
                          }
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            uVar24 = extraout_x1_09;
                          }
                          lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                          auVar7._8_8_ = 0;
                          auVar7._0_8_ = uVar24;
                          auVar32 = auVar7 << 0x40;
                          if (lVar27 == 0) goto LAB_00c3443c;
                          auVar33 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar27,0,0);
                          auVar8._8_8_ = 0;
                          auVar8._0_8_ = auVar33._8_8_;
                          auVar32 = auVar8 << 0x40;
                          if (auVar33._0_8_ == 0) goto LAB_00c3443c;
                          uVar19 = DJKGLJOCFCE__MCDLFBJCNNA(auVar33._0_8_,0);
                          uVar24 = (ulong)((uint)uVar19 & 1);
                        }
                        auVar32._8_8_ = uVar24;
                        auVar32._0_8_ = uVar19;
                        if (lVar26 == 0) goto LAB_00c3443c;
                        auVar32 = UnityEngine_GameObject__SetActive(lVar26,uVar24,0);
                        uVar24 = (ulong)*(uint *)(lVar18 + 0x18);
                        uVar20 = uVar20 + 1;
                      } while ((long)uVar20 < (long)(int)*(uint *)(lVar18 + 0x18));
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
      il2cpp_throw_967b50(auVar32._0_8_,auVar32._8_8_);
    }
  }
LAB_00c071ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonMainFacebook() { }   @0xb10700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMainFacebook(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f8f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Facebook);
    func_0x00a67900(&Str_com_facebook_lite);
    func_0x00a67900(&Str_com_facebook_katana);
    func_0x00a67900(&Str_fb___page_591440314216617);
    func_0x00a67900(&Str_https___www_facebook_com_ZombieDerby);
    bRam0000000001916f8f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c108bc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
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
    goto LAB_00c108bc;
    AnalyticsController__DFHNBMEPNDH(lVar2,_Str_Facebook,0);
  }
  uVar3 = _Str_https___www_facebook_com_ZombieDerby;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = Main__OBEOCBNIFNF(_Str_com_facebook_katana,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = Main__OBEOCBNIFNF(_Str_com_facebook_lite,0);
    if ((uVar1 & 1) == 0) goto LAB_00c10894;
  }
  uVar3 = _Str_fb___page_591440314216617;
LAB_00c10894:
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Application__OpenURL(uVar3,0);
  return;
}


// ==== public void ButtonBuyUpgradeReward() { }   @0xb10c08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonBuyUpgradeReward(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916f92 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f92 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar1 != 0)) {
    if ((bRam00000000019171df & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo,2,0);
      func_0x00a67900(&MaxSdkAndroid_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&NNPDABJADNE_TypeInfo);
      func_0x00a67900(&Str_ADV_REWARD__SHOW_);
      bRam00000000019171df = 1;
    }
    uVar2 = AdvController__HNDMJBICLJF(lVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined4 *)(lVar1 + 0x30) = 2;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      uStack_48 = _NNPDABJADNE_TypeInfo;
      uStack_40 = 0xffffffffffffffff;
      uStack_38 = *(undefined4 *)(lVar1 + 0x30);
      uVar3 = System_Enum__ToString(&uStack_48,0);
      if (lVar4 != 0) {
        AnalyticsController__JCMFKBONIGF(lVar4,uVar3,0);
        uStack_60 = _NNPDABJADNE_TypeInfo;
        uVar5 = *(undefined8 *)(lVar1 + 0x40);
        uStack_58 = 0xffffffffffffffff;
        uStack_50 = *(undefined4 *)(lVar1 + 0x30);
        uVar3 = System_Enum__ToString(&uStack_60,0);
        if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
        }
        MaxSdkAndroid__ShowRewardedAd(uVar5,uVar3,0,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonGDPRAgree() { }   @0xb10f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonGDPRAgree(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lStack_68;
  
  if ((bRam0000000001916f95 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f95 = 1;
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
  if (lVar4 == 0) {
LAB_00c11058:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__AFFJMPIGCNC(lVar4,0,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c11058;
  Menu__IKMGHNEEKFG(**(long **)(_Menu_TypeInfo + 0xb8),0);
  lVar4 = *(long *)((long)__this + 0x60);
  if (lVar4 == 0) goto LAB_00c11058;
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
  lVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar6,0);
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar7, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___current__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 4) ||
     (*(undefined8 *)(lVar5 + 0x38) = uVar7, *(uint *)(lVar5 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar6,0);
  }
  uVar11 = *(uint *)(lVar5 + 0x18);
  if ((uVar11 < 6) || (*(undefined8 *)(lVar5 + 0x48) = uVar7, uVar11 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x50) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar11 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar11 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x58) = uVar7;
  uVar7 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,lVar4,0);
  if ((uVar8 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,lVar4,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar5 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar5,0);
    lVar5 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar5 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar14 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar14;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)(lVar4 + 0x21) != '\0')) {
        fVar13 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar13) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar5,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar5 == 0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar5,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar4 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (bVar1) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar13 = (float)iVar2 / (float)iVar3;
            if (fVar13 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar5 == 0)
                 ) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar5 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar13) {
                  if ((fVar13 <= 1.61) || (1.8 <= fVar13)) {
                    if (fVar13 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x70);
                    uVar15 = 0x3f51eb85;
                    uVar14 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar5 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x70);
                    uVar15 = 0x3f5eb852;
                    uVar14 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x70);
                  uVar15 = 0x3f733333;
                  uVar14 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar13) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar13) {
                  if (*(long *)(lVar5 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar5 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar5 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x60);
                  uVar15 = 0x3f51eb85;
                  uVar14 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar5 + 0x60);
                  uVar15 = 0x3f5eb852;
                  uVar14 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar5 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0x60);
                uVar14 = 0xc0a00000;
                uVar15 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,uVar7);
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
        GUIWindow__IPELKJAHFGL(lVar4);
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
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar4 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar4);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (!bVar1) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar13 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar13) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar5 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar5 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
                if ((uVar8 & 1) == 0) {
                  lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
                  if (lVar5 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar5,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar5 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar5 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar5 + 0x2c) == 3) {
                      lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
                      if (lVar5 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar5,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar13) {
                          if (1.8 <= fVar13) {
                            uVar15 = 0x3f59999a;
                            uVar14 = 0x42700000;
                          }
                          else {
                            uVar14 = 0x428c0000;
                            uVar15 = 0;
                          }
                        }
                        else {
                          uVar14 = 0x41a00000;
                          uVar15 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar13) {
                  if (fVar13 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar5 + 0xe8);
                    uVar15 = 0x3f733333;
                    uVar14 = 0x428c0000;
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
                uVar14 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar13) {
                  if (1.8 <= fVar13) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar5 + 0xb0);
                  uVar15 = 0x3f6e147b;
                  uVar14 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0xb0);
                uVar14 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar15 = 0;
            }
            else {
              if (fVar13 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar5 + 0x188);
                uVar14 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar5 + 0x188);
              if (1.8 <= fVar13) {
                uVar15 = 0x3f51eb85;
                uVar14 = 0x42180000;
              }
              else {
                uVar15 = 0x3f733333;
                uVar14 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,lStack_68);
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
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
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
              uVar8 = DAFNMLEKHAD__MHBEPDHNNFH(lVar5,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar5 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar5 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(lVar4,uVar7,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar5 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar5 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar5 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar5 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar5,1,0);
  plVar9 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar9[2] = *plVar9;
  *plVar9 = lVar4;
  if (*(char *)(lVar4 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(lVar4);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar4,uVar7,0);
  }
  lVar5 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar5 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar5 + 0x20) = _Str_Window__Show__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar5 + 0x18) < 2) ||
     (*(undefined8 *)(lVar5 + 0x28) = uVar7, *(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x30) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar6,0);
  }
  uVar11 = *(uint *)(lVar5 + 0x18);
  if ((uVar11 < 4) || (*(undefined8 *)(lVar5 + 0x38) = uVar7, uVar11 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x40) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar11 = *(uint *)(lVar5 + 0x18);
  }
  if (uVar11 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar5 + 0x48) = uVar7;
  uVar7 = System_String__Concat(lVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
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
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar4 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
        if ((uVar8 & 1) == 0) {
          uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar4 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar4,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar4,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        lVar4 = *(long *)(lVar4 + 0x178);
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
        if ((pvVar10 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar4 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar4,bVar1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar5,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
        (lVar5 = *(long *)(lVar5 + 0x78), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
         ((lVar5 = *(long *)(lVar5 + 0x70), lVar5 == 0 ||
          (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
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
      uVar14 = 0;
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
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar10 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar5 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar5,bVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x1b8), lVar5 == 0)))) goto LAB_00c485b8;
      uVar14 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar14,lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0 ||
        (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)))) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
    if ((uVar8 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)(lVar4 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar4 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar4 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
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
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x4e0), lVar4 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar4,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar14;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar4 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar4,0);
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
      if (lVar4 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar4,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar4 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
            if ((uVar8 & 1) == 0) {
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
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_00c485b8;
      lVar4 = DAFNMLEKHAD__DKJLCJPBPPN(lVar4,0xffffffff,1,0);
      if (lVar4 == 0) {
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
        if (lVar4 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar4 + 0x104);
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
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar4,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar4,0);
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar4 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar4,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar4,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar4,0);
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


// ==== public void ButtonGDPRTerms() { }   @0xb113d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonGDPRTerms(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916f99 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Str_https___brinemedia_com_privacy_policy_);
    bRam0000000001916f99 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = _Str_https___brinemedia_com_privacy_policy_;
  if (pcRam000000000191b7e8 == (code *)0x0) {
    pcRam000000000191b7e8 = (code *)func_0x00a678c4(&UNK_005a2451);
  }
                    /* WARNING: Could not recover jumptable at 0x01467070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b7e8)(uVar1);
  return;
}


// ==== public void ButtonConfirmSaves(bool is_server) { }   @0xb1191c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonConfirmSaves(void *__this,bool is_server)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001916f9e & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SERVER_CONFIRM);
    func_0x00a67900(&Str_DEVICE_CONFIRM);
    bRam0000000001916f9e = 1;
  }
  *(bool *)((long)__this + 0x880) = is_server;
  plVar13 = *(long **)((long)__this + 0x878);
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) {
LAB_00c119fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  puVar1 = (undefined8 *)&Str_SERVER_CONFIRM;
  if (!is_server) {
    puVar1 = (undefined8 *)&Str_DEVICE_CONFIRM;
  }
  uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),*puVar1,0);
  if (plVar13 == (long *)0x0) goto LAB_00c119fc;
  (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar5,*(undefined8 *)(*plVar13 + 0x5b0));
  lVar6 = *(long *)((long)__this + 0x148);
  if (lVar6 == 0) goto LAB_00c119fc;
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
  lVar8 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar8 == 0) goto LAB_00c485b8;
  uVar5 = UnityEngine_Object__get_name(lVar8,0);
  if ((*(uint *)(lVar7 + 0x18) < 2) ||
     (*(undefined8 *)(lVar7 + 0x28) = uVar5, *(uint *)(lVar7 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x30) = _Str___current__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar7 + 0x18) < 4) ||
     (*(undefined8 *)(lVar7 + 0x38) = uVar5, *(uint *)(lVar7 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x40) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar11 = *(uint *)(lVar7 + 0x18);
  if ((uVar11 < 6) || (*(undefined8 *)(lVar7 + 0x48) = uVar5, uVar11 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x50) = _Str____Child__;
  plVar13 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar13 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    uVar11 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar11 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x58) = uVar5;
  uVar5 = System_String__Concat(lVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar5,lVar6,0);
  if ((uVar9 & 1) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar5,lVar6,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  lVar7 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar7 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar7,0);
    lVar7 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar5 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar7 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(lVar7,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (lVar7 == 0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      if ((uVar9 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (((uVar9 & 1) != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar7,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar7 == 0) goto LAB_00c485b8;
      uVar5 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar7,uVar5,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar2 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (bVar2) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar3 / (float)iVar4;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar7 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar7 == 0)
                 ) goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar7 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
              if ((uVar9 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar7 == 0)) goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar7 + 0x70);
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
                    uVar5 = *(undefined8 *)(lVar7 + 0x70);
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
                  uVar5 = *(undefined8 *)(lVar7 + 0x70);
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
                  uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar7 + 0x240),0);
                  if ((uVar9 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar7 == 0)) goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar7 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar5 = *(undefined8 *)(lVar7 + 0x60);
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
                uVar5 = *(undefined8 *)(lVar7 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar6,uVar5);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar7,0);
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
    uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar10 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38),
             pvVar10 == (void *)0x0)) goto LAB_00c485b8;
          bVar2 = AdvController__EDNAEPDDBPJ(pvVar10);
          if (!bVar2) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar7 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
              goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar7 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar7 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
                if ((uVar9 & 1) == 0) {
                  lVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
                  if (lVar7 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar7,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar7 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(lVar7,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (lVar7 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar7 + 0x2c) == 3) {
                      lVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
                      if (lVar7 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar7,&lStack_68,
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
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,lVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar7,0);
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
      uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar9 & 1) != 0) {
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
              lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar7 == 0) goto LAB_00c485b8;
              uVar9 = DAFNMLEKHAD__MHBEPDHNNFH(lVar7,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar7 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar5,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
                  goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar7 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(lVar6,uVar5,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar7 == 0))
                    goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar7 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__Instantiate_object_
                                      (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar7 + 0x90) = uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar7 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar7,1,0);
  plVar13 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar13[2] = *plVar13;
  *plVar13 = lVar6;
  if (*(char *)(lVar6 + 0x23) != '\0') {
    uVar5 = GUIWindow__FAAELIPKLCB(lVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar5,0);
  }
  lVar7 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar7 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar7 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar7 + 0x20) = _Str_Window__Show__;
  uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar7 + 0x18) < 2) ||
     (*(undefined8 *)(lVar7 + 0x28) = uVar5, *(uint *)(lVar7 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x30) = _Str___last__;
  uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar8 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar8 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar8,0);
  }
  uVar11 = *(uint *)(lVar7 + 0x18);
  if ((uVar11 < 4) || (*(undefined8 *)(lVar7 + 0x38) = uVar5, uVar11 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x40) = _Str____Child__;
  plVar13 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar5 = 0;
  if (plVar13 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    uVar11 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar11 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar7 + 0x48) = uVar5;
  uVar5 = System_String__Concat(lVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
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
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) != 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
      if ((uVar9 & 1) == 0) {
        uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
        if ((uVar9 & 1) == 0) {
          uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
          uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
          if ((uVar9 & 1) != 0) {
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
        pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar10 == (void *)0x0) || (bVar2 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
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
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0))
    goto LAB_00c485b8;
    uVar9 = GUIGarage__ABAHNKCPCFA(lVar7,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x78), lVar7 == 0)) ||
       (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
         ((lVar7 = *(long *)(lVar7 + 0x70), lVar7 == 0 ||
          (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)))) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      if ((uVar9 & 1) != 0) goto LAB_00c47948;
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
      pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar10 == (void *)0x0) || (bVar2 = DAFNMLEKHAD__EFDKHACIIEC(pvVar10), lVar7 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar7,bVar2,0);
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
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar9 & 1) == 0) {
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
        (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x68), lVar7 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar7,*(undefined1 *)(lVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar12,uVar5,0);
    if ((uVar9 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar5,uVar12,0);
      if ((uVar9 & 1) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar9 & 1) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
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
    uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
    if ((uVar9 & 1) == 0) {
      uVar5 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
      if ((uVar9 & 1) != 0) {
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
      uVar9 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar9 & 1) != 0) {
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
          uVar9 = UnityEngine_Object__op_Inequality(uVar5,0,0);
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
    uVar12 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar5,uVar12,0);
    if ((uVar9 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar5,0,0);
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
    if (bVar2) {
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


// ==== public void KBINLNMDLEC() { }   @0xb121dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__KBINLNMDLEC(void *__this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  void *__this_00;
  uint uVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_28;
  byte abStack_24 [4];
  
  if ((bRam0000000001916fa3 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&MMOCGEKHBKE_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_IsEvent__);
    func_0x00a67900(&Str___EventTime____);
    func_0x00a67900(&Str___replays_);
    func_0x00a67900(&Str___time_);
    func_0x00a67900(&Str___event_contest__);
    func_0x00a67900(&Str___status__);
    bRam0000000001916fa3 = 1;
  }
  abStack_24[0] = 0;
  iStack_28 = 0;
  if (*(long *)((long)__this + 0x268) == 0) goto LAB_00c126b4;
  lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x268),0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar4 == 0) {
joined_r0x00c123f4:
    bVar1 = false;
    lVar6 = lVar3;
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00c126b4;
    }
    uVar5 = Level__get_IsEvent(lVar4,0);
    lVar4 = lVar3;
    if ((uVar5 & 1) == 0) {
      lVar4 = 0;
    }
    if ((uVar5 & 1) == 0) {
      bVar1 = true;
      lVar6 = lVar3;
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar6 == 0) goto LAB_00c126b4;
      uVar5 = Level__get_IsEvent(lVar6,0);
      lVar6 = lVar4;
      if ((uVar5 & 1) == 0) {
        lVar6 = 0;
      }
      if ((uVar5 & 1) == 0) goto joined_r0x00c123f4;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x50) == 0)) goto LAB_00c126b4;
      if (*(int *)(*(long *)(lVar3 + 0x50) + 0x1c) == 1) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar3 == 0) goto LAB_00c126b4;
        }
        if (*(void **)(lVar3 + 0x50) == (void *)0x0) goto LAB_00c126b4;
        iVar2 = EventContest__get_TimeLeft(*(void **)(lVar3 + 0x50));
        lVar3 = lVar6;
        if (iVar2 < 0) goto joined_r0x00c123f4;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) goto LAB_00c126b4;
        bVar1 = *(long *)(lVar3 + 0x30) != 0;
      }
      else {
        bVar1 = false;
        lVar6 = lVar4;
      }
    }
  }
  if (lVar6 != 0) {
    UnityEngine_GameObject__SetActive(lVar6,bVar1,0);
    lVar3 = func_0x00a679a0(_string___TypeInfo,0xc);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = _Str_IsEvent__;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar4 == 0) goto LAB_00c126b4;
        abStack_24[0] = Level__get_IsEvent(lVar4,0);
        abStack_24[0] = abStack_24[0] & 1;
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_bool_TypeInfo);
        }
        uVar7 = System_Boolean__ToString(abStack_24,0);
        uVar9 = (uint)*(undefined8 *)(lVar3 + 0x18);
        if ((1 < uVar9) && (*(undefined8 *)(lVar3 + 0x28) = uVar7, uVar9 != 2)) {
          *(undefined8 *)(lVar3 + 0x30) = _Str___event_contest__;
          lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar4 == 0) goto LAB_00c126b4;
          plVar8 = *(long **)(lVar4 + 0x50);
          uVar7 = 0;
          if (plVar8 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            uVar9 = (uint)*(undefined8 *)(lVar3 + 0x18);
          }
          if ((3 < uVar9) && (*(undefined8 *)(lVar3 + 0x38) = uVar7, uVar9 != 4)) {
            *(undefined8 *)(lVar3 + 0x40) = _Str___time_;
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) goto LAB_00c126b4;
            uVar7 = System_Int32__ToString(lVar4 + 0x28,0);
            if ((5 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x48) = uVar7, *(uint *)(lVar3 + 0x18) != 6)) {
              *(undefined8 *)(lVar3 + 0x50) = _Str___status__;
              lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) goto LAB_00c126b4;
              uStack_48 = _MMOCGEKHBKE_TypeInfo;
              uStack_40 = 0xffffffffffffffff;
              uStack_38 = *(undefined4 *)(lVar4 + 0x1c);
              uVar7 = System_Enum__ToString(&uStack_48,0);
              if ((7 < *(uint *)(lVar3 + 0x18)) &&
                 (*(undefined8 *)(lVar3 + 0x58) = uVar7, *(uint *)(lVar3 + 0x18) != 8)) {
                *(undefined8 *)(lVar3 + 0x60) = _Str___EventTime____;
                lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if ((lVar4 == 0) || (__this_00 = *(void **)(lVar4 + 0x50), __this_00 == (void *)0x0)
                   ) goto LAB_00c126b4;
                iStack_28 = EventContest__get_TimeLeft(__this_00);
                uVar7 = System_Int32__ToString(&iStack_28,0);
                uVar9 = *(uint *)(lVar3 + 0x18);
                if ((9 < uVar9) && (*(undefined8 *)(lVar3 + 0x68) = uVar7, uVar9 != 10)) {
                  *(undefined8 *)(lVar3 + 0x70) = _Str___replays_;
                  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0))
                  goto LAB_00c126b4;
                  plVar8 = *(long **)(lVar4 + 0x30);
                  uVar7 = 0;
                  if (plVar8 != (long *)0x0) {
                    uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    uVar9 = *(uint *)(lVar3 + 0x18);
                  }
                  if (0xb < uVar9) {
                    *(undefined8 *)(lVar3 + 0x78) = uVar7;
                    uVar7 = System_String__Concat(lVar3,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar7,0,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00c126b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PGEEGDGGHLL(Level ACLJCGMKGNP, bool MBHJAOIDNMK) { }   @0xb0c014

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__PGEEGDGGHLL(void *__this,void *ACLJCGMKGNP,bool MBHJAOIDNMK)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  undefined4 uStack_54;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000001916fa8 & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__0___1_00_00_);
    bRam0000000001916fa8 = 1;
  }
  uStack_44 = 0;
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
  if (lVar3 == 0) goto LAB_00c0c530;
  lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0xffffffff,0);
  if (lVar3 == 0) {
    if (ACLJCGMKGNP == (void *)0x0) goto LAB_00c0c530;
  }
  else {
    if (ACLJCGMKGNP == (void *)0x0) goto LAB_00c0c530;
    uVar4 = Level__get_IsEvent(ACLJCGMKGNP,0);
    if ((uVar4 & 1) == 0) {
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
      if ((lVar3 == 0) ||
         (pvVar5 = (void *)DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0xffffffff,0), pvVar5 == (void *)0x0))
      goto LAB_00c0c530;
      iVar2 = DJKGLJOCFCE__DLEPICFCEEG(pvVar5);
      plVar8 = *(long **)((long)__this + 0x298);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar3 == 0) || (lVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar3,0xffffffff,0), lVar3 == 0))
      goto LAB_00c0c530;
      uStack_44 = DJKGLJOCFCE__NIDLADCDMOH(lVar3,0);
      uVar6 = System_Int32__ToString(&uStack_44,0);
      if (plVar8 == (long *)0x0) goto LAB_00c0c530;
      (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x5b0));
      plVar8 = *(long **)((long)__this + 0x2a0);
      uVar6 = _Str____;
      if (iVar2 != 0) {
        fVar9 = (float)iVar2 / 100.0;
        iStack_48 = -0x2222222;
        if (fVar9 != INFINITY) {
          iStack_48 = (int)fVar9 / 0x3c;
        }
        uVar6 = func_0x00a67a38(_int_TypeInfo,&iStack_48);
        uStack_54 = func_0x016ded30(fVar9,0x42700000);
        uVar7 = func_0x00a67a38(_float_TypeInfo,&uStack_54);
        uVar6 = System_String__Format(_Str__0___1_00_00_,uVar6,uVar7,0);
      }
      if (plVar8 == (long *)0x0) goto LAB_00c0c530;
      (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x5b0));
    }
  }
  plVar8 = *(long **)((long)__this + 0x288);
  uVar4 = Level__get_IsEvent(ACLJCGMKGNP,0);
  uVar1 = 0xffc22095;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0xff101010;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x2a8))
              ((float)(uVar1 & 0xff) / 255.0,(float)(uVar1 >> 8 & 0xff) / 255.0,
               (float)(uVar1 >> 0x10 & 0xff) / 255.0,0x3f800000,plVar8,
               *(undefined8 *)(*plVar8 + 0x2b0));
    plVar8 = *(long **)((long)__this + 0x290);
    uVar6 = Level__DBEGLMBGKNL(ACLJCGMKGNP,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x5b0));
      GUIGarage__HAGKNGONJFM(__this,ACLJCGMKGNP,MBHJAOIDNMK);
      uVar4 = Level__get_IsEvent(ACLJCGMKGNP,0);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)((long)__this + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c0c530;
          RatingEventController__MLPOBPBMBHG(*(long *)((long)__this + 0x48),0);
        }
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = Main__KCHOEBEIOCE(0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar3 == 0))
        goto LAB_00c0c530;
        if (*(char *)(lVar3 + 0x30) != '\0') {
          pvVar5 = Level__get_gui(ACLJCGMKGNP);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar4 = UnityEngine_Object__op_Inequality(pvVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (pvVar5 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
               pvVar5 == (void *)0x0)) goto LAB_00c0c530;
            GamePadController__FNHCGKNKDNJ(pvVar5,ACLJCGMKGNP);
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar3 == 0))
            goto LAB_00c0c530;
            GamePadController__HFPFJNKNJND(lVar3,0);
          }
        }
      }
      if (*(char *)((long)__this + 0x250) == '\0') {
        if (*(long *)((long)__this + 0x278) == 0) goto LAB_00c0c530;
        fVar9 = (float)UnityEngine_RectTransform__get_anchoredPosition
                                 (*(long *)((long)__this + 0x278),0);
        if ((float)(*(int *)((long)__this + 0x260) + 0x14) < fVar9) {
          GUIGarage__PIHABGKNPDI(__this,0);
        }
      }
      return;
    }
  }
LAB_00c0c530:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DHHCOENABGM() { }   @0xb1143c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DHHCOENABGM(void *__this)

{
  bool bVar1;
  byte bVar2;
  void *__this_00;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((__this_00 == (void *)0x0) ||
     (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(__this_00), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  lVar5 = 0x710;
  if (!bVar1) {
    lVar5 = 0x718;
  }
  lVar5 = *(long *)((long)__this + lVar5);
  if ((bRam000000000191db6f & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar5,0);
    bRam000000000191db6f = 1;
  }
  lVar7 = plVar6[0x1b];
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
      in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
      in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
      *(bool *)(plVar6 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
      uVar4 = UnityEngine_Sprite__get_texture(lVar5,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = 0;
LAB_01550934:
      bVar2 = UnityEngine_Object__op_Equality(uVar4,uVar8,0);
      *(byte *)((long)plVar6 + 0x39) = bVar2 & 1;
      plVar6[0x1b] = lVar5;
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0(plVar6);
      (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      UnityEngine_UI_Image__TrackSprite(plVar6);
      return;
    }
  }
  else {
    lVar7 = plVar6[0x1b];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar7,lVar5,0);
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
      uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
      if ((uVar3 & 1) == 0) {
        if (cRam0000000001916788 == '\0') {
          func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
          cRam0000000001916788 = '\x01';
        }
        fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
        fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
      }
      else {
        if (lVar5 == 0) goto LAB_01550984;
        UnityEngine_Sprite__get_rect(lVar5,0);
      }
      *(bool *)(plVar6 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
      if (plVar6[0x1b] != 0) {
        uVar4 = UnityEngine_Sprite__get_texture(plVar6[0x1b],0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
        uVar8 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) goto LAB_01550984;
          uVar8 = UnityEngine_Sprite__get_texture(lVar5,0);
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


// ==== public void ButtonExit() { }   @0xb15534

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonExit(void *__this)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001916fb2 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916fb2 = 1;
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
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 == 0) goto LAB_00c15690;
  uVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar1,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar1 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
      if (lVar1 == 0) {
LAB_00c15690:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar1 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
        if (lVar1 == 0) goto LAB_00c15690;
        UnityEngine_AudioSource__Stop(lVar1,0);
      }
    }
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191b788 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    bRam000000000191b788 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (pcRam000000000191b780 == (code *)0x0) {
    pcRam000000000191b780 = (code *)func_0x00a678c4(&UNK_0059f71a);
  }
                    /* WARNING: Could not recover jumptable at 0x01466e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b780)(0);
  return;
}


// ==== public void ButtonColorPreview(ShopItem item) { }   @0xb0a954

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonColorPreview(void *__this,void *item)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uStack_54;
  long lStack_48;
  
  if ((bRam0000000001916fb5 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916fb5 = 1;
  }
  uStack_54 = 0;
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
  if (lVar6 == 0) goto LAB_00c0ae40;
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  if (lVar6 == 0) {
    return;
  }
  if (item == (void *)0x0) goto LAB_00c0ae40;
  if (*(char *)((long)item + 0x70) == '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c0ae40;
  CarController__GFAPIMNKMLG
            (**(long **)(_CarController_TypeInfo + 0xb8),*(undefined4 *)((long)item + 0x74),0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x48),0);
  iVar3 = *(int *)((long)item + 0x74);
  if (iVar3 < 1) {
LAB_00c0ab20:
    if (iVar3 == 0) goto LAB_00c0ad44;
    *(void **)((long)__this + 0x568) = item;
    if (*(long *)((long)__this + 0x480) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x480),0,0);
    if (*(long *)((long)__this + 0x4c0) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x4c0),0,0);
    if (*(long *)((long)__this + 0x4b8) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x4b8),0,0);
    if (*(long *)((long)__this + 0x498) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x498),1,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0ae40;
    uVar4 = Menu__POLNAJBPECM(**(long **)(_Menu_TypeInfo + 0xb8),*(undefined4 *)((long)item + 0x74),
                              0);
    if (*(long *)((long)__this + 0x4a0) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x4a0),uVar4 & 1,0);
    if (*(long *)((long)__this + 0x498) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (*(long *)((long)__this + 0x498),&lStack_48,
               _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lStack_48,0,0);
    if ((uVar7 & 1) != 0) {
      if (lStack_48 == 0) goto LAB_00c0ae40;
      UnityEngine_RectTransform__get_anchoredPosition(lStack_48,0);
      bVar2 = (uVar4 & 1) == 0;
      uVar5 = 0xc35c0000;
      if (bVar2) {
        uVar5 = 0;
      }
      uVar1 = 0x437a0000;
      if (bVar2) {
        uVar1 = 0x43c80000;
      }
      UnityEngine_RectTransform__set_anchoredPosition(uVar5,lStack_48,0);
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar1,lStack_48,0,0);
    }
    if (*(long *)((long)__this + 0x478) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x478),1,0);
    plVar8 = *(long **)((long)__this + 0x4a8);
    uVar5 = ShopItem__HJICMDCENKN(item,0xffffffff,0);
    uStack_54 = ShopItem__OKADMIPJHCA(item,uVar5,0);
    uVar9 = System_Int32__ToString(&uStack_54,0);
    if (plVar8 == (long *)0x0) goto LAB_00c0ae40;
    (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x5b0));
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = Main__KCHOEBEIOCE(0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_00c0ae40;
      if (*(char *)(*(long *)(lVar6 + 0x58) + 0x30) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
          if (lVar6 == 0) goto LAB_00c0ae40;
        }
        if (*(long *)(lVar6 + 0x58) == 0) goto LAB_00c0ae40;
        GamePadController__BBNJMJMLBCA(*(long *)(lVar6 + 0x58),0);
      }
    }
  }
  else {
    iVar3 = ShopItem__HJICMDCENKN(item,0xffffffff,0);
    if (iVar3 < 1) {
      iVar3 = *(int *)((long)item + 0x74);
      goto LAB_00c0ab20;
    }
LAB_00c0ad44:
    if (*(long *)((long)__this + 0x478) == 0) goto LAB_00c0ae40;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x478),0,0);
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
    if ((lVar6 == 0) || (lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0), lVar6 == 0))
    goto LAB_00c0ae40;
    MKCBGHDANLA__EJLALLODBKM(lVar6,*(undefined4 *)((long)item + 0x74),0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0ae40;
    Menu__INMDNKGHGEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
    Menu__CDFHCNMGCFI((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
    return;
  }
LAB_00c0ae40:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonMapLevelSelect(GUILevel lvl) { }   @0xb16338

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMapLevelSelect(void *__this,void *lvl)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  byte bVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  long lStack_68;
  long *in_stack_ffffffffffffffc8;
  
  if ((bRam0000000001916fb9 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Selected_lvl__);
    bRam0000000001916fb9 = 1;
  }
  if (lvl == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = System_Int32__ToString((int *)((long)lvl + 0x20),0);
  uVar7 = System_String__Concat(_Str_Selected_lvl__,uVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  iVar4 = *(int *)((long)lvl + 0x20);
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar8 = Level__FHMGLDDPEDJ(iVar4);
  if (pvVar8 == (void *)0x0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != pvVar8) {
    GUIGarage__PIHABGKNPDI(__this,0);
  }
  if ((bRam00000000019170c1 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019170c1 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar15 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(void **)(lVar15 + 0x40) != pvVar8) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar15 = *(long *)(_Main_TypeInfo + 0xb8);
    }
    *(void **)(lVar15 + 0x40) = pvVar8;
    uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar19;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar8 == (void *)0x0))
    goto LAB_00c310d0;
    if ((bRam0000000001916f75 & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo,0);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&Str_UpdateMap);
      bRam0000000001916f75 = 1;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar15 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar15 == 0)) {
LAB_00c0b950:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = *(uint *)(lVar15 + 0x18);
    if (0 < (int)uVar3) {
      uVar17 = 0;
      do {
        if (uVar3 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        pvVar16 = *(void **)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (pvVar16 == *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40)) {
          GUIGarage__PGEEGDGGHLL(pvVar8,pvVar16,true);
        }
        if (pvVar16 == (void *)0x0) goto LAB_00c0b950;
        uVar6 = Level__get_IsEvent(pvVar16,0);
        if ((uVar6 & 1) != 0) {
          Level__FKJAANMGOMP(pvVar16,0);
        }
        Level__HMPEMADOAAL(pvVar16,0);
        uVar3 = *(uint *)(lVar15 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar3);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0b950;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar15 == 0))
      goto LAB_00c0b950;
      BridgePHP__RefreshUserProfileAndEvents(lVar15,0);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar9 = _Str_UpdateMap;
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
    lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar15 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar6 = DAFNMLEKHAD__LLEFEIHEJDE(lVar15,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__Log(plVar9,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar9 == (long *)0x0)) goto LAB_00c590c8;
    lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    if (lVar15 == 0) goto LAB_00c590c8;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar7,0,0);
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
    plVar9 = *(long **)(lVar15 + 0x1e8);
    if ((plVar9 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
       lVar10 == 0)) goto LAB_00c16768;
    if (10000 < *(int *)(lVar10 + 0x10)) {
      if (*(long *)(lVar15 + 0x1e8) == 0) goto LAB_00c16768;
      uVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar15 + 0x1e8),0);
      if ((*(long *)(lVar15 + 0x1e8) == 0) ||
         (lVar10 = UnityEngine_Component__get_transform(*(long *)(lVar15 + 0x1e8),0), lVar10 == 0))
      goto LAB_00c16768;
      uVar12 = UnityEngine_Transform__get_parent(lVar10,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar10 = UnityEngine_Object__Instantiate_object_
                         (uVar11,uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar10 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar10,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___
                );
      *(long **)(lVar15 + 0x1e8) = in_stack_ffffffffffffffc8;
      if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x5a8))
                (in_stack_ffffffffffffffc8,_Str_,*(undefined8 *)(*in_stack_ffffffffffffffc8 + 0x5b0)
                );
    }
    plVar9 = *(long **)(lVar15 + 0x1e8);
    lVar15 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar9 != (long *)0x0) &&
       (uVar11 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
       lVar15 != 0)) {
      uVar3 = *(uint *)(lVar15 + 0x18);
      if ((uVar3 != 0) &&
         (((*(undefined8 *)(lVar15 + 0x20) = uVar11, uVar3 != 1 &&
           (*(undefined8 *)(lVar15 + 0x28) = _Str__color_, 2 < uVar3)) &&
          (*(undefined8 *)(lVar15 + 0x30) = _Str__78e938, uVar3 != 3)))) {
        *(undefined8 *)(lVar15 + 0x38) = _Str___;
        UnityEngine_Time__get_time(0);
        uVar11 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
        uVar11 = System_String__Format(_Str__0_f2_,uVar11,0);
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (((4 < uVar3) && (*(undefined8 *)(lVar15 + 0x40) = uVar11, uVar3 != 5)) &&
           (*(undefined8 *)(lVar15 + 0x48) = _Str____color___, 6 < uVar3)) {
          *(undefined8 *)(lVar15 + 0x50) = uVar7;
          uVar7 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar15 + 0x18)) {
            *(undefined8 *)(lVar15 + 0x58) = uVar7;
            uVar7 = System_String__Concat(lVar15,0);
            (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x5b0));
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
  iVar4 = *(int *)((long)pvVar8 + 0x10);
  if (99 < iVar4) {
    if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    pvVar8 = Level__FHMGLDDPEDJ(iVar4);
    if (pvVar8 == (void *)0x0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar16 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar16 == (void *)0x0))
    goto LAB_00c310d0;
    if ((bRam0000000001916fa5 & 1) == 0) {
      func_0x00a67900(&BridgePHP_TypeInfo,pvVar8,1,0);
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
    if ((pvVar8 == (void *)0x0) || (uVar6 = Level__get_IsEvent(pvVar8,0), (uVar6 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
      bVar2 = *(int *)(*(long *)((long)pvVar8 + 0x50) + 0x1c) == 1;
    }
    if (bVar2) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) == '\0') {
        if (*(long *)((long)pvVar16 + 0x48) == 0) goto LAB_00c12d8c;
        RatingEventController__OJBAJGILIJN(*(long *)((long)pvVar16 + 0x48),pvVar8,0,0);
      }
    }
    if (pvVar8 == (void *)0x0) goto LAB_00c12d8c;
    uVar6 = Level__get_IsEvent(pvVar8,0);
    if ((uVar6 & 1) == 0) {
LAB_00c12828:
      bVar18 = 0;
    }
    else {
      if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
      if (*(int *)(*(long *)((long)pvVar8 + 0x50) + 0x1c) != 1) goto LAB_00c12828;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar18 = *(byte *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a) ^ 1;
    }
    lVar15 = *(long *)((long)pvVar16 + 0x300);
    uVar3 = Level__get_IsEvent(pvVar8,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,~uVar3 & 1,0);
    lVar15 = *(long *)((long)pvVar16 + 0x308);
    uVar3 = Level__get_IsEvent(pvVar8,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar3 & 1,0);
    if (*(long *)((long)pvVar16 + 0x310) == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(*(long *)((long)pvVar16 + 0x310),bVar18 != 0,0);
    lVar15 = *(long *)((long)pvVar16 + 0x350);
    uVar6 = Level__get_IsEvent(pvVar8,0);
    if ((uVar6 & 1) == 0) {
      cVar14 = '\0';
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      cVar14 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2a);
    }
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,cVar14 != '\0',0);
    lVar15 = *(long *)((long)pvVar16 + 0x330);
    uVar3 = Level__get_IsEvent(pvVar8,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar3 & 1,0);
    GUIGarage__ADMNOIMMGGA(pvVar16,bVar18 != 0);
    uVar6 = Level__get_IsEvent(pvVar8,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)((long)pvVar16 + 0x328) == 0) goto LAB_00c12d8c;
      lVar15 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x328),0);
joined_r0x00c12a74:
      if (lVar15 == 0) goto LAB_00c12d8c;
      uVar7 = 0;
    }
    else {
      if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
      plVar9 = *(long **)((long)pvVar16 + 0x318);
      uVar7 = EventContest__get_desc(*(long *)((long)pvVar8 + 0x50),0);
      if (plVar9 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x5b0));
      lVar15 = *(long *)((long)pvVar16 + 0x368);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (lVar15 == 0) goto LAB_00c12d8c;
      UnityEngine_GameObject__SetActive
                (lVar15,*(undefined1 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11),0);
      if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
      iVar4 = EventContest__get_car_id(*(long *)((long)pvVar8 + 0x50),0);
      if (iVar4 < 0) {
LAB_00c12a7c:
        plVar9 = *(long **)((long)pvVar16 + 800);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
           (uVar7 = Translate__JJJNIPAKLJF
                              (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_ANY_CAR,0),
           plVar9 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x5b0));
      }
      else {
        if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
        iVar4 = EventContest__get_car_id(*(long *)((long)pvVar8 + 0x50),0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        lVar15 = **(long **)(_Main_TypeInfo + 0xb8);
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_00c12d8c;
        if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) <= iVar4) goto LAB_00c12a7c;
        plVar9 = *(long **)((long)pvVar16 + 800);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
          lVar15 = **(long **)(_Main_TypeInfo + 0xb8);
          if (lVar15 == 0) goto LAB_00c12d8c;
        }
        if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
        lVar15 = *(long *)(lVar15 + 0x28);
        uVar3 = EventContest__get_car_id(*(long *)((long)pvVar8 + 0x50),0);
        if (lVar15 == 0) goto LAB_00c12d8c;
        if (*(uint *)(lVar15 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
        if ((lVar15 == 0) || (plVar9 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar9 + 0x5a8))
                  (plVar9,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(*plVar9 + 0x5b0));
      }
      if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
      plVar9 = *(long **)((long)pvVar16 + 0x338);
      iVar4 = *(int *)(*(long *)((long)pvVar8 + 0x50) + 0x1c);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c12d8c;
      puVar1 = (undefined8 *)&Str_EVENT_TIME_END_IN;
      if (iVar4 != 1) {
        puVar1 = (undefined8 *)&Str_EVENT_TIME_START_IN;
      }
      uVar7 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),*puVar1,0);
      if (plVar9 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x5b0));
      if (*(long *)((long)pvVar16 + 0x338) == 0) goto LAB_00c12d8c;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)pvVar16 + 0x338),&stack0xffffffffffffffc8,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffc8,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)((long)pvVar8 + 0x50) == 0) || (in_stack_ffffffffffffffc8 == (long *)0x0))
        goto LAB_00c12d8c;
        uVar19 = 0x43c30000;
        if (*(int *)(*(long *)((long)pvVar8 + 0x50) + 0x1c) != 1) {
          uVar19 = 0x44688000;
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar19,in_stack_ffffffffffffffc8,0,0);
        uVar19 = UnityEngine_RectTransform__get_anchoredPosition(in_stack_ffffffffffffffc8,0);
        if (*(long *)((long)pvVar8 + 0x50) == 0) goto LAB_00c12d8c;
        uVar21 = 0x42b20000;
        if (*(int *)(*(long *)((long)pvVar8 + 0x50) + 0x1c) != 1) {
          uVar21 = 0x42960000;
        }
        UnityEngine_RectTransform__set_anchoredPosition(uVar19,uVar21,in_stack_ffffffffffffffc8,0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar15 == 0))
      goto LAB_00c12d8c;
      uVar7 = BridgePHP__GetErrors(lVar15,1,0);
      uVar6 = System_String__op_Inequality(uVar7,_Str_,0);
      if ((*(long *)((long)pvVar16 + 0x328) == 0) ||
         (lVar15 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x328),0),
         lVar15 == 0)) goto LAB_00c12d8c;
      if ((uVar6 & 1) != 0) {
        UnityEngine_GameObject__SetActive(lVar15,1,0);
        if (*(long *)((long)pvVar16 + 0x308) == 0) goto LAB_00c12d8c;
        UnityEngine_GameObject__SetActive(*(long *)((long)pvVar16 + 0x308),0,0);
        plVar9 = *(long **)((long)pvVar16 + 0x328);
        if (plVar9 == (long *)0x0) goto LAB_00c12d8c;
        (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x5b0));
        lVar15 = *(long *)((long)pvVar16 + 0x330);
        goto joined_r0x00c12a74;
      }
      UnityEngine_GameObject__SetActive(lVar15,0,0);
      lVar15 = *(long *)((long)pvVar16 + 0x330);
      if (lVar15 == 0) goto LAB_00c12d8c;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar15,uVar7,0);
    GUIGarage__KBINLNMDLEC(pvVar16);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = Main__KCHOEBEIOCE(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar15 = **(long **)(_Menu_TypeInfo + 0xb8);
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x58) == 0)) {
LAB_00c12d8c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(char *)(*(long *)(lVar15 + 0x58) + 0x30) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar15 = **(long **)(_Menu_TypeInfo + 0xb8);
          if (lVar15 == 0) goto LAB_00c12d8c;
        }
        if (*(long *)(lVar15 + 0x58) == 0) goto LAB_00c12d8c;
        GamePadController__PKDDGJPLNAP(*(long *)(lVar15 + 0x58),0);
      }
    }
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) {
LAB_00c310d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916f81 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f81 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
    uVar6 = Menu__CLJDAMIIAKE(**(long **)(_Menu_TypeInfo + 0xb8),0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0dbe0;
      if (*(char *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = 0;
        GUIGarage__PIHABGKNPDI(lVar15,1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          lVar10 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),0,0);
          if (lVar10 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar11 = func_0x00a67b44();
            uVar7 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar11,uVar7,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar6 = (*pcRam000000000191c478)(lVar15);
            if ((uVar6 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(lVar15,lVar10);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar11 = func_0x00a67b44();
            uVar7 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar11,uVar7,0);
          }
          uVar7 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar22 = func_0x00a67a20(uVar11,uVar7);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar22._0_8_,auVar22._8_8_);
          return;
        }
        goto LAB_00c0dbe0;
      }
    }
  }
  lVar10 = *(long *)(lVar15 + 0x78);
  *(undefined1 *)(lVar15 + 0x630) = 1;
  if (lVar10 == 0) {
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
  lVar15 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x20) = _Str_Try_to_Show__;
  lVar13 = UnityEngine_Component__get_gameObject(lVar10,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar13,0);
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar7, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___current__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar15 + 0x18) < 4) ||
     (*(undefined8 *)(lVar15 + 0x38) = uVar7, *(uint *)(lVar15 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar3 = *(uint *)(lVar15 + 0x18);
  if ((uVar3 < 6) || (*(undefined8 *)(lVar15 + 0x48) = uVar7, uVar3 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x50) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar3 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar3 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x58) = uVar7;
  uVar7 = System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar7,lVar10,0);
  if ((uVar6 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar7,lVar10,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar15 = _GUIWindow_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar15 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar15 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar15,0);
    lVar15 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar7 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar15 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar10 + 0x20) == '\0') {
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
      if ((uVar6 & 1) == 0) goto LAB_00c46b74;
      uVar19 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar19;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)(lVar10 + 0x21) != '\0')) {
        fVar20 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar20) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar15,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar15,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar10 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar2 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (bVar2) {
            iVar4 = UnityEngine_Screen__get_width(0);
            iVar5 = UnityEngine_Screen__get_height(0);
            fVar20 = (float)iVar4 / (float)iVar5;
            if (fVar20 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0)
               ) goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar15 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar15 == 0)) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar15 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
              if ((uVar6 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if ((fVar20 <= 1.61) || (1.8 <= fVar20)) {
                    if (fVar20 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar15 + 0x70);
                    uVar21 = 0x3f51eb85;
                    uVar19 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar15 + 0x70);
                    uVar21 = 0x3f5eb852;
                    uVar19 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar15 + 0x70);
                  uVar21 = 0x3f733333;
                  uVar19 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar20) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar15 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar20) {
                  if (*(long *)(lVar15 + 0x240) == 0) goto LAB_00c485b8;
                  uVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar15 + 0x240),0);
                  if ((uVar6 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar15 + 0x60);
                  uVar21 = 0x3f51eb85;
                  uVar19 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar15 + 0x60);
                  uVar21 = 0x3f5eb852;
                  uVar19 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar15 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar15 + 0x60);
                uVar19 = 0xc0a00000;
                uVar21 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar19,uVar21,lVar10,uVar7);
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
        GUIWindow__IPELKJAHFGL(lVar10);
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
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(char *)(lVar10 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar10);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar2 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (!bVar2) goto LAB_00c47120;
          iVar4 = UnityEngine_Screen__get_width(0);
          iVar5 = UnityEngine_Screen__get_height(0);
          fVar20 = (float)iVar4 / (float)iVar5;
          if (1.51 < fVar20) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar15 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar15 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar15 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
                if ((uVar6 & 1) == 0) {
                  lVar15 = UnityEngine_Component__get_gameObject(lVar10,0);
                  if (lVar15 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar15,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar15 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Inequality(lVar15,0,0);
                  if ((uVar6 & 1) != 0) {
                    if (lVar15 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar15 + 0x2c) == 3) {
                      lVar15 = UnityEngine_Component__get_gameObject(lVar10,0);
                      if (lVar15 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar15,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar6 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar6 & 1) != 0) {
                        if (1.61 <= fVar20) {
                          if (1.8 <= fVar20) {
                            uVar21 = 0x3f59999a;
                            uVar19 = 0x42700000;
                          }
                          else {
                            uVar19 = 0x428c0000;
                            uVar21 = 0;
                          }
                        }
                        else {
                          uVar19 = 0x41a00000;
                          uVar21 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar20) {
                  if (fVar20 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar15 + 0xe8);
                    uVar21 = 0x3f733333;
                    uVar19 = 0x428c0000;
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
                uVar19 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar20) {
                  if (1.8 <= fVar20) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar15 + 0xb0);
                  uVar21 = 0x3f6e147b;
                  uVar19 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0xb0);
                uVar19 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar21 = 0;
            }
            else {
              if (fVar20 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0x188);
                uVar19 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar15 + 0x188);
              if (1.8 <= fVar20) {
                uVar21 = 0x3f51eb85;
                uVar19 = 0x42180000;
              }
              else {
                uVar21 = 0x3f733333;
                uVar19 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar19,uVar21,lVar10,lStack_68);
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
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
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
              uVar6 = DAFNMLEKHAD__MHBEPDHNNFH(lVar15,0);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar15 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar15 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(lVar10,uVar7,0);
                  if ((uVar6 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar15 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar15 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar15 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar15 = UnityEngine_Component__get_gameObject(lVar10,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar15,1,0);
  plVar9 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar9[2] = *plVar9;
  *plVar9 = lVar10;
  if (*(char *)(lVar10 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(lVar10);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar10,uVar7,0);
  }
  lVar15 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar15 + 0x20) = _Str_Window__Show__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar6 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar7, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar6 & 1) != 0) {
    lVar13 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar13 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar13,0);
  }
  uVar3 = *(uint *)(lVar15 + 0x18);
  if ((uVar3 < 4) || (*(undefined8 *)(lVar15 + 0x38) = uVar7, uVar3 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str____Child__;
  plVar9 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar9 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    uVar3 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar3 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x48) = uVar7;
  uVar7 = System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
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
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar15 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0))
        goto LAB_00c485b8;
        uVar11 = *(undefined8 *)(lVar15 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
        if ((uVar6 & 1) == 0) {
          uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0))
          goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(lVar15 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0)
               ) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar15,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar15,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar15 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar15 == 0))
        goto LAB_00c485b8;
        lVar15 = *(long *)(lVar15 + 0x178);
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
        if ((pvVar8 == (void *)0x0) || (bVar2 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar15 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar15,bVar2,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
    goto LAB_00c485b8;
    uVar6 = GUIGarage__ABAHNKCPCFA(lVar15,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
        (lVar15 = *(long *)(lVar15 + 0x78), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
         ((lVar15 = *(long *)(lVar15 + 0x70), lVar15 == 0 ||
          (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
      goto LAB_00c485b8;
      uVar6 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
      if ((uVar6 & 1) != 0) goto LAB_00c47948;
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
      uVar19 = 0;
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
      pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar8 == (void *)0x0) || (bVar2 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar15 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,bVar2,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0 ||
          (lVar15 = *(long *)(lVar15 + 0x1b8), lVar15 == 0)))) goto LAB_00c485b8;
      uVar19 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar19,lVar15,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
       ((lVar15 = *(long *)(lVar15 + 0x60), lVar15 == 0 ||
        (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
    goto LAB_00c485b8;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar6 & 1) == 0) {
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
        (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x68), lVar15 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar15,*(undefined1 *)(lVar10 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar15 + 0x78);
    uVar11 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar11,uVar7,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar15 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar7,uVar11,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar6 & 1) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
          goto LAB_00c485b8;
          uVar11 = *(undefined8 *)(lVar15 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
          if ((uVar6 & 1) != 0) {
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
        lVar15 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0)) ||
           (lVar15 = *(long *)(lVar15 + 0x4e0), lVar15 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar15,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar19;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar15 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
    if ((uVar6 & 1) == 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      uVar11 = *(undefined8 *)(lVar15 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar15,0);
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
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar6 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar15,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar15 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar15 == 0) goto LAB_00c485b8;
            uVar6 = UnityEngine_AudioSource__get_isPlaying(lVar15,0);
            if ((uVar6 & 1) == 0) {
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
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_00c485b8;
      lVar15 = DAFNMLEKHAD__DKJLCJPBPPN(lVar15,0xffffffff,1,0);
      if (lVar15 == 0) {
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
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar15 + 0x104);
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
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar15,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar15,0);
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
    goto LAB_00c485b8;
    uVar11 = *(undefined8 *)(lVar15 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar7,uVar11,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar15,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar15 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar15,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar15 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar15,0);
      }
    }
    if (bVar2) {
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


// ==== public void ToggleCheatGroup(int type) { }   @0xb13fcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ToggleCheatGroup(void *__this,int type)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  void *__this_00;
  undefined4 uVar12;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001916fbd & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo,type);
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
  iStack_d4 = 0;
  lVar7 = *(long *)((long)__this + 0x888);
  if (lVar7 != 0) {
    lVar10 = 4;
    while( true ) {
      uVar6 = _Str_;
      uVar9 = (int)lVar10 - 4;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_00c14798;
      lVar7 = *(long *)(lVar7 + lVar10 * 8);
      if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0xe0), plVar4 == (long *)0x0))
      goto LAB_00c14264;
      uVar12 = 0;
      uVar2 = 0;
      uVar3 = 0;
      if (*(char *)(lVar7 + 0x120) != '\0') {
        uVar12 = 0x3f22a2a2;
        uVar2 = 0x3f038384;
        uVar3 = 0x3eb4b4b5;
      }
      (**(code **)(*plVar4 + 0x2a8))
                (uVar3,uVar2,uVar12,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
      lVar7 = *(long *)((long)__this + 0x888);
      if (lVar7 == 0) goto LAB_00c14264;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_00c14798;
      lVar7 = *(long *)(lVar7 + lVar10 * 8);
      if (lVar7 == 0) goto LAB_00c14264;
      if (*(char *)(lVar7 + 0x120) != '\0') {
        lVar7 = UnityEngine_Component__get_transform(lVar7,0);
        if (lVar7 == 0) goto LAB_00c14264;
        UnityEngine_Transform__SetAsLastSibling(lVar7,0);
      }
      lVar7 = *(long *)((long)__this + 0x890);
      if (lVar7 == 0) goto LAB_00c14264;
      if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_00c14798;
      lVar8 = *(long *)((long)__this + 0x888);
      if (lVar8 == 0) goto LAB_00c14264;
      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_00c14798;
      lVar8 = *(long *)(lVar8 + lVar10 * 8);
      if ((lVar8 == 0) || (lVar7 = *(long *)(lVar7 + lVar10 * 8), lVar7 == 0)) goto LAB_00c14264;
      UnityEngine_GameObject__SetActive(lVar7,*(undefined1 *)(lVar8 + 0x120),0);
      lVar7 = *(long *)((long)__this + 0x888);
      lVar10 = lVar10 + 1;
      if (lVar7 == 0) goto LAB_00c14264;
    }
    plVar4 = *(long **)((long)__this + 0x8a0);
    if (plVar4 != (long *)0x0) {
      plVar11 = *(long **)((long)__this + 0x898);
      (**(code **)(*plVar4 + 0x5a8))(plVar4,_Str_,*(undefined8 *)(*plVar4 + 0x5b0));
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x5b0));
        if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
        if (lVar7 != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                    (lVar7,&uStack_100,
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
            plVar4 = *(long **)((long)__this + 0x8a0);
            lVar7 = func_0x00a679a0(_string___TypeInfo,9);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar6 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x20) = uVar6;
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
            if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x28) = uVar6;
            if (*(uint *)(lVar7 + 0x18) == 2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x30) = _Str_____;
            func_0x00b7fd54(&lStack_d0,&lStack_90,
                            _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                           );
            if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            puVar1 = (undefined8 *)&Str__;
            if (*(char *)(lStack_90 + 0x10) != '\0') {
              puVar1 = (undefined8 *)&Str__;
            }
            *(undefined8 *)(lVar7 + 0x38) = *puVar1;
            if (*(uint *)(lVar7 + 0x18) == 4) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x40) = _Str_____;
            func_0x00b7fd54(&lStack_d0,&lStack_90,
                            _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                           );
            if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar6 = System_Int32__ToString(lStack_90 + 0x20,0);
            if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x48) = uVar6;
            if (*(uint *)(lVar7 + 0x18) == 6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x50) = _Str______;
            func_0x00b7fc68(&lStack_d0,&lStack_90,
                            _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                           );
            if (*(uint *)(lVar7 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(long *)(lVar7 + 0x58) = lStack_90;
            uVar6 = System_Environment__get_NewLine(0);
            if (*(uint *)(lVar7 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined8 *)(lVar7 + 0x60) = uVar6;
            uVar6 = System_String__Concat(lVar7,0);
            (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x5b0));
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
              (lVar7 = **(long **)(_RatingEventController_TypeInfo + 0xb8), lVar7 == 0)) ||
             (uVar9 = *(uint *)(lVar7 + 0x18), (int)uVar9 < 1)) {
            return;
          }
          lVar10 = 0;
          while ((uint)lVar10 < uVar9) {
            __this_00 = *(void **)(lVar7 + 0x20 + lVar10 * 8);
            plVar4 = *(long **)((long)__this + 0x898);
            lVar8 = func_0x00a679a0(_string___TypeInfo,0xf);
            if ((plVar4 == (long *)0x0) ||
               (uVar6 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)),
               lVar8 == 0)) goto LAB_00c14264;
            if (*(int *)(lVar8 + 0x18) == 0) break;
            *(undefined8 *)(lVar8 + 0x20) = uVar6;
            if (__this_00 == (void *)0x0) goto LAB_00c14264;
            uVar6 = System_Int32__ToString((long)__this_00 + 0x10,0);
            if ((*(uint *)(lVar8 + 0x18) < 2) ||
               (*(undefined8 *)(lVar8 + 0x28) = uVar6, *(uint *)(lVar8 + 0x18) == 2)) break;
            *(undefined8 *)(lVar8 + 0x30) = _Str_____;
            uVar6 = System_Int32__ToString((long)__this_00 + 0x14,0);
            if ((*(uint *)(lVar8 + 0x18) < 4) ||
               (*(undefined8 *)(lVar8 + 0x38) = uVar6, *(uint *)(lVar8 + 0x18) == 4)) break;
            *(undefined8 *)(lVar8 + 0x40) = _Str_____;
            uStack_100 = _MDGGLDMKCFB_TypeInfo;
            uStack_f8 = 0xffffffffffffffff;
            uStack_f0 = *(undefined4 *)((long)__this_00 + 0x18);
            uVar6 = System_Enum__ToString(&uStack_100,0);
            if ((*(uint *)(lVar8 + 0x18) < 6) ||
               (*(undefined8 *)(lVar8 + 0x48) = uVar6, *(uint *)(lVar8 + 0x18) == 6)) break;
            *(undefined8 *)(lVar8 + 0x50) = _Str______;
            uStack_118 = _MMOCGEKHBKE_TypeInfo;
            uStack_110 = 0xffffffffffffffff;
            uStack_108 = *(undefined4 *)((long)__this_00 + 0x1c);
            uVar6 = System_Enum__ToString(&uStack_118,0);
            if ((*(uint *)(lVar8 + 0x18) < 8) ||
               (*(undefined8 *)(lVar8 + 0x58) = uVar6, *(uint *)(lVar8 + 0x18) == 8)) break;
            *(undefined8 *)(lVar8 + 0x60) = _Str_____;
            uVar6 = System_Int32__ToString((long)__this_00 + 0x28,0);
            if ((*(uint *)(lVar8 + 0x18) < 10) ||
               (*(undefined8 *)(lVar8 + 0x68) = uVar6, *(uint *)(lVar8 + 0x18) == 10)) break;
            *(undefined8 *)(lVar8 + 0x70) = _Str_____;
            iStack_d4 = EventContest__get_TimeLeft(__this_00);
            uVar6 = System_Int32__ToString(&iStack_d4,0);
            uVar9 = *(uint *)(lVar8 + 0x18);
            if ((uVar9 < 0xc) || (*(undefined8 *)(lVar8 + 0x78) = uVar6, uVar9 == 0xc)) break;
            *(undefined8 *)(lVar8 + 0x80) = _Str_____;
            uVar6 = _Str_0;
            if (*(long *)((long)__this_00 + 0x30) != 0) {
              iStack_d4 = (int)*(undefined8 *)(*(long *)((long)__this_00 + 0x30) + 0x18);
              uVar6 = System_Int32__ToString(&iStack_d4,0);
              uVar9 = *(uint *)(lVar8 + 0x18);
            }
            if (uVar9 < 0xe) break;
            *(undefined8 *)(lVar8 + 0x88) = uVar6;
            uVar6 = System_Environment__get_NewLine(0);
            if (*(uint *)(lVar8 + 0x18) < 0xf) break;
            *(undefined8 *)(lVar8 + 0x90) = uVar6;
            uVar6 = System_String__Concat(lVar8,0);
            (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x5b0));
            uVar9 = *(uint *)(lVar7 + 0x18);
            lVar10 = lVar10 + 1;
            if ((int)uVar9 <= (int)lVar10) {
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


// ==== public void ButtonCheatAds() { }   @0xb16e78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCheatAds(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [12];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000001916fc1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&MaxSdkAndroid_TypeInfo);
    bRam0000000001916fc1 = 1;
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
    lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar2 != 0) && (uVar1 = DAFNMLEKHAD__MHBEPDHNNFH(lVar2,0), lVar8 != 0)) {
    DAFNMLEKHAD__NMKDDNOGEIJ(lVar8,~uVar1 & 1,0);
    GUIGarage__MKJAANBPFJH(__this);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar8 != 0) {
      uVar3 = DAFNMLEKHAD__MHBEPDHNNFH(lVar8,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = MaxSdkAndroid__IsInitialized(0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((bRam0000000001917662 & 1) == 0) {
            func_0x00a67900(&Method_System_Array_Empty_object___);
            func_0x00a67900(&MaxSdkAndroid_TypeInfo);
            func_0x00a67900(&Str_showMediationDebugger);
            bRam0000000001917662 = 1;
          }
          if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar8 = _Method_System_Array_Empty_object___;
          lVar2 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
          lVar7 = **(long **)(_MaxSdkAndroid_TypeInfo + 0xb8);
          if (lVar2 == 0) {
            func_0x00a9e42c(_Method_System_Array_Empty_object___);
            lVar2 = *(long *)(lVar8 + 0x38);
          }
          lVar2 = *(long *)(lVar2 + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = func_0x00a9e3d0();
          }
          uVar5 = _Str_showMediationDebugger;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18);
          uVar4 = UnityEngine__AndroidJNIHelper__GetSignature(lVar8);
          uVar5 = UnityEngine__AndroidJNIHelper__GetMethodID(uVar9,uVar5,uVar4,1);
          lVar2 = tpidr_el0;
          lStack_48 = *(long *)(lVar2 + 0x28);
          if ((bRam000000000191b543 & 1) == 0) {
            func_0x00a67900(&Method_UnityEngine_AndroidJavaObject__CallStatic__);
            func_0x00a67900(&Method_System_Span_jvalue___ctor__);
            bRam000000000191b543 = 1;
          }
          if ((lVar8 == 0) || (uVar3 = *(ulong *)(lVar8 + 0x18), uVar3 == 0)) {
            uVar4 = 0;
            uVar9 = 0;
          }
          else {
            if ((uVar3 & 0xffffffff) == 0) {
              puVar10 = (undefined1 *)0x0;
            }
            else {
              puVar10 = auStack_60 +
                        -((-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3) +
                          0xf & 0xfffffffffffffff0);
            }
            func_0x016decb0(puVar10,0);
            uStack_58 = 0;
            uStack_50 = 0;
            func_0x00c90098(&uStack_58,puVar10,uVar3 & 0xffffffff,
                            _Method_System_Span_jvalue___ctor__);
            uVar4 = uStack_58;
            uVar9 = uStack_50;
          }
          UnityEngine_AndroidJNIHelper__CreateJNIArgArray(lVar8,uVar4,uVar9);
          if (*(long *)(lVar7 + 0x18) != 0) {
            UnityEngine_AndroidJNISafe__CallStaticVoidMethod
                      (*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18),uVar5,uVar4,uVar9);
            UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(lVar8,uVar4,uVar9);
            while( true ) {
              if (*(long *)(lVar2 + 0x28) == lStack_48) {
                return;
              }
              auVar11 = func_0x016dec70();
              if (auVar11._8_4_ != 1) break;
              plVar6 = (long *)func_0x016dec50(auVar11._0_8_);
              lVar7 = *plVar6;
              func_0x016dec60();
              UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(lVar8,uVar4,uVar9);
              if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b48(lVar7);
              }
            }
            UnityEngine__AndroidJNIHelper__DeleteJNIArgArray(lVar8,uVar4,uVar9);
            func_0x00b65214(auVar11._0_8_);
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b48(0);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EEOMMEJNEOF(bool FJDCALHGHCI) { }   @0xb17248

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__EEOMMEJNEOF(void *__this,bool FJDCALHGHCI)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((bRam0000000001916fc6 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_Button___);
    bRam0000000001916fc6 = 1;
  }
  if ((*(long *)((long)__this + 0x78) != 0) &&
     (lVar2 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                        (*(long *)((long)__this + 0x78),1,
                         _Method_UnityEngine_Component_GetComponentsInChildren_Button___),
     lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00c172f0;
        UnityEngine_UI_Selectable__set_interactable(lVar3,FJDCALHGHCI,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c172f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonStartRaceGo() { }   @0xb17410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonStartRaceGo(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916fca & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916fca = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    lVar1 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),0,0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CIGPFNEMEDJ() { }   @0xb177b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__CIGPFNEMEDJ(void *__this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
  lVar1 = *(long *)((long)__this + 0x500);
  if (lVar1 != 0) {
    fVar7 = 50.0;
    lVar4 = 0;
    uVar3 = 0;
    do {
      if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) {
        return;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
LAB_00c17878:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar1 = *(long *)(lVar1 + lVar4 + 0x20);
      if (lVar1 == 0) break;
      fVar6 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
      lVar2 = *(long *)((long)__this + 0x508);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_00c17878;
      lVar2 = lVar2 + lVar4;
      uVar3 = uVar3 + 1;
      fVar7 = fVar7 - fVar5 * 50.0 * *(float *)(lVar2 + 0x24);
      lVar4 = lVar4 + 8;
      UnityEngine_RectTransform__set_anchoredPosition
                (fVar6 - fVar5 * 50.0 * *(float *)(lVar2 + 0x20),fVar7,lVar1,0);
      lVar1 = *(long *)((long)__this + 0x500);
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonMap() { }   @0xb179b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonMap(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  long lStack_68;
  
  if ((bRam0000000001916fd0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd0 = 1;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_00c17c14;
  lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0,0);
  if (lVar4 == 0) {
    return;
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
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c17c14;
    uVar5 = Menu__HMCFLJKHPAI(**(long **)(_Menu_TypeInfo + 0xb8),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      plVar11 = *(long **)(_Main_TypeInfo + 0xb8);
      if (*plVar11 != 0) {
        lVar4 = *(long *)(*plVar11 + 0x30);
        *(undefined4 *)((long)plVar11 + 0x2c) = 0xc;
        plVar11[8] = lVar4;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          lVar4 = Menu__LBKMBBLLINK(**(long **)(_Menu_TypeInfo + 0xb8),0,0);
          if (lVar4 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar9 = func_0x00a67b44();
            uVar12 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar9,uVar12,0);
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
              (*pcRam000000000191c488)(__this,lVar4);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar9 = func_0x00a67b44();
            uVar12 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar9,uVar12,0);
          }
          uVar12 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar16 = func_0x00a67a20(uVar9,uVar12);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar16._0_8_,auVar16._8_8_);
          return;
        }
      }
      goto LAB_00c17c14;
    }
  }
  if ((*(long *)((long)__this + 0x1c0) == 0) ||
     (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1c0),0), lVar4 == 0))
  {
LAB_00c17c14:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)((long)__this + 0x1c0) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x1c0),0), lVar4 == 0
       )) goto LAB_00c17c14;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
  }
  lVar4 = *(long *)((long)__this + 0x70);
  if (lVar4 == 0) goto LAB_00c17c14;
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
  lVar7 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar12 = UnityEngine_Object__get_name(lVar7,0);
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
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar10 = *(uint *)(lVar6 + 0x18);
  if ((uVar10 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar12, uVar10 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar11 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar11 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    uVar10 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar10 < 8) goto LAB_00c485b4;
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
  uVar5 = UnityEngine_Object__op_Equality(uVar12,lVar4,0);
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
  uVar5 = UnityEngine_Object__op_Equality(uVar12,lVar4,0);
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
    lVar6 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar6,0);
    lVar6 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar12 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar6 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar14 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar12 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar14;
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
      if (((uVar5 & 1) != 0) && (*(char *)(lVar4 + 0x21) != '\0')) {
        fVar13 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar13) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar6,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar12 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar6,uVar12,0);
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
        if (*(char *)(lVar4 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (bVar1) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar13 = (float)iVar2 / (float)iVar3;
            if (fVar13 <= 1.51) goto LAB_00c46f40;
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
            uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
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
              uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar13) {
                  if ((fVar13 <= 1.61) || (1.8 <= fVar13)) {
                    if (fVar13 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar6 + 0x70);
                    uVar15 = 0x3f51eb85;
                    uVar14 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar12 = *(undefined8 *)(lVar6 + 0x70);
                    uVar15 = 0x3f5eb852;
                    uVar14 = 0x42840000;
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
                  uVar15 = 0x3f733333;
                  uVar14 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar13) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar13) {
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
                  uVar15 = 0x3f51eb85;
                  uVar14 = 0x41a00000;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar6 + 0x60);
                  uVar15 = 0x3f5eb852;
                  uVar14 = 0x40a00000;
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
                uVar14 = 0xc0a00000;
                uVar15 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,uVar12);
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
        GUIWindow__IPELKJAHFGL(lVar4);
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
        if (*(char *)(lVar4 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar4);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), pvVar8 == (void *)0x0)
             ) goto LAB_00c485b8;
          bVar1 = AdvController__EDNAEPDDBPJ(pvVar8);
          if (!bVar1) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar13 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar13) {
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
            uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
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
              uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
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
                uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
                if ((uVar5 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
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
                      lVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
                        if (1.61 <= fVar13) {
                          if (1.8 <= fVar13) {
                            uVar15 = 0x3f59999a;
                            uVar14 = 0x42700000;
                          }
                          else {
                            uVar14 = 0x428c0000;
                            uVar15 = 0;
                          }
                        }
                        else {
                          uVar14 = 0x41a00000;
                          uVar15 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar13) {
                  if (fVar13 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
                    uVar15 = 0x3f733333;
                    uVar14 = 0x428c0000;
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
                uVar14 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar13) {
                  if (1.8 <= fVar13) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar15 = 0x3f6e147b;
                  uVar14 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
                uVar14 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar15 = 0;
            }
            else {
              if (fVar13 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar14 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
              if (1.8 <= fVar13) {
                uVar15 = 0x3f51eb85;
                uVar14 = 0x42180000;
              }
              else {
                uVar15 = 0x3f733333;
                uVar14 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar14,uVar15,lVar4,lStack_68);
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
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar6 == 0) goto LAB_00c485b8;
              uVar5 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
              if ((uVar5 & 1) == 0) {
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
                  uVar5 = UnityEngine_Object__op_Equality(lVar4,uVar12,0);
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
  lVar6 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  plVar11 = *(long **)(_GUIWindow_TypeInfo + 0xb8);
  plVar11[2] = *plVar11;
  *plVar11 = lVar4;
  if (*(char *)(lVar4 + 0x23) != '\0') {
    uVar12 = GUIWindow__FAAELIPKLCB(lVar4);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar4,uVar12,0);
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
    lVar7 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar12 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar10 = *(uint *)(lVar6 + 0x18);
  if ((uVar10 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar12, uVar10 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar11 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar12 = 0;
  if (plVar11 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    uVar10 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar10 < 6) goto LAB_00c485b4;
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
         (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
      goto LAB_00c485b8;
      uVar9 = *(undefined8 *)(lVar4 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        uVar9 = *(undefined8 *)(lVar4 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
        if ((uVar5 & 1) == 0) {
          uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          uVar9 = *(undefined8 *)(lVar4 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar4,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar4,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
        goto LAB_00c485b8;
        lVar4 = *(long *)(lVar4 + 0x178);
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
        if ((pvVar8 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar4 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar4,bVar1,0);
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
      uVar14 = 0;
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
      pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar8 == (void *)0x0) || (bVar1 = DAFNMLEKHAD__EFDKHACIIEC(pvVar8), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,bVar1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar14 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar14,lVar6,0);
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
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)(lVar4 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar4 + 0x78);
    uVar9 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,uVar12,0);
    if ((uVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar9 = *(undefined8 *)(lVar4 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar12,uVar9,0);
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
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          uVar9 = *(undefined8 *)(lVar4 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
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
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 0x4e0), lVar4 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar4,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar14;
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
      }
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar9 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
    if ((uVar5 & 1) == 0) {
      uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      uVar9 = *(undefined8 *)(lVar4 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar4,0);
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
      if (lVar4 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar4,0);
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
            lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar4 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
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
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_00c485b8;
      lVar4 = DAFNMLEKHAD__DKJLCJPBPPN(lVar4,0xffffffff,1,0);
      if (lVar4 == 0) {
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
        if (lVar4 == 0) goto LAB_00c485b8;
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = *(undefined4 *)(lVar4 + 0x104);
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
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar4,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar4,0);
    }
    uVar12 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
    goto LAB_00c485b8;
    uVar9 = *(undefined8 *)(lVar4 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar12,uVar9,0);
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
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar4,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar4,0);
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar4,0);
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



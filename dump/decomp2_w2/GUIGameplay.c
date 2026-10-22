// ==== public IEnumerator GGKBDJCHHOE() { }   @0xb5a3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGameplay__GGKBDJCHHOE(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917213 & 1) == 0) {
    func_0x00a67900(&GUIGameplay_IKFEHJCMKKN_TypeInfo);
    bRam0000000001917213 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIGameplay_IKFEHJCMKKN_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void CCDFIOJMHGC() { }   @0xb60c08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__CCDFIOJMHGC(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  
  if ((bRam0000000001917216 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917216 = 1;
  }
  lVar7 = *(long *)((long)__this + 0x410);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
LAB_00c60d94:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c60d90;
        uVar4 = *(undefined8 *)(lVar6 + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x48) == 0) goto LAB_00c60d90;
          UnityEngine_GameObject__SetActive(*(long *)(lVar6 + 0x48),0,0);
        }
        lVar6 = *(long *)(lVar6 + 0x50);
        if (lVar6 == 0) goto LAB_00c60d90;
        uVar2 = *(ulong *)(lVar6 + 0x18);
        if ((uVar2 != 0) && (0 < (int)uVar2)) {
          lVar9 = 0;
          do {
            if ((uint)uVar2 <= (uint)lVar9) goto LAB_00c60d94;
            lVar5 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
            if (lVar5 == 0) goto LAB_00c60d90;
            uVar4 = UnityEngine_Transform__get_parent(lVar5,0);
            if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c60d90;
            uVar3 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar4,uVar3,0);
            if ((uVar2 & 1) != 0) {
              if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c60d90;
              uVar4 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x50),0);
              UnityEngine_Transform__SetParent(lVar5,uVar4,0);
            }
            uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)*(uint *)(lVar6 + 0x18));
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_00c60d90:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonChangeSound() { }   @0xb61ae8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonChangeSound(void *__this)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  void *__this_00;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float in_s2;
  float fVar9;
  float in_s3;
  float fVar10;
  
  if ((bRam000000000191721a & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191721a = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    Menu__OBLKMKHMBEA(**(long **)(_Menu_TypeInfo + 0xb8),0);
  }
  if ((bRam000000000191721c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191721c = 1;
  }
  if (*(long *)((long)__this + 0x368) != 0) {
    lVar4 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x368),0);
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
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((__this_00 != (void *)0x0) && (bVar1 = DAFNMLEKHAD__BMMOMBGDEKF(__this_00), lVar4 != 0)) {
      lVar7 = 0x370;
      if (!bVar1) {
        lVar7 = 0x378;
      }
      UnityEngine_UI_Image__set_sprite(lVar4,*(undefined8 *)((long)__this + lVar7),0);
      if (*(long *)((long)__this + 0x380) != 0) {
        plVar5 = (long *)UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x380),0);
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
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar4 != 0) && (uVar3 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar4,0), plVar5 != (long *)0x0)) {
          lVar4 = 0x388;
          if ((uVar3 & 1) == 0) {
            lVar4 = 0x390;
          }
          lVar4 = *(long *)((long)__this + lVar4);
          if ((bRam000000000191db6f & 1) == 0) {
            func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar4,0);
            bRam000000000191db6f = 1;
          }
          lVar7 = plVar5[0x1b];
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (lVar4 != 0) {
              UnityEngine_Sprite__get_rect(lVar4,0);
              if (cRam0000000001916788 == '\0') {
                func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                cRam0000000001916788 = '\x01';
              }
              in_s2 = in_s2 - **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
              in_s3 = in_s3 - (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              *(bool *)(plVar5 + 7) = in_s2 * in_s2 + in_s3 * in_s3 < 9.9999994e-11;
              uVar6 = UnityEngine_Sprite__get_texture(lVar4,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar8 = 0;
LAB_01550934:
              bVar2 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
              *(byte *)((long)plVar5 + 0x39) = bVar2 & 1;
              plVar5[0x1b] = lVar4;
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
            uVar3 = UnityEngine_Object__op_Inequality(lVar7,lVar4,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (plVar5[0x1b] != 0) {
              UnityEngine_Sprite__get_rect(plVar5[0x1b],0);
              fVar9 = in_s2;
              fVar10 = in_s3;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
              if ((uVar3 & 1) == 0) {
                if (cRam0000000001916788 == '\0') {
                  func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
                  cRam0000000001916788 = '\x01';
                }
                fVar9 = **(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
                fVar10 = (*(float **)(_UnityEngine_Vector2_TypeInfo + 0xb8))[1];
              }
              else {
                if (lVar4 == 0) goto LAB_01550984;
                UnityEngine_Sprite__get_rect(lVar4,0);
              }
              *(bool *)(plVar5 + 7) = in_s2 == fVar9 && in_s3 == fVar10;
              if (plVar5[0x1b] != 0) {
                uVar6 = UnityEngine_Sprite__get_texture(plVar5[0x1b],0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
                uVar8 = 0;
                if ((uVar3 & 1) != 0) {
                  if (lVar4 == 0) goto LAB_01550984;
                  uVar8 = UnityEngine_Sprite__get_texture(lVar4,0);
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


// ==== public void ButtonPause(bool is_tutorial) { }   @0xb60ecc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonPause(void *__this,bool is_tutorial)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *__this_00;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((bRam000000000191721e & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIGameplay_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191721e = 1;
  }
  *(undefined1 *)((long)__this + 0xbc) = 0;
  *(undefined4 *)((long)__this + 0xb8) = 0;
  fVar11 = (float)UnityEngine_Time__get_timeScale(0);
  if (0.0 < fVar11) {
    UnityEngine_Time__set_timeScale(0,0);
  }
  if (is_tutorial) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
    if (lVar4 == 0) goto LAB_00c6153c;
    UnityEngine_AudioSource__Pause(lVar4,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) != 0) {
    uVar8 = *(undefined8 *)((long)__this + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      uVar8 = *(undefined8 *)((long)__this + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)((long)__this + 0x3e0) == 0) goto LAB_00c6153c;
        uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x3e0),0);
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)((long)__this + 0x3d8) = *(undefined8 *)((long)__this + 0x3e0);
        }
      }
      uVar8 = *(undefined8 *)((long)__this + 1000);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)((long)__this + 1000) == 0) goto LAB_00c6153c;
        uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 1000),0);
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)((long)__this + 0x3d8) = *(undefined8 *)((long)__this + 1000);
        }
      }
    }
    uVar8 = *(undefined8 *)((long)__this + 0x3d8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      uVar8 = *(undefined8 *)((long)__this + 0x3d8);
      uVar10 = *(undefined8 *)((long)__this + 0x3e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar8,uVar10,0);
      if ((uVar5 & 1) == 0) {
        bVar9 = 1;
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        bVar9 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
      }
      lVar4 = *(long *)((long)__this + 0x3d8);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar6 == 0) goto LAB_00c6153c;
      bVar1 = Level__get_IsEvent(lVar6,0);
      bVar9 = bVar9 & (bVar1 ^ 0xff);
      lVar6 = lVar4;
      if ((bVar9 & 1) != 0) {
        lVar6 = 0;
      }
      if ((bVar9 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar7 == 0) goto LAB_00c6153c;
        uVar5 = Level__get_IsEvent(lVar7,0);
        if ((uVar5 & 1) == 0) {
          bVar2 = false;
          lVar6 = lVar4;
        }
        else {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar4 == 0) goto LAB_00c6153c;
          if (*(long *)(lVar4 + 0x50) == 0) {
            bVar2 = false;
          }
          else {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar4 == 0) goto LAB_00c6153c;
            }
            if (*(long *)(lVar4 + 0x50) == 0) goto LAB_00c6153c;
            iVar3 = EventContest__get_TimeLeft(*(long *)(lVar4 + 0x50),0);
            bVar2 = 300 < iVar3;
          }
        }
      }
      else {
        bVar2 = true;
        lVar6 = lVar4;
      }
      if (lVar6 == 0) goto LAB_00c6153c;
      UnityEngine_GameObject__SetActive(lVar6,bVar2,0);
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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 == (void *)0x0) goto LAB_00c6153c;
  bVar2 = DAFNMLEKHAD__BMMOMBGDEKF(__this_00);
  if (bVar2) {
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x48), lVar4 == 0)) goto LAB_00c6153c;
    uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)((long)__this + 0x20) + 0x48), lVar4 == 0)) goto LAB_00c6153c;
      UnityEngine_AudioSource__Pause(lVar4,0);
    }
  }
  if (!is_tutorial) {
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
    if (lVar4 == 0) goto LAB_00c6153c;
    uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
      if (lVar4 == 0) goto LAB_00c6153c;
      uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar4,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
        if (lVar4 == 0) goto LAB_00c6153c;
        UnityEngine_AudioSource__Pause(lVar4,0);
      }
    }
  }
  if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
    if (*(long *)((long)__this + 0x438) == 0) goto LAB_00c6153c;
    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)((long)__this + 0x438),0);
    if ((uVar5 & 1) == 0) {
      uVar12 = UnityEngine_AudioListener__get_volume(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar12;
      if (!is_tutorial) {
        UnityEngine_AudioListener__set_volume(0,0);
      }
    }
  }
  if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)__this + 0x410) == 0) goto LAB_00c6153c;
  iVar3 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
  if (iVar3 < *(int *)(*(long *)((long)__this + 0x410) + 0x18)) {
    if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      if (-1 < *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4)) goto LAB_00c61404;
      goto LAB_00c6147c;
    }
    if (iVar3 < 0) goto LAB_00c6147c;
LAB_00c61404:
    if ((*(long *)((long)__this + 0x50) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x50),0), lVar4 == 0)
       ) goto LAB_00c6153c;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_00c6147c;
    if ((*(long *)((long)__this + 0x78) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x78),0), lVar4 == 0)
       ) goto LAB_00c6153c;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_00c6147c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
    if (*(void **)((long)__this + 0x50) == (void *)0x0) goto LAB_00c6153c;
    GUIWindow__JGDCBENNDFO(*(void **)((long)__this + 0x50),false);
  }
  else {
LAB_00c6147c:
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
  }
  GUIGameplay__CBFONCCJIEE(__this);
  if (!is_tutorial) {
    GUIGameplay__LLAEHJGOFLG(__this);
    GUIGameplay__IMJEJKHBIMO(__this);
    GUIGameplay__ODHAOMJKKAE(__this);
    lVar4 = *(long *)((long)__this + 0x68);
    if (*(char *)((long)__this + 0x3f1) == '\0') {
      if (lVar4 == 0) goto LAB_00c6153c;
    }
    else {
      if (lVar4 == 0) goto LAB_00c6153c;
      *(undefined1 *)(lVar4 + 0x21) = 0;
      *(undefined1 *)(lVar4 + 0x23) = 0;
    }
    GUIWindow__HEGIHOAJOKK(lVar4,0,0);
    if (*(char *)((long)__this + 0x3f1) != '\0') {
      lVar4 = *(long *)((long)__this + 0x68);
      if (lVar4 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      *(undefined1 *)(lVar4 + 0x21) = 1;
      *(undefined1 *)(lVar4 + 0x23) = 1;
    }
    *(undefined1 *)((long)__this + 0x3f1) = 0;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
  }
  return;
}


// ==== public void ButtonPauseHelpClose() { }   @0xb62278

/* WARNING: Possible PIC construction at 0x00c622c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6230c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c2548c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c254f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c608dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6093c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6099c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c609d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ff24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00a7ffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c25588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c5e5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c25628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c62a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c62acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c60fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c6100c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c610c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c610ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c612c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c612f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c613bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c613f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00c61180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00c613f4) */
/* WARNING: Removing unreachable block (ram,0x00c61454) */
/* WARNING: Removing unreachable block (ram,0x00c61518) */
/* WARNING: Removing unreachable block (ram,0x00c613c0) */
/* WARNING: Removing unreachable block (ram,0x00c6138c) */
/* WARNING: Removing unreachable block (ram,0x00c61324) */
/* WARNING: Removing unreachable block (ram,0x00c612f8) */
/* WARNING: Removing unreachable block (ram,0x00c612c4) */
/* WARNING: Removing unreachable block (ram,0x00c61234) */
/* WARNING: Removing unreachable block (ram,0x00c610f0) */
/* WARNING: Removing unreachable block (ram,0x00c60fbc) */
/* WARNING: Removing unreachable block (ram,0x00c60f8c) */
/* WARNING: Removing unreachable block (ram,0x00c62ad0) */
/* WARNING: Removing unreachable block (ram,0x00c62a8c) */
/* WARNING: Removing unreachable block (ram,0x00c5e5d8) */
/* WARNING: Removing unreachable block (ram,0x00c5e5ac) */
/* WARNING: Removing unreachable block (ram,0x00c5e564) */
/* WARNING: Removing unreachable block (ram,0x00c5e500) */
/* WARNING: Removing unreachable block (ram,0x00c5e4c8) */
/* WARNING: Removing unreachable block (ram,0x00c5e4a0) */
/* WARNING: Removing unreachable block (ram,0x00c5e44c) */
/* WARNING: Removing unreachable block (ram,0x00c61fac) */
/* WARNING: Removing unreachable block (ram,0x00c61f80) */
/* WARNING: Removing unreachable block (ram,0x00c61f2c) */
/* WARNING: Removing unreachable block (ram,0x00c61ef8) */
/* WARNING: Removing unreachable block (ram,0x00c61ecc) */
/* WARNING: Removing unreachable block (ram,0x00c61e80) */
/* WARNING: Removing unreachable block (ram,0x00c61e30) */
/* WARNING: Removing unreachable block (ram,0x00c60b1c) */
/* WARNING: Removing unreachable block (ram,0x00c60ad0) */
/* WARNING: Removing unreachable block (ram,0x00c60a88) */
/* WARNING: Removing unreachable block (ram,0x00c60a50) */
/* WARNING: Removing unreachable block (ram,0x00c60a18) */
/* WARNING: Removing unreachable block (ram,0x00c609d4) */
/* WARNING: Removing unreachable block (ram,0x00c609a0) */
/* WARNING: Removing unreachable block (ram,0x00c6096c) */
/* WARNING: Removing unreachable block (ram,0x00c608e0) */
/* WARNING: Removing unreachable block (ram,0x00c6086c) */
/* WARNING: Removing unreachable block (ram,0x00c254f4) */
/* WARNING: Removing unreachable block (ram,0x00c62310) */
/* WARNING: Removing unreachable block (ram,0x00c622cc) */
/* WARNING: Removing unreachable block (ram,0x00c61184) */
/* WARNING: Removing unreachable block (ram,0x00c60f74) */
/* WARNING: Removing unreachable block (ram,0x00c60f88) */
/* WARNING: Removing unreachable block (ram,0x00c60f90) */
/* WARNING: Removing unreachable block (ram,0x00c60f9c) */
/* WARNING: Removing unreachable block (ram,0x00b05788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonPauseHelpClose(void *__this)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar23;
  byte bVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  void *pvVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  undefined *unaff_x19;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *unaff_x20;
  undefined8 uVar34;
  undefined *unaff_x21;
  byte bVar35;
  int *piVar36;
  undefined *puVar37;
  undefined *unaff_x22;
  undefined *puVar38;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x30;
  float fVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  byte abStack_b8 [120];
  undefined1 *puStack_30;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  if ((bRam0000000001917220 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917220 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    puStack_30 = (undefined1 *)0xc622cc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar27 = _CarController_TypeInfo;
    unaff_x19 = &UnityEngine_Object_TypeInfo;
    unaff_x20 = &CarController_TypeInfo;
  }
  else {
    puVar32 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar29 = UnityEngine_Object__op_Inequality(puVar32,0,0);
    if ((uVar29 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      puStack_30 = (undefined1 *)0xc62310;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar27 = _CarController_TypeInfo;
      unaff_x19 = puVar32;
      unaff_x20 = &CarController_TypeInfo;
    }
    else {
      puVar32 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (puVar32 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      puStack_30 = unaff_x30;
      if ((bRam0000000001917037 & 1) == 0) {
        func_0x00a67900(&CarController_TypeInfo,0);
        func_0x00a67900(&GUIWindow_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam0000000001917037 = 1;
      }
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        puStack_30 = &LAB_00c25490;
        register0x00000008 = (BADSPACEBASE *)&puStack_30;
        lVar27 = _UnityEngine_Object_TypeInfo;
        unaff_x19 = puVar32;
        unaff_x20 = *(undefined **)(puVar32 + 0x30);
        unaff_x22 = &UnityEngine_Object_TypeInfo;
      }
      else {
        uVar29 = UnityEngine_Object__op_Inequality(*(undefined **)(puVar32 + 0x30),0,0);
        if ((uVar29 & 1) == 0) {
          return;
        }
        fVar39 = (float)UnityEngine_Time__get_timeScale(0);
        if (0.0 < fVar39) {
LAB_00c254dc:
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            puStack_30 = (undefined1 *)0xc254f4;
            register0x00000008 = (BADSPACEBASE *)&puStack_30;
            lVar27 = _CarController_TypeInfo;
            unaff_x19 = puVar32;
            unaff_x20 = &CarController_TypeInfo;
            unaff_x22 = &UnityEngine_Object_TypeInfo;
          }
          else {
            if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0')
            goto LAB_00c25504;
            unaff_x19 = *(undefined **)(puVar32 + 0x30);
            if (unaff_x19 == (undefined *)0x0) goto LAB_00c25694;
            puVar6 = &stack0xffffffffffffffc0;
            puVar7 = &stack0xffffffffffffffc0;
            puVar8 = &stack0xffffffffffffffc0;
            puVar9 = &stack0xffffffffffffffc0;
            puVar10 = &stack0xffffffffffffffc0;
            puVar11 = &stack0xffffffffffffffc0;
            puVar12 = &stack0xffffffffffffffc0;
            puVar13 = &stack0xffffffffffffffc0;
            puVar14 = &stack0xffffffffffffffc0;
            puVar15 = &stack0xffffffffffffffc0;
            puVar16 = &stack0xffffffffffffffc0;
            puVar17 = &stack0xffffffffffffffc0;
            puVar18 = &stack0xffffffffffffffc0;
            puVar19 = &stack0xffffffffffffffc0;
            puVar20 = &stack0xffffffffffffffc0;
            puVar21 = &stack0xffffffffffffffc0;
            puVar22 = &stack0xffffffffffffffc0;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
            unaff_x20 = (undefined *)0x0;
            if ((bRam000000000191721e & 1) == 0) {
              func_0x00a67900(&AdvController_TypeInfo,0,0);
              func_0x00a67900(&CarController_TypeInfo);
              func_0x00a67900(&GUIGameplay_TypeInfo);
              func_0x00a67900(&Main_TypeInfo);
              func_0x00a67900(&Menu_TypeInfo);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              func_0x00a67900(&SoundScript_TypeInfo);
              bRam000000000191721e = 1;
            }
            unaff_x19[0xbc] = 0;
            *(undefined4 *)(unaff_x19 + 0xb8) = 0;
            fVar39 = (float)UnityEngine_Time__get_timeScale(0);
            if (0.0 < fVar39) {
              UnityEngine_Time__set_timeScale(0,0);
            }
            unaff_x21 = (undefined *)0x1917000;
            unaff_x23 = &Main_TypeInfo;
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              puStack_30 = (undefined1 *)0xc60fbc;
              register0x00000008 = (BADSPACEBASE *)puVar6;
              lVar27 = _Main_TypeInfo;
              goto SUB_00a67a30;
            }
            if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
LAB_00c611f4:
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                puStack_30 = (undefined1 *)0xc61204;
                register0x00000008 = (BADSPACEBASE *)puVar12;
                lVar27 = _Main_TypeInfo;
              }
              else {
                unaff_x21 = (undefined *)0x1916000;
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  puStack_30 = (undefined1 *)0xc61234;
                  register0x00000008 = (BADSPACEBASE *)puVar13;
                  lVar27 = _Main_TypeInfo;
                }
                else {
                  pvVar28 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (pvVar28 == (void *)0x0) goto LAB_00c6153c;
                  bVar23 = DAFNMLEKHAD__BMMOMBGDEKF(pvVar28);
                  if (bVar23) {
                    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                       (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar27 == 0))
                    goto LAB_00c6153c;
                    uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                    if ((uVar29 & 1) != 0) {
                      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x48), lVar27 == 0))
                      goto LAB_00c6153c;
                      UnityEngine_AudioSource__Pause(lVar27,0);
                    }
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    puStack_30 = (undefined1 *)0xc61298;
                    register0x00000008 = (BADSPACEBASE *)puVar14;
                    lVar27 = _Main_TypeInfo;
                  }
                  else {
                    if (cRam0000000001916e67 == '\0') {
                      func_0x00a67900(&Main_TypeInfo);
                      cRam0000000001916e67 = '\x01';
                    }
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      puStack_30 = (undefined1 *)0xc612c4;
                      register0x00000008 = (BADSPACEBASE *)puVar15;
                      lVar27 = _Main_TypeInfo;
                    }
                    else {
                      lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                      if (lVar27 == 0) goto LAB_00c6153c;
                      uVar29 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar27,0);
                      if ((uVar29 & 1) != 0) {
                        unaff_x21 = &SoundScript_TypeInfo;
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          puStack_30 = (undefined1 *)0xc612f8;
                          register0x00000008 = (BADSPACEBASE *)puVar16;
                          lVar27 = _SoundScript_TypeInfo;
                          goto SUB_00a67a30;
                        }
                        lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                        if (lVar27 == 0) goto LAB_00c6153c;
                        uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                        if ((uVar29 & 1) != 0) {
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc61324;
                            register0x00000008 = (BADSPACEBASE *)puVar17;
                            lVar27 = _SoundScript_TypeInfo;
                            goto SUB_00a67a30;
                          }
                          lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                          if (lVar27 == 0) goto LAB_00c6153c;
                          UnityEngine_AudioSource__Pause(lVar27,0);
                        }
                      }
                      unaff_x21 = &Menu_TypeInfo;
                      if (*(char *)(*(long *)(_AdvController_TypeInfo + 0xb8) + 8) == '\0') {
                        if (*(long *)(unaff_x19 + 0x438) == 0) goto LAB_00c6153c;
                        uVar29 = UnityEngine_GameObject__get_activeInHierarchy
                                           (*(long *)(unaff_x19 + 0x438),0);
                        if ((uVar29 & 1) == 0) {
                          uVar40 = UnityEngine_AudioListener__get_volume(0);
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc6138c;
                            register0x00000008 = (BADSPACEBASE *)puVar18;
                            lVar27 = _Menu_TypeInfo;
                            goto SUB_00a67a30;
                          }
                          *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14) = uVar40;
                          UnityEngine_AudioListener__set_volume(0,0);
                        }
                      }
                      unaff_x22 = &GUIGameplay_TypeInfo;
                      lVar27 = _GUIGameplay_TypeInfo;
                      if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                        puStack_30 = (undefined1 *)0xc613c0;
                        register0x00000008 = (BADSPACEBASE *)puVar19;
                      }
                      else {
                        if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_00c6153c;
                        iVar25 = *(int *)(*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4);
                        if (iVar25 < *(int *)(*(long *)(unaff_x19 + 0x410) + 0x18)) {
                          if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc613f4;
                            register0x00000008 = (BADSPACEBASE *)puVar22;
                            goto SUB_00a67a30;
                          }
                          if (iVar25 < 0) goto LAB_00c6147c;
                          if ((*(long *)(unaff_x19 + 0x50) == 0) ||
                             (lVar27 = UnityEngine_Component__get_gameObject
                                                 (*(long *)(unaff_x19 + 0x50),0), lVar27 == 0))
                          goto LAB_00c6153c;
                          uVar29 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
                          if ((uVar29 & 1) == 0) goto LAB_00c6147c;
                          if ((*(long *)(unaff_x19 + 0x78) == 0) ||
                             (lVar27 = UnityEngine_Component__get_gameObject
                                                 (*(long *)(unaff_x19 + 0x78),0), lVar27 == 0))
                          goto LAB_00c6153c;
                          uVar29 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
                          if ((uVar29 & 1) == 0) goto LAB_00c6147c;
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc61454;
                            register0x00000008 = (BADSPACEBASE *)puVar21;
                            lVar27 = _Menu_TypeInfo;
                            goto SUB_00a67a30;
                          }
                          *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 1;
                          if (*(void **)(unaff_x19 + 0x50) == (void *)0x0) goto LAB_00c6153c;
                          GUIWindow__JGDCBENNDFO(*(void **)(unaff_x19 + 0x50),false);
                        }
                        else {
LAB_00c6147c:
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xb) = 0;
                        }
                        GUIGameplay__CBFONCCJIEE(unaff_x19);
                        GUIGameplay__LLAEHJGOFLG(unaff_x19);
                        GUIGameplay__IMJEJKHBIMO(unaff_x19);
                        GUIGameplay__ODHAOMJKKAE(unaff_x19);
                        lVar27 = *(long *)(unaff_x19 + 0x68);
                        if (unaff_x19[0x3f1] == '\0') {
                          if (lVar27 == 0) goto LAB_00c6153c;
                        }
                        else {
                          if (lVar27 == 0) goto LAB_00c6153c;
                          *(undefined1 *)(lVar27 + 0x21) = 0;
                          *(undefined1 *)(lVar27 + 0x23) = 0;
                        }
                        GUIWindow__HEGIHOAJOKK(lVar27,0,0);
                        if (unaff_x19[0x3f1] != '\0') {
                          lVar27 = *(long *)(unaff_x19 + 0x68);
                          if (lVar27 == 0) {
LAB_00c6153c:
                    /* WARNING: Subroutine does not return */
                            il2cpp_throw_967b50();
                          }
                          *(undefined1 *)(lVar27 + 0x21) = 1;
                          *(undefined1 *)(lVar27 + 0x23) = 1;
                        }
                        unaff_x19[0x3f1] = 0;
                        if (*(int *)(_Menu_TypeInfo + 0xe0) != 0) {
                          *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 1;
                          return;
                        }
                        puStack_30 = (undefined1 *)0xc61518;
                        register0x00000008 = (BADSPACEBASE *)puVar20;
                        lVar27 = _Menu_TypeInfo;
                      }
                    }
                  }
                }
              }
            }
            else {
              unaff_x22 = &UnityEngine_Object_TypeInfo;
              uVar33 = *(undefined8 *)(unaff_x19 + 0x3d8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar29 = UnityEngine_Object__op_Equality(uVar33,0,0);
              if ((uVar29 & 1) == 0) {
LAB_00c61084:
                unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  puStack_30 = (undefined1 *)0xc61098;
                  register0x00000008 = (BADSPACEBASE *)puVar9;
                  lVar27 = _UnityEngine_Object_TypeInfo;
                }
                else {
                  uVar29 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
                  if ((uVar29 & 1) == 0) goto LAB_00c611f4;
                  unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
                  unaff_x22 = *(undefined **)(unaff_x19 + 0x3e0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) != 0) {
                    uVar29 = UnityEngine_Object__op_Equality(unaff_x21,unaff_x22,0);
                    if ((uVar29 & 1) == 0) {
                      bVar35 = 1;
                    }
                    else {
                      unaff_x21 = &CarController_TypeInfo;
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        puStack_30 = (undefined1 *)0xc610f0;
                        register0x00000008 = (BADSPACEBASE *)puVar11;
                        lVar27 = _CarController_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      bVar35 = *(byte *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34);
                    }
                    unaff_x21 = *(undefined **)(unaff_x19 + 0x3d8);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                    if (lVar27 == 0) goto LAB_00c6153c;
                    bVar24 = Level__get_IsEvent(lVar27,0);
                    bVar35 = bVar35 & (bVar24 ^ 0xff);
                    unaff_x22 = unaff_x21;
                    if ((bVar35 & 1) != 0) {
                      unaff_x22 = (undefined *)0x0;
                    }
                    if ((bVar35 & 1) == 0) {
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                      if (lVar27 == 0) goto LAB_00c6153c;
                      uVar29 = Level__get_IsEvent(lVar27,0);
                      if ((uVar29 & 1) == 0) {
                        bVar23 = false;
                      }
                      else {
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          puStack_30 = (undefined1 *)0xc61184;
                          lVar27 = _Main_TypeInfo;
                          goto SUB_00a67a30;
                        }
                        lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                        if (lVar27 == 0) goto LAB_00c6153c;
                        unaff_x21 = unaff_x22;
                        if (*(long *)(lVar27 + 0x50) == 0) {
                          bVar23 = false;
                        }
                        else {
                          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                            lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                            if (lVar27 == 0) goto LAB_00c6153c;
                          }
                          if (*(long *)(lVar27 + 0x50) == 0) goto LAB_00c6153c;
                          iVar25 = EventContest__get_TimeLeft(*(long *)(lVar27 + 0x50),0);
                          bVar23 = 300 < iVar25;
                        }
                      }
                    }
                    else {
                      bVar23 = true;
                    }
                    if (unaff_x21 == (undefined *)0x0) goto LAB_00c6153c;
                    UnityEngine_GameObject__SetActive(unaff_x21,bVar23,0);
                    goto LAB_00c611f4;
                  }
                  puStack_30 = (undefined1 *)0xc610c4;
                  register0x00000008 = (BADSPACEBASE *)puVar10;
                  lVar27 = _UnityEngine_Object_TypeInfo;
                }
              }
              else {
                unaff_x21 = *(undefined **)(unaff_x19 + 0x3e0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  puStack_30 = (undefined1 *)0xc61010;
                  register0x00000008 = (BADSPACEBASE *)puVar7;
                  lVar27 = _UnityEngine_Object_TypeInfo;
                }
                else {
                  uVar29 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
                  if ((uVar29 & 1) != 0) {
                    if (*(long *)(unaff_x19 + 0x3e0) == 0) goto LAB_00c6153c;
                    uVar29 = UnityEngine_GameObject__get_activeSelf(*(long *)(unaff_x19 + 0x3e0),0);
                    if ((uVar29 & 1) != 0) {
                      *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 0x3e0);
                    }
                  }
                  unaff_x21 = *(undefined **)(unaff_x19 + 1000);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) != 0) {
                    uVar29 = UnityEngine_Object__op_Inequality(unaff_x21,0,0);
                    if ((uVar29 & 1) != 0) {
                      if (*(long *)(unaff_x19 + 1000) == 0) goto LAB_00c6153c;
                      uVar29 = UnityEngine_GameObject__get_activeSelf(*(long *)(unaff_x19 + 1000),0)
                      ;
                      if ((uVar29 & 1) != 0) {
                        *(undefined8 *)(unaff_x19 + 0x3d8) = *(undefined8 *)(unaff_x19 + 1000);
                      }
                    }
                    goto LAB_00c61084;
                  }
                  puStack_30 = (undefined1 *)0xc61054;
                  register0x00000008 = (BADSPACEBASE *)puVar8;
                  lVar27 = _UnityEngine_Object_TypeInfo;
                }
              }
            }
          }
        }
        else {
          if (((*(long *)(puVar32 + 0x30) == 0) ||
              (lVar27 = *(long *)(*(long *)(puVar32 + 0x30) + 0x78), lVar27 == 0)) ||
             (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0))
          goto LAB_00c25694;
          uVar29 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
          if ((uVar29 & 1) != 0) goto LAB_00c254dc;
LAB_00c25504:
          if (*(long *)(puVar32 + 0x30) == 0) goto LAB_00c25694;
          uVar33 = *(undefined8 *)(*(long *)(puVar32 + 0x30) + 0x68);
          uVar34 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar29 = UnityEngine_Object__op_Equality(uVar34,uVar33,0);
          if ((uVar29 & 1) == 0) {
            if (*(long *)(puVar32 + 0x30) == 0) goto LAB_00c25694;
            puVar37 = *(undefined **)(*(long *)(puVar32 + 0x30) + 0x80);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              puStack_30 = &LAB_00c2558c;
              register0x00000008 = (BADSPACEBASE *)&puStack_30;
              lVar27 = _UnityEngine_Object_TypeInfo;
              unaff_x19 = puVar32;
              unaff_x20 = puVar37;
              unaff_x21 = (undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
              unaff_x22 = &UnityEngine_Object_TypeInfo;
              unaff_x23 = &GUIWindow_TypeInfo;
              goto SUB_00a67a30;
            }
            uVar29 = UnityEngine_Object__op_Equality
                               ((undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8),puVar37,0
                               );
            if ((uVar29 & 1) != 0) {
              if (((*(long *)(puVar32 + 0x30) == 0) ||
                  (lVar27 = *(long *)(*(long *)(puVar32 + 0x30) + 0x80), lVar27 == 0)) ||
                 (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0))
              goto LAB_00c25694;
              uVar29 = UnityEngine_GameObject__get_active(lVar27,0);
              if ((uVar29 & 1) != 0) {
                if (*(long *)(puVar32 + 0x30) == 0) goto LAB_00c25694;
                pvVar28 = *(void **)(*(long *)(puVar32 + 0x30) + 0x80);
                if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50(0,0);
                }
                GUIWindow__JGDCBENNDFO(pvVar28,false);
                if ((bRam0000000001917230 & 1) == 0) {
                  func_0x00a67900(&Main_TypeInfo);
                  func_0x00a67900(&Menu_TypeInfo);
                  func_0x00a67900(&UnityEngine_Object_TypeInfo);
                  func_0x00a67900(&SoundScript_TypeInfo);
                  func_0x00a67900(&Str_garage);
                  bRam0000000001917230 = 1;
                }
                UnityEngine_Time__set_timeScale(0,0);
                unaff_x19 = (undefined *)0x1917000;
                unaff_x20 = &Main_TypeInfo;
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  puStack_30 = (undefined1 *)0xc61e30;
                  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                  lVar27 = _Main_TypeInfo;
                  goto SUB_00a67a30;
                }
                lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                if (lVar27 == 0) goto LAB_00c61fc4;
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if (lVar27 == 0) goto LAB_00c61fec;
                }
                if (*(int *)(lVar27 + 0x10) == -1) {
LAB_00c61f14:
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    puStack_30 = (undefined1 *)0xc61f2c;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                    lVar27 = _Menu_TypeInfo;
                    unaff_x19 = &Menu_TypeInfo;
                  }
                  else {
                    *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 8) = 1;
LAB_00c61f3c:
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                    if (lVar27 == 0) {
LAB_00c61fec:
                    /* WARNING: Subroutine does not return */
                      il2cpp_throw_967b50();
                    }
                    if (*(int *)(lVar27 + 0x10) == -1) {
                      unaff_x19 = &SoundScript_TypeInfo;
                      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                        puStack_30 = (undefined1 *)0xc61f80;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                        lVar27 = _SoundScript_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
                      if (lVar27 == 0) goto LAB_00c61fec;
                      uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                      if ((uVar29 & 1) != 0) {
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          puStack_30 = (undefined1 *)0xc61fac;
                          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                          lVar27 = _SoundScript_TypeInfo;
                          goto SUB_00a67a30;
                        }
                        lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20);
                        if (lVar27 == 0) goto LAB_00c61fec;
                        UnityEngine_AudioSource__Stop(lVar27,0);
                      }
                    }
LAB_00c61fc4:
                    unaff_x19 = _Str_garage;
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      puStack_30 = &LAB_00c61fdc;
                      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                      lVar27 = _Main_TypeInfo;
                      unaff_x19 = &Str_garage;
                    }
                    else {
                      unaff_x20 = (undefined *)0x1917000;
                      unaff_x21 = &UnityEngine_SceneManagement_SceneManager_TypeInfo;
                      if ((bRam000000000191720b & 1) == 0) {
                        func_0x00a67900(&CarController_TypeInfo);
                        func_0x00a67900(&UnityEngine_Object_TypeInfo);
                        func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
                        func_0x00a67900(&SoundScript_TypeInfo);
                        bRam000000000191720b = 1;
                      }
                      if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0)
                      {
                        puStack_30 = &LAB_00c5e410;
                        register0x00000008 = (BADSPACEBASE *)&puStack_30;
                        lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                      }
                      else {
                        UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
                        iVar25 = UnityEngine_SceneManagement_Scene__get_buildIndex
                                           (&stack0xffffffffffffffd8,0);
                        if (iVar25 == 0) {
                          unaff_x20 = &SoundScript_TypeInfo;
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc5e5ac;
                            register0x00000008 = (BADSPACEBASE *)&puStack_30;
                            lVar27 = _SoundScript_TypeInfo;
                          }
                          else {
                            lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
                            if (lVar27 == 0) goto LAB_00c5e61c;
                            uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                            if ((uVar29 & 1) != 0) {
                              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                puStack_30 = (undefined1 *)0xc5e5d8;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _SoundScript_TypeInfo;
                                goto SUB_00a67a30;
                              }
                              lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
                              if (lVar27 == 0) goto LAB_00c5e61c;
                              UnityEngine_AudioSource__Stop(lVar27,0);
                            }
LAB_00c5e5f0:
                            if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0)
                                != 0) {
                              UnityEngine_SceneManagement_SceneManager__LoadScene(unaff_x19,0);
                              return;
                            }
                            puStack_30 = &LAB_00c5e600;
                            register0x00000008 = (BADSPACEBASE *)&puStack_30;
                            lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                          }
                        }
                        else {
                          if (iVar25 < 1) goto LAB_00c5e5f0;
                          unaff_x22 = &CarController_TypeInfo;
                          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc5e44c;
                            register0x00000008 = (BADSPACEBASE *)&puStack_30;
                            lVar27 = _CarController_TypeInfo;
                          }
                          else {
                            uVar33 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                            }
                            uVar29 = UnityEngine_Object__op_Inequality(uVar33,0,0);
                            if ((uVar29 & 1) == 0) {
LAB_00c5e4e8:
                              unaff_x20 = &SoundScript_TypeInfo;
                              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                puStack_30 = (undefined1 *)0xc5e500;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _SoundScript_TypeInfo;
                              }
                              else {
                                lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                                if (lVar27 == 0) {
LAB_00c5e61c:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b50();
                                }
                                uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                                if ((uVar29 & 1) != 0) {
                                  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo +
                                              0xe0) == 0) {
                                    puStack_30 = &LAB_00c5e52c;
                                    register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                    lVar27 = _UnityEngine_SceneManagement_SceneManager_TypeInfo;
                                    goto SUB_00a67a30;
                                  }
                                  UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
                                  uVar33 = UnityEngine_SceneManagement_Scene__get_name
                                                     (&stack0xffffffffffffffd8,0);
                                  uVar29 = System_String__op_Inequality(uVar33,unaff_x19,0);
                                  if ((uVar29 & 1) != 0) {
                                    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                      puStack_30 = (undefined1 *)0xc5e564;
                                      register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                      lVar27 = _SoundScript_TypeInfo;
                                      goto SUB_00a67a30;
                                    }
                                    lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) +
                                                      0xa0);
                                    if (lVar27 == 0) goto LAB_00c5e61c;
                                    UnityEngine_AudioSource__Stop(lVar27,0);
                                  }
                                }
                                if (*(int *)(_SoundScript_TypeInfo + 0xe0) != 0) {
                                  SoundScript__HCPNLKMMKFA();
                                  goto LAB_00c5e5f0;
                                }
                                puStack_30 = &LAB_00c5e58c;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _SoundScript_TypeInfo;
                              }
                            }
                            else {
                              unaff_x20 = &SoundScript_TypeInfo;
                              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                                puStack_30 = (undefined1 *)0xc5e4a0;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _SoundScript_TypeInfo;
                              }
                              else {
                                lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
                                if (lVar27 == 0) goto LAB_00c5e61c;
                                UnityEngine_AudioSource__Pause(lVar27,0);
                                if (*(int *)(_CarController_TypeInfo + 0xe0) != 0) {
                                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                                     (lVar27 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8)
                                                        + 0x48), lVar27 == 0)) goto LAB_00c5e61c;
                                  UnityEngine_AudioSource__Stop(lVar27,0);
                                  goto LAB_00c5e4e8;
                                }
                                puStack_30 = (undefined1 *)0xc5e4c8;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _CarController_TypeInfo;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  unaff_x21 = &Menu_TypeInfo;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    puStack_30 = (undefined1 *)0xc61e80;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                    lVar27 = _Menu_TypeInfo;
                  }
                  else {
                    unaff_x19 = (undefined *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                    }
                    uVar29 = UnityEngine_Object__op_Inequality(unaff_x19,0,0);
                    if ((uVar29 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        puStack_30 = (undefined1 *)0xc61ecc;
                        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                        lVar27 = _Menu_TypeInfo;
                        goto SUB_00a67a30;
                      }
                      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c61fec;
                      uVar29 = Menu__CLJDAMIIAKE(**(long **)(_Menu_TypeInfo + 0xb8),0);
                      if ((uVar29 & 1) != 0) goto LAB_00c61f14;
                    }
                    if (*(int *)(_Main_TypeInfo + 0xe0) != 0) {
                      lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                      if (lVar27 == 0) goto LAB_00c61fec;
                      uVar29 = Level__get_IsEvent(lVar27,0);
                      if ((uVar29 & 1) != 0) goto LAB_00c61f14;
                      goto LAB_00c61f3c;
                    }
                    puStack_30 = (undefined1 *)0xc61ef8;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                    lVar27 = _Main_TypeInfo;
                  }
                }
                goto SUB_00a67a30;
              }
            }
            if (*(long *)(puVar32 + 0x30) == 0) goto LAB_00c25694;
            puVar37 = *(undefined **)(*(long *)(puVar32 + 0x30) + 0x90);
            unaff_x21 = (undefined *)**(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              puStack_30 = &LAB_00c2562c;
              register0x00000008 = (BADSPACEBASE *)&puStack_30;
              lVar27 = _UnityEngine_Object_TypeInfo;
              unaff_x19 = puVar32;
              unaff_x20 = puVar37;
              unaff_x22 = &UnityEngine_Object_TypeInfo;
              unaff_x23 = &GUIWindow_TypeInfo;
            }
            else {
              uVar29 = UnityEngine_Object__op_Equality(unaff_x21,puVar37,0);
              if ((uVar29 & 1) == 0) {
                return;
              }
              if (((*(long *)(puVar32 + 0x30) == 0) ||
                  (lVar27 = *(long *)(*(long *)(puVar32 + 0x30) + 0x90), lVar27 == 0)) ||
                 (lVar27 = UnityEngine_Component__get_gameObject(lVar27,0), lVar27 == 0)) {
LAB_00c25694:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar29 = UnityEngine_GameObject__get_activeSelf(lVar27,0);
              if ((uVar29 & 1) == 0) {
                return;
              }
              unaff_x19 = *(undefined **)(puVar32 + 0x30);
              if (unaff_x19 == (undefined *)0x0) goto LAB_00c25694;
              if ((bRam0000000001917223 & 1) == 0) {
                func_0x00a67900(&CarController_TypeInfo,0);
                func_0x00a67900(&UnityEngine_Object_TypeInfo);
                func_0x00a67900(&Str_);
                bRam0000000001917223 = 1;
              }
              plVar30 = *(long **)(unaff_x19 + 0x358);
              if (plVar30 == (long *)0x0) {
LAB_00c62b30:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              (**(code **)(*plVar30 + 0x5a8))(plVar30,_Str_,*(undefined8 *)(*plVar30 + 0x5b0));
              if (*(void **)(unaff_x19 + 0x90) == (void *)0x0) goto LAB_00c62b30;
              unaff_x21 = &CarController_TypeInfo;
              GUIWindow__JGDCBENNDFO(*(void **)(unaff_x19 + 0x90),false);
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                puStack_30 = (undefined1 *)0xc62a8c;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                lVar27 = _CarController_TypeInfo;
                unaff_x20 = &UnityEngine_Object_TypeInfo;
              }
              else {
                puVar32 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar29 = UnityEngine_Object__op_Inequality(puVar32,0,0);
                if ((uVar29 & 1) == 0) {
                  return;
                }
                if (*(int *)(_CarController_TypeInfo + 0xe0) != 0) {
                  if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
                    CarController__HCBBKPNEMLE(**(long **)(_CarController_TypeInfo + 0xb8),0);
                    lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                    if (lVar27 != 0) {
                      *(undefined1 *)(lVar27 + 0x504) = 1;
                      lVar27 = CarController__FIOKLNLIDNH(lVar27,0,0);
                      if (lVar27 == 0) {
                        func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                        uVar34 = func_0x00a67b44();
                        uVar33 = func_0x00a67914(&Str_routine_is_null);
                        System_NullReferenceException___ctor(uVar34,uVar33,0);
                      }
                      else {
                        if (pcRam000000000191c478 == (code *)0x0) {
                          pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
                        }
                        uVar29 = (*pcRam000000000191c478)(unaff_x19);
                        if ((uVar29 & 1) != 0) {
                          if (pcRam000000000191c488 == (code *)0x0) {
                            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                          }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam000000000191c488)(unaff_x19,lVar27);
                          return;
                        }
                        func_0x00a67914(&System_ArgumentException_TypeInfo);
                        uVar34 = func_0x00a67b44();
                        uVar33 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
                        System_ArgumentException___ctor(uVar34,uVar33,0);
                        unaff_x20 = unaff_x19;
                      }
                      uVar33 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
                      auVar41 = func_0x00a67a20(uVar34,uVar33);
                      puStack_30 = unaff_x20;
                      if (pcRam000000000191c488 == (code *)0x0) {
                        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                      }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam000000000191c488)(auVar41._0_8_,auVar41._8_8_);
                      return;
                    }
                  }
                  goto LAB_00c62b30;
                }
                puStack_30 = (undefined1 *)0xc62ad0;
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
                lVar27 = _CarController_TypeInfo;
                unaff_x20 = puVar32;
              }
            }
          }
          else {
            puVar32 = *(undefined **)(puVar32 + 0x30);
            if (puVar32 == (undefined *)0x0) goto LAB_00c25694;
            if ((bRam0000000001917228 & 1) == 0) {
              func_0x00a67900(&CarController_TypeInfo,0);
              func_0x00a67900(&GUIGameplay_TypeInfo);
              func_0x00a67900(&Main_TypeInfo);
              func_0x00a67900(&Menu_TypeInfo);
              func_0x00a67900(&UnityEngine_Object_TypeInfo);
              func_0x00a67900(&SoundScript_TypeInfo);
              bRam0000000001917228 = 1;
            }
            fVar39 = (float)UnityEngine_Time__get_timeScale(0);
            if (1.0 <= fVar39) {
              return;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              puStack_30 = (undefined1 *)0xc6086c;
              register0x00000008 = (BADSPACEBASE *)&puStack_30;
              lVar27 = _Menu_TypeInfo;
              unaff_x19 = puVar32;
              unaff_x20 = &Menu_TypeInfo;
            }
            else {
              *(undefined1 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 10) = 0;
              UnityEngine_Time__set_timeScale(0x3f800000,0);
              UnityEngine_AudioListener__set_volume
                        (*(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x14),0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                puStack_30 = &LAB_00c608b0;
                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                lVar27 = _Main_TypeInfo;
                unaff_x19 = puVar32;
                unaff_x20 = &Menu_TypeInfo;
                unaff_x21 = &Main_TypeInfo;
              }
              else {
                puVar37 = (undefined *)0x1916000;
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  puStack_30 = (undefined1 *)0xc608e0;
                  register0x00000008 = (BADSPACEBASE *)&puStack_30;
                  lVar27 = _Main_TypeInfo;
                  unaff_x19 = puVar32;
                  unaff_x20 = &Menu_TypeInfo;
                  unaff_x21 = &Main_TypeInfo;
                  unaff_x22 = puVar37;
                }
                else {
                  pvVar28 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (pvVar28 == (void *)0x0) goto LAB_00c60ba4;
                  bVar23 = DAFNMLEKHAD__BMMOMBGDEKF(pvVar28);
                  if (bVar23) {
                    if ((*(long *)(puVar32 + 0x20) == 0) ||
                       (lVar27 = *(long *)(*(long *)(puVar32 + 0x20) + 0x48), lVar27 == 0))
                    goto LAB_00c60ba4;
                    uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                    if ((uVar29 & 1) == 0) {
                      if ((*(long *)(puVar32 + 0x20) == 0) ||
                         (lVar27 = *(long *)(*(long *)(puVar32 + 0x20) + 0x48), lVar27 == 0))
                      goto LAB_00c60ba4;
                      UnityEngine_AudioSource__Play(lVar27,0);
                    }
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    puStack_30 = &LAB_00c60940;
                    register0x00000008 = (BADSPACEBASE *)&puStack_30;
                    lVar27 = _Main_TypeInfo;
                    unaff_x19 = puVar32;
                    unaff_x20 = &Menu_TypeInfo;
                    unaff_x21 = &Main_TypeInfo;
                    unaff_x22 = puVar37;
                  }
                  else {
                    if (cRam0000000001916e67 == '\0') {
                      func_0x00a67900(&Main_TypeInfo);
                      cRam0000000001916e67 = '\x01';
                    }
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      puStack_30 = (undefined1 *)0xc6096c;
                      register0x00000008 = (BADSPACEBASE *)&puStack_30;
                      lVar27 = _Main_TypeInfo;
                      unaff_x19 = puVar32;
                      unaff_x20 = &Menu_TypeInfo;
                      unaff_x21 = &Main_TypeInfo;
                      unaff_x22 = puVar37;
                    }
                    else {
                      lVar27 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                      if (lVar27 == 0) goto LAB_00c60ba4;
                      uVar29 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar27,0);
                      puVar38 = unaff_x23;
                      if ((uVar29 & 1) != 0) {
                        puVar37 = &SoundScript_TypeInfo;
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          puStack_30 = (undefined1 *)0xc609a0;
                          register0x00000008 = (BADSPACEBASE *)&puStack_30;
                          lVar27 = _SoundScript_TypeInfo;
                          unaff_x19 = puVar32;
                          unaff_x20 = &Menu_TypeInfo;
                          unaff_x21 = &Main_TypeInfo;
                          unaff_x22 = puVar37;
                          goto SUB_00a67a30;
                        }
                        lVar27 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0);
                        if (lVar27 == 0) goto LAB_00c60ba4;
                        uVar29 = UnityEngine_AudioSource__get_isPlaying(lVar27,0);
                        if ((uVar29 & 1) == 0) {
                          puVar38 = &CarController_TypeInfo;
                          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc609d4;
                            register0x00000008 = (BADSPACEBASE *)&puStack_30;
                            lVar27 = _CarController_TypeInfo;
                            unaff_x19 = puVar32;
                            unaff_x20 = &Menu_TypeInfo;
                            unaff_x21 = &Main_TypeInfo;
                            unaff_x22 = puVar37;
                            unaff_x23 = puVar38;
                            goto SUB_00a67a30;
                          }
                          if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x34) != '\0') {
                            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            SoundScript__HCEFONCADKE
                                      (*(undefined8 *)
                                        (*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xa0),0);
                          }
                        }
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        puStack_30 = (undefined1 *)0xc60a18;
                        register0x00000008 = (BADSPACEBASE *)&puStack_30;
                        lVar27 = _Menu_TypeInfo;
                        unaff_x19 = puVar32;
                        unaff_x20 = &Menu_TypeInfo;
                        unaff_x21 = &Main_TypeInfo;
                        unaff_x22 = puVar37;
                        unaff_x23 = puVar38;
                      }
                      else {
                        lVar27 = *(long *)(_Menu_TypeInfo + 0xb8);
                        if (*(char *)(lVar27 + 0xc) != '\0') goto LAB_00c60b78;
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                          lVar27 = *(long *)(_Menu_TypeInfo + 0xb8);
                        }
                        if (*(char *)(lVar27 + 0xb) == '\0') {
                          if (*(long *)(puVar32 + 0x50) == 0) goto LAB_00c60ba4;
                          GUIWindow__HEGIHOAJOKK(*(long *)(puVar32 + 0x50),0,0);
                          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                            puStack_30 = (undefined1 *)0xc60ad0;
                            register0x00000008 = (BADSPACEBASE *)&puStack_30;
                            lVar27 = _CarController_TypeInfo;
                            unaff_x19 = puVar32;
                            unaff_x20 = &Menu_TypeInfo;
                            unaff_x21 = &Main_TypeInfo;
                            unaff_x22 = &CarController_TypeInfo;
                            unaff_x23 = puVar38;
                          }
                          else {
                            puVar37 = (undefined *)**(undefined8 **)(_CarController_TypeInfo + 0xb8)
                            ;
                            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                            }
                            uVar29 = UnityEngine_Object__op_Inequality(puVar37,0,0);
                            if ((uVar29 & 1) != 0) {
                              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                                puStack_30 = (undefined1 *)0xc60b1c;
                                register0x00000008 = (BADSPACEBASE *)&puStack_30;
                                lVar27 = _CarController_TypeInfo;
                                unaff_x19 = puVar32;
                                unaff_x20 = puVar37;
                                unaff_x21 = &Main_TypeInfo;
                                unaff_x22 = &CarController_TypeInfo;
                                unaff_x23 = puVar38;
                                goto SUB_00a67a30;
                              }
                              lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                              if (lVar27 == 0) {
LAB_00c60ba4:
                    /* WARNING: Subroutine does not return */
                                il2cpp_throw_967b50();
                              }
                              if (*(char *)(lVar27 + 0x3fd) != '\0') {
                                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                  lVar27 = **(long **)(_CarController_TypeInfo + 0xb8);
                                  if (lVar27 == 0) goto LAB_00c60ba4;
                                }
                                if (*(long *)(lVar27 + 0x28) == 0) goto LAB_00c60ba4;
                                uVar29 = UnityEngine_Behaviour__get_enabled
                                                   (*(long *)(lVar27 + 0x28),0);
                                if ((uVar29 & 1) == 0) {
                                  if (*(void **)(puVar32 + 0x50) == (void *)0x0) goto LAB_00c60ba4;
                                  GUIWindow__JGDCBENNDFO(*(void **)(puVar32 + 0x50),false);
                                }
                              }
                            }
LAB_00c60b78:
                            lVar27 = _Main_TypeInfo;
                            if (*(int *)(_Main_TypeInfo + 0xe0) != 0) {
                              return;
                            }
                          }
                        }
                        else if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          puStack_30 = (undefined1 *)0xc60a50;
                          register0x00000008 = (BADSPACEBASE *)&puStack_30;
                          lVar27 = _Menu_TypeInfo;
                          unaff_x19 = puVar32;
                          unaff_x20 = &Menu_TypeInfo;
                          unaff_x21 = &Main_TypeInfo;
                          unaff_x22 = puVar37;
                          unaff_x23 = puVar38;
                        }
                        else {
                          *(undefined1 *)(lVar27 + 0xb) = 0;
                          if (*(long *)(puVar32 + 0x50) == 0) goto LAB_00c60ba4;
                          GUIWindow__HEGIHOAJOKK(*(long *)(puVar32 + 0x50),0,0);
                          if (*(int *)(_GUIGameplay_TypeInfo + 0xe0) != 0) {
                            GUIGameplay__MGNNDFEFHAH
                                      (puVar32,*(undefined4 *)
                                                (*(long *)(_GUIGameplay_TypeInfo + 0xb8) + 4),0);
                            goto LAB_00c60b78;
                          }
                          puStack_30 = (undefined1 *)0xc60a88;
                          register0x00000008 = (BADSPACEBASE *)&puStack_30;
                          lVar27 = _GUIGameplay_TypeInfo;
                          unaff_x19 = puVar32;
                          unaff_x20 = &GUIGameplay_TypeInfo;
                          unaff_x21 = &Main_TypeInfo;
                          unaff_x22 = puVar37;
                          unaff_x23 = puVar38;
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
SUB_00a67a30:
  *(undefined1 **)((long)register0x00000008 + -0x40) = puStack_30;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x23;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x10) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x19;
  piVar36 = (int *)(lVar27 + 0xe0);
  if (*piVar36 == 0) {
    lVar26 = func_0x00a51c20();
    if (lVar26 == lRam000000000191ff18) {
      iRam000000000191ff20 = iRam000000000191ff20 + 1;
    }
    else {
      iVar25 = 0;
      do {
        iVar5 = iRam000000000191fed8;
        if (iRam000000000191fed8 == iVar25) {
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            cVar4 = ExclusiveMonitorsStatus();
            iRam000000000191fed8 = iVar25 + 1;
          }
          if (cVar4 != '\0') goto LAB_00a7fdf8;
          bVar23 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a7fdf8:
          bVar23 = false;
        }
      } while ((iVar5 != 2) && (iVar25 = iVar5, !bVar23));
      while (iVar5 != 0) {
        func_0x00b05724(0x191fed8,2,0xffffffff);
        do {
          iVar5 = iRam000000000191fed8;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            iRam000000000191fed8 = 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      iRam000000000191ff20 = 1;
      lRam000000000191ff18 = lVar26;
    }
    do {
      if (*piVar36 != 1) {
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar1 = (int *)(lVar27 + 0xdc);
        goto LAB_00a7fec8;
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar23) {
        *piVar36 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    iVar25 = iRam000000000191ff20 + -1;
    if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar25, iVar25 == 0)) {
      lRam000000000191ff18 = 0;
      iRam000000000191ff20 = 0;
      do {
        iVar25 = iRam000000000191fed8;
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
        if (bVar23) {
          iRam000000000191fed8 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar25 == 2) {
SUB_00b0577c:
        iRam000000000191ff20 = 0;
        lRam000000000191ff18 = 0;
        syscall(0x62,0x191fed8,0x81,1,0,0,0);
        return;
      }
    }
  }
  return;
  while( true ) {
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar23) {
      *piVar1 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') break;
LAB_00a7fec8:
    if (*piVar1 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar2 = (undefined8 *)(lVar27 + 0xe8);
      uVar33 = func_0x00accfa0();
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = uVar33;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar25 = iRam000000000191ff20 + -1;
      if ((0 < iRam000000000191ff20) && (iRam000000000191ff20 = iVar25, iVar25 == 0)) {
        lRam000000000191ff18 = 0;
        iRam000000000191ff20 = 0;
        do {
          iVar25 = iRam000000000191fed8;
          cVar4 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
          if (bVar23) {
            iRam000000000191fed8 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar25 == 2) goto SUB_00b0577c;
      }
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      lVar26 = func_0x00ae13e8(lVar27);
      if (lVar26 != 0) {
        func_0x00a819e8(lVar26,0,0,(undefined1 *)((long)register0x00000008 + -0x48));
      }
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (*(long *)((long)register0x00000008 + -0x48) != 0) {
        func_0x00a79ab8((undefined1 *)((long)register0x00000008 + -0x78),lVar27 + 0x20,0);
        uVar29 = (ulong)((long)register0x00000008 + -0x78) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          uVar29 = *(ulong *)((long)register0x00000008 + -0x68);
        }
        func_0x00ad2e28((undefined1 *)((long)register0x00000008 + -0x60),&UNK_005a3f1d,uVar29);
        if ((*(byte *)((long)register0x00000008 + -0x78) & 1) != 0) {
          func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x68));
        }
        uVar29 = (ulong)((long)register0x00000008 + -0x60) | 1;
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
          uVar29 = *(ulong *)((long)register0x00000008 + -0x50);
        }
        uVar33 = func_0x00ace868(uVar29,*(undefined8 *)((long)register0x00000008 + -0x48));
        func_0x00adf278(lVar27,uVar33);
        if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_00a800d0;
        func_0x016defe0(*(undefined8 *)((long)register0x00000008 + -0x50));
        goto LAB_00a800d0;
      }
      do {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar23) {
          *piVar36 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00a800cc;
    }
  }
  DataMemoryBarrier(2,3);
  iVar25 = iRam000000000191ff20 + -1;
  if ((iRam000000000191ff20 < 1) || (iRam000000000191ff20 = iVar25, iVar25 != 0)) {
LAB_00a7ff28:
    lVar26 = func_0x00accfa0();
    plVar30 = (long *)(lVar27 + 0xe8);
    do {
      lVar31 = *plVar30;
      if (lVar31 != lVar26) {
        ClearExclusiveLocal();
        bVar23 = false;
        goto LAB_00a8008c;
      }
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar23) {
        *plVar30 = lVar26;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar23 = true;
LAB_00a8008c:
    DataMemoryBarrier(2,3);
    lVar3 = lVar26;
    if (!bVar23) {
      lVar3 = lVar31;
    }
    if (lVar3 == lVar26) {
      return;
    }
    do {
      if (*piVar36 != 1) goto LAB_00a800e4;
      cVar4 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar36,0x10);
      if (bVar23) {
        *piVar36 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00a800cc:
    do {
      DataMemoryBarrier(2,3);
LAB_00a800d0:
      if (*(int *)(lVar27 + 0xd8) == 0) {
        return;
      }
      uVar33 = func_0x00ab272c();
      func_0x00acdca4(uVar33,0);
LAB_00a800e4:
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar1 = (int *)(lVar27 + 0xd8);
      while (*piVar1 == 0) {
        cVar4 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar23) {
          *piVar1 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          func_0x00accf98(1,0);
          while (*piVar36 == 1) {
            cVar4 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar23) {
              *piVar36 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00a800cc;
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
        }
      }
      ClearExclusiveLocal();
    } while( true );
  }
  lRam000000000191ff18 = 0;
  iRam000000000191ff20 = 0;
  do {
    iVar25 = iRam000000000191fed8;
    cVar4 = '\x01';
    bVar23 = (bool)ExclusiveMonitorPass(0x191fed8,0x10);
    if (bVar23) {
      iRam000000000191fed8 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar25 != 2) goto LAB_00a7ff28;
  goto SUB_00b0577c;
}


// ==== public void IKDCPJNHOKJ(int JJDDCKDBCIL) { }   @0xb62e84

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__IKDCPJNHOKJ(void *__this,int JJDDCKDBCIL)

{
  long lVar1;
  float afStack_18 [2];
  
  if (JJDDCKDBCIL <= *(int *)((long)__this + 0x138)) {
    return;
  }
  *(int *)((long)__this + 0x138) = JJDDCKDBCIL;
  if (*(long *)((long)__this + 0x130) != 0) {
    afStack_18[0] =
         (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x130),0);
    lVar1 = *(long *)((long)__this + 0x130);
    if (lVar1 != 0) {
      afStack_18[0] = afStack_18[0] + 30.0;
      if (pcRam000000000191c800 == (code *)0x0) {
        pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
      }
      (*pcRam000000000191c800)(lVar1,afStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HNKHJLDJMHB(string FJBLHMNOPEP, JLPFNIPEELJ FHOFNGHGNGF, bool PAPICKFLEMM, bool KNLLEGFOMII = False) { }   @0xb62f70

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__HNKHJLDJMHB
               (void *__this,void *FJBLHMNOPEP,int FHOFNGHGNGF,bool PAPICKFLEMM,bool KNLLEGFOMII)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__this_00;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x23;
  undefined8 uVar9;
  long *unaff_x25;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  if ((bRam0000000001917227 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_with_hints_);
    bRam0000000001917227 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
    if (FHOFNGHGNGF != 7) {
      if (FJBLHMNOPEP == (void *)0x0) goto LAB_00c63204;
      FJBLHMNOPEP = (void *)System_String__ToUpper(FJBLHMNOPEP,0);
    }
  }
  else if (FHOFNGHGNGF != 7) {
    return;
  }
  lVar7 = *(long *)((long)__this + 0x1f8);
  if (lVar7 == 0) goto LAB_00c63204;
  if (FHOFNGHGNGF < (int)*(uint *)(lVar7 + 0x18)) {
    if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) {
LAB_00c63208:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar10 = (long)FHOFNGHGNGF;
    uVar9 = *(undefined8 *)(lVar7 + lVar10 * 8 + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      if (PAPICKFLEMM) {
        lVar7 = *(long *)((long)__this + 0x1f8);
        if (lVar7 == 0) goto LAB_00c63204;
        if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) goto LAB_00c63208;
        lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0))
        goto LAB_00c63204;
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)((long)__this + 0x1f8);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) goto LAB_00c63208;
            lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
            if ((lVar7 != 0) && (plVar6 = *(long **)(lVar7 + 0x88), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00c63110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x5a8))(plVar6,FJBLHMNOPEP,*(undefined8 *)(*plVar6 + 0x5b0));
              return;
            }
          }
          goto LAB_00c63204;
        }
      }
      if (!KNLLEGFOMII) {
        lVar7 = *(long *)((long)__this + 0x1f8);
        if (lVar7 == 0) goto LAB_00c63204;
        if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) goto LAB_00c63208;
        lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0))
        goto LAB_00c63204;
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
      if (FHOFNGHGNGF != 4) {
        lVar7 = *(long *)((long)__this + 0x1f8);
        if (lVar7 == 0) goto LAB_00c63204;
        if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) goto LAB_00c63208;
        lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (plVar6 = *(long **)(lVar7 + 0x88), plVar6 == (long *)0x0))
        goto LAB_00c63204;
        (**(code **)(*plVar6 + 0x5a8))(plVar6,FJBLHMNOPEP,*(undefined8 *)(*plVar6 + 0x5b0));
      }
      lVar7 = *(long *)((long)__this + 0x1f8);
      if (lVar7 == 0) {
LAB_00c63204:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)FHOFNGHGNGF) goto LAB_00c63208;
      lVar7 = *(long *)(lVar7 + lVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_00c63204;
      if ((bRam0000000001916e09 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___,0);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam0000000001916e09 = 1;
      }
      if (*(char *)(lVar7 + 0x20) == '\0') {
        if (*(int *)(lVar7 + 0x28) != 4) {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (lVar7,&stack0xffffffffffffffd8,
                     _Method_UnityEngine_Component_GetComponent_RectTransform___);
          *(long *)(lVar7 + 0x70) = unaff_x23;
          if (unaff_x23 == 0) goto LAB_00bd9510;
          uVar11 = UnityEngine_Transform__get_localScale(unaff_x23,0);
          *(undefined4 *)(lVar7 + 0x90) = uVar11;
          if (*(long *)(lVar7 + 0x70) == 0) goto LAB_00bd9510;
          UnityEngine_Transform__get_localPosition(*(long *)(lVar7 + 0x70),0);
          *(undefined4 *)(lVar7 + 0x94) = in_s1;
        }
        plVar6 = *(long **)(lVar7 + 0x78);
        if (plVar6 == (long *)0x0) goto LAB_00bd9510;
        uVar11 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
        *(undefined4 *)(lVar7 + 0x30) = uVar11;
        *(undefined4 *)(lVar7 + 0x34) = in_s1;
        *(undefined4 *)(lVar7 + 0x38) = in_s2;
        *(undefined4 *)(lVar7 + 0x3c) = in_s3;
        *(undefined4 *)(lVar7 + 0x50) = uVar11;
        *(undefined4 *)(lVar7 + 0x54) = in_s1;
        *(undefined4 *)(lVar7 + 0x58) = in_s2;
        *(undefined4 *)(lVar7 + 0x5c) = in_s3;
        uVar9 = *(undefined8 *)(lVar7 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(lVar7 + 0x88);
          if (plVar6 == (long *)0x0) goto LAB_00bd9510;
          (**(code **)(*plVar6 + 0x2a8))
                    (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar6,
                     *(undefined8 *)(*plVar6 + 0x2b0));
          auVar13 = NEON_fmov(0x3f800000,4);
          *(long *)(lVar7 + 0x68) = auVar13._8_8_;
          *(long *)(lVar7 + 0x60) = auVar13._0_8_;
        }
        *(undefined1 *)(lVar7 + 0x20) = 1;
      }
      else {
        plVar6 = *(long **)(lVar7 + 0x78);
        *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar7 + 0x50);
        *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar7 + 0x54);
        *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(lVar7 + 0x58);
        *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(lVar7 + 0x5c);
        if (plVar6 == (long *)0x0) goto LAB_00bd9510;
        (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
        uVar9 = *(undefined8 *)(lVar7 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(lVar7 + 0x88);
          *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(lVar7 + 0x60);
          *(undefined4 *)(lVar7 + 0x44) = *(undefined4 *)(lVar7 + 100);
          *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(lVar7 + 0x68);
          *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(lVar7 + 0x6c);
          if (plVar6 == (long *)0x0) goto LAB_00bd9510;
          (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
        }
      }
      *(undefined4 *)(lVar7 + 0x2c) = 0;
      lVar10 = UnityEngine_Component__get_gameObject(lVar7,0);
      if (lVar10 != 0) {
        UnityEngine_GameObject__SetActive(lVar10,1,0);
        uVar9 = *(undefined8 *)(lVar7 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
        if ((uVar5 & 1) != 0) {
          uVar9 = *(undefined8 *)(lVar7 + 0x88);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
          if (((uVar5 & 1) != 0) && (*(int *)(lVar7 + 0x28) != 6)) {
            plVar6 = *(long **)(lVar7 + 0x88);
            if (plVar6 != (long *)0x0) {
              lVar8 = *(long *)(lVar7 + 0x70);
              lVar10 = (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0));
              if (lVar10 != 0) {
                fVar12 = (float)*(int *)(lVar10 + 0x10) / 20.0;
                fVar14 = fVar12;
                if (1.0 < fVar12) {
                  fVar14 = 1.0;
                }
                fVar14 = fVar14 * 580.0 + 420.0;
                if (fVar12 < 0.0) {
                  fVar14 = 420.0;
                }
                if ((*(long *)(lVar7 + 0x70) != 0) &&
                   (UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar7 + 0x70),0), lVar8 != 0)
                   ) {
                  UnityEngine_RectTransform__set_sizeDelta(fVar14,lVar8,0);
                  return;
                }
              }
            }
            goto LAB_00bd9510;
          }
        }
        return;
      }
LAB_00bd9510:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar6 = _Str_Error_with_hints_;
  if ((bRam0000000001917204 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917204 = 1;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__LogError(plVar6,0);
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
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(__this_00);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar6 == (long *)0x0)) goto LAB_00c5d818;
  lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  if (lVar7 == 0) goto LAB_00c5d818;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar9,1,0);
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
  plVar6 = *(long **)(lVar7 + 0x1e8);
  if ((plVar6 == (long *)0x0) ||
     (lVar10 = (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0)), lVar10 == 0)
     ) goto LAB_00c16768;
  if (10000 < *(int *)(lVar10 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar10 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar10 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar10,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar10 = UnityEngine_Object__Instantiate_object_
                       (uVar3,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar10 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar10,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar6 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar6 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0)), lVar7 != 0))
  {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar3, uVar1 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      UnityEngine_Time__get_time(0);
      uVar3 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
      uVar3 = System_String__Format(_Str__0_f2_,uVar3,0);
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar7 + 0x40) = uVar3, uVar1 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar7,0);
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x5b0));
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


// ==== public void ButtonTiltRight(bool value) { }   @0xb64494

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonTiltRight(void *__this,bool value)

{
  *(bool *)((long)__this + 0xbc) = value;
  return;
}


// ==== private static void .cctor() { }   @0xb6522c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay___cctor(void)

{
  undefined8 *puVar1;
  
  if ((bRam000000000191722f & 1) == 0) {
    func_0x00a67900(&GUIGameplay_TypeInfo);
    bRam000000000191722f = 1;
  }
  puVar1 = *(undefined8 **)(_GUIGameplay_TypeInfo + 0xb8);
  *puVar1 = 0xffffffff00000000;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = 0x3fc00000;
  return;
}


// ==== public void AGGPLIPJHPI() { }   @0xb65fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__AGGPLIPJHPI(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((bRam0000000001917234 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917234 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar3 != 0xb) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar3 != 0xc) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar3 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      if (iVar3 != 0xd) {
        lVar1 = *(long *)((long)__this + 0xf0);
        if (lVar1 == 0) goto LAB_00c660a4;
        uVar2 = 1;
        goto LAB_00c66084;
      }
    }
  }
  lVar1 = *(long *)((long)__this + 0xf0);
  if (lVar1 == 0) {
LAB_00c660a4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = 0;
LAB_00c66084:
  if (pcRam000000000191c3f8 == (code *)0x0) {
    pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
  }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c3f8)(lVar1,uVar2);
  return;
}


// ==== public void ButtonRewardEncyclopediaShowAdv() { }   @0xb66500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__ButtonRewardEncyclopediaShowAdv(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  void *__this_00;
  int extraout_w1;
  int JJNILODLKGJ;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001917237 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917237 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (__this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), __this_00 != (void *)0x0))
  {
    JJNILODLKGJ = 5;
    if ((bRam00000000019171df & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&MaxSdkAndroid_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&NNPDABJADNE_TypeInfo);
      func_0x00a67900(&Str_ADV_REWARD__SHOW_);
      bRam00000000019171df = 1;
      JJNILODLKGJ = extraout_w1;
    }
    bVar1 = AdvController__HNDMJBICLJF(__this_00,JJNILODLKGJ);
    if (!bVar1) {
      return;
    }
    *(undefined4 *)((long)__this_00 + 0x30) = 5;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      uStack_48 = _NNPDABJADNE_TypeInfo;
      uStack_40 = 0xffffffffffffffff;
      uStack_38 = *(undefined4 *)((long)__this_00 + 0x30);
      uVar2 = System_Enum__ToString(&uStack_48,0);
      if (lVar3 != 0) {
        AnalyticsController__JCMFKBONIGF(lVar3,uVar2,0);
        uStack_60 = _NNPDABJADNE_TypeInfo;
        uVar4 = *(undefined8 *)((long)__this_00 + 0x40);
        uStack_58 = 0xffffffffffffffff;
        uStack_50 = *(undefined4 *)((long)__this_00 + 0x30);
        uVar2 = System_Enum__ToString(&uStack_60,0);
        if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
        }
        MaxSdkAndroid__ShowRewardedAd(uVar4,uVar2,0,0);
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


// ==== private void IMJEJKHBIMO() { }   @0xb62094

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGameplay__IMJEJKHBIMO(void *__this)

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
  
  if ((bRam000000000191723b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191723b = 1;
  }
  plVar5 = *(long **)((long)__this + 0x398);
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
  lVar2 = 0x3a8;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0x3a0;
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



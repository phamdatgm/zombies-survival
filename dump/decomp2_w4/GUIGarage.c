// ==== public int BGHFPDCINFC() { }   @0xb081e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int GUIGarage__BGHFPDCINFC(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000001916f58 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f58 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar1 < 1) {
      iVar4 = 0;
    }
    else {
      uVar7 = 0;
      iVar4 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c0835c;
        Achievement__PPHJGAMIKLM(lVar5,0);
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
        if (lVar2 == 0) goto LAB_00c0835c;
        uVar3 = DAFNMLEKHAD__HIFFBAOPBGD(lVar2,*(undefined4 *)(lVar5 + 0x10),0);
        if ((uVar3 & 1) == 0) {
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
          if (lVar2 == 0) goto LAB_00c0835c;
          uVar3 = DAFNMLEKHAD__OFOJMCJAGFD(lVar2,*(undefined4 *)(lVar5 + 0x10),0);
          if ((uVar3 & 1) != 0) goto LAB_00c08328;
        }
        else {
LAB_00c08328:
          iVar4 = iVar4 + 1;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return iVar4;
  }
LAB_00c0835c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DHADIHGJCCE(APJHDPJBJLL FHOFNGHGNGF) { }   @0xb07d5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DHADIHGJCCE(void *__this,int FHOFNGHGNGF)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
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
     (pvVar1 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), pvVar1 != (void *)0x0)) {
    AnalyticsController__KNPMHFKJGNL(pvVar1);
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (pvVar1 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48), pvVar1 == (void *)0x0))
        goto LAB_00c07e78;
        Purchaser__KHDFDGMBOIJ(pvVar1);
      }
      if (*(void **)((long)__this + 0xa8) != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0xa8),true);
        lVar3 = *(long *)((long)__this + 0x660);
        *(undefined1 *)((long)__this + 0x6cc) = 1;
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= (uint)FHOFNGHGNGF) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar3 = *(long *)(lVar3 + (long)FHOFNGHGNGF * 8 + 0x20);
          if (lVar3 != 0) {
            UnityEngine_UI_Toggle__set_isOn(lVar3,1,0);
            *(int *)((long)__this + 0x6c8) = FHOFNGHGNGF;
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


// ==== public void ButtonBuyColorReward() { }   @0xb08f2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonBuyColorReward(void *__this)

{
  long lVar1;
  ulong uVar2;
  void *FHOFNGHGNGF;
  undefined8 uVar3;
  void *__this_00;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916f62 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f62 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar1 != 0)) {
    if ((bRam00000000019171df & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo,4,0);
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
    *(undefined4 *)(lVar1 + 0x30) = 4;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      __this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      uStack_48 = _NNPDABJADNE_TypeInfo;
      uStack_40 = 0xffffffffffffffff;
      uStack_38 = *(undefined4 *)(lVar1 + 0x30);
      FHOFNGHGNGF = (void *)System_Enum__ToString(&uStack_48,0);
      if (__this_00 != (void *)0x0) {
        AnalyticsController__JCMFKBONIGF(__this_00,FHOFNGHGNGF);
        uStack_60 = _NNPDABJADNE_TypeInfo;
        uVar4 = *(undefined8 *)(lVar1 + 0x40);
        uStack_58 = 0xffffffffffffffff;
        uStack_50 = *(undefined4 *)(lVar1 + 0x30);
        uVar3 = System_Enum__ToString(&uStack_60,0);
        if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
        }
        MaxSdkAndroid__ShowRewardedAd(uVar4,uVar3,0,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MIAENKOOLAI() { }   @0xb095d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__MIAENKOOLAI(void *__this)

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


// ==== public void ButtonBuyUpgradeConfirm(bool is_free) { }   @0xb09d48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonBuyUpgradeConfirm(void *__this,bool is_free)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int KFMJHIOHBEE;
  long lVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  int iStack_44;
  
  if ((bRam0000000001916f6b & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_color);
    bRam0000000001916f6b = 1;
  }
  iStack_44 = 0;
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
  if (lVar6 == 0) goto LAB_00c0a774;
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  if (lVar6 == 0) {
    return;
  }
  uVar11 = *(undefined8 *)((long)__this + 0x568);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar7 = UnityEngine_Input__GetKey(0x7f,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
    iVar2 = ShopItem__HJICMDCENKN(*(long *)((long)__this + 0x568),0xffffffff,0);
    if (0 < iVar2) {
      if (*(long *)((long)__this + 0x568) != 0) {
        cVar1 = *(char *)(*(long *)((long)__this + 0x568) + 0x70);
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
        if (lVar6 != 0) {
          lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
          lVar10 = *(long *)((long)__this + 0x568);
          if (lVar10 != 0) {
            if (cVar1 == '\0') {
              if (lVar6 == 0) goto LAB_00c0a774;
              MKCBGHDANLA__ACDFKIBBJGP(lVar6,*(undefined4 *)(lVar10 + 0x28),0);
            }
            else {
              if (lVar6 == 0) goto LAB_00c0a774;
              MKCBGHDANLA__CFMKDKAGFMA(lVar6,*(undefined4 *)(lVar10 + 0x74),0);
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
              Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
              return;
            }
          }
        }
      }
      goto LAB_00c0a774;
    }
  }
  if (*(long *)((long)__this + 0x568) != 0) {
    iVar2 = ShopItem__HJICMDCENKN(*(long *)((long)__this + 0x568),0xffffffff,0);
    if (*(long *)((long)__this + 0x568) != 0) {
      iVar3 = ShopItem__EKBFKEBGGOP(*(long *)((long)__this + 0x568),0);
      if (iVar3 <= iVar2) {
        return;
      }
      pvVar12 = *(void **)((long)__this + 0x568);
      if (pvVar12 != (void *)0x0) {
        iVar2 = ShopItem__HJICMDCENKN(pvVar12,0xffffffff,0);
        iVar2 = ShopItem__OKADMIPJHCA(pvVar12,iVar2);
        lVar6 = *(long *)((long)__this + 0x568);
        if (lVar6 != 0) {
          uVar4 = ShopItem__HJICMDCENKN(lVar6,0xffffffff,0);
          uVar7 = ShopItem__MLHKDEGPJGI(lVar6,uVar4,0);
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
            if ((uVar7 & 1) == 0) {
              iVar3 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
              if ((iVar3 < iVar2) && (!is_free)) {
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
                if (lVar6 != 0) {
                  iVar3 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
                  KFMJHIOHBEE = 0;
                  goto LAB_00c0a0e0;
                }
                goto LAB_00c0a774;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
              uVar11 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x80);
              uVar8 = *(undefined8 *)((long)__this + 0x568);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar8,0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar6 == 0) goto LAB_00c0a774;
                if (iVar3 == *(int *)(lVar6 + 0xf4)) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                  Menu__OOFKKAKFKEL(**(long **)(_Menu_TypeInfo + 0xb8),is_free,0);
                }
              }
              if (!is_free) {
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
                if (lVar6 == 0) goto LAB_00c0a774;
                iVar3 = DAFNMLEKHAD__LOCFCFJIAIH(lVar6,0);
                DAFNMLEKHAD__JLEEMPONONF(lVar6,iVar3 - iVar2,0);
              }
            }
            else {
              iVar3 = DAFNMLEKHAD__HPDEBBJNCIK();
              if ((iVar3 < iVar2) && (!is_free)) {
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
                if (lVar6 != 0) {
                  iVar3 = DAFNMLEKHAD__HPDEBBJNCIK(lVar6,0);
                  KFMJHIOHBEE = 1;
LAB_00c0a0e0:
                  GUIGarage__AFHIOFKDNLD(__this,KFMJHIOHBEE,iVar2 - iVar3);
                  return;
                }
                goto LAB_00c0a774;
              }
              if (!is_free) {
                if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
                cVar1 = *(char *)(*(long *)((long)__this + 0x568) + 0x70);
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
                lVar6 = *(long *)((long)__this + 0x568);
                if (lVar6 == 0) goto LAB_00c0a774;
                lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (cVar1 == '\0') {
                  uStack_68 = _MGACAOGOMPM_TypeInfo;
                  uStack_60 = 0xffffffffffffffff;
                  uStack_58 = *(undefined4 *)(lVar6 + 0x28);
                  uVar11 = System_Enum__ToString(&uStack_68,0);
                  if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
                  uStack_80 = _MGACAOGOMPM_TypeInfo;
                  uStack_78 = 0xffffffffffffffff;
                  uStack_70 = *(undefined4 *)(*(long *)((long)__this + 0x568) + 0x28);
                  uVar8 = System_Enum__ToString(&uStack_80,0);
                  if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
                  iStack_44 = ShopItem__HJICMDCENKN(*(long *)((long)__this + 0x568),0xffffffff,0);
                  iStack_44 = iStack_44 + 1;
                  uVar9 = System_Int32__ToString(&iStack_44,0);
                  uVar8 = System_String__Concat(uVar8,uVar9,0);
                }
                else {
                  uVar11 = System_Int32__ToString(lVar6 + 0x74,0);
                  uVar8 = System_String__Concat(_Str_color,uVar11,0);
                  uVar11 = _Str_color;
                }
                if (lVar10 == 0) goto LAB_00c0a774;
                DAFNMLEKHAD__JMNEPHGKIPE(lVar10,iVar2,uVar11,uVar8,0);
              }
            }
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60));
            if (*(long *)((long)__this + 0x568) != 0) {
              cVar1 = *(char *)(*(long *)((long)__this + 0x568) + 0x70);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cVar1 == '\0') {
                iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
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
                if (lVar6 == 0) goto LAB_00c0a774;
                lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
                lVar10 = *(long *)((long)__this + 0x568);
                if (lVar10 == 0) goto LAB_00c0a774;
                uVar4 = *(undefined4 *)(lVar10 + 0x28);
                if (iVar2 == 0) {
                  uVar5 = ShopItem__EKBFKEBGGOP(lVar10,0);
                  if (lVar6 == 0) goto LAB_00c0a774;
                  MKCBGHDANLA__CMFJICHIMAH(lVar6,uVar4,uVar5,0);
                  if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
                  if (*(int *)(*(long *)((long)__this + 0x568) + 0x28) == 3) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                    *(undefined1 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x7b) = 1;
                  }
                }
                else {
                  if (lVar6 == 0) goto LAB_00c0a774;
                  MKCBGHDANLA__IFGGBDCPJDF(lVar6,uVar4,0);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c0a774;
                pvVar12 = (void *)Menu__INMDNKGHGEO(**(long **)(_Menu_TypeInfo + 0xb8),0);
                pvVar12 = GUIGarage__APCBBBDNHKG(pvVar12,*(void **)((long)__this + 0x568));
                UnityEngine_MonoBehaviour__StartCoroutine(__this,pvVar12,0);
              }
              else {
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar6 == 0) goto LAB_00c0a774;
                lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
                if ((*(long *)((long)__this + 0x568) == 0) || (lVar6 == 0)) goto LAB_00c0a774;
                MKCBGHDANLA__LPHCCLPECIA
                          (lVar6,*(undefined4 *)(*(long *)((long)__this + 0x568) + 0x74),0);
                GUIGarage__ButtonColorPreview(__this,*(undefined8 *)((long)__this + 0x568));
                uVar7 = Main__KCHOEBEIOCE(0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar6 == 0))
                  goto LAB_00c0a774;
                  GamePadController__KCAHLEAKNNK(lVar6,0);
                }
              }
              lVar6 = *(long *)((long)__this + 0x568);
              if (lVar6 != 0) {
                if (*(char *)(lVar6 + 0x70) == '\0') {
                  iVar2 = ShopItem__HJICMDCENKN(lVar6,0xffffffff,0);
                  if (*(long *)((long)__this + 0x568) == 0) goto LAB_00c0a774;
                  iVar3 = ShopItem__EKBFKEBGGOP(*(long *)((long)__this + 0x568),0);
                  if (iVar2 == iVar3) {
                    GUIGarage__KFELMMODBGC(__this);
                  }
                }
                if ((*(long *)((long)__this + 0x98) != 0) &&
                   (lVar6 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x98),0),
                   lVar6 != 0)) {
                  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
                  if ((uVar7 & 1) == 0) {
                    return;
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar6 != 0)) {
                    AdvController__JJDJIEJLCFM(lVar6,0);
                    if (*(long *)((long)__this + 0x98) != 0) {
                      GUIWindow__JGDCBENNDFO(*(long *)((long)__this + 0x98),1,0);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = Main__KCHOEBEIOCE(0);
                      if ((uVar7 & 1) == 0) {
                        return;
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
                      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x58) != 0)) {
                        if (*(char *)(*(long *)(lVar6 + 0x58) + 0x30) == '\0') {
                          return;
                        }
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                          lVar6 = **(long **)(_Menu_TypeInfo + 0xb8);
                          if (lVar6 == 0) goto LAB_00c0a774;
                        }
                        if (*(long *)(lVar6 + 0x58) != 0) {
                          GamePadController__OJPBPDDLDGB(*(long *)(lVar6 + 0x58),0);
                          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58),
                             lVar6 != 0)) {
                            GamePadController__KCAHLEAKNNK(lVar6,0);
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
LAB_00c0a774:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JANLLKKBNAM(int FHOFNGHGNGF) { }   @0xb04148

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__JANLLKKBNAM(void *__this,int FHOFNGHGNGF)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  char acStack_28 [4];
  int iStack_24;
  
  iStack_24 = FHOFNGHGNGF;
  if ((bRam0000000001916f6f & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Str___is_hide__);
    func_0x00a67900(&Str_ButtonHideOffers__);
    bRam0000000001916f6f = 1;
  }
  acStack_28[0] = '\0';
  if ((*(long *)((long)__this + 0x110) == 0) ||
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x110),0), lVar1 == 0))
  goto LAB_00c04348;
  uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
  if ((uVar2 & 1) == 0) {
    if ((*(long *)((long)__this + 0x118) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x118),0), lVar1 == 0
       )) goto LAB_00c04348;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_00c04250;
    if ((*(long *)((long)__this + 0x120) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x120),0), lVar1 == 0
       )) goto LAB_00c04348;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_00c04250;
    if ((*(long *)((long)__this + 0x128) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x128),0), lVar1 == 0
       )) goto LAB_00c04348;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_00c04250;
    if ((*(long *)((long)__this + 0x130) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x130),0), lVar1 == 0
       )) goto LAB_00c04348;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
    if ((uVar2 & 1) != 0) goto LAB_00c04250;
  }
  else {
LAB_00c04250:
    acStack_28[0] = '\x01';
  }
  uVar3 = System_Int32__ToString(&iStack_24,0);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_bool_TypeInfo);
  }
  uVar4 = System_Boolean__ToString(acStack_28,0);
  pvVar5 = (void *)System_String__Concat(_Str_ButtonHideOffers__,uVar3,_Str___is_hide__,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar5,false);
  if (acStack_28[0] != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar1 == 0)) ||
       (pvVar5 = *(void **)(lVar1 + 0x78), pvVar5 == (void *)0x0)) {
LAB_00c04348:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    GUIWindow__HEGIHOAJOKK(pvVar5,false);
  }
  return;
}


// ==== public void ButtonGoToTheStore() { }   @0xb0bee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonGoToTheStore(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916f72 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Str_market___details_id_com_herocraft_game_z);
    bRam0000000001916f72 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = _Str_market___details_id_com_herocraft_game_z;
  if (pcRam000000000191b7e8 == (code *)0x0) {
    pcRam000000000191b7e8 = (code *)func_0x00a678c4(&UNK_005a2451);
  }
                    /* WARNING: Could not recover jumptable at 0x01467070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b7e8)(uVar1);
  return;
}


// ==== public void ButtonZD2GoToStore() { }   @0xb0c534

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonZD2GoToStore(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f76 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_market___details_id_com_herocraft_game_z);
    func_0x00a67900(&Str_Play);
    bRam0000000001916f76 = 1;
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
      goto LAB_00c0c654;
      AnalyticsController__JOOHAKJLNLC(lVar2,_Str_Play,0);
    }
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = _Str_market___details_id_com_herocraft_game_z;
    if (pcRam000000000191b7e8 == (code *)0x0) {
      pcRam000000000191b7e8 = (code *)func_0x00a678c4(&UNK_005a2451);
    }
                    /* WARNING: Could not recover jumptable at 0x01467070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191b7e8)(uVar3);
    return;
  }
LAB_00c0c654:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonCarPrev() { }   @0xb0ca98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonCarPrev(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  undefined4 uVar15;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_64;
  
  if ((bRam0000000001916f7a & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f7a = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = **(long **)(_Menu_TypeInfo + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170fb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170fb = 1;
  }
  uVar12 = *(undefined8 *)(lVar5 + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (((*(long *)(lVar5 + 0x20) == 0) ||
      (lVar10 = *(long *)(*(long *)(lVar5 + 0x20) + 0x78), lVar10 == 0)) ||
     (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) {
LAB_00c398e8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar9 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((*(long *)(lVar5 + 0x20) == 0) ||
     (lVar10 = *(long *)(*(long *)(lVar5 + 0x20) + 0x430), lVar10 == 0)) goto LAB_00c398e8;
  uVar9 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) < 1) {
    return;
  }
  uVar9 = UnityEngine_Input__GetKey(0x130,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((uVar9 & 1) == 0) {
    iVar2 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar2;
  uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
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
  Main__GEMDEAMAGPG(_Str_RefreshGarage,false);
  if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar10 == 0))
  goto LAB_00c35de4;
  iVar2 = *(int *)(lVar10 + 0x18);
  plVar13 = (long *)(lVar5 + 0x20);
  if (*plVar13 == 0) goto LAB_00c35de4;
  uVar12 = *(undefined8 *)(*plVar13 + 0x430);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar9 & 1) != 0) {
    if (*plVar13 == 0) goto LAB_00c35de4;
    lVar10 = *(long *)(*plVar13 + 0x430);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (lVar10 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive
              (lVar10,*(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) != 0,0);
  }
  if (*plVar13 == 0) goto LAB_00c35de4;
  uVar12 = *(undefined8 *)(*plVar13 + 0x420);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if ((uVar9 & 1) != 0) {
    if (*plVar13 == 0) goto LAB_00c35de4;
    lVar10 = *(long *)(*plVar13 + 0x420);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar3 = *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c);
    bVar1 = Car__NBMGBADFACE();
    if (lVar10 == 0) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar10,iVar3 < (int)((iVar2 - (~(uint)bVar1 & 1)) + -2),0);
  }
  if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x428), lVar10 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar10,0,0);
  if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x438), lVar10 == 0)) goto LAB_00c35de4;
  UnityEngine_GameObject__SetActive(lVar10,0,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = *(long *)(_Main_TypeInfo + 0xb8);
  lVar11 = *(long *)(lVar10 + 0x40);
  if (lVar11 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar10 = *(long *)(_Main_TypeInfo + 0xb8);
      lVar11 = *(long *)(lVar10 + 0x40);
      if (lVar11 == 0) goto LAB_00c35de4;
    }
    if (*(int *)(lVar11 + 0x10) == 1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar10 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (*(int *)(lVar10 + 0x2c) == 1) {
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
        if (lVar10 == 0) goto LAB_00c35de4;
        lVar10 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar10,1,0);
        if (lVar10 != 0) {
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
          if ((lVar10 == 0) || (lVar10 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar10,1,0), lVar10 == 0))
          goto LAB_00c35de4;
          uVar9 = DJKGLJOCFCE__MCDLFBJCNNA(lVar10,0);
          if ((uVar9 & 1) == 0) {
            if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x430), lVar10 == 0))
            goto LAB_00c35de4;
            UnityEngine_GameObject__SetActive(lVar10,0,0);
          }
        }
      }
    }
  }
  if (*plVar13 == 0) goto LAB_00c35de4;
  GUIGarage__OHFNNEHCIEH(*plVar13,0);
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
  if (lVar10 == 0) goto LAB_00c35de4;
  iVar2 = -1;
  lVar10 = DAFNMLEKHAD__DKJLCJPBPPN(lVar10,0xffffffff,1,0);
  lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar11 == 0) {
LAB_00c35438:
    iVar3 = iVar2;
    if (lVar10 != 0) goto LAB_00c35448;
LAB_00c354c0:
    if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x478), lVar10 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar10,1,0);
    if (*plVar13 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar13,0,0);
    if (iVar2 == -1) {
      lVar10 = Car__get_Current(0);
      if (lVar10 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar10 + 0x44) != 0) goto LAB_00c3550c;
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
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x120), lVar10 == 0)) goto LAB_00c35de4;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar10,&lStack_a8,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      uStack_88 = uStack_a0;
      lStack_90 = lStack_a8;
      uStack_80 = uStack_98;
      uVar14 = 0;
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                               (&lStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                               ), (uVar9 & 1) != 0) {
        func_0x00b947ec(&lStack_90,&lStack_a8,
                        _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                       );
        lVar10 = lStack_a8;
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar3 = *(int *)(lStack_a8 + 0x10);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (iVar3 == *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) + -1) {
          uVar4 = DJKGLJOCFCE__MCDLFBJCNNA(lVar10,0);
          uVar14 = uVar14 | uVar4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                (&lStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
      if ((uVar14 & 1) != 0) {
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar15;
        lVar10 = Car__get_Current(0);
        if ((lVar10 == 0) || (*plVar13 == 0)) goto LAB_00c35de4;
        plVar8 = *(long **)(*plVar13 + 0x488);
        if (*(int *)(lVar10 + 0x20) < 1) {
          if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_CLAIM), plVar8 == (long *)0x0
             )) goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,pvVar6,*(undefined8 *)(*plVar8 + 0x5b0));
          if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x490), lVar10 == 0))
          goto LAB_00c35de4;
          UnityEngine_GameObject__SetActive(lVar10,0,0);
        }
        else {
          lVar10 = Car__get_Current(0);
          if ((lVar10 == 0) ||
             (uVar12 = System_Int32__ToString(lVar10 + 0x20,0), plVar8 == (long *)0x0))
          goto LAB_00c35de4;
          (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar12,*(undefined8 *)(*plVar8 + 0x5b0));
        }
        if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x480), lVar10 == 0))
        goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar10,1,0);
        if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4c0), lVar10 == 0))
        goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar10,1,0);
        if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x498), lVar10 == 0))
        goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar10,0,0);
        if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4a0), lVar10 == 0))
        goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar10,0,0);
        if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4b8), lVar10 == 0))
        goto LAB_00c35de4;
        UnityEngine_GameObject__SetActive(lVar10,0,0);
        goto LAB_00c35704;
      }
      lVar10 = *plVar13;
      if (lVar10 == 0) goto LAB_00c35de4;
      *(undefined1 *)(lVar10 + 0x470) = 1;
      if (*(long *)(lVar10 + 0x480) == 0) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(*(long *)(lVar10 + 0x480),0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x498), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4a0), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4c0), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4b8), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
      pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_TEXT);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      pvVar7 = (void *)System_Int32__ToString(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c,0);
LAB_00c35640:
      uVar12 = System_String__Concat(_Str__color__faaf32_,pvVar7,_Str___color_,0);
      if (pvVar6 == (void *)0x0) goto LAB_00c35de4;
      pvVar6 = (void *)System_String__Replace(pvVar6,_Str__x_,uVar12,0);
      if ((*plVar13 == 0) || (plVar8 = *(long **)(*plVar13 + 0x4c8), plVar8 == (long *)0x0))
      goto LAB_00c35de4;
      lVar10 = *plVar8;
    }
    else {
LAB_00c3550c:
      lVar10 = Car__get_Current(0);
      if (((lVar10 == 0) || (*plVar13 == 0)) || (lVar11 = *(long *)(*plVar13 + 0x480), lVar11 == 0))
      goto LAB_00c35de4;
      iVar3 = *(int *)(lVar10 + 0x44);
      UnityEngine_GameObject__SetActive(lVar11,0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x498), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4a0), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4c0), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x4b8), lVar10 == 0)) goto LAB_00c35de4;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if (iVar3 != 0) {
        if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c35de4;
        pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT_CAR_UNLOCK);
        lVar11 = **(long **)((long)_Translate_TypeInfo + 0xb8);
        lVar10 = Car__get_Current(0);
        if (lVar10 == 0) goto LAB_00c35de4;
        uStack_64 = *(undefined4 *)(lVar10 + 0x44);
        uVar12 = System_Int32__ToString(&uStack_64,0);
        pvVar7 = (void *)System_String__Concat(_Str_EVENT_,uVar12,0);
        if (lVar11 == 0) goto LAB_00c35de4;
        pvVar7 = Translate__JJJNIPAKLJF(pvVar7,pvVar7);
        goto LAB_00c35640;
      }
      if (*plVar13 == 0) goto LAB_00c35de4;
      plVar8 = *(long **)(*plVar13 + 0x4c8);
      if (*(int *)((long)_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)((long)_Translate_TypeInfo + 0xb8) == 0) ||
         (pvVar6 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LOCK_CAR_IN_THIS_MODE),
         plVar8 == (long *)0x0)) goto LAB_00c35de4;
      lVar10 = *plVar8;
    }
    (**(code **)(lVar10 + 0x5a8))(plVar8,pvVar6,*(undefined8 *)(lVar10 + 0x5b0));
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
      iVar2 = EventContest__get_car_id(*(long *)(lVar11 + 0x50),0);
      if (-1 < iVar2) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) goto LAB_00c35de4;
        iVar2 = EventContest__get_car_id(lVar11,0);
        goto LAB_00c35438;
      }
    }
    iVar2 = -1;
    iVar3 = -1;
    if (lVar10 == 0) goto LAB_00c354c0;
LAB_00c35448:
    iVar2 = iVar3;
    if (iVar2 != -1) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x50), lVar11 == 0)) goto LAB_00c35de4;
      iVar3 = EventContest__get_car_id(lVar11,0);
      if (iVar3 != *(int *)(lVar10 + 0x10)) goto LAB_00c354c0;
    }
    if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x478), lVar10 == 0)) goto LAB_00c35de4;
    UnityEngine_GameObject__SetActive(lVar10,0,0);
    if (*plVar13 == 0) goto LAB_00c35de4;
    GUIGarage__PHKCLDLDABM(*plVar13,1,0);
  }
LAB_00c35704:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = *(long *)(_Main_TypeInfo + 0xb8);
  if (*(long *)(lVar10 + 0x40) != 0) {
    if (iVar2 == -1) {
      lVar10 = Car__get_Current(0);
      if (lVar10 == 0) goto LAB_00c35de4;
      if (*(int *)(lVar10 + 0x44) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
        lVar10 = plVar8[8];
        if (lVar10 == 0) goto LAB_00c35de4;
        if (0 < *(int *)(lVar10 + 0x10)) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
            lVar10 = plVar8[8];
            if (lVar10 == 0) goto LAB_00c35de4;
          }
          if ((*plVar8 == 0) || (lVar11 = *(long *)(*plVar8 + 0x28), lVar11 == 0))
          goto LAB_00c35de4;
          if (*(int *)(lVar10 + 0x10) < *(int *)(lVar11 + 0x18)) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
              lVar10 = plVar8[8];
              if (lVar10 == 0) goto LAB_00c35de4;
            }
            if (*(int *)((long)plVar8 + 0x2c) != *(int *)(lVar10 + 0x10)) {
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
              lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar10 == 0) ||
                 (lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar11 == 0))
              goto LAB_00c35de4;
              lVar10 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,*(undefined4 *)(lVar10 + 0x10),1,0);
              if (lVar10 == 0) {
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
                if (lVar10 == 0) goto LAB_00c35de4;
                iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar10,0);
                plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                if (((*plVar8 == 0) || (lVar10 = plVar8[8], lVar10 == 0)) ||
                   (lVar11 = *(long *)(*plVar8 + 0x28), lVar11 == 0)) goto LAB_00c35de4;
                if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar10 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(lVar10 + 0x10) * 8 + 0x20);
                if (lVar11 == 0) goto LAB_00c35de4;
                if (*(int *)(lVar11 + 0x20) <= iVar2) {
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                    plVar8 = *(long **)(_Main_TypeInfo + 0xb8);
                    lVar10 = plVar8[8];
                    if (lVar10 == 0) goto LAB_00c35de4;
                  }
                  lVar11 = *plVar13;
                  if (lVar11 == 0) goto LAB_00c35de4;
                  if (*(int *)(lVar10 + 0x10) < *(int *)((long)plVar8 + 0x2c)) {
                    lVar10 = *(long *)(lVar11 + 0x438);
                    *(undefined1 *)(lVar11 + 0x470) = 1;
                  }
                  else {
                    lVar10 = *(long *)(lVar11 + 0x428);
                    *(undefined1 *)(lVar11 + 0x471) = 1;
                  }
                  if (lVar10 == 0) goto LAB_00c35de4;
                  UnityEngine_GameObject__SetActive(lVar10,1,0);
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
        lVar10 = *(long *)(_Main_TypeInfo + 0xb8);
      }
      if (iVar2 != *(int *)(lVar10 + 0x2c)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = *plVar13;
        if (lVar10 == 0) goto LAB_00c35de4;
        if (iVar2 < *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c)) {
          *(undefined1 *)(lVar10 + 0x470) = 1;
        }
        else {
          *(undefined1 *)(lVar10 + 0x471) = 1;
        }
      }
    }
  }
  if (*plVar13 != 0) {
    plVar8 = *(long **)(*plVar13 + 1000);
    lVar10 = Car__get_Current(0);
    if ((lVar10 != 0) && (plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x5a8))
                (plVar8,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(*plVar8 + 0x5b0));
      if (*plVar13 != 0) {
        GUIGarage__FJCMAMFOKNL(*plVar13,0);
        Menu__CKPDEIAFHEC();
        Menu__CDFHCNMGCFI(lVar5);
        Menu__INMDNKGHGEO(lVar5);
        Menu__FMEHJALLGBK(lVar5);
        uVar12 = *(undefined8 *)(lVar5 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(void **)(lVar5 + 0x70) == (void *)0x0) goto LAB_00c35de4;
          ConsoleTipsBottom__ABIEFKKDOGK(*(void **)(lVar5 + 0x70));
        }
        return;
      }
    }
  }
LAB_00c35de4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonShowOffers(int type) { }   @0xb0cfe4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonShowOffers(void *__this,int type)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int iStack_48;
  int iStack_44;
  long lStack_38;
  
  iStack_44 = type;
  if ((bRam0000000001916f7e & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_DonateItem___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SPECIAL_LIMITED_TIME);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_SPECIAL_LVL_X_ONLY);
    func_0x00a67900(&Str__x_);
    bRam0000000001916f7e = 1;
  }
  iStack_48 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (pvVar4 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48), pvVar4 == (void *)0x0))
      goto LAB_00c0d3a0;
      Purchaser__KHDFDGMBOIJ(pvVar4);
    }
    uVar8 = System_Int32__ToString(&iStack_44,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    uVar5 = System_Int32__ToString(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10,0);
    pvVar4 = (void *)System_String__Concat(uVar8,_Str____,uVar5,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(pvVar4,false);
    iVar2 = iStack_44;
    if (iStack_44 == -1) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      iVar1 = *(int *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10);
      iVar2 = iStack_44;
      if (0 < iVar1) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = *(int *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10);
        }
        iVar2 = iStack_44;
        if ((iVar1 < 0xb) && (iVar2 = iVar1, *(int *)(_Menu_TypeInfo + 0xe0) == 0)) {
          func_0x00a67a30();
          iVar2 = *(int *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10);
        }
      }
    }
    iStack_44 = iVar2;
    switch(iStack_44) {
    case 1:
      puVar6 = (undefined8 *)((long)__this + 0x110);
      break;
    case 2:
      puVar6 = (undefined8 *)((long)__this + 0x118);
      break;
    default:
      puVar6 = (undefined8 *)((long)__this + 0x120);
      break;
    case 4:
      puVar6 = (undefined8 *)((long)__this + 0x128);
      break;
    case 5:
      puVar6 = (undefined8 *)((long)__this + 0x130);
    }
    pvVar4 = (void *)*puVar6;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (pvVar4 != (void *)0x0) {
      GUIWindow__HEGIHOAJOKK(pvVar4,false);
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (pvVar4,&lStack_38,_Method_UnityEngine_Component_GetComponent_DonateItem___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
      iVar2 = iStack_44;
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (lStack_38 != 0) {
        plVar7 = *(long **)(lStack_38 + 0x68);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        pvVar4 = (void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8);
        if (pvVar4 != (void *)0x0) {
          if (iVar2 < 6) {
            pvVar4 = Translate__JJJNIPAKLJF(pvVar4,_Str_SPECIAL_LVL_X_ONLY);
            iStack_48 = iStack_44 + 1;
            uVar8 = System_Int32__ToString(&iStack_48,0);
            if (pvVar4 == (void *)0x0) goto LAB_00c0d3a0;
            pvVar4 = (void *)System_String__Replace(pvVar4,_Str__x_,uVar8,0);
          }
          else {
            pvVar4 = Translate__JJJNIPAKLJF(pvVar4,_Str_SPECIAL_LIMITED_TIME);
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x5a8))(plVar7,pvVar4,*(undefined8 *)(*plVar7 + 0x5b0));
            return;
          }
        }
      }
    }
  }
LAB_00c0d3a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void EGEFDJDCKDJ() { }   @0xb0dc90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__EGEFDJDCKDJ(void *__this)

{
  int iVar1;
  void *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_38;
  int iStack_34;
  
  __this_00 = __this;
  if ((bRam0000000001916f82 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___color__);
    __this_00 = (void *)func_0x00a67900(&Str__color__78e938_);
    bRam0000000001916f82 = 1;
  }
  uStack_38 = 0;
  iVar1 = GUIGarage__BGHFPDCINFC(__this_00);
  plVar6 = *(long **)((long)__this + 0x218);
  iStack_34 = iVar1;
  uVar2 = System_Int32__ToString(&iStack_34,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar5 != 0)) {
    uStack_38 = (undefined4)*(undefined8 *)(lVar5 + 0x18);
    uVar3 = System_Int32__ToString(&uStack_38,0);
    if (iVar1 < 1) {
      uVar2 = System_String__Concat(uVar2,_Str__,uVar3,0);
    }
    else {
      uVar2 = System_String__Concat(_Str__color__78e938_,uVar2,_Str___color__,uVar3,0);
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x5b0));
      iVar1 = iStack_34;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
          (lVar5 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar5 != 0)) &&
         (*(long *)((long)__this + 0x220) != 0)) {
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                  (((float)iVar1 / (float)*(int *)(lVar5 + 0x18)) * 302.0,
                   *(long *)((long)__this + 0x220),0,0);
        GUIGarage__MAKGMMFFGPG(__this);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar5 == 0))
            goto LAB_00c0dedc;
            BridgePHP__SyncAchievements(lVar5,0);
          }
          return;
        }
      }
    }
  }
LAB_00c0dedc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRepairCar() { }   @0xb0dee8

/* WARNING: Removing unreachable block (ram,0x00c0a8d0) */
/* WARNING: Removing unreachable block (ram,0x00c0a8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonRepairCar(void *__this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar8;
  int iStack_24;
  
  if ((bRam0000000001916f85 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916f85 = 1;
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
  if (lVar5 != 0) {
    iVar1 = DAFNMLEKHAD__HPDEBBJNCIK(lVar5,0);
    iVar2 = *(int *)((long)__this + 0x410);
    if (iVar1 < iVar2) {
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
        iStack_24 = DAFNMLEKHAD__HPDEBBJNCIK(lVar5,0);
        iStack_24 = iVar2 - iStack_24;
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
            if (*(void **)((long)__this + 0xa0) != (void *)0x0) {
              GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0xa0),true);
              plVar8 = *(long **)((long)__this + 0x608);
              uVar3 = System_Int32__ToString(&iStack_24,0);
              uVar3 = System_String__Concat(uVar3,_Str__,0);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar3,*(undefined8 *)(*plVar8 + 0x5b0));
                plVar8 = *(long **)((long)__this + 0x5f0);
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
                   (pvVar4 = Translate__JJJNIPAKLJF
                                       ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                        _Str_NO_MONEY_1), plVar8 != (long *)0x0)) {
                  (**(code **)(*plVar8 + 0x5a8))(plVar8,pvVar4,*(undefined8 *)(*plVar8 + 0x5b0));
                  if (*(long *)((long)__this + 0x600) != 0) {
                    UnityEngine_UI_Image__set_sprite
                              (*(long *)((long)__this + 0x600),*(undefined8 *)((long)__this + 0x388)
                               ,0);
                    *(undefined4 *)((long)__this + 0x6c8) = 1;
                    plVar8 = *(long **)((long)__this + 0x5f8);
                    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
                       (pvVar4 = Translate__JJJNIPAKLJF
                                           ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                            _Str_NO_MONEY_2), plVar8 != (long *)0x0)) {
                      (**(code **)(*plVar8 + 0x5a8))(plVar8,pvVar4,*(undefined8 *)(*plVar8 + 0x5b0))
                      ;
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
    else {
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
        if ((lVar5 != 0) && (lVar5 = DAFNMLEKHAD__DKJLCJPBPPN(lVar5,0xffffffff,1,0), lVar5 != 0)) {
          MKCBGHDANLA__DDPLLMLFICC(lVar5,0xffffffff,0);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          pvVar4 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (pvVar4 != (void *)0x0) {
            iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(pvVar4,0);
            DAFNMLEKHAD__DIMKKHJDHFJ(pvVar4,iVar2 - *(int *)((long)__this + 0x410));
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            pvVar4 = (void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8);
            if (pvVar4 != (void *)0x0) {
              *(undefined1 *)((long)pvVar4 + 0x78) = 1;
              Menu__OLOGKIHIIEL(pvVar4);
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar3 = 0;
              lVar5 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60);
              if ((bRam0000000001917246 & 1) == 0) {
                func_0x00a67900(&Main_TypeInfo,0);
                func_0x00a67900(&UnityEngine_Object_TypeInfo);
                bRam0000000001917246 = 1;
                uVar3 = extraout_x1;
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                uVar3 = extraout_x1_00;
              }
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo,uVar3);
                cRam0000000001916e67 = '\x01';
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar6 == 0) {
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar7 = DAFNMLEKHAD__BMMOMBGDEKF(lVar6,0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar5 != 0) {
                    if (pcRam000000000191b620 == (code *)0x0) {
                      pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
                    }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam000000000191b620)(lVar5,0);
                    return;
                  }
                  goto LAB_00c5d08c;
                }
              }
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


// ==== public bool AEBFNHHILNI() { }   @0xb0e7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage__AEBFNHHILNI(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  int iVar7;
  void *__this_00;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uStack_34;
  
  if ((bRam0000000001916f89 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_STORY_);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_TUTORIAL_5_TAP);
    bRam0000000001916f89 = 1;
  }
  uStack_34 = 0;
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
    lVar1 = DAFNMLEKHAD__DCOOPMCEMNE(lVar1,0);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 0)) {
      return false;
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
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x108) != *(int *)(lVar1 + 0x10)) {
        return false;
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
      if (lVar6 != 0) {
        iVar7 = *(int *)(lVar6 + 0x108);
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(int *)(*(long *)(_Level_TypeInfo + 0xb8) + 4) < iVar7) {
          return false;
        }
        uVar9 = *(undefined4 *)(lVar1 + 0x10);
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = Level__FHMGLDDPEDJ(uVar9,0);
        iVar7 = **(int **)(_Level_TypeInfo + 0xb8);
        if (iVar7 != -1) {
          if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Level_TypeInfo);
            iVar7 = **(int **)(_Level_TypeInfo + 0xb8);
          }
          if (iVar7 < 0) {
            return false;
          }
          if (lVar6 == 0) goto LAB_00c0ec64;
          uVar2 = Level__get_gui(lVar6,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar3 & 1) == 0) {
            return false;
          }
          lVar4 = Level__get_gui(lVar6,0);
          if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_00c0ec64;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          if ((uVar3 & 1) == 0) {
            return false;
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = Main__KCHOEBEIOCE(0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_00c0ec64;
          if (*(char *)(*(long *)(lVar4 + 0x58) + 0x30) != '\0') {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              lVar4 = **(long **)(_Menu_TypeInfo + 0xb8);
              if (lVar4 == 0) goto LAB_00c0ec64;
            }
            if (*(long *)(lVar4 + 0x58) == 0) goto LAB_00c0ec64;
            GamePadController__FNHCGKNKDNJ(*(long *)(lVar4 + 0x58),lVar6,0);
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar6 == 0))
            goto LAB_00c0ec64;
            GamePadController__KBLMMLBPPKO(lVar6,0);
          }
        }
        uVar9 = UnityEngine_Time__get_time(0);
        *(undefined4 *)((long)__this + 0x2e8) = uVar9;
        plVar8 = *(long **)((long)__this + 0x2d8);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uStack_34 = *(undefined4 *)(lVar1 + 0x10);
        __this_00 = (void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8);
        uVar2 = System_Int32__ToString(&uStack_34,0);
        pvVar5 = (void *)System_String__Concat(_Str_STORY_,uVar2,0);
        if ((__this_00 != (void *)0x0) &&
           (pvVar5 = Translate__JJJNIPAKLJF(__this_00,pvVar5), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x5a8))(plVar8,pvVar5,*(undefined8 *)(*plVar8 + 0x5b0));
          if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) {
            plVar8 = *(long **)((long)__this + 0x2e0);
            pvVar5 = Translate__JJJNIPAKLJF
                               ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                _Str_TUTORIAL_5_TAP);
            if ((pvVar5 != (void *)0x0) &&
               (uVar2 = System_String__Replace(pvVar5,_Str__,_Str_,0), plVar8 != (long *)0x0)) {
              (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x5b0));
              if (*(void **)((long)__this + 0x150) != (void *)0x0) {
                GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0x150),true);
                return true;
              }
            }
          }
        }
      }
    }
  }
LAB_00c0ec64:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DOODAKOKCBN(int IGMIJBAAHLA, int ABAIGEJPJIE) { }   @0xb104f0

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DOODAKOKCBN(void *__this,int IGMIJBAAHLA,int ABAIGEJPJIE)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  long lStack_68;
  double in_stack_ffffffffffffffb8;
  
  if ((bRam0000000001916f8e & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916f8e = 1;
  }
  if ((*(long *)((long)__this + 0xd0) == 0) ||
     (lVar6 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xd0),0), lVar6 == 0))
  goto LAB_00c106fc;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
  if ((uVar7 & 1) == 0) {
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
  if (lVar6 == 0) goto LAB_00c106fc;
  lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
  if (lVar6 == 0) {
    return;
  }
  if (cRam00000000019168a8 == '\0') {
    func_0x00a67900(&System_Math_TypeInfo);
    cRam00000000019168a8 = '\x01';
  }
  fVar20 = (float)(ABAIGEJPJIE - IGMIJBAAHLA) / 90.0;
  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  dVar19 = (double)fVar20;
  dVar18 = (double)func_0x016dece0(dVar19,&stack0xffffffffffffffb8);
  if (0.0 <= fVar20) {
    if (dVar18 == 0.5) {
      dVar18 = 1.0;
      goto LAB_00c1064c;
    }
    in_stack_ffffffffffffffb8 = (double)(long)(dVar19 + 0.5);
  }
  else if (dVar18 == -0.5) {
    dVar18 = -1.0;
LAB_00c1064c:
    if (((long)in_stack_ffffffffffffffb8 & 1U) != 0) {
      in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 + dVar18;
    }
  }
  else {
    in_stack_ffffffffffffffb8 = (double)(long)(dVar19 + -0.5);
  }
  iVar12 = -0x80000000;
  if (in_stack_ffffffffffffffb8 != INFINITY) {
    iVar12 = (int)in_stack_ffffffffffffffb8;
  }
  plVar16 = *(long **)((long)__this + 0x418);
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(int *)((long)__this + 0x410) = iVar12;
  uVar8 = System_Int32__ToString((long)__this + 0x410,0);
  if (plVar16 == (long *)0x0) {
LAB_00c106fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  (**(code **)(*plVar16 + 0x5a8))(plVar16,uVar8,*(undefined8 *)(*plVar16 + 0x5b0));
  if (IGMIJBAAHLA < ABAIGEJPJIE) {
    return;
  }
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
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
  lVar14 = *plVar16;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar14,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0x30), lVar14 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0x140), lVar14 == 0)) ||
     (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0x138), lVar14 == 0)) ||
     (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0x150), lVar14 == 0)) ||
     (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar20 = (float)UnityEngine_Time__get_time(0);
  if (fVar20 - **(float **)(_GUIGarage_TypeInfo + 0xb8) <= 1.0) {
    return;
  }
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar8 = *(undefined8 *)(*plVar16 + 0x70);
  uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0xa8), lVar14 == 0)) ||
       (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar14 = *(long *)(*plVar16 + 0x178), lVar14 == 0)) ||
       (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
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
        lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar14 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (lVar14 == 0) goto LAB_00c0b6e0;
          }
          uVar8 = System_Int32__ToString(lVar14 + 0x10,0);
          pvVar11 = (void *)System_String__Concat(_Str_Hide_lvl__,uVar8,0);
          Main__GEMDEAMAGPG(pvVar11,false);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x58), lVar14 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar14,0);
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
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) != 0) goto Menu__CEFAHBMMKCD;
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
    lVar14 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar14,0,0);
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
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar7 & 1) == 0) {
        pvVar11 = *(void **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      }
      else {
        pvVar11 = *(void **)(lVar6 + 0x28);
      }
      if (pvVar11 != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(pvVar11,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar8 = *(undefined8 *)(*plVar16 + 0xa8);
  uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar8 = *(undefined8 *)(*plVar16 + 0xa8);
    uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar8 = *(undefined8 *)(*plVar16 + 0xd0);
    uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar16 == 0) ||
         ((lVar6 = *(long *)(*plVar16 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
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
        iVar12 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar16 == 0) goto LAB_00c37710;
      uVar8 = *(undefined8 *)(*plVar16 + 0xa8);
      uVar15 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
      lVar6 = *plVar16;
      if (lVar6 == 0) goto LAB_00c37710;
      if ((uVar7 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar14 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x78) = 1;
    if (lVar14 == 0) goto LAB_00c37710;
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
    plVar16 = *(long **)(lVar14 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar8 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar8, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar11 = Translate__JJJNIPAKLJF
                        ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_SECOND);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(void **)(lVar6 + 0x30) = pvVar11, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
    pvVar11 = Translate__JJJNIPAKLJF((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_HP);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(void **)(lVar6 + 0x40) = pvVar11;
    uVar8 = System_String__Concat(lVar6,0);
    if (plVar16 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar16 + 0x5a8))(plVar16,uVar8,*(undefined8 *)(*plVar16 + 0x5b0));
    lVar6 = *(long *)(lVar14 + 200);
    if (lVar6 == 0) goto LAB_00c10f6c;
    iVar12 = 1;
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
    iVar12 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar12,0);
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
  lVar14 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar14 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x20) = _Str_Try_to_Show__;
  lVar10 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar10 == 0) goto LAB_00c485b8;
  uVar8 = UnityEngine_Object__get_name(lVar10,0);
  if ((*(uint *)(lVar14 + 0x18) < 2) ||
     (*(undefined8 *)(lVar14 + 0x28) = uVar8, *(uint *)(lVar14 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x30) = _Str___current__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar14 + 0x18) < 4) ||
     (*(undefined8 *)(lVar14 + 0x38) = uVar8, *(uint *)(lVar14 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x40) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar10,0);
  }
  uVar5 = *(uint *)(lVar14 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar14 + 0x48) = uVar8, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x50) = _Str____Child__;
  plVar16 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar16 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar14 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x58) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar14,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar8,lVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar8,lVar6,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  lVar14 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar14 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar14 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar14,0);
    lVar14 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar8 = **(undefined8 **)(lVar14 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (((uVar7 & 1) != 0) && (iVar12 == 0)) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  lVar14 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar14,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (lVar14 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar17 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar17;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
        fVar20 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar20) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar14,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar14 == 0) goto LAB_00c485b8;
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar14,uVar8,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar14,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar20 = (float)iVar3 / (float)iVar4;
            if (fVar20 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar14 == 0)
               ) goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar14 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                 lVar14 == 0)) goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar14 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if ((fVar20 <= 1.61) || (1.8 <= fVar20)) {
                    if (fVar20 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar14 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar14 + 0x70);
                    uVar17 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar14 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar14 + 0x70);
                    uVar17 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar14 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar14 + 0x70);
                  uVar17 = 0x3f733333;
                  uVar15 = 0x425c0000;
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
                   (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar14 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar20) {
                  if (*(long *)(lVar14 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar14 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar14 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar14 + 0x60);
                  uVar17 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar14 + 0x60);
                  uVar17 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar14 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar14 == 0)) goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar14 + 0x60);
                uVar15 = 0xc0a00000;
                uVar17 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar17,lVar6,uVar8);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar14,0);
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
    uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar14,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar20 = (float)iVar3 / (float)iVar4;
            if (fVar20 <= 1.51) goto LAB_00c47308;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
            goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar14 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar14 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if (1.8 <= fVar20) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar14 + 0xb0);
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar14 + 0xb0);
                }
                goto LAB_00c47304;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar14 + 0xe0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if (1.8 <= fVar20) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar14 + 0xe8);
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar14 + 0xe8);
                }
                goto LAB_00c47304;
              }
              lVar14 = UnityEngine_Component__get_gameObject(lVar6,0);
              if (lVar14 == 0) goto LAB_00c485b8;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar14,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_DonateItem___
                        );
              lVar14 = lStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Inequality(lVar14,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar14 == 0) goto LAB_00c485b8;
                if (*(int *)(lVar14 + 0x2c) == 3) {
                  lVar14 = UnityEngine_Component__get_gameObject(lVar6,0);
                  if (lVar14 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar14,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                  if ((uVar7 & 1) != 0) goto LAB_00c47304;
                }
              }
            }
            else {
              if (fVar20 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar14 + 0x188);
              }
              else {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar14 + 0x188);
              }
LAB_00c47304:
              GUIWindow__EPGDFDEPGCB(lVar6,lStack_68);
            }
LAB_00c47308:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar14,0);
            goto LAB_00c47338;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar6);
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar14 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar14 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar14 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar14 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar14 + 0x6c) != '\0') {
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
              lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar14 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar14,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar14 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar8,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
                  goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar14 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar8,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar14 == 0))
                    goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar14 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar8 = UnityEngine_Object__Instantiate_object_
                                      (uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar14 + 0x90) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar14 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar14 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar14,1,0);
  lVar14 = 8;
  if (iVar12 == 0) {
    lVar14 = 0;
  }
  puVar13 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar13[2] = *puVar13;
  *(long *)((long)puVar13 + lVar14) = lVar6;
  if (*(char *)(lVar6 + 0x23) != '\0') {
    uVar8 = GUIWindow__FAAELIPKLCB(lVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar8,0);
  }
  lVar14 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar14 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar14 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar14 + 0x20) = _Str_Window__Show__;
  uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar14 + 0x18) < 2) ||
     (*(undefined8 *)(lVar14 + 0x28) = uVar8, *(uint *)(lVar14 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x30) = _Str___last__;
  uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar10,0);
  }
  uVar5 = *(uint *)(lVar14 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar14 + 0x38) = uVar8, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x40) = _Str____Child__;
  plVar16 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar8 = 0;
  if (plVar16 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar14 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar14 + 0x48) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar14,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
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
    uVar8 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
      if ((uVar7 & 1) == 0) {
        uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
        uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
        if ((uVar7 & 1) == 0) {
          uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
          uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
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
        lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar14 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar14,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
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
    uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar11);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
        (lVar14 = *(long *)(lVar14 + 0x78), lVar14 == 0)) ||
       (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
         ((lVar14 = *(long *)(lVar14 + 0x70), lVar14 == 0 ||
          (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x1d0), lVar14 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar14,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x1b8), lVar14 == 0)) goto LAB_00c485b8;
      uVar17 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
         (lVar14 = *(long *)(lVar14 + 0x1d0), lVar14 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar14,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar14,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0))
      goto LAB_00c485b8;
      lVar14 = *(long *)(lVar14 + 0x3e0);
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
      if ((lVar10 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar10,0), lVar14 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar14,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0 ||
          (lVar14 = *(long *)(lVar14 + 0x1b8), lVar14 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar14,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
       ((lVar14 = *(long *)(lVar14 + 0x60), lVar14 == 0 ||
        (lVar14 = UnityEngine_Component__get_gameObject(lVar14,0), lVar14 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar14,0);
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
        (lVar14 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x68), lVar14 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar14,*(undefined1 *)(lVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar6 + 0x78);
    uVar15 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar8,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
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
      uVar7 = UnityEngine_Object__op_Inequality(uVar8,uVar15,0);
      if ((uVar7 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar7 & 1) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
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
          uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
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
        uVar17 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar17;
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
    }
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
    if ((uVar7 & 1) == 0) {
      uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
      uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
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
      pvVar11 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar11);
      if (bVar2) {
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
          uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
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
    uVar8 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
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
    uVar7 = UnityEngine_Object__op_Equality(uVar8,uVar15,0);
    if ((uVar7 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar8,0,0);
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
           (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 == (void *)0x0)
           ) goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar11);
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


// ==== public void DAOLEOLDHGN(string FJBLHMNOPEP) { }   @0xb0b2ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DAOLEOLDHGN(void *__this,void *FJBLHMNOPEP)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  long lStack_28;
  
  if ((bRam0000000001916f91 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f91 = 1;
  }
  uVar6 = *(undefined8 *)((long)__this + 0x1d8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((*(long *)((long)__this + 0x1d8) == 0) ||
     (plVar3 = *(long **)(*(long *)((long)__this + 0x1d8) + 0x88), plVar3 == (long *)0x0)) {
LAB_00c0b3a0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  (**(code **)(*plVar3 + 0x5a8))(plVar3,FJBLHMNOPEP,*(undefined8 *)(*plVar3 + 0x5b0));
  lVar4 = *(long *)((long)__this + 0x1d8);
  if (lVar4 == 0) goto LAB_00c0b3a0;
  if ((bRam0000000001916e09 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e09 = 1;
  }
  if (*(char *)(lVar4 + 0x20) == '\0') {
    if (*(int *)(lVar4 + 0x28) != 4) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&lStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
      *(long *)(lVar4 + 0x70) = lStack_28;
      if (lStack_28 == 0) goto LAB_00bd9510;
      uVar7 = UnityEngine_Transform__get_localScale(lStack_28,0);
      *(undefined4 *)(lVar4 + 0x90) = uVar7;
      if (*(long *)(lVar4 + 0x70) == 0) goto LAB_00bd9510;
      UnityEngine_Transform__get_localPosition(*(long *)(lVar4 + 0x70),0);
      *(undefined4 *)(lVar4 + 0x94) = in_s1;
    }
    plVar3 = *(long **)(lVar4 + 0x78);
    if (plVar3 == (long *)0x0) goto LAB_00bd9510;
    uVar7 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    *(undefined4 *)(lVar4 + 0x30) = uVar7;
    *(undefined4 *)(lVar4 + 0x34) = in_s1;
    *(undefined4 *)(lVar4 + 0x38) = in_s2;
    *(undefined4 *)(lVar4 + 0x3c) = in_s3;
    *(undefined4 *)(lVar4 + 0x50) = uVar7;
    *(undefined4 *)(lVar4 + 0x54) = in_s1;
    *(undefined4 *)(lVar4 + 0x58) = in_s2;
    *(undefined4 *)(lVar4 + 0x5c) = in_s3;
    uVar6 = *(undefined8 *)(lVar4 + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(lVar4 + 0x88);
      if (plVar3 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar3 + 0x2a8))
                (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      auVar9 = NEON_fmov(0x3f800000,4);
      *(long *)(lVar4 + 0x68) = auVar9._8_8_;
      *(long *)(lVar4 + 0x60) = auVar9._0_8_;
    }
    *(undefined1 *)(lVar4 + 0x20) = 1;
  }
  else {
    plVar3 = *(long **)(lVar4 + 0x78);
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar4 + 0x54);
    *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x58);
    *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar4 + 0x5c);
    if (plVar3 == (long *)0x0) goto LAB_00bd9510;
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    uVar6 = *(undefined8 *)(lVar4 + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(lVar4 + 0x88);
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar4 + 0x60);
      *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(lVar4 + 100);
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar4 + 0x68);
      *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar4 + 0x6c);
      if (plVar3 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    }
  }
  *(undefined4 *)(lVar4 + 0x2c) = 0;
  lVar1 = UnityEngine_Component__get_gameObject(lVar4,0);
  if (lVar1 == 0) {
LAB_00bd9510:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar1,1,0);
  uVar6 = *(undefined8 *)(lVar4 + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (((uVar2 & 1) != 0) && (*(int *)(lVar4 + 0x28) != 6)) {
      plVar3 = *(long **)(lVar4 + 0x88);
      if (plVar3 != (long *)0x0) {
        lVar5 = *(long *)(lVar4 + 0x70);
        lVar1 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0));
        if (lVar1 != 0) {
          fVar8 = (float)*(int *)(lVar1 + 0x10) / 20.0;
          fVar10 = fVar8;
          if (1.0 < fVar8) {
            fVar10 = 1.0;
          }
          fVar10 = fVar10 * 580.0 + 420.0;
          if (fVar8 < 0.0) {
            fVar10 = 420.0;
          }
          if ((*(long *)(lVar4 + 0x70) != 0) &&
             (UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar4 + 0x70),0), lVar5 != 0)) {
            UnityEngine_RectTransform__set_sizeDelta(fVar10,lVar5,0);
            return;
          }
        }
      }
      goto LAB_00bd9510;
    }
  }
  return;
}


// ==== private void AFHIOFKDNLD(IDNANBIKFMM KFMJHIOHBEE, int EGDACNEEGEK) { }   @0xb0a778

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__AFHIOFKDNLD(void *__this,int KFMJHIOHBEE,int EGDACNEEGEK)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  int iStack_24;
  
  iStack_24 = EGDACNEEGEK;
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
      if (*(void **)((long)__this + 0xa0) != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0xa0),true);
        plVar6 = *(long **)((long)__this + 0x608);
        uVar1 = System_Int32__ToString(&iStack_24,0);
        uVar1 = System_String__Concat(uVar1,_Str__,0);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x5a8))(plVar6,uVar1,*(undefined8 *)(*plVar6 + 0x5b0));
          plVar6 = *(long **)((long)__this + 0x5f0);
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
             (pvVar2 = Translate__JJJNIPAKLJF
                                 ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                  _Str_NO_MONEY_1), plVar6 != (long *)0x0)) {
            (**(code **)(*plVar6 + 0x5a8))(plVar6,pvVar2,*(undefined8 *)(*plVar6 + 0x5b0));
            lVar3 = *(long *)((long)__this + 0x600);
            if (KFMJHIOHBEE == 0) {
              if (lVar3 == 0) goto LAB_00c0a950;
              uVar5 = 0;
              puVar4 = (undefined8 *)((long)__this + 0x378);
            }
            else {
              if (lVar3 == 0) goto LAB_00c0a950;
              puVar4 = (undefined8 *)((long)__this + 0x388);
              uVar5 = 1;
            }
            UnityEngine_UI_Image__set_sprite(lVar3,*puVar4,0);
            *(undefined4 *)((long)__this + 0x6c8) = uVar5;
            plVar6 = *(long **)((long)__this + 0x5f8);
            if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
               (pvVar2 = Translate__JJJNIPAKLJF
                                   ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                    _Str_NO_MONEY_2), plVar6 != (long *)0x0)) {
              (**(code **)(*plVar6 + 0x5a8))(plVar6,pvVar2,*(undefined8 *)(*plVar6 + 0x5b0));
              return;
            }
          }
        }
      }
    }
  }
LAB_00c0a950:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LKBAGBIEFJE(Resolution PAHFHOJCFEJ) { }   @0xb11310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__LKBAGBIEFJE(void *__this,void *PAHFHOJCFEJ)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_34;
  void *apvStack_30 [2];
  
  apvStack_30[0] = PAHFHOJCFEJ;
  if ((bRam0000000001916f98 & 1) == 0) {
    func_0x00a67900(&Str_x);
    bRam0000000001916f98 = 1;
  }
  uStack_34 = 0;
  plVar3 = *(long **)((long)__this + 0x800);
  uStack_34 = UnityEngine_Resolution__get_width(apvStack_30,0);
  uVar1 = System_Int32__ToString(&uStack_34,0);
  uStack_34 = UnityEngine_Resolution__get_height(apvStack_30,0);
  uVar2 = System_Int32__ToString(&uStack_34,0);
  uVar1 = System_String__Concat(uVar1,_Str_x,uVar2,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FHCEPLEAMGA() { }   @0xb102b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__FHCEPLEAMGA(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x25;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 in_d1;
  undefined8 in_d2;
  
  if ((bRam0000000001916f9d & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_UpdateDonateButtonsInTopPanel);
    bRam0000000001916f9d = 1;
  }
  lVar6 = *(long *)((long)__this + 0x6e0);
  if (lVar6 != 0) {
    lVar11 = 4;
    do {
      uVar8 = lVar11 - 4;
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar8) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar3 = _Str_UpdateDonateButtonsInTopPanel;
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
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Debug__Log(plVar3,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) == 0) {
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
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
        lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        uVar7 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        if (lVar6 == 0) goto LAB_00c590c8;
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
        plVar3 = *(long **)(lVar6 + 0x1e8);
        if ((plVar3 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)),
           lVar11 == 0)) goto LAB_00c16768;
        if (10000 < *(int *)(lVar11 + 0x10)) {
          if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
          uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
          if ((*(long *)(lVar6 + 0x1e8) == 0) ||
             (lVar11 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar11 == 0
             )) goto LAB_00c16768;
          uVar5 = UnityEngine_Transform__get_parent(lVar11,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          lVar11 = UnityEngine_Object__Instantiate_object_
                             (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar11 == 0) goto LAB_00c16768;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar11,&stack0xffffffffffffffc8,
                     _Method_UnityEngine_GameObject_GetComponent_Text___);
          *(long **)(lVar6 + 0x1e8) = unaff_x25;
          if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
          (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
        }
        plVar3 = *(long **)(lVar6 + 0x1e8);
        lVar6 = func_0x00a679a0(_string___TypeInfo,8);
        if ((plVar3 != (long *)0x0) &&
           (uVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)),
           lVar6 != 0)) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if ((uVar1 != 0) &&
             (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
               (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
              (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
            *(undefined8 *)(lVar6 + 0x38) = _Str___;
            UnityEngine_Time__get_time(0);
            uVar4 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
            uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
               (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
              *(undefined8 *)(lVar6 + 0x50) = uVar7;
              uVar7 = System_Environment__get_NewLine(0);
              if (7 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x58) = uVar7;
                uVar7 = System_String__Concat(lVar6,0);
                (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x5b0));
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
      iVar10 = (int)lVar11;
      plVar3 = (long *)((long)__this + 0x3b0);
      if (((iVar10 == 4) || (plVar3 = (long *)((long)__this + 0x3d0), iVar10 == 6)) ||
         (plVar3 = (long *)((long)__this + 0x3c0), iVar10 == 5)) {
        lVar9 = *plVar3;
      }
      else {
        lVar9 = 0;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c104ec;
      uVar7 = *(undefined8 *)(lVar6 + lVar11 * 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar2 & 1) != 0) {
        lVar6 = *(long *)((long)__this + 0x6e0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
LAB_00c104ec:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar6 + lVar11 * 8);
        if (((lVar6 == 0) || (UnityEngine_Transform__get_position(lVar6,0), lVar9 == 0)) ||
           (*(long *)(lVar9 + 0x30) == 0)) break;
        fVar12 = (float)UnityEngine_Transform__get_position(*(long *)(lVar9 + 0x30),0);
        lVar6 = *(long *)((long)__this + 0x6e0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c104ec;
        lVar6 = *(long *)(lVar6 + lVar11 * 8);
        if (lVar6 == 0) break;
        UnityEngine_Transform__set_position(fVar12 + 4.0,in_d1,in_d2,lVar6,0);
        lVar6 = *(long *)((long)__this + 0x6e0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c104ec;
        if (*(long *)(lVar9 + 0x30) == 0) break;
        lVar6 = *(long *)(lVar6 + lVar11 * 8);
        fVar12 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar9 + 0x30),0);
        plVar3 = *(long **)(lVar9 + 0x28);
        if (((plVar3 == (long *)0x0) ||
            (lVar9 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)),
            lVar9 == 0)) || (lVar6 == 0)) break;
        in_d1 = 0x43020000;
        fVar13 = 130.0;
        if (2 < *(int *)(lVar9 + 0x10)) {
          fVar13 = 105.0;
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar12 + fVar13,lVar6,0,0);
      }
      lVar6 = *(long *)((long)__this + 0x6e0);
      lVar11 = lVar11 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator APCBBBDNHKG(ShopItem MJGEGAFFIPG) { }   @0xb0ae44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIGarage__APCBBBDNHKG(void *__this,void *MJGEGAFFIPG)

{
  void *__this_00;
  
  if ((bRam0000000001916fa2 & 1) == 0) {
    func_0x00a67900(&GUIGarage_NPNKOHCAMIG_TypeInfo);
    bRam0000000001916fa2 = 1;
  }
  __this_00 = (void *)func_0x00a67b44(_GUIGarage_NPNKOHCAMIG_TypeInfo);
  GUIGarage_NPNKOHCAMIG___ctor(__this_00,0);
  if (__this_00 != (void *)0x0) {
    *(void **)((long)__this_00 + 0x20) = MJGEGAFFIPG;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool ABAHNKCPCFA() { }   @0xb12d94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage__ABAHNKCPCFA(void *__this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((bRam0000000001916fa7 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_g);
    func_0x00a67900(&Str_BridgePHP_save_keys_and_values_is_NULL_o);
    func_0x00a67900(&Str_l);
    func_0x00a67900(&Str_s);
    func_0x00a67900(&Str_0);
    bRam0000000001916fa7 = 1;
  }
  iStack_60 = 0;
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x40) == '\0') {
    return false;
  }
  if ((*(long *)((long)__this + 0x140) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x140),0), lVar3 == 0))
  goto LAB_00c137c8;
  uVar4 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
  if ((uVar4 & 1) != 0) {
    return false;
  }
  if ((*(long *)((long)__this + 0x148) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x148),0), lVar3 == 0))
  goto LAB_00c137c8;
  uVar4 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
  if ((uVar4 & 1) != 0) {
    return false;
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
  if (lVar3 == 0) goto LAB_00c137c8;
  iVar1 = DAFNMLEKHAD__ADDNPHMAFBA(lVar3,0);
  iStack_58 = 0;
  plVar7 = *(long **)((long)__this + 0x820);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_00c137c8;
  iStack_5c = DAFNMLEKHAD__ADDNPHMAFBA(lVar3,0);
  uVar5 = System_Int32__ToString(&iStack_5c,0);
  if (plVar7 == (long *)0x0) goto LAB_00c137c8;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
  plVar7 = *(long **)((long)__this + 0x828);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_00c137c8;
  iStack_5c = DAFNMLEKHAD__LOCFCFJIAIH(lVar3,0);
  uVar5 = System_Int32__ToString(&iStack_5c,0);
  if (plVar7 == (long *)0x0) goto LAB_00c137c8;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
  plVar7 = *(long **)((long)__this + 0x830);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_00c137c8;
  iStack_5c = DAFNMLEKHAD__HPDEBBJNCIK(lVar3,0);
  uVar5 = System_Int32__ToString(&iStack_5c,0);
  if (plVar7 == (long *)0x0) goto LAB_00c137c8;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = System_String__IsNullOrEmpty
                    (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x30),0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x30);
    if (lVar3 == 0) goto LAB_00c137c8;
    if (5 < *(int *)(lVar3 + 0x10)) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x30);
      }
      BridgePHP__JsonParseKostyl(lVar3,0);
      lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
      if (lVar3 != 0) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_BridgePHP_TypeInfo);
          lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
        iVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count
                          (lVar3,
                           _Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
        if (0 < iVar2) {
          iVar2 = 0;
          while( true ) {
            iStack_60 = iVar2;
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Main_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            lVar3 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if (*(int *)(lVar3 + 0x18) < iVar2) break;
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
            uVar5 = System_Int32__ToString(&iStack_60,0);
            uVar5 = System_String__Concat(_Str_l,uVar5,0);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(uVar5,uVar5);
            }
            uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                              (lVar3,uVar5,
                               _Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__
                              );
            iVar2 = iStack_58;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
              uVar5 = System_Int32__ToString(&iStack_60,0);
              uVar5 = System_String__Concat(_Str_l,uVar5,0);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50(uVar5,uVar5);
              }
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                        (lVar3,uVar5,&iStack_54,
                         _Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              iStack_58 = iStack_54 + iVar2;
            }
            iVar2 = iStack_60 + 1;
          }
          plVar7 = *(long **)((long)__this + 0x840);
          uVar5 = System_Int32__ToString(&iStack_58,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50(uVar5,uVar5);
          }
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                            (lVar3,_Str_s,
                             _Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__
                            );
          plVar7 = *(long **)((long)__this + 0x848);
          if ((uVar4 & 1) == 0) {
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            (**(code **)(*plVar7 + 0x5a8))(plVar7,_Str_0,*(undefined8 *)(*plVar7 + 0x5b0));
          }
          else {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                      (lVar3,_Str_s,&iStack_54,
                       _Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            iStack_5c = iStack_54;
            uVar5 = System_Int32__ToString(&iStack_5c,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(uVar5,uVar5);
            }
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
          }
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                            (lVar3,_Str_g,
                             _Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__
                            );
          plVar7 = *(long **)((long)__this + 0x850);
          if ((uVar4 & 1) == 0) {
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            (**(code **)(*plVar7 + 0x5a8))(plVar7,_Str_0,*(undefined8 *)(*plVar7 + 0x5b0));
          }
          else {
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar3 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x48);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                      (lVar3,_Str_g,&iStack_54,
                       _Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
            iStack_5c = iStack_54;
            uVar5 = System_Int32__ToString(&iStack_5c,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(uVar5,uVar5);
            }
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x5b0));
          }
          plVar7 = *(long **)((long)__this + 0x858);
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          (**(code **)(*plVar7 + 0x5a8))
                    (plVar7,*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x38),
                     *(undefined8 *)(*plVar7 + 0x5b0));
          goto LAB_00c13488;
        }
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_BridgePHP_save_keys_and_values_is_NULL_o,0);
    }
  }
LAB_00c13488:
  if (iVar1 == iStack_58) {
    if (*(long *)((long)__this + 0x838) == 0) goto LAB_00c137c8;
    lVar3 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x838),0);
    if ((*(long *)((long)__this + 0x860) == 0) ||
       (lVar6 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x860),0), lVar6 == 0)
       ) goto LAB_00c137c8;
    uVar5 = *(undefined8 *)((long)__this + 0x868);
    UnityEngine_UI_Image__set_sprite(lVar6,uVar5,0);
    if (lVar3 == 0) goto LAB_00c137c8;
  }
  else {
    if (iVar1 < iStack_58) {
      if ((*(long *)((long)__this + 0x860) == 0) ||
         (lVar3 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x860),0),
         lVar3 == 0)) goto LAB_00c137c8;
      UnityEngine_UI_Image__set_sprite(lVar3,*(undefined8 *)((long)__this + 0x870),0);
      lVar3 = *(long *)((long)__this + 0x838);
    }
    else {
      if ((*(long *)((long)__this + 0x838) == 0) ||
         (lVar3 = UnityEngine_UI_Selectable__get_image(*(long *)((long)__this + 0x838),0),
         lVar3 == 0)) goto LAB_00c137c8;
      UnityEngine_UI_Image__set_sprite(lVar3,*(undefined8 *)((long)__this + 0x870),0);
      lVar3 = *(long *)((long)__this + 0x860);
    }
    if ((lVar3 == 0) || (lVar3 = UnityEngine_UI_Selectable__get_image(lVar3,0), lVar3 == 0))
    goto LAB_00c137c8;
    uVar5 = *(undefined8 *)((long)__this + 0x868);
  }
  UnityEngine_UI_Image__set_sprite(lVar3,uVar5,0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
    if (lVar3 == 0) goto LAB_00c137c8;
    uVar4 = UnityEngine_AudioSource__get_isPlaying(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = **(long **)(_Main_TypeInfo + 0xb8);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_SoundScript_TypeInfo);
      }
      if (lVar3 == 0) goto LAB_00c137c8;
      uVar5 = Main__PHHOKLGPEEG(0x3f800000,lVar3,
                                *(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98),1,0)
      ;
      *(undefined8 *)(lVar3 + 0x88) = uVar5;
      if (**(long **)(_Main_TypeInfo + 0xb8) == 0) goto LAB_00c137c8;
      UnityEngine_MonoBehaviour__StartCoroutine
                (__this,*(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x88),0);
    }
  }
  GUIGarage__DKIFODMOFNO(__this);
  if (*(void **)((long)__this + 0x140) != (void *)0x0) {
    GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0x140),false);
    return true;
  }
LAB_00c137c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonSettingsRestorePurchases() { }   @0xb13d14

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsRestorePurchases(void *__this)

{
  uint uVar1;
  void *CIDKMFLFJEJ;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *plStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000001916fac & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fac = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c13de0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x48) == 0)) goto LAB_00c13de0;
  if ((bRam0000000001916f46 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_RuntimePlatform_TypeInfo);
    func_0x00a67900(&Str_RestorePurchases_FAIL__Not_supported_on_);
    func_0x00a67900(&Str_RestorePurchases_FAIL__Not_initialized_);
    bRam0000000001916f46 = 1;
  }
  uVar2 = Purchaser__FGJALJLPMEN();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__get_platform(0);
    plStack_38 = _UnityEngine_RuntimePlatform_TypeInfo;
    uStack_30 = 0xffffffffffffffff;
    uVar8 = System_Enum__ToString(&plStack_38,0);
    CIDKMFLFJEJ = (void *)System_String__Concat
                                    (_Str_RestorePurchases_FAIL__Not_supported_on_,uVar8,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar3 = _Str_RestorePurchases_FAIL__Not_initialized_;
  if ((bRam0000000001917204 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917204 = 1;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__LogError(plVar3,0);
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
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c5d818;
  lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  if (lVar7 == 0) goto LAB_00c5d818;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,1,0);
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
  plVar3 = *(long **)(lVar7 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
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
  plVar3 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar7 != 0))
  {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar7,0);
          (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x5b0));
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


// ==== public void ButtonRateMeLater() { }   @0xb15498

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonRateMeLater(void *__this)

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
  
  if ((bRam0000000001916fb1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fb1 = 1;
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
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0,0);
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
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


// ==== public void ButtonHpInfo() { }   @0xb15850

/* WARNING: Removing unreachable block (ram,0x00c46a08) */
/* WARNING: Removing unreachable block (ram,0x00c46a18) */
/* WARNING: Removing unreachable block (ram,0x00c475f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonHpInfo(void *__this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long lStack_68;
  
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
  plVar13 = *(long **)((long)__this + 0x4e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,5);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  uVar7 = System_Int32__ToString(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc,0);
  if (lVar6 == 0) goto LAB_00c10f6c;
  if ((*(int *)(lVar6 + 0x18) == 0) ||
     (*(undefined8 *)(lVar6 + 0x20) = uVar7, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x28) = _Str__;
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
  pvVar8 = Translate__JJJNIPAKLJF((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_SECOND)
  ;
  if ((*(uint *)(lVar6 + 0x18) < 3) ||
     (*(void **)(lVar6 + 0x30) = pvVar8, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
  *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
  if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c10f6c;
  pvVar8 = Translate__JJJNIPAKLJF((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_HP);
  if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
  *(void **)(lVar6 + 0x40) = pvVar8;
  uVar7 = System_String__Concat(lVar6,0);
  if (plVar13 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar7,*(undefined8 *)(*plVar13 + 0x5b0));
  lVar6 = *(long *)((long)__this + 200);
  if (lVar6 == 0) goto LAB_00c10f6c;
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
  lVar9 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar9 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x20) = _Str_Try_to_Show__;
  lVar10 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar10 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar10,0);
  if ((*(uint *)(lVar9 + 0x18) < 2) ||
     (*(undefined8 *)(lVar9 + 0x28) = uVar7, *(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x30) = _Str___current__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar11 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar9 + 0x18) < 4) ||
     (*(undefined8 *)(lVar9 + 0x38) = uVar7, *(uint *)(lVar9 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x40) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar11 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar10,0);
  }
  uVar5 = *(uint *)(lVar9 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar9 + 0x48) = uVar7, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x50) = _Str____Child__;
  plVar13 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar13 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    uVar5 = *(uint *)(lVar9 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x58) = uVar7;
  pvVar8 = (void *)System_String__Concat(lVar9,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar8,false);
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Equality(uVar7,lVar6,0);
  if ((uVar11 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar11 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Equality(uVar7,lVar6,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar9 = _GUIWindow_TypeInfo;
  if ((uVar11 & 1) != 0) {
    lVar9 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (lVar9 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar9,0);
    lVar9 = _GUIWindow_TypeInfo;
    *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar9 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar11 = UnityEngine_Object__op_Inequality(lVar9,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (lVar9 == 0) goto LAB_00c485b8;
      uVar11 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
      if ((uVar11 & 1) == 0) goto LAB_00c46b74;
      uVar16 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) = uVar16;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar11 & 1) != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
        fVar15 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(float *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1c) + 0.5 < fVar15) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(**(long **)(_Menu_TypeInfo + 0xb8),lVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar9 == 0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar9,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
          goto LAB_00c485b8;
          uVar11 = AdvController__EDNAEPDDBPJ(lVar9,0);
          if ((uVar11 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar15 = (float)iVar3 / (float)iVar4;
            if (fVar15 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar9 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
            if ((uVar11 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar9 == 0)
                 ) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar9 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
              if ((uVar11 & 1) != 0) {
                if (1.61 <= fVar15) {
                  if ((fVar15 <= 1.61) || (1.8 <= fVar15)) {
                    if (fVar15 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar9 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar9 + 0x70);
                    uVar17 = 0x3f51eb85;
                    uVar16 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                       lVar9 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar9 + 0x70);
                    uVar17 = 0x3f5eb852;
                    uVar16 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar9 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar9 + 0x70);
                  uVar17 = 0x3f733333;
                  uVar16 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar15) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar9 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar15) {
                  if (*(long *)(lVar9 + 0x240) == 0) goto LAB_00c485b8;
                  uVar11 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar9 + 0x240),0);
                  if ((uVar11 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                     lVar9 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar9 + 0x60);
                  uVar17 = 0x3f51eb85;
                  uVar16 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar9 + 0x60);
                  uVar17 = 0x3f5eb852;
                  uVar16 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30),
                   lVar9 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar9 + 0x60);
                uVar16 = 0xc0a00000;
                uVar17 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar16,uVar17,lVar6,uVar7);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar9,0);
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
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
          goto LAB_00c485b8;
          uVar11 = AdvController__EDNAEPDDBPJ(lVar9,0);
          if ((uVar11 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar15 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar15) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar9 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
            if ((uVar11 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar9 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
              if ((uVar11 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar9 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
                if ((uVar11 & 1) == 0) {
                  lVar9 = UnityEngine_Component__get_gameObject(lVar6,0);
                  if (lVar9 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar9,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar9 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar11 = UnityEngine_Object__op_Inequality(lVar9,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (lVar9 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar9 + 0x2c) == 3) {
                      lVar9 = UnityEngine_Component__get_gameObject(lVar6,0);
                      if (lVar9 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar9,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar11 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar11 & 1) != 0) {
                        if (1.61 <= fVar15) {
                          if (1.8 <= fVar15) {
                            uVar17 = 0x3f59999a;
                            uVar16 = 0x42700000;
                          }
                          else {
                            uVar16 = 0x428c0000;
                            uVar17 = 0;
                          }
                        }
                        else {
                          uVar16 = 0x41a00000;
                          uVar17 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar15) {
                  if (fVar15 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar9 + 0xe8);
                    uVar17 = 0x3f733333;
                    uVar16 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar9 + 0xe8);
                uVar16 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar15) {
                  if (1.8 <= fVar15) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar9 + 0xb0);
                  uVar17 = 0x3f6e147b;
                  uVar16 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar9 + 0xb0);
                uVar16 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar17 = 0;
            }
            else {
              if (fVar15 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar9 + 0x188);
                uVar16 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar9 + 0x188);
              if (1.8 <= fVar15) {
                uVar17 = 0x3f51eb85;
                uVar16 = 0x42180000;
              }
              else {
                uVar17 = 0x3f733333;
                uVar16 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar16,uVar17,lVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar9,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = *(long *)(_Menu_TypeInfo + 0xb8);
  if (*(char *)(lVar9 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar9 = *(long *)(_Menu_TypeInfo + 0xb8);
    }
    if (*(char *)(lVar9 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar9 + 0x6c) != '\0') {
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
              if (lVar9 == 0) goto LAB_00c485b8;
              uVar11 = DAFNMLEKHAD__MHBEPDHNNFH(lVar9,0);
              if ((uVar11 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar9 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar11 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar11 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar9 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar11 = UnityEngine_Object__op_Equality(lVar6,uVar7,0);
                  if ((uVar11 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar9 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar9 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar9 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar9 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar9,1,0);
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  puVar12[1] = lVar6;
  if (*(char *)(lVar6 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(lVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar7,0);
  }
  lVar9 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar9 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar9 + 0x20) = _Str_Window__Show__;
  uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar11 & 1) != 0) {
    if (**(long **)(_GUIWindow_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(**(long **)(_GUIWindow_TypeInfo + 0xb8),0);
  }
  if ((*(uint *)(lVar9 + 0x18) < 2) ||
     (*(undefined8 *)(lVar9 + 0x28) = uVar7, *(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x30) = _Str___last__;
  uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar11 & 1) != 0) {
    lVar10 = *(long *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
    if (lVar10 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar10,0);
  }
  uVar5 = *(uint *)(lVar9 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar9 + 0x38) = uVar7, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x40) = _Str____Child__;
  plVar13 = *(long **)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
  uVar7 = 0;
  if (plVar13 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    uVar5 = *(uint *)(lVar9 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar9 + 0x48) = uVar7;
  pvVar8 = (void *)System_String__Concat(lVar9,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar8,false);
  uVar11 = Main__KCHOEBEIOCE(0);
  if ((uVar11 & 1) != 0) {
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
    uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar11 & 1) != 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
      if ((uVar11 & 1) == 0) {
        uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
        goto LAB_00c485b8;
        uVar14 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
        if ((uVar11 & 1) == 0) {
          uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar6 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
          if ((uVar11 & 1) != 0) {
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
        lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar9 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar9,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
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
    uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar11 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar11 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar8 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar8);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
       (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c485b8;
    uVar11 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         ((lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0 ||
          (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)))) goto LAB_00c485b8;
      uVar11 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
      if ((uVar11 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1d0), lVar9 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1b8), lVar9 == 0)) goto LAB_00c485b8;
      uVar16 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0x1d0), lVar9 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar9,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0))
      goto LAB_00c485b8;
      lVar9 = *(long *)(lVar9 + 0x3e0);
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
      if ((lVar10 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar10,0), lVar9 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar9,uVar5 & 1,0);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         ((lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0 ||
          (lVar9 = *(long *)(lVar9 + 0x1b8), lVar9 == 0)))) goto LAB_00c485b8;
      uVar16 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar16,lVar9,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
       ((lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0 ||
        (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)))) goto LAB_00c485b8;
    uVar11 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar11 & 1) == 0) {
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
        (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar9 == 0)) ||
       (lVar9 = *(long *)(lVar9 + 0x68), lVar9 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar9,*(undefined1 *)(lVar6 + 0x22),0);
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar6 + 0x78);
    uVar14 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Equality(uVar14,uVar7,0);
    if ((uVar11 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar7,uVar14,0);
      if ((uVar11 & 1) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar11 & 1) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x10);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
          goto LAB_00c485b8;
          uVar14 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
          if ((uVar11 & 1) != 0) {
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
        uVar16 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        *(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48) = uVar16;
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
      }
    }
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
    if ((uVar11 & 1) == 0) {
      uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00c485b8;
      uVar14 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
      if ((uVar11 & 1) != 0) {
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
      pvVar8 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar8 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar8);
      if (bVar2) {
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
          uVar11 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar11 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar11 & 1) == 0) {
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
    uVar7 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Equality(uVar7,uVar14,0);
    if ((uVar11 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar11 & 1) != 0) {
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
           (pvVar8 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar8 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar8);
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


// ==== public void ButtonSettingsLanguage() { }   @0xb15ab4

/* WARNING: Removing unreachable block (ram,0x00c16120) */
/* WARNING: Removing unreachable block (ram,0x00c16170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonSettingsLanguage(void *__this)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  void *pvStack_60;
  void *pvStack_58;
  
  if ((bRam0000000001916fb8 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_TranslateLabel___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_select_text);
    func_0x00a67900(&Str_back_text);
    bRam0000000001916fb8 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
    Translate__NINJNGGDOJC(**(long **)(_Translate_TypeInfo + 0xb8),0);
    GUIGarage__ButtonSettings(__this);
    lVar9 = *(long *)((long)__this + 0x6f8);
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          pvVar3 = *(void **)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
          if (pvVar3 == (void *)0x0) goto LAB_00c16148;
          TranslateLabel__JJJNIPAKLJF(pvVar3);
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar2 & 1) == 0) {
LAB_00c16124:
          GUIGarage__ANCCFOEBAGI(__this);
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar2 & 1) == 0) goto LAB_00c16124;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x70), lVar9 != 0)) &&
              (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) &&
             (lVar9 = UnityEngine_GameObject__get_transform(lVar9,0), lVar9 != 0)) {
            plVar4 = (long *)UnityEngine_Transform__GetEnumerator(lVar9,0);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            do {
              lVar9 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00c15d64;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar2 != 0);
              }
              puVar5 = (undefined8 *)
                       func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c15d64:
              uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              if ((uVar2 & 1) == 0) {
                plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
                if (plVar4 == (long *)0x0) goto LAB_00c15ee0;
                lVar9 = *plVar4;
                uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar2 == 0) goto LAB_00c15eb8;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_00c15ea0;
              }
              lVar9 = *plVar4;
              uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar2 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_00c15dc4;
                  }
                  uVar2 = uVar2 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar2 != 0);
              }
              puVar5 = (undefined8 *)
                       func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c15dc4:
              plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
              if (plVar6 == (long *)0x0) goto LAB_00c16160;
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130))
                 || (*(long *)(*(long *)(*plVar6 + 200) +
                               (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8)
                     != _UnityEngine_Transform_TypeInfo)) goto LAB_00c16150;
              uVar8 = UnityEngine_Object__get_name(plVar6,0);
              uVar2 = System_String__op_Equality(uVar8,_Str_select_text,0);
              if ((uVar2 & 1) != 0) {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (plVar6,&pvStack_60,
                           _Method_UnityEngine_Component_GetComponent_TranslateLabel___);
                pvVar3 = pvStack_60;
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar2 = UnityEngine_Object__op_Inequality(pvVar3,0,0);
                if ((uVar2 & 1) != 0) {
                  if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  TranslateLabel__JJJNIPAKLJF(pvVar3);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_00c16148;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_00c160d4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00c16108;
    }
  }
LAB_00c160ec:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00c16108:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  goto LAB_00c16124;
LAB_00c16150:
  func_0x00a67eec(plVar6);
LAB_00c16158:
  func_0x00a67eec(plVar6);
LAB_00c16160:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
LAB_00c15ea0:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00c15ed4;
    }
  }
LAB_00c15eb8:
  puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_IDisposable_TypeInfo,0);
LAB_00c15ed4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_00c15ee0:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
      (lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x70), lVar9 != 0)) &&
     ((lVar9 = *(long *)(lVar9 + 0x38), lVar9 != 0 &&
      (lVar9 = UnityEngine_GameObject__get_transform(lVar9,0), lVar9 != 0)))) {
    plVar4 = (long *)UnityEngine_Transform__GetEnumerator(lVar9,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    do {
      lVar9 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00c15f9c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c15f9c:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)func_0x00a67a34(plVar4,_System_IDisposable_TypeInfo);
        if (plVar4 == (long *)0x0) goto LAB_00c16124;
        lVar9 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar2 == 0) goto LAB_00c160ec;
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_00c160d4;
      }
      lVar9 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00c15ffc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)func_0x00a9e6c4(plVar4,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c15ffc:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) goto LAB_00c16158;
      uVar8 = UnityEngine_Object__get_name(plVar6,0);
      uVar2 = System_String__op_Equality(uVar8,_Str_back_text,0);
      if ((uVar2 & 1) != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (plVar6,&pvStack_58,_Method_UnityEngine_Component_GetComponent_TranslateLabel___);
        pvVar3 = pvStack_58;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(pvVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          TranslateLabel__JJJNIPAKLJF(pvVar3);
        }
      }
    } while( true );
  }
LAB_00c16148:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonLogsHide() { }   @0xb16800

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonLogsHide(void *__this)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x1a8);
  if (lVar1 != 0) {
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


// ==== public void PCLHPNHIHMO() { }   @0xb16a50

/* WARNING: Removing unreachable block (ram,0x00c16d88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__PCLHPNHIHMO(void *__this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lStack_48;
  
  if ((bRam0000000001916fc0 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_repair_button);
    func_0x00a67900(&Str_race_button);
    bRam0000000001916fc0 = 1;
  }
  if (*(void **)((long)__this + 0xd0) != (void *)0x0) {
    GUIWindow__HEGIHOAJOKK(*(void **)((long)__this + 0xd0),true);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11) != '\0') {
      return;
    }
    if ((*(long *)((long)__this + 0xd0) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0xd0),0), lVar1 != 0))
    {
      plVar2 = (long *)UnityEngine_Transform__GetEnumerator(lVar1,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar1 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_00c16ba8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c16ba8:
        uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          plVar2 = (long *)func_0x00a67a34(plVar2,_System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar1 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar6 == 0) goto LAB_00c16d24;
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          goto LAB_00c16d0c;
        }
        lVar1 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00c16c08;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c16c08:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
LAB_00c16d74:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo)) {
          func_0x00a67eec(plVar4);
          goto LAB_00c16d74;
        }
        uVar5 = UnityEngine_Object__get_name(plVar4,0);
        uVar6 = System_String__op_Equality(uVar5,_Str_repair_button,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = System_String__op_Equality(uVar5,_Str_race_button,0);
          if ((uVar6 & 1) != 0) {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (plVar4,&lStack_48,_Method_UnityEngine_Component_GetComponent_RectTransform___
                      );
            lVar1 = lStack_48;
            if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            UnityEngine_RectTransform__get_anchoredPosition(lStack_48,0);
            UnityEngine_RectTransform__set_anchoredPosition(0,lVar1,0);
          }
        }
        else {
          lVar1 = UnityEngine_Component__get_gameObject(plVar4,0);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_GameObject__SetActive(lVar1,0,0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_00c16d0c:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00c16d40;
    }
  }
LAB_00c16d24:
  puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00c16d40:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


// ==== public void ButtonResetProfile() { }   @0xb171ac

/* WARNING: Removing unreachable block (ram,0x00bfef84) */
/* WARNING: Removing unreachable block (ram,0x00bfef94) */
/* WARNING: Removing unreachable block (ram,0x00bfef9c) */
/* WARNING: Removing unreachable block (ram,0x00bfefa8) */
/* WARNING: Removing unreachable block (ram,0x00bfeff0) */
/* WARNING: Removing unreachable block (ram,0x00bff000) */
/* WARNING: Removing unreachable block (ram,0x00bff04c) */
/* WARNING: Removing unreachable block (ram,0x00bff050) */
/* WARNING: Removing unreachable block (ram,0x00bff090) */
/* WARNING: Removing unreachable block (ram,0x00bff0c8) */
/* WARNING: Removing unreachable block (ram,0x00bff0d0) */
/* WARNING: Removing unreachable block (ram,0x00bff0e8) */
/* WARNING: Removing unreachable block (ram,0x00bff100) */
/* WARNING: Removing unreachable block (ram,0x00bff108) */
/* WARNING: Removing unreachable block (ram,0x00bff11c) */
/* WARNING: Removing unreachable block (ram,0x00bff124) */
/* WARNING: Removing unreachable block (ram,0x00bff138) */
/* WARNING: Removing unreachable block (ram,0x00bff144) */
/* WARNING: Removing unreachable block (ram,0x00bff14c) */
/* WARNING: Removing unreachable block (ram,0x00bff158) */
/* WARNING: Removing unreachable block (ram,0x00bff168) */
/* WARNING: Removing unreachable block (ram,0x00bff16c) */
/* WARNING: Removing unreachable block (ram,0x00bff180) */
/* WARNING: Removing unreachable block (ram,0x00bff18c) */
/* WARNING: Removing unreachable block (ram,0x00bff194) */
/* WARNING: Removing unreachable block (ram,0x00bff1a0) */
/* WARNING: Removing unreachable block (ram,0x00bff1a8) */
/* WARNING: Removing unreachable block (ram,0x00bff1bc) */
/* WARNING: Removing unreachable block (ram,0x00bff1c4) */
/* WARNING: Removing unreachable block (ram,0x00bff1d0) */
/* WARNING: Removing unreachable block (ram,0x00bff1d4) */
/* WARNING: Removing unreachable block (ram,0x00bff1dc) */
/* WARNING: Removing unreachable block (ram,0x00bff1f0) */
/* WARNING: Removing unreachable block (ram,0x00bff1fc) */
/* WARNING: Removing unreachable block (ram,0x00bff204) */
/* WARNING: Removing unreachable block (ram,0x00bff210) */
/* WARNING: Removing unreachable block (ram,0x00bff220) */
/* WARNING: Removing unreachable block (ram,0x00bff228) */
/* WARNING: Removing unreachable block (ram,0x00bff234) */
/* WARNING: Removing unreachable block (ram,0x00bff238) */
/* WARNING: Removing unreachable block (ram,0x00bff240) */
/* WARNING: Removing unreachable block (ram,0x00bff254) */
/* WARNING: Removing unreachable block (ram,0x00bff260) */
/* WARNING: Removing unreachable block (ram,0x00bff268) */
/* WARNING: Removing unreachable block (ram,0x00bff274) */
/* WARNING: Removing unreachable block (ram,0x00bff284) */
/* WARNING: Removing unreachable block (ram,0x00bff28c) */
/* WARNING: Removing unreachable block (ram,0x00bff298) */
/* WARNING: Removing unreachable block (ram,0x00bff29c) */
/* WARNING: Removing unreachable block (ram,0x00bff2a4) */
/* WARNING: Removing unreachable block (ram,0x00bff2b8) */
/* WARNING: Removing unreachable block (ram,0x00bff2c4) */
/* WARNING: Removing unreachable block (ram,0x00bff2cc) */
/* WARNING: Removing unreachable block (ram,0x00bff2d8) */
/* WARNING: Removing unreachable block (ram,0x00bff2e8) */
/* WARNING: Removing unreachable block (ram,0x00bff2f0) */
/* WARNING: Removing unreachable block (ram,0x00bff2fc) */
/* WARNING: Removing unreachable block (ram,0x00bff300) */
/* WARNING: Removing unreachable block (ram,0x00bff308) */
/* WARNING: Removing unreachable block (ram,0x00bff31c) */
/* WARNING: Removing unreachable block (ram,0x00bff328) */
/* WARNING: Removing unreachable block (ram,0x00bff330) */
/* WARNING: Removing unreachable block (ram,0x00bff33c) */
/* WARNING: Removing unreachable block (ram,0x00bff34c) */
/* WARNING: Removing unreachable block (ram,0x00bff354) */
/* WARNING: Removing unreachable block (ram,0x00bff360) */
/* WARNING: Removing unreachable block (ram,0x00bff364) */
/* WARNING: Removing unreachable block (ram,0x00bff36c) */
/* WARNING: Removing unreachable block (ram,0x00bff380) */
/* WARNING: Removing unreachable block (ram,0x00bff38c) */
/* WARNING: Removing unreachable block (ram,0x00bff394) */
/* WARNING: Removing unreachable block (ram,0x00bff3a0) */
/* WARNING: Removing unreachable block (ram,0x00bff3b0) */
/* WARNING: Removing unreachable block (ram,0x00bff3b8) */
/* WARNING: Removing unreachable block (ram,0x00bff3c4) */
/* WARNING: Removing unreachable block (ram,0x00bff3c8) */
/* WARNING: Removing unreachable block (ram,0x00bff3d0) */
/* WARNING: Removing unreachable block (ram,0x00bff3e4) */
/* WARNING: Removing unreachable block (ram,0x00bff3f0) */
/* WARNING: Removing unreachable block (ram,0x00bff3f8) */
/* WARNING: Removing unreachable block (ram,0x00bff404) */
/* WARNING: Removing unreachable block (ram,0x00bff414) */
/* WARNING: Removing unreachable block (ram,0x00bff41c) */
/* WARNING: Removing unreachable block (ram,0x00bff428) */
/* WARNING: Removing unreachable block (ram,0x00bff42c) */
/* WARNING: Removing unreachable block (ram,0x00bff434) */
/* WARNING: Removing unreachable block (ram,0x00bff448) */
/* WARNING: Removing unreachable block (ram,0x00bff454) */
/* WARNING: Removing unreachable block (ram,0x00bff45c) */
/* WARNING: Removing unreachable block (ram,0x00bff468) */
/* WARNING: Removing unreachable block (ram,0x00bff470) */
/* WARNING: Removing unreachable block (ram,0x00bff478) */
/* WARNING: Removing unreachable block (ram,0x00bff484) */
/* WARNING: Removing unreachable block (ram,0x00bff488) */
/* WARNING: Removing unreachable block (ram,0x00bff490) */
/* WARNING: Removing unreachable block (ram,0x00bff4a4) */
/* WARNING: Removing unreachable block (ram,0x00bff4b0) */
/* WARNING: Removing unreachable block (ram,0x00bff4b8) */
/* WARNING: Removing unreachable block (ram,0x00bff4c4) */
/* WARNING: Removing unreachable block (ram,0x00bff4cc) */
/* WARNING: Removing unreachable block (ram,0x00bff4d4) */
/* WARNING: Removing unreachable block (ram,0x00bff4e0) */
/* WARNING: Removing unreachable block (ram,0x00bff4e4) */
/* WARNING: Removing unreachable block (ram,0x00bff4ec) */
/* WARNING: Removing unreachable block (ram,0x00bff500) */
/* WARNING: Removing unreachable block (ram,0x00bff50c) */
/* WARNING: Removing unreachable block (ram,0x00bff514) */
/* WARNING: Removing unreachable block (ram,0x00bff520) */
/* WARNING: Removing unreachable block (ram,0x00bff530) */
/* WARNING: Removing unreachable block (ram,0x00bff538) */
/* WARNING: Removing unreachable block (ram,0x00bff544) */
/* WARNING: Removing unreachable block (ram,0x00bff548) */
/* WARNING: Removing unreachable block (ram,0x00bff550) */
/* WARNING: Removing unreachable block (ram,0x00bff564) */
/* WARNING: Removing unreachable block (ram,0x00bff570) */
/* WARNING: Removing unreachable block (ram,0x00bff578) */
/* WARNING: Removing unreachable block (ram,0x00bff584) */
/* WARNING: Removing unreachable block (ram,0x00bff594) */
/* WARNING: Removing unreachable block (ram,0x00bff59c) */
/* WARNING: Removing unreachable block (ram,0x00bff5a8) */
/* WARNING: Removing unreachable block (ram,0x00bff5ac) */
/* WARNING: Removing unreachable block (ram,0x00bff5b4) */
/* WARNING: Removing unreachable block (ram,0x00bff5c8) */
/* WARNING: Removing unreachable block (ram,0x00bff5d4) */
/* WARNING: Removing unreachable block (ram,0x00bff5dc) */
/* WARNING: Removing unreachable block (ram,0x00bff5e8) */
/* WARNING: Removing unreachable block (ram,0x00bff5f8) */
/* WARNING: Removing unreachable block (ram,0x00bff600) */
/* WARNING: Removing unreachable block (ram,0x00bff60c) */
/* WARNING: Removing unreachable block (ram,0x00bff610) */
/* WARNING: Removing unreachable block (ram,0x00bff618) */
/* WARNING: Removing unreachable block (ram,0x00bff62c) */
/* WARNING: Removing unreachable block (ram,0x00bff638) */
/* WARNING: Removing unreachable block (ram,0x00bff640) */
/* WARNING: Removing unreachable block (ram,0x00bff64c) */
/* WARNING: Removing unreachable block (ram,0x00bff65c) */
/* WARNING: Removing unreachable block (ram,0x00bff664) */
/* WARNING: Removing unreachable block (ram,0x00bff670) */
/* WARNING: Removing unreachable block (ram,0x00bff674) */
/* WARNING: Removing unreachable block (ram,0x00bff67c) */
/* WARNING: Removing unreachable block (ram,0x00bff690) */
/* WARNING: Removing unreachable block (ram,0x00bff69c) */
/* WARNING: Removing unreachable block (ram,0x00bff6a4) */
/* WARNING: Removing unreachable block (ram,0x00bff6b0) */
/* WARNING: Removing unreachable block (ram,0x00bff6b8) */
/* WARNING: Removing unreachable block (ram,0x00bff6d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonResetProfile(void *__this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *__this_00;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001916fc5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fc5 = 1;
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
  if ((bRam0000000001916f06 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo,0,0,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__)
    ;
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current
                   );
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_sd);
    func_0x00a67900(&Str_lang);
    func_0x00a67900(&Str_fst);
    func_0x00a67900(&Str_ifs);
    func_0x00a67900(&Str_islogs);
    func_0x00a67900(&Str_so1);
    func_0x00a67900(&Str_idi);
    func_0x00a67900(&Str_im);
    func_0x00a67900(&Str_ia);
    func_0x00a67900(&Str_in);
    func_0x00a67900(&Str_is);
    func_0x00a67900(&Str_xbox_sid);
    func_0x00a67900(&Str_rm);
    func_0x00a67900(&Str_fuel);
    func_0x00a67900(&Str_gdpr);
    func_0x00a67900(&Str_fps);
    func_0x00a67900(&Str_gfx);
    bRam0000000001916f06 = 1;
  }
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  UnityEngine_PlayerPrefs__HasKey(_Str_is,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_im,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_gdpr,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_in,0);
  uStack_c0 = *(undefined4 *)(lVar6 + 0xd8);
  uStack_c8 = *(undefined8 *)(lVar6 + 0xd0);
  uStack_d0 = *(undefined8 *)(lVar6 + 200);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_idi,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_ia,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_gfx,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_lang,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_islogs,0);
  UnityEngine_PlayerPrefs__HasKey(_Str_fps,0);
  uStack_c0 = *(undefined4 *)(lVar6 + 0xc0);
  uStack_c8 = *(undefined8 *)(lVar6 + 0xb8);
  uStack_d0 = *(undefined8 *)(lVar6 + 0xb0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d0,0);
  CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_sd,0);
  CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_so1,0);
  CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(_Str_rm,0);
  iVar2 = *(int *)(lVar6 + 0x98);
  uVar3 = UnityEngine_PlayerPrefs__HasKey(_Str_ifs,0);
  pvVar11 = *(void **)(lVar6 + 0xa0);
  uVar4 = UnityEngine_PlayerPrefs__HasKey(_Str_fst,0);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_BridgePHP_TypeInfo);
  }
  iVar8 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
  if (iVar8 == 8) {
LAB_00bfef30:
    UnityEngine_PlayerPrefs__GetString(_Str_xbox_sid,0);
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_BridgePHP_TypeInfo);
      iVar8 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    }
    if (iVar8 == 9) goto LAB_00bfef30;
  }
  UnityEngine_PlayerPrefs__DeleteAll(0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__DeleteAll(0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Main_TypeInfo + 0xb8) != 0) {
    Main__IJMHKMJLFIL(**(long **)(_Main_TypeInfo + 0xb8),0);
    if ((uVar3 & 1) != 0) {
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
      if (lVar6 == 0) goto LAB_00bffbb0;
      DAFNMLEKHAD__MJIAJNKPEAL(lVar6,iVar2 == 1);
    }
    if ((uVar4 & 1) != 0) {
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
      if (__this_00 == (void *)0x0) goto LAB_00bffbb0;
      DAFNMLEKHAD__PGHAPGLHFPH(__this_00,pvVar11);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(_Main_TypeInfo + 0xb8);
    *(undefined4 *)(lVar6 + 0x2c) = 0xc;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    **(undefined4 **)(_Level_TypeInfo + 0xb8) = 0xffffffff;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined1 *)(lVar6 + 0xc) = 1;
    *(undefined2 *)(lVar6 + 0xe) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(undefined1 *)(lVar6 + 0x18) = 0;
    puVar7 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (pvVar11 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar11 != (void *)0x0)) {
      GUIGarage__EGEFDJDCKDJ(pvVar11);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         ((lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0 &&
          (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)))) {
        EncyclopediaController__FHBDLLGMOFN(lVar6,0);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
          Translate__CCHEMMCPAOO(**(long **)(_Translate_TypeInfo + 0xb8),0);
          if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
            Translate__OGEJCBEMJLE(**(long **)(_Translate_TypeInfo + 0xb8),0);
            if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
               (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar6 != 0)) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (0 < (int)uVar1) {
                uVar10 = 0;
                do {
                  if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b58();
                  }
                  lVar5 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
                  if (lVar5 == 0) goto LAB_00bffbb0;
                  Level__POIIKNJOHOP(lVar5,0);
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)uVar1);
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
                iVar2 = DAFNMLEKHAD__HDABOKNLKGK();
                if (iVar2 != -1) {
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
                  if (lVar6 == 0) goto LAB_00bffbb0;
                  DAFNMLEKHAD__OPFBHOGMKNG(lVar6,0xffffffff);
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                  if ((uVar3 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar6 == 0))
                    goto LAB_00bffbb0;
                    FuelManager__CPLMJMFGLMB(lVar6,0);
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                    uVar9 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar3 = UnityEngine_Object__op_Inequality(uVar9,0,0);
                    if ((uVar3 & 1) != 0) {
                      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (**(char **)(_NotificationsManager_TypeInfo + 0xb8) == '\0') {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                           (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x30) == 0))
                        goto LAB_00bffbb0;
                        NotificationsManager__KHDFDGMBOIJ();
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
                        if (lVar6 == 0) goto LAB_00bffbb0;
                        if (*(int *)(lVar6 + 0x88) == 1) {
                          if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,true);
                        }
                      }
                    }
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
                      Menu__OLOGKIHIIEL((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
                      DAFNMLEKHAD__BJKKICMFANH();
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
LAB_00bffbb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DGGEFHKGJCD() { }   @0xb100bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__DGGEFHKGJCD(void *__this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  if ((bRam0000000001916fc9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fc9 = 1;
  }
  lVar3 = *(long *)((long)__this + 0x560);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      auVar10 = NEON_fmov(0xbf800000,4);
      auVar7 = NEON_fmov(0x3f800000,4);
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c10228;
        if (*(char *)(lVar5 + 0x68) != '\0') {
          fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          plVar2 = *(long **)(lVar5 + 0x60);
          fVar6 = fVar6 - *(float *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x48);
          fVar9 = (float)(int)(fVar6 * 0.5);
          fVar6 = fVar6 - (fVar9 + fVar9);
          fVar9 = fVar6;
          if (2.0 < fVar6) {
            fVar9 = 2.0;
          }
          fVar9 = fVar9 + -1.0;
          if (fVar6 < 0.0) {
            fVar9 = -1.0;
          }
          if (plVar2 == (long *)0x0) goto LAB_00c10228;
          fVar9 = 1.0 - ABS(fVar9);
          fVar6 = fVar9;
          if (1.0 < fVar9) {
            fVar6 = 1.0;
          }
          if (fVar9 < 0.0) {
            fVar6 = 0.0;
          }
          fStack_80 = auVar7._0_4_;
          fStack_7c = auVar7._4_4_;
          fStack_78 = auVar7._8_4_;
          fStack_74 = auVar7._12_4_;
          auVar8._0_4_ = (*(float *)((long)__this + 0x588) + auVar10._0_4_) * fVar6 + fStack_80;
          auVar8._4_4_ = (*(float *)((long)__this + 0x58c) + auVar10._4_4_) * fVar6 + fStack_7c;
          auVar8._8_4_ = (*(float *)((long)__this + 0x590) + auVar10._8_4_) * fVar6 + fStack_78;
          auVar8._12_4_ = (*(float *)((long)__this + 0x594) + auVar10._12_4_) * fVar6 + fStack_74;
          (**(code **)(*plVar2 + 0x2a8))
                    (auVar8,auVar8._4_4_,auVar8._8_4_,auVar8._12_4_,plVar2,
                     *(undefined8 *)(*plVar2 + 0x2b0));
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00c10228:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRating() { }   @0xb17734

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__ButtonRating(void *__this)

{
  void *__this_00;
  ulong uVar1;
  void *__this_01;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916fcd & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fcd = 1;
  }
  uVar4 = *(undefined8 *)((long)__this + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  __this_01 = *(void **)((long)__this + 0x40);
  if (__this_01 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916ee8 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ee8 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    RatingController__GGOIKHNAIJB(__this_01,0);
    RatingController__ALNNLEHPENN(__this_01);
    RatingController__EKGEIOGPKIJ(__this_01);
    RatingController__PAHDFNGJABH(__this_01,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) &&
       (__this_00 = *(void **)(lVar3 + 0x100), __this_00 != (void *)0x0)) {
      GUIWindow__HEGIHOAJOKK(__this_00,false);
      RatingController__HPAFDOMPACP(__this_01);
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
        if ((bRam0000000001916ec4 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Str_RatingOpen);
          func_0x00a67900(&Str_ANALYTICS__RatingOpen);
          bRam0000000001916ec4 = 1;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_ANALYTICS__RatingOpen,false);
        uVar4 = _Str_RatingOpen;
        uVar1 = System_String__IsNullOrEmpty(_Str_RatingOpen,0);
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
          (*pcRam000000000191f028)(uVar4);
          return;
        }
        func_0x00a67914(&System_ArgumentException_TypeInfo);
        uVar4 = func_0x00a67b44();
        uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
        System_ArgumentException___ctor(uVar4,uVar2,0);
        uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
        auVar5 = func_0x00a67a20(uVar4,uVar2);
        uVar4 = auVar5._0_8_;
        if ((bRam000000000191f039 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
          bRam000000000191f039 = 1;
        }
        uVar1 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar1 & 1) != 0) {
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar4 = func_0x00a67b44();
          uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
          System_ArgumentException___ctor(uVar4,uVar2,0);
          uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
          func_0x00a67a20(uVar4,uVar2);
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
            (*pcRam000000000191f028)(uVar4);
            return;
          }
          lVar3 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
          UnityEngine_Analytics_CustomEventData___ctor(lVar3,uVar4);
          if (lVar3 == 0) goto LAB_016d9194;
          UnityEngine_Analytics_CustomEventData__AddDictionary(lVar3,auVar5._8_8_);
          if (pcRam000000000191f030 == (code *)0x0) {
            pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
          }
          (*pcRam000000000191f030)(lVar3);
          UnityEngine_Analytics_CustomEventData__Dispose(lVar3);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HMJFKIDHNDE() { }   @0xb11f68

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIGarage__HMJFKIDHNDE(void *__this)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x400);
  if (lVar1 != 0) {
    UnityEngine_RectTransform__get_anchoredPosition(lVar1,0);
    UnityEngine_RectTransform__set_anchoredPosition(0,lVar1,0);
    lVar1 = *(long *)((long)__this + 0x408);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== public void JKGPIEKIJNG() { }   @0xae4750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__JKGPIEKIJNG(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_18;
  
  if ((bRam0000000001916e40 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e40 = 1;
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
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_18 = System_DateTime__get_Now(0);
  uVar1 = System_DateTime__AddHours(0x4020000000000000,&uStack_18,0);
  if (lVar2 != 0) {
    uVar1 = DAFNMLEKHAD__GBNPKHOGCBB(lVar2,uVar1,0);
    *(undefined1 *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1) = 1;
    FuelManager__NGBCNBFIMFC(uVar1,0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xae5e88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__Update(void *__this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916e45 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str__0___1_00_);
    func_0x00a67900(&Str_Menu_I_gui_garage_is_null);
    func_0x00a67900(&Str__0___1_00___2_00_);
    bRam0000000001916e45 = 1;
  }
  uStack_68 = 0;
  uStack_70 = *(undefined4 *)((long)__this + 0x34);
  uStack_78 = *(undefined8 *)((long)__this + 0x2c);
  uStack_80 = *(undefined8 *)((long)__this + 0x24);
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if ((iVar2 < 600) &&
     (fVar9 = (float)UnityEngine_Time__get_time(0), 1.0 <= fVar9 - *(float *)((long)__this + 0x38)))
  {
    puVar1 = (undefined8 *)((long)__this + 0x24);
    uVar10 = UnityEngine_Time__get_time(0);
    *(undefined4 *)((long)__this + 0x38) = uVar10;
    uStack_c0 = *(undefined4 *)((long)__this + 0x34);
    uStack_c8 = *(undefined8 *)((long)__this + 0x2c);
    uStack_d0 = *puVar1;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&iStack_b8,&uStack_d0,0);
    uStack_a0 = CONCAT44(uStack_b4,iStack_b8);
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    *(undefined4 *)((long)__this + 0x34) = uStack_a8;
    *(undefined8 *)((long)__this + 0x2c) = uStack_b0;
    *puVar1 = uStack_a0;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00be63b4:
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_Menu_I_gui_garage_is_null,0);
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00be6718;
      uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00be63b4;
      uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
      goto LAB_00be6718;
      uVar8 = *(undefined8 *)(lVar5 + 0x78);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00be6718;
        uVar8 = *(undefined8 *)(lVar5 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
        if ((uVar3 & 1) != 0) goto LAB_00be6168;
        uVar6 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00be6718;
        uVar8 = *(undefined8 *)(lVar5 + 0xa8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
        if ((uVar3 & 1) != 0) goto LAB_00be6168;
      }
      else {
LAB_00be6168:
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00be6718;
        uVar6 = *(undefined8 *)(lVar5 + 0x670);
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
             (lVar5 = *(long *)(lVar5 + 0x670), lVar5 == 0)) goto LAB_00be6718;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x670), lVar5 == 0)) goto LAB_00be6718;
            UnityEngine_GameObject__SetActive(lVar5,1,0);
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
            goto LAB_00be6718;
            GUIGarage__CGHIGIBEHAE(lVar5,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
        goto LAB_00be6718;
        uVar6 = *(undefined8 *)(lVar5 + 0x678);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00be6718;
          uStack_e0 = *(undefined4 *)((long)__this + 0x34);
          uStack_e8 = *(undefined8 *)((long)__this + 0x2c);
          uStack_f0 = *puVar1;
          plVar7 = *(long **)(lVar5 + 0x678);
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(600 - iVar2) / 0x3c);
          uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_a0);
          uStack_108 = *(undefined8 *)((long)__this + 0x2c);
          uStack_110 = *puVar1;
          uStack_100 = *(undefined4 *)((long)__this + 0x34);
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_110,0);
          iStack_b8 = (600 - iVar2) % 0x3c;
          uVar8 = func_0x00a67a38(_int_TypeInfo,&iStack_b8);
          uVar6 = System_String__Format(_Str__0___1_00_,uVar6,uVar8,0);
          if (plVar7 == (long *)0x0) goto LAB_00be6718;
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
        }
      }
    }
    uStack_120 = *(undefined4 *)((long)__this + 0x34);
    uStack_128 = *(undefined8 *)((long)__this + 0x2c);
    uStack_130 = *puVar1;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_130,0);
    if (599 < iVar2) {
      FuelManager__KPOIGAIGJGL(__this);
      FuelManager__AFCKJABEJKI(__this);
    }
  }
  if (*(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1) == '\0') {
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
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = System_DateTime__get_Now(0);
    uStack_68 = System_DateTime__op_Subtraction(uVar6,uVar8,0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar11 = (double)System_TimeSpan__get_TotalSeconds(&uStack_68,0);
    if (dVar11 <= 0.0) {
      *(undefined1 *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1) = 0;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = _Menu_TypeInfo;
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00be6718;
        uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0))
          goto LAB_00be6718;
          uVar3 = GUIGarage__GFNKMDJEDBD(lVar5,0);
        }
      }
      FuelManager__NGBCNBFIMFC(uVar3,0xffffffff);
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) {
            plVar7 = *(long **)(lVar5 + 0x6b0);
            if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = System_TimeSpan__get_Hours(&uStack_68,0);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
            uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_a0);
            iStack_b8 = System_TimeSpan__get_Minutes(&uStack_68,0);
            uVar8 = func_0x00a67a38(_int_TypeInfo,&iStack_b8);
            uStack_134 = System_TimeSpan__get_Seconds(&uStack_68,0);
            uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_134);
            uVar6 = System_String__Format(_Str__0___1_00___2_00_,uVar6,uVar8,uVar4,0);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
              return;
            }
          }
        }
        goto LAB_00be6718;
      }
    }
    return;
  }
LAB_00be6718:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CPLMJMFGLMB() { }   @0xae6854

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__CPLMJMFGLMB(void *__this)

{
  char cVar1;
  void *__this_00;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iStack_24;
  
  if (*(char *)((long)__this + 0x20) == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI();
  iStack_24 = -1;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
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
  if (__this_00 != (void *)0x0) {
    iStack_24 = DAFNMLEKHAD__HDABOKNLKGK(__this_00);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
        uVar5 = *(undefined8 *)(lVar4 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        cVar1 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) &&
           (lVar4 = *(long *)(lVar4 + 0x3d0), lVar4 != 0)) {
          plVar6 = *(long **)(lVar4 + 0x28);
          if (cVar1 == '\0') {
            uVar5 = System_Int32__ToString(&iStack_24,0);
            uVar3 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
            uVar5 = System_String__Concat(uVar5,_Str__,uVar3,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar4 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar4 = *plVar6;
            uVar5 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar4 + 0x5a8))(plVar6,uVar5,*(undefined8 *)(lVar4 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar4,0);
            return;
          }
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void IGOLHIKAMHI() { }   @0xae5408

/* WARNING: Removing unreachable block (ram,0x0149380c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Removing unreachable block (ram,0x01493814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__IGOLHIKAMHI(void *__this)

{
  int iVar1;
  void *__this_00;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001916e4a & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e4a = 1;
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
  if (__this_00 == (void *)0x0) goto LAB_00be56bc;
  iVar1 = DAFNMLEKHAD__HDABOKNLKGK(__this_00);
  if (*(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4) <= iVar1) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
           (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
          uVar5 = *(undefined8 *)(lVar4 + 0x678);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
               (plVar3 = *(long **)(lVar4 + 0x678), plVar3 == (long *)0x0)) goto LAB_00be56bc;
            (**(code **)(*plVar3 + 0x5a8))(plVar3,_Str_,*(undefined8 *)(*plVar3 + 0x5b0));
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
            uVar5 = *(undefined8 *)(lVar4 + 0x670);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                  (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
                 (lVar4 = *(long *)(lVar4 + 0x670), lVar4 == 0)) goto LAB_00be56bc;
              UnityEngine_GameObject__SetActive(lVar4,0,0);
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (uVar2 = *(ulong *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), uVar2 != 0)) {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar2;
              if (*(long *)(uVar2 + 0x668) != 0) {
                auVar6 = ZEXT816(0);
                if (*(long *)(uVar2 + 0x670) != 0) {
                  lVar4 = *(long *)(*(long *)(uVar2 + 0x668) + 0x20);
                  auVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(uVar2 + 0x670),0);
                  if (lVar4 != 0) {
                    UnityEngine_RectTransform__get_sizeDelta(lVar4,0,0);
                    UnityEngine_RectTransform__GetParentSize(lVar4);
                    UnityEngine_RectTransform__get_anchorMax(lVar4);
                    UnityEngine_RectTransform__get_anchorMin(lVar4);
                    if (pcRam000000000191c810 == (code *)0x0) {
                      pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
                    }
                    (*pcRam000000000191c810)(lVar4,&stack0xffffffffffffffe8);
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(auVar6._0_8_,auVar6._8_8_);
            }
          }
        }
      }
LAB_00be56bc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}



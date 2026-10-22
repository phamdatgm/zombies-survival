// ==== public void AFCKJABEJKI() { }   @0xae56c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__AFCKJABEJKI(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  double dVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  int iStack_4c;
  undefined8 uStack_48;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000001916e44 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str_fuel_time__);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_CheckFuelForRefresh__Fuel__);
    func_0x00a67900(&Str_total_seconds__);
    func_0x00a67900(&Str___parsed__);
    func_0x00a67900(&Str___fuel_add__);
    func_0x00a67900(&Str___max__);
    bRam0000000001916e44 = 1;
  }
  uStack_48 = 0;
  iStack_38 = 0;
  iStack_4c = 0;
  uStack_58 = 0;
  if ((**(char **)(_FuelManager_TypeInfo + 0xb8) != '\0') ||
     (*(char *)((long)__this + 0x20) == '\0')) {
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
  if (lVar4 != 0) {
    uStack_34 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
    uVar5 = System_Int32__ToString(&uStack_34,0);
    uVar6 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
    pvVar7 = (void *)System_String__Concat
                               (_Str_CheckFuelForRefresh__Fuel__,uVar5,_Str___max__,uVar6,0);
    Main__GEMDEAMAGPG(pvVar7,false);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 != 0) {
      iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
      if (*(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4) <= iVar2) {
        FuelManager__KPOIGAIGJGL(__this);
        goto LAB_00be5c10;
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
      if (lVar4 != 0) {
        uVar5 = DAFNMLEKHAD__AFDIIKEDILD(lVar4,0);
        if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
        }
        uVar6 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_DateTime_TypeInfo);
        }
        uStack_48 = System_DateTime__ParseExact(uVar5,_Str_G,uVar6,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar4 != 0) {
          uVar5 = DAFNMLEKHAD__AFDIIKEDILD(lVar4,0);
          uVar6 = System_DateTime__ToString(&uStack_48,0);
          pvVar7 = (void *)System_String__Concat(_Str_fuel_time__,uVar5,_Str___parsed__,uVar6,0);
          Main__GEMDEAMAGPG(pvVar7,false);
          uVar5 = System_DateTime__get_Now(0);
          uStack_58 = System_DateTime__op_Subtraction(uVar5,uStack_48,0);
          if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_TimeSpan_TypeInfo);
          }
          dVar8 = (double)System_TimeSpan__get_TotalSeconds(&uStack_58,0);
          iVar2 = -0x80000000;
          if (dVar8 != INFINITY) {
            iVar2 = (int)dVar8;
          }
          iStack_38 = iVar2;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,iVar2,0);
          iStack_4c = iVar2 / 600;
          uStack_60 = uStack_78;
          uStack_68 = uStack_80;
          uStack_70 = uStack_88;
          *(undefined4 *)((long)__this + 0x34) = uStack_78;
          *(undefined8 *)((long)__this + 0x2c) = uStack_80;
          *(undefined8 *)((long)__this + 0x24) = uStack_88;
          uVar5 = System_Int32__ToString(&iStack_38,0);
          uVar6 = System_Int32__ToString(&iStack_4c,0);
          pvVar7 = (void *)System_String__Concat
                                     (_Str_total_seconds__,uVar5,_Str___fuel_add__,uVar6,0);
          Main__GEMDEAMAGPG(pvVar7,false);
          iVar2 = iStack_38;
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
          if (lVar4 != 0) {
            iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
            iVar1 = *(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4);
            if (iStack_4c + iVar3 < iVar1) {
              if (0 < iStack_4c) {
                FuelManager__PNAAGCJLMLB(__this,iStack_4c,0);
              }
              FuelManager__MLLMOHIBFMC
                        (__this,iVar2 - 600U & ((int)(iVar2 - 600U) >> 0x1f ^ 0xffffffffU));
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
              if (lVar4 == 0) goto LAB_00be5c2c;
              iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
              FuelManager__PNAAGCJLMLB(__this,iVar1 - iVar2,0);
            }
LAB_00be5c10:
            FuelManager__IGOLHIKAMHI();
            return;
          }
        }
      }
    }
  }
LAB_00be5c2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xae6878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__Start(void *__this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  
  if ((bRam0000000001916e47 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e47 = 1;
  }
  *(undefined1 *)((long)__this + 0x20) = 1;
  if (**(char **)(_FuelManager_TypeInfo + 0xb8) != '\0') {
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
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x70);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = System_DateTime__get_Now(0);
  bVar2 = System_DateTime__op_GreaterThan(uVar7,uVar4,0);
  lVar5 = *(long *)(_FuelManager_TypeInfo + 0xb8);
  *(byte *)(lVar5 + 1) = bVar2 & 1;
  *(undefined4 *)(lVar5 + 4) = 0x18;
  if (*(char *)((long)__this + 0x20) == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI(__this);
  uStack_24 = 0xffffffff;
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 != 0) {
    uStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
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
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        cVar1 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x3d0), lVar5 != 0)) {
          plVar6 = *(long **)(lVar5 + 0x28);
          if (cVar1 == '\0') {
            uVar7 = System_Int32__ToString(&uStack_24,0);
            uVar4 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
            uVar7 = System_String__Concat(uVar7,_Str__,uVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
            uVar7 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar5 + 0x5a8))(plVar6,uVar7,*(undefined8 *)(lVar5 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar5,0);
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


// ==== public void OBAELOECFBH() { }   @0xae6888

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__OBAELOECFBH(void *__this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e49 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e49 = 1;
  }
  if ((**(char **)(_FuelManager_TypeInfo + 0xb8) != '\0') ||
     ((*(char **)(_FuelManager_TypeInfo + 0xb8))[1] != '\0')) {
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
  if (lVar6 == 0) {
LAB_00be6b08:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  DAFNMLEKHAD__OPFBHOGMKNG(lVar6,iVar2 + -1,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00be6b08;
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
         (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0))
      goto LAB_00be6b08;
      uVar7 = *(undefined8 *)(lVar6 + 0x3d8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x3d8), lVar6 == 0)) goto LAB_00be6b08;
        GUICoins__ICMOCEHIFOI(lVar6,0xffffffff,0);
      }
    }
  }
  FuelManager__MLLMOHIBFMC(__this,0);
  FuelManager__DJOELCKFNBO(__this);
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
  if (lVar6 == 0) goto LAB_00be6b08;
  iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
  }
  if (iVar2 == -1) {
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
    if (lVar6 == 0) goto LAB_00be4b00;
    DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  }
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
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
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
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0)) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3d0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      cVar1 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x3d0), lVar6 != 0)) {
        plVar5 = *(long **)(lVar6 + 0x28);
        if (cVar1 == '\0') {
          uVar7 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
          uVar3 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
          uVar7 = System_String__Concat(uVar7,_Str__,uVar3,0);
          if (plVar5 == (long *)0x0) goto LAB_00be4b00;
          lVar6 = *plVar5;
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_00be4b00;
          lVar6 = *plVar5;
          uVar7 = _Str__size_65____size___size_65____size_;
        }
        (**(code **)(lVar6 + 0x5a8))(plVar5,uVar7,*(undefined8 *)(lVar6 + 0x5b0));
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0)) {
          GUIGarage__NFJNJCLENFD(lVar6,0);
          return;
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void KPOIGAIGJGL() { }   @0xae4fa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__KPOIGAIGJGL(void *__this)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000001916e42 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Stop_Timer);
    bRam0000000001916e42 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_Stop_Timer,0,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_58,600,0);
  *(undefined4 *)((long)__this + 0x34) = uStack_48;
  *(undefined8 *)((long)__this + 0x2c) = uStack_50;
  *(undefined8 *)((long)__this + 0x24) = uStack_58;
  return;
}


// ==== private void DJOELCKFNBO() { }   @0xae504c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__DJOELCKFNBO(void *__this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *__this_00;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  double dStack_38;
  
  if ((bRam0000000001916e46 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_time_full_refresh__);
    func_0x00a67900(&Str_fuel);
    func_0x00a67900(&Str___Notifications_in__);
    func_0x00a67900(&Str_FUEL_REFRESHED);
    bRam0000000001916e46 = 1;
  }
  uStack_40 = 0;
  dStack_38 = 0.0;
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
    bVar2 = DAFNMLEKHAD__PHOGLOAEGLO(__this_00);
    if (!bVar2) {
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
      iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
      iVar1 = *(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4);
      if (iVar1 <= iVar3) {
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
        iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
        uStack_58 = *(undefined8 *)((long)__this + 0x2c);
        uStack_60 = *(undefined8 *)((long)__this + 0x24);
        uStack_50 = *(undefined4 *)((long)__this + 0x34);
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
        dStack_38 = (double)((iVar1 - iVar3) * 600 - iVar4);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar5 != 0) {
          uVar6 = DAFNMLEKHAD__AFDIIKEDILD(lVar5,0);
          if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
          }
          uVar7 = System_Globalization_CultureInfo__get_CurrentCulture(0);
          if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_DateTime_TypeInfo);
          }
          uStack_40 = System_DateTime__ParseExact(uVar6,_Str_G,uVar7,0);
          uStack_40 = System_DateTime__AddSeconds(dStack_38,&uStack_40,0);
          uVar6 = System_Double__ToString(&dStack_38,0);
          uVar7 = System_DateTime__ToString(&uStack_40,0);
          uVar6 = System_String__Concat
                            (_Str_time_full_refresh__,uVar6,_Str___Notifications_in__,uVar7,0);
          Main__GEMDEAMAGPG(uVar6,0,0);
          uVar6 = uStack_40;
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
            uVar7 = Translate__JJJNIPAKLJF
                              (**(long **)(_Translate_TypeInfo + 0xb8),_Str_FUEL_REFRESHED,0);
            if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_NotificationsManager_TypeInfo);
            }
            NotificationsManager__KJLOEDMCBNA(uVar6,uVar7,_Str_fuel,3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnEnable() { }   @0xae6884

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__OnEnable(void *__this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uStack_24;
  
  if (*(char *)((long)__this + 0x20) == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI();
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    uStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar2,0);
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
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 != 0)) {
        uVar5 = *(undefined8 *)(lVar2 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        cVar1 = *(char *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x3d0), lVar2 != 0)) {
          plVar6 = *(long **)(lVar2 + 0x28);
          if (cVar1 == '\0') {
            uVar5 = System_Int32__ToString(&uStack_24,0);
            uVar4 = System_Int32__ToString(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4,0);
            uVar5 = System_String__Concat(uVar5,_Str__,uVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar2 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar2 = *plVar6;
            uVar5 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar2 + 0x5a8))(plVar6,uVar5,*(undefined8 *)(lVar2 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar2,0);
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



// ==== public void NGBCNBFIMFC(int ICGGFAKJHGN = -1) { }   @0xae4860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__NGBCNBFIMFC(void *__this,int ICGGFAKJHGN)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iStack_24;
  
  iStack_24 = ICGGFAKJHGN;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
  }
  if (ICGGFAKJHGN == -1) {
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
    if (lVar2 == 0) goto LAB_00be4b00;
    iStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar2,0);
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
          uVar5 = System_Int32__ToString(&iStack_24,0);
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
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CNNAILDHIMN() { }   @0xae6720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__CNNAILDHIMN(void *__this)

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


// ==== private void MLLMOHIBFMC(int ILPEALLOJNJ) { }   @0xae5c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__MLLMOHIBFMC(void *__this,int ILPEALLOJNJ)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_28;
  
  if ((bRam0000000001916e48 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_StartTimer__);
    func_0x00a67900(&Str_StartTimer_not_start__);
    bRam0000000001916e48 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_60 = *(undefined4 *)((long)__this + 0x34);
  uStack_68 = *(undefined8 *)((long)__this + 0x2c);
  uStack_70 = *(undefined8 *)((long)__this + 0x24);
  puVar1 = (undefined8 *)((long)__this + 0x24);
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
  if (iVar2 != 0) {
    uStack_80 = *(undefined4 *)((long)__this + 0x34);
    uStack_88 = *(undefined8 *)((long)__this + 0x2c);
    uStack_90 = *puVar1;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
    if (iVar2 < 600) {
      uStack_40 = *(undefined4 *)((long)__this + 0x34);
      uStack_48 = *(undefined8 *)((long)__this + 0x2c);
      uStack_50 = *puVar1;
      uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
      uVar3 = System_String__Concat(_Str_StartTimer_not_start__,uVar3,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar3,0,0);
      return;
    }
  }
  uStack_40 = *(undefined4 *)((long)__this + 0x34);
  uStack_48 = *(undefined8 *)((long)__this + 0x2c);
  uStack_50 = *puVar1;
  uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
  uVar3 = System_String__Concat(_Str_StartTimer__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar3,0,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c8,ILPEALLOJNJ,0);
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  *(undefined4 *)((long)__this + 0x34) = uStack_b8;
  *(undefined8 *)((long)__this + 0x2c) = uStack_c0;
  *puVar1 = uStack_c8;
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_28 = System_DateTime__get_Now(0);
  uStack_28 = System_DateTime__AddSeconds((double)-ILPEALLOJNJ,&uStack_28,0);
  uVar3 = System_DateTime__ToString(&uStack_28,0);
  if (lVar4 != 0) {
    DAFNMLEKHAD__KGEAALNFELC(lVar4,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



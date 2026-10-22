// ==== public void PNAAGCJLMLB(int ALLBGCHDGNC, bool DHJBFBDKNJE) { }   @0xae4b04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__PNAAGCJLMLB(void *__this,int ALLBGCHDGNC,bool DHJBFBDKNJE)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__this_00;
  int iStack_34;
  
  iStack_34 = ALLBGCHDGNC;
  if ((bRam0000000001916e41 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Increase_Fuel__);
    func_0x00a67900(&Str_fuel);
    bRam0000000001916e41 = 1;
  }
  uVar2 = System_Int32__ToString(&iStack_34,0);
  uVar2 = System_String__Concat(_Str_Increase_Fuel__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar2,0,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (__this_00 != (void *)0x0) {
    iVar1 = DAFNMLEKHAD__HDABOKNLKGK(__this_00,0);
    DAFNMLEKHAD__OPFBHOGMKNG(__this_00,iStack_34 + iVar1);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      iVar1 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
      if (iVar1 < *(int *)(*(long *)(_FuelManager_TypeInfo + 0xb8) + 4)) {
        if (DHJBFBDKNJE) {
          FuelManager__DJOELCKFNBO(__this);
        }
      }
      else {
        FuelManager__KPOIGAIGJGL(__this);
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
        if (lVar3 == 0) goto LAB_00be4fa4;
        uVar4 = DAFNMLEKHAD__PHOGLOAEGLO(lVar3,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,1,0);
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
LAB_00be4f8c:
        FuelManager__IGOLHIKAMHI();
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar4 & 1) == 0) goto LAB_00be4f8c;
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
        if (lVar3 != 0) {
          uVar4 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
          FuelManager__NGBCNBFIMFC(uVar4,uVar4 & 0xffffffff);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) {
            uVar2 = *(undefined8 *)(lVar3 + 0x3d0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                  (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0)) ||
                 (lVar3 = *(long *)(lVar3 + 0x3d0), lVar3 == 0)) goto LAB_00be4fa4;
              GUICoins__ICMOCEHIFOI(lVar3,0);
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
            if (lVar3 != 0) {
              iVar1 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
              if (iVar1 == 0) {
                uVar2 = **(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0))
                goto LAB_00be4fa4;
                uVar5 = *(undefined8 *)(lVar3 + 0x78);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = UnityEngine_Object__op_Equality(uVar2,uVar5,0);
                if ((uVar4 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00be4fa4;
                  Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
                }
              }
              goto LAB_00be4f8c;
            }
          }
        }
      }
    }
  }
LAB_00be4fa4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NALMHNPBAAF() { }   @0xae671c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__NALMHNPBAAF(void *__this)

{
  return;
}


// ==== public void .ctor() { }   @0xae687c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



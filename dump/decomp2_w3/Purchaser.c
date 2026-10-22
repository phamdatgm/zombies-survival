// ==== private void AGBLHKIPEKA() { }   @0xb02cc8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__AGBLHKIPEKA(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916f42 & 1) == 0) {
    func_0x00a67900(&System_Decimal_TypeInfo);
    func_0x00a67900(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Purchaser_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___price_int);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str___iso__);
    func_0x00a67900(&Str___product_transactionID__);
    bRam0000000001916f42 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c03100:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x650), lVar4 == 0)) goto LAB_00c03100;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) goto LAB_00c03104;
          lVar11 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_00c03100;
          uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar11 + 0x20),0);
          if (((uVar2 & 1) == 0) && ((*(uint *)(lVar11 + 0x2c) | 2) == 3)) {
            if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            plVar9 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
            if (plVar9 == (long *)0x0) goto LAB_00c03100;
            lVar5 = *plVar9;
            uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_00c02f24;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_Purchasing_IStoreController_TypeInfo,0);
LAB_00c02f24:
            lVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
            if (lVar5 == 0) goto LAB_00c03100;
            lVar5 = UnityEngine_Purchasing_ProductCollection__WithID
                              (lVar5,*(undefined8 *)(lVar11 + 0x20),0);
            if (lVar5 != 0) {
              uVar8 = *(undefined8 *)(lVar11 + 0x40);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
              if ((uVar2 & 1) != 0) {
                if ((*(long *)(lVar5 + 0x18) == 0) ||
                   (plVar9 = *(long **)(lVar11 + 0x40), plVar9 == (long *)0x0)) goto LAB_00c03100;
                (**(code **)(*plVar9 + 0x5a8))
                          (plVar9,*(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10),
                           *(undefined8 *)(*plVar9 + 0x5b0));
                lVar11 = func_0x00a679a0(_string___TypeInfo,9);
                if ((*(long *)(lVar5 + 0x18) == 0) || (lVar11 == 0)) goto LAB_00c03100;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if ((uVar1 == 0) ||
                   (*(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18)
                   , uVar1 == 1)) {
LAB_00c03104:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar11 + 0x28) = _Str___;
                if (*(long *)(lVar5 + 0x18) == 0) goto LAB_00c03100;
                if ((uVar1 < 3) ||
                   (*(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10)
                   , uVar1 == 3)) goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x38) = _Str___price_int;
                lVar6 = *(long *)(lVar5 + 0x18);
                if (lVar6 == 0) goto LAB_00c03100;
                uStack_68 = *(undefined8 *)(lVar6 + 0x38);
                uStack_70 = *(undefined8 *)(lVar6 + 0x30);
                if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = System_Decimal__ToString(&uStack_70,0);
                uVar1 = *(uint *)(lVar11 + 0x18);
                if ((uVar1 < 5) || (*(undefined8 *)(lVar11 + 0x40) = uVar8, uVar1 == 5))
                goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x48) = _Str___iso__;
                if (*(long *)(lVar5 + 0x18) == 0) goto LAB_00c03100;
                if (((uVar1 < 7) ||
                    (*(undefined8 *)(lVar11 + 0x50) =
                          *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x28), uVar1 == 7)) ||
                   (*(undefined8 *)(lVar11 + 0x58) = _Str___product_transactionID__, uVar1 < 9))
                goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(lVar5 + 0x28);
                uVar8 = System_String__Concat(lVar11,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar8,0,0);
              }
            }
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
    }
  }
  return;
}


// ==== public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB, string NGLPJEMCGCD) { }   @0xb0398c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__OnInitializeFailed(void *__this,int AKEODMCLILB,void *NGLPJEMCGCD)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__this_00;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  uVar2 = func_0x00a67914(&Str_OnInitializeFailed__,AKEODMCLILB);
  uVar2 = System_String__Concat(uVar2,NGLPJEMCGCD,0);
  func_0x00a67914(&Main_TypeInfo);
  func_0x009bc3b0();
  Main__EEKNCFLMGDP(uVar2,0);
  func_0x00a67914(&System_NotImplementedException_TypeInfo);
  uVar2 = func_0x00a67b44();
  System_NotImplementedException___ctor(uVar2,0);
  uVar3 = func_0x00a67914(&Method_Purchaser_OnInitializeFailed__);
  auVar10 = func_0x00a67a20(uVar2,uVar3);
  if ((bRam0000000001916f47 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&UnityEngine_Purchasing_IStoreController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Purchaser_TypeInfo);
    func_0x00a67900(&Str_start____);
    func_0x00a67900(&Str_end____);
    func_0x00a67900(&Str_product__);
    func_0x00a67900(&Str___is_can_buy__);
    func_0x00a67900(&Str_BuyProductID__FAIL__Not_purchasing_produ);
    func_0x00a67900(&Str_BuyProductID__);
    func_0x00a67900(&Str_BuyProductID_FAIL__Not_initialized_);
    bRam0000000001916f47 = 1;
  }
  if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Boolean__ToString(*(undefined8 *)(_Purchaser_TypeInfo + 0xb8),0);
  uVar2 = System_String__Concat(_Str_BuyProductID__,auVar10._8_8_,_Str___is_can_buy__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  __this_00 = (void *)Main__GEMDEAMAGPG(uVar2,0,0);
  if (**(char **)(_Purchaser_TypeInfo + 0xb8) != '\0') {
    *(undefined1 *)(auVar10._0_8_ + 0x28) = 1;
    bVar1 = Purchaser__FGJALJLPMEN(__this_00);
    if (bVar1) {
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_start____,0,0);
      plVar8 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00c03c3c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar8,_UnityEngine_Purchasing_IStoreController_TypeInfo,0);
LAB_00c03c3c:
      lVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      plVar8 = (long *)UnityEngine_Purchasing_ProductCollection__WithID(lVar5,auVar10._8_8_,0);
      uVar2 = _Str_product__;
      if (plVar8 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      uVar2 = System_String__Concat(uVar2,uVar3,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(uVar2,0,0);
      if ((plVar8 == (long *)0x0) || ((char)plVar8[4] == '\0')) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_BuyProductID__FAIL__Not_purchasing_produ,0);
      }
      else {
        if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar9 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar5 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00c03d5c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 func_0x00a9e6c4(plVar9,_UnityEngine_Purchasing_IStoreController_TypeInfo,1);
LAB_00c03d5c:
        (*(code *)*puVar4)(plVar9,plVar8,puVar4[1]);
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_end____,0,0);
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_BuyProductID_FAIL__Not_initialized_,0);
    }
  }
  return;
}


// ==== public bool FGJALJLPMEN() { }   @0xb036d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Purchaser__FGJALJLPMEN(void *__this)

{
  bool bVar1;
  long lVar2;
  
  if ((bRam0000000001916f4a & 1) == 0) {
    func_0x00a67900(&Purchaser_TypeInfo);
    bRam0000000001916f4a = 1;
  }
  if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(_Purchaser_TypeInfo + 0xb8);
  if (*(long *)(lVar2 + 8) == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = *(long *)(_Purchaser_TypeInfo + 0xb8);
    }
    bVar1 = *(long *)(lVar2 + 0x10) != 0;
  }
  return bVar1;
}



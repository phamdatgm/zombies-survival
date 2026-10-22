// ==== public void .ctor() { }   @0xb02b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser___ctor(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001916f40 & 1) == 0) {
    func_0x00a67900(&Str_production);
    func_0x00a67900(&Str_);
    bRam0000000001916f40 = 1;
  }
  uVar1 = _Str_;
  *(undefined8 *)((long)__this + 0x20) = _Str_;
  uVar2 = _Str_production;
  *(undefined8 *)((long)__this + 0x30) = uVar1;
  *(undefined8 *)((long)__this + 0x38) = uVar2;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void CDCHAPHGJOJ() { }   @0xb0375c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__CDCHAPHGJOJ(void *__this)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000001916f45 & 1) == 0) {
    func_0x00a67900(&
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_Purchaser_EG
                   );
    bRam0000000001916f45 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_38 = (void *)0x0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&uStack_80,0);
  uStack_50 = uStack_78;
  uStack_58 = uStack_80;
  uStack_40 = uStack_68;
  uStack_48 = uStack_70;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  pvStack_38 = __this;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start___Il2CppFullySharedGenericType_
            ((ulong)&uStack_60 | 8,&uStack_60,
             _Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start_Purchaser_EG);
  return;
}


// ==== public void EHGPGMBHPKL() { }   @0xb03f8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__EHGPGMBHPKL(void *__this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined1 *)((long)__this + 0x29) = 0;
  Purchaser__MCDMAJGFBLE();
  uVar5 = Purchaser__FGJALJLPMEN();
  if ((uVar5 & 1) == 0) {
    if ((bRam0000000001916f43 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Application_TypeInfo);
      func_0x00a67900(&Method_System_Array_Empty_IPurchasingModule___);
      func_0x00a67900(&CGFJBBIFAFO_TypeInfo);
      func_0x00a67900(&UnityEngine_Purchasing_Security_CrossPlatformValidator_TypeInfo);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Purchaser_TypeInfo);
      func_0x00a67900(&UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo);
      func_0x00a67900(&Str_InitializePurchasing_is_starting___);
      func_0x00a67900(&Str_InitializePurchasing_is_finish___);
      func_0x00a67900(&Str_CrossPlatformValidator__OK);
      bRam0000000001916f43 = 1;
    }
    Purchaser__MCDMAJGFBLE(__this);
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8) == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_starting___,0,0);
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 1;
      uVar5 = Purchaser__FGJALJLPMEN();
      if ((uVar5 & 1) == 0) {
        Purchaser__CDCHAPHGJOJ(__this);
        if (*(int *)(_CGFJBBIFAFO_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar10 = CGFJBBIFAFO__OEFNJAFHKFK(0);
        if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Application__get_identifier(0);
        uVar4 = func_0x00a67b44(_UnityEngine_Purchasing_Security_CrossPlatformValidator_TypeInfo);
        UnityEngine_Purchasing_Security_CrossPlatformValidator___ctor(uVar4,uVar10,0,uVar3,0);
        *(undefined8 *)((long)__this + 0x40) = uVar4;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_CrossPlatformValidator__OK,0,0);
        if (*(int *)(_UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar10 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0);
        uVar3 = UnityEngine_Purchasing_ProductCatalog__LoadDefaultCatalog(0);
        lVar6 = _Method_System_Array_Empty_IPurchasingModule___;
        lVar13 = *(long *)(_Method_System_Array_Empty_IPurchasingModule___ + 0x38);
        if (lVar13 == 0) {
          func_0x00a9e42c(_Method_System_Array_Empty_IPurchasingModule___);
          lVar13 = *(long *)(lVar6 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x00a9e3d0();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x00a9e3d0();
        }
        uVar10 = UnityEngine_Purchasing_ConfigurationBuilder__Instance
                           (uVar10,**(undefined8 **)(lVar6 + 0xb8),0);
        UnityEngine_Purchasing_IAPConfigurationHelper__PopulateConfigurationBuilder
                  (&stack0xffffffffffffffc8,uVar3,0);
        UnityEngine_Purchasing_UnityPurchasing__Initialize(__this,uVar10,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_finish___,0,0);
      }
    }
    return;
  }
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
  uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c03100:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x650), lVar6 == 0)) goto LAB_00c03100;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) goto LAB_00c03104;
          lVar13 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_00c03100;
          uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar13 + 0x20),0);
          if (((uVar5 & 1) == 0) && ((*(uint *)(lVar13 + 0x2c) | 2) == 3)) {
            if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            plVar11 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
            if (plVar11 == (long *)0x0) goto LAB_00c03100;
            lVar7 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
                  puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_00c02f24;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined8 *)
                     func_0x00a9e6c4(plVar11,_UnityEngine_Purchasing_IStoreController_TypeInfo,0);
LAB_00c02f24:
            lVar7 = (*(code *)*puVar2)(plVar11,puVar2[1]);
            if (lVar7 == 0) goto LAB_00c03100;
            lVar7 = UnityEngine_Purchasing_ProductCollection__WithID
                              (lVar7,*(undefined8 *)(lVar13 + 0x20),0);
            if (lVar7 != 0) {
              uVar10 = *(undefined8 *)(lVar13 + 0x40);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
              if ((uVar5 & 1) != 0) {
                if ((*(long *)(lVar7 + 0x18) == 0) ||
                   (plVar11 = *(long **)(lVar13 + 0x40), plVar11 == (long *)0x0)) goto LAB_00c03100;
                (**(code **)(*plVar11 + 0x5a8))
                          (plVar11,*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10),
                           *(undefined8 *)(*plVar11 + 0x5b0));
                lVar13 = func_0x00a679a0(_string___TypeInfo,9);
                if ((*(long *)(lVar7 + 0x18) == 0) || (lVar13 == 0)) goto LAB_00c03100;
                uVar1 = *(uint *)(lVar13 + 0x18);
                if ((uVar1 == 0) ||
                   (*(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18)
                   , uVar1 == 1)) {
LAB_00c03104:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar13 + 0x28) = _Str___;
                if (*(long *)(lVar7 + 0x18) == 0) goto LAB_00c03100;
                if ((uVar1 < 3) ||
                   (*(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10)
                   , uVar1 == 3)) goto LAB_00c03104;
                *(undefined8 *)(lVar13 + 0x38) = _Str___price_int;
                lVar8 = *(long *)(lVar7 + 0x18);
                if (lVar8 == 0) goto LAB_00c03100;
                uStack_68 = *(undefined8 *)(lVar8 + 0x38);
                uStack_70 = *(undefined8 *)(lVar8 + 0x30);
                if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar10 = System_Decimal__ToString(&uStack_70,0);
                uVar1 = *(uint *)(lVar13 + 0x18);
                if ((uVar1 < 5) || (*(undefined8 *)(lVar13 + 0x40) = uVar10, uVar1 == 5))
                goto LAB_00c03104;
                *(undefined8 *)(lVar13 + 0x48) = _Str___iso__;
                if (*(long *)(lVar7 + 0x18) == 0) goto LAB_00c03100;
                if (((uVar1 < 7) ||
                    (*(undefined8 *)(lVar13 + 0x50) =
                          *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x28), uVar1 == 7)) ||
                   (*(undefined8 *)(lVar13 + 0x58) = _Str___product_transactionID__, uVar1 < 9))
                goto LAB_00c03104;
                *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar7 + 0x28);
                uVar10 = System_String__Concat(lVar13,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar10,0,0);
              }
            }
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
    }
  }
  return;
}


// ==== private static void .cctor() { }   @0xb0434c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser___cctor(void)

{
  if ((bRam0000000001916f4d & 1) == 0) {
    func_0x00a67900(&Purchaser_TypeInfo);
    bRam0000000001916f4d = 1;
  }
  **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 1;
  return;
}



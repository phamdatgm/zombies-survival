// ==== public void KHDFDGMBOIJ() { }   @0xb03108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__KHDFDGMBOIJ(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_38;
  
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
  uStack_38 = 0;
  Purchaser__MCDMAJGFBLE(__this);
  if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_starting___,false);
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 1;
    uVar1 = Purchaser__FGJALJLPMEN();
    if ((uVar1 & 1) == 0) {
      Purchaser__CDCHAPHGJOJ(__this);
      if (*(int *)(_CGFJBBIFAFO_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = CGFJBBIFAFO__OEFNJAFHKFK(0);
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Application__get_identifier(0);
      uVar4 = func_0x00a67b44(_UnityEngine_Purchasing_Security_CrossPlatformValidator_TypeInfo);
      UnityEngine_Purchasing_Security_CrossPlatformValidator___ctor(uVar4,uVar2,0,uVar3,0);
      *(undefined8 *)((long)__this + 0x40) = uVar4;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_CrossPlatformValidator__OK,false);
      if (*(int *)(_UnityEngine_Purchasing_StandardPurchasingModule_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Purchasing_StandardPurchasingModule__Instance(0);
      uVar3 = UnityEngine_Purchasing_ProductCatalog__LoadDefaultCatalog(0);
      lVar5 = _Method_System_Array_Empty_IPurchasingModule___;
      lVar6 = *(long *)(_Method_System_Array_Empty_IPurchasingModule___ + 0x38);
      if (lVar6 == 0) {
        func_0x00a9e42c(_Method_System_Array_Empty_IPurchasingModule___);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = func_0x00a9e3d0();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = func_0x00a9e3d0();
      }
      uStack_38 = UnityEngine_Purchasing_ConfigurationBuilder__Instance
                            (uVar2,**(undefined8 **)(lVar5 + 0xb8),0);
      UnityEngine_Purchasing_IAPConfigurationHelper__PopulateConfigurationBuilder
                (&uStack_38,uVar3,0);
      UnityEngine_Purchasing_UnityPurchasing__Initialize(__this,uStack_38,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_finish___,false);
    }
  }
  return;
}


// ==== public void AEEDBGLDLIN(string CICIFFFOBLK) { }   @0xb03a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__AEEDBGLDLIN(void *__this,void *CICIFFFOBLK)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
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
  uVar1 = System_Boolean__ToString(*(undefined8 *)(_Purchaser_TypeInfo + 0xb8),0);
  pvVar2 = (void *)System_String__Concat
                             (_Str_BuyProductID__,CICIFFFOBLK,_Str___is_can_buy__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar2,false);
  if (**(char **)(_Purchaser_TypeInfo + 0xb8) != '\0') {
    *(undefined1 *)((long)__this + 0x28) = 1;
    uVar3 = Purchaser__FGJALJLPMEN();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_BuyProductID_FAIL__Not_initialized_,0);
    }
    else {
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_start____,false);
      plVar8 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00c03c3c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               func_0x00a9e6c4(plVar8,_UnityEngine_Purchasing_IStoreController_TypeInfo,0);
LAB_00c03c3c:
      lVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      plVar8 = (long *)UnityEngine_Purchasing_ProductCollection__WithID(lVar6,CICIFFFOBLK,0);
      uVar1 = _Str_product__;
      if (plVar8 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      pvVar2 = (void *)System_String__Concat(uVar1,uVar5,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(pvVar2,false);
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
        lVar6 = *plVar9;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00c03d5c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 func_0x00a9e6c4(plVar9,_UnityEngine_Purchasing_IStoreController_TypeInfo,1);
LAB_00c03d5c:
        (*(code *)*puVar4)(plVar9,plVar8,puVar4[1]);
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_end____,false);
    }
  }
  return;
}


// ==== public void OnPurchaseFailed(Product PMCDAMDANFC, PurchaseFailureReason CDNGEEFJBHH) { }   @0xb03fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__OnPurchaseFailed(void *__this,void *PMCDAMDANFC,int CDNGEEFJBHH)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iStack_34;
  
  if ((bRam0000000001916f4b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo);
    func_0x00a67900(&Purchaser_TypeInfo);
    __this = (void *)func_0x00a67900(&Str_OnPurchaseFailed__FAIL__Product____0____);
    bRam0000000001916f4b = 1;
  }
  if ((PMCDAMDANFC != (void *)0x0) && (*(long *)((long)PMCDAMDANFC + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)((long)PMCDAMDANFC + 0x10) + 0x18);
    iStack_34 = CDNGEEFJBHH;
    uVar1 = func_0x00a67a38(_UnityEngine_Purchasing_PurchaseFailureReason_TypeInfo,&iStack_34);
    uVar1 = System_String__Format(_Str_OnPurchaseFailed__FAIL__Product____0____,uVar2,uVar1,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar1,0);
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class Purchaser : MonoBehaviour, IStoreListener // TypeDefIndex: 5144
{
	// Fields
	public string CPKEHBIPNGJ; // 0x20
	public static bool PBCPPFALIJJ; // 0x0
	private bool MCJPHMJFONO; // 0x28
	private bool KOEBBIOEINO; // 0x29
	private string HDONDELGHBK; // 0x30
	public const string KADAPHLKJHN = "goldpack_1";
	public const string JIEMFBFFIBM = "goldpack_2";
	public const string JJKLLNBIJCC = "goldpack_3";
	public const string DFEHMFEDNBK = "goldpack_4";
	public const string EMCLEKPKENF = "goldpack_5";
	public const string JNGPDCLJKJN = "specialoffer_1";
	public const string KGJKAAKAMBA = "specialoffer_2";
	public const string GBMNAICIJAO = "specialoffer_3";
	public const string HPNONKOBNKN = "specialoffer_4";
	public const string IHGCKJNLBGM = "specialoffer_5";
	private static IStoreController FBFHOHCBLHM; // 0x8
	private static IExtensionProvider LBKDBMGHJLI; // 0x10
	public string GGADCIPGKOL; // 0x38
	private CrossPlatformValidator NMCDBIEKCMM; // 0x40
	private bool GAMMKMFMNJB; // 0x48

	// Methods

	public void .ctor() { }

	public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB) { }

	private void AGBLHKIPEKA() { }

	public void KHDFDGMBOIJ() { }

	private void JCHHHBFEOBD(bool GDMHLJECAJK) { }

	[AsyncStateMachine(typeof(Purchaser.EGHDFLLEDAF))]
	private void CDCHAPHGJOJ() { }

	public void GFBPGOLOCCK() { }

	public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB, string NGLPJEMCGCD) { }

	public void AEEDBGLDLIN(string CICIFFFOBLK) { }

	public void OnInitialized(IStoreController DLNBEHFJBGB, IExtensionProvider FNANHEPAKIO) { }

	public void EHGPGMBHPKL() { }

	private void MCDMAJGFBLE() { }

	public bool FGJALJLPMEN() { }

	public void OnPurchaseFailed(Product PMCDAMDANFC, PurchaseFailureReason CDNGEEFJBHH) { }

	private void PKMJJHKCJAM() { }

	private static void .cctor() { }

	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs OHOAJCLLPDH) { }
}
*/

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
  this.CPKEHBIPNGJ = _Str_;
  uVar2 = _Str_production;
  this.HDONDELGHBK = uVar1;
  this.GGADCIPGKOL = uVar2;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void OnInitializeFailed(InitializationFailureReason AKEODMCLILB) { }   @0xb02bfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__OnInitializeFailed(void *__this,int AKEODMCLILB)

{
  undefined8 uVar1;
  void *CIDKMFLFJEJ;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  
  if ((bRam0000000001916f41 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Purchasing_InitializationFailureReason_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_OnInitializeFailed_InitializationFailure);
    bRam0000000001916f41 = 1;
  }
  uStack_48 = _UnityEngine_Purchasing_InitializationFailureReason_TypeInfo;
  uStack_40 = 0xffffffffffffffff;
  iStack_38 = AKEODMCLILB;
  uVar1 = System_Enum__ToString(&uStack_48,0);
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_OnInitializeFailed_InitializationFailure,uVar1,0)
  ;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(CIDKMFLFJEJ);
  return;
}


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
  uVar8 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) {
LAB_00c03100:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
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
            plVar9 = Purchaser.FBFHOHCBLHM;
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
  if (Purchaser.FBFHOHCBLHM == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_starting___,false);
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Purchaser.PBCPPFALIJJ = 1;
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
      this.NMCDBIEKCMM = uVar4;
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


// ==== private void MCDMAJGFBLE() { }   @0xb034b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__MCDMAJGFBLE(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  if ((bRam0000000001916f49 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam0000000001916f49 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) {
LAB_00c036d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (((uVar2 & 1) != 0) && (this.KOEBBIOEINO == '\0')) {
      this.KOEBBIOEINO = 1;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0)) ||
         (lVar3 = *(long *)(lVar3 + 0x650), lVar3 == 0)) goto LAB_00c036d0;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar9 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00c036d0;
          uVar6 = *(undefined8 *)(lVar9 + 0x40);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar2 & 1) != 0) {
            puVar4 = (undefined8 *)&Str_;
            if ((*(uint *)(lVar9 + 0x2c) | 2) == 3) {
              puVar4 = (undefined8 *)&Str__;
            }
            plVar5 = *(long **)(lVar9 + 0x40);
            uVar7 = *puVar4;
            uVar6 = System_Single__ToString(lVar9 + 0x34,0);
            uVar6 = System_String__Concat(uVar7,uVar6,0);
            if (plVar5 == (long *)0x0) goto LAB_00c036d0;
            (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x5b0));
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
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
  lVar2 = Purchaser.<statics>;
  if (*(long *)(lVar2 + 8) == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = Purchaser.<statics>;
    }
    bVar1 = *(long *)(lVar2 + 0x10) != 0;
  }
  return bVar1;
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


// ==== private void JCHHHBFEOBD(bool GDMHLJECAJK) { }   @0xb037ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__JCHHHBFEOBD(void *__this,bool GDMHLJECAJK)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916f44 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,GDMHLJECAJK);
    func_0x00a67900(&Str_Transactions_restored_);
    bRam0000000001916f44 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_Transactions_restored_;
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
  lVar6 = Main.FBDDKIOEKDM;
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
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
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
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


// ==== public void GFBPGOLOCCK() { }   @0xb03858

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__GFBPGOLOCCK(void *__this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *__this_00;
  long lVar9;
  undefined4 uStack_3c;
  long *plStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000001916f46 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_RuntimePlatform_TypeInfo);
    func_0x00a67900(&Str_RestorePurchases_FAIL__Not_supported_on_);
    __this = (void *)func_0x00a67900(&Str_RestorePurchases_FAIL__Not_initialized_);
    bRam0000000001916f46 = 1;
  }
  uVar3 = Purchaser__FGJALJLPMEN(__this);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__get_platform(0);
    plStack_38 = _UnityEngine_RuntimePlatform_TypeInfo;
    uStack_30 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString(&plStack_38,0);
    uVar4 = System_String__Concat(_Str_RestorePurchases_FAIL__Not_supported_on_,uVar4,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar4,0,0);
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar5 = _Str_RestorePurchases_FAIL__Not_initialized_;
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
  UnityEngine_Debug__LogError(plVar5,0);
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
  __this_00 = Main.FBDDKIOEKDM;
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
  uVar4 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c5d818;
  uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c5d818;
  lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  if (lVar9 == 0) goto LAB_00c5d818;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar4,1,0);
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
  plVar5 = *(long **)(lVar9 + 0x1e8);
  if ((plVar5 == (long *)0x0) ||
     (lVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar6 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar6 + 0x10)) {
    if (*(long *)(lVar9 + 0x1e8) == 0) goto LAB_00c16768;
    uVar7 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x1e8),0);
    if ((*(long *)(lVar9 + 0x1e8) == 0) ||
       (lVar6 = UnityEngine_Component__get_transform(*(long *)(lVar9 + 0x1e8),0), lVar6 == 0))
    goto LAB_00c16768;
    uVar8 = UnityEngine_Transform__get_parent(lVar6,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar6 = UnityEngine_Object__Instantiate_object_
                      (uVar7,uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar6 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar6,&plStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar9 + 0x1e8) = plStack_38;
    if (plStack_38 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*plStack_38 + 0x5a8))(plStack_38,_Str_,*(undefined8 *)(*plStack_38 + 0x5b0));
  }
  plVar5 = *(long **)(lVar9 + 0x1e8);
  lVar9 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar5 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar9 != 0))
  {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar9 + 0x20) = uVar7, uVar1 != 1 &&
         (*(undefined8 *)(lVar9 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar9 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
      *(undefined8 *)(lVar9 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar7 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar7 = System_String__Format(_Str__0_f2_,uVar7,0);
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar9 + 0x40) = uVar7, uVar1 != 5)) &&
         (*(undefined8 *)(lVar9 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar9 + 0x50) = uVar4;
        uVar4 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x58) = uVar4;
          uVar4 = System_String__Concat(lVar9,0);
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
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
  if (Purchaser.PBCPPFALIJJ != '\0') {
    *(undefined1 *)(auVar10._0_8_ + 0x28) = 1;
    bVar1 = Purchaser__FGJALJLPMEN(__this_00);
    if (bVar1) {
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Purchaser.PBCPPFALIJJ = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_start____,0,0);
      plVar8 = Purchaser.FBFHOHCBLHM;
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
        plVar9 = Purchaser.FBFHOHCBLHM;
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
  if (Purchaser.PBCPPFALIJJ != '\0') {
    this.MCJPHMJFONO = 1;
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
      Purchaser.PBCPPFALIJJ = 0;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_start____,false);
      plVar8 = Purchaser.FBFHOHCBLHM;
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
        plVar9 = Purchaser.FBFHOHCBLHM;
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


// ==== public void OnInitialized(IStoreController DLNBEHFJBGB, IExtensionProvider FNANHEPAKIO) { }   @0xb03edc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__OnInitialized(void *__this,void *DLNBEHFJBGB,void *FNANHEPAKIO)

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
  
  if ((bRam0000000001916f48 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Purchaser_TypeInfo);
    func_0x00a67900(&Str_OnInitialized__PASS);
    bRam0000000001916f48 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_OnInitialized__PASS,0,0);
  if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = Purchaser.<statics>;
  *(void **)(lVar6 + 8) = DLNBEHFJBGB;
  *(void **)(lVar6 + 0x10) = FNANHEPAKIO;
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
  uVar8 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) {
LAB_00c03100:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x650), lVar6 == 0)) goto LAB_00c03100;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) goto LAB_00c03104;
          lVar11 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_00c03100;
          uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar11 + 0x20),0);
          if (((uVar2 & 1) == 0) && ((*(uint *)(lVar11 + 0x2c) | 2) == 3)) {
            if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            plVar9 = Purchaser.FBFHOHCBLHM;
            if (plVar9 == (long *)0x0) goto LAB_00c03100;
            lVar4 = *plVar9;
            uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar2 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == _UnityEngine_Purchasing_IStoreController_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_00c02f24;
                }
                uVar2 = uVar2 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_Purchasing_IStoreController_TypeInfo,0);
LAB_00c02f24:
            lVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
            if (lVar4 == 0) goto LAB_00c03100;
            lVar4 = UnityEngine_Purchasing_ProductCollection__WithID
                              (lVar4,*(undefined8 *)(lVar11 + 0x20),0);
            if (lVar4 != 0) {
              uVar8 = *(undefined8 *)(lVar11 + 0x40);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
              if ((uVar2 & 1) != 0) {
                if ((*(long *)(lVar4 + 0x18) == 0) ||
                   (plVar9 = *(long **)(lVar11 + 0x40), plVar9 == (long *)0x0)) goto LAB_00c03100;
                (**(code **)(*plVar9 + 0x5a8))
                          (plVar9,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10),
                           *(undefined8 *)(*plVar9 + 0x5b0));
                lVar11 = func_0x00a679a0(_string___TypeInfo,9);
                if ((*(long *)(lVar4 + 0x18) == 0) || (lVar11 == 0)) goto LAB_00c03100;
                uVar1 = *(uint *)(lVar11 + 0x18);
                if ((uVar1 == 0) ||
                   (*(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18)
                   , uVar1 == 1)) {
LAB_00c03104:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined8 *)(lVar11 + 0x28) = _Str___;
                if (*(long *)(lVar4 + 0x18) == 0) goto LAB_00c03100;
                if ((uVar1 < 3) ||
                   (*(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10)
                   , uVar1 == 3)) goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x38) = _Str___price_int;
                lVar5 = *(long *)(lVar4 + 0x18);
                if (lVar5 == 0) goto LAB_00c03100;
                uStack_68 = *(undefined8 *)(lVar5 + 0x38);
                uStack_70 = *(undefined8 *)(lVar5 + 0x30);
                if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = System_Decimal__ToString(&uStack_70,0);
                uVar1 = *(uint *)(lVar11 + 0x18);
                if ((uVar1 < 5) || (*(undefined8 *)(lVar11 + 0x40) = uVar8, uVar1 == 5))
                goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x48) = _Str___iso__;
                if (*(long *)(lVar4 + 0x18) == 0) goto LAB_00c03100;
                if (((uVar1 < 7) ||
                    (*(undefined8 *)(lVar11 + 0x50) =
                          *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x28), uVar1 == 7)) ||
                   (*(undefined8 *)(lVar11 + 0x58) = _Str___product_transactionID__, uVar1 < 9))
                goto LAB_00c03104;
                *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(lVar4 + 0x28);
                uVar8 = System_String__Concat(lVar11,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar8,0,0);
              }
            }
          }
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
    }
  }
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
  
  this.KOEBBIOEINO = 0;
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
    if (Purchaser.FBFHOHCBLHM == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_InitializePurchasing_is_starting___,0,0);
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Purchaser.PBCPPFALIJJ = 1;
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
        this.NMCDBIEKCMM = uVar4;
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
  uVar10 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) {
LAB_00c03100:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
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
            plVar11 = Purchaser.FBFHOHCBLHM;
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
    Purchaser.PBCPPFALIJJ = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}


// ==== private void PKMJJHKCJAM() { }   @0xb040c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Purchaser__PKMJJHKCJAM(void *__this)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000001916f4c & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916f4c = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = *(long **)(_Menu_TypeInfo + 0xb8);
  *(undefined1 *)((long)plVar2 + 0xe) = 0;
  if ((*plVar2 != 0) && (lVar1 = *(long *)(*plVar2 + 0x20), lVar1 != 0)) {
    GUIGarage__JANLLKKBNAM(lVar1,(int)plVar2[2]);
    Menu.DPDMJEDMEDK = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
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
  Purchaser.PBCPPFALIJJ = 1;
  return;
}


// ==== public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs OHOAJCLLPDH) { }   @0xb04398

/* WARNING: Removing unreachable block (ram,0x00c06280) */
/* WARNING: Removing unreachable block (ram,0x00c052c4) */
/* WARNING: Removing unreachable block (ram,0x00c052c8) */
/* WARNING: Removing unreachable block (ram,0x00c06288) */
/* WARNING: Removing unreachable block (ram,0x00c05514) */
/* WARNING: Removing unreachable block (ram,0x00c0660c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Purchaser__ProcessPurchase(void *__this,void *OHOAJCLLPDH)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  void *pvVar14;
  long lVar15;
  long *plVar16;
  void *pvStack_168;
  void *pvStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if ((bRam0000000001916f4e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_TypeInfo);
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&System_Decimal_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose_
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Curr
                   );
    func_0x00a67900(&UnityEngine_Purchasing_Security_GooglePlayReceipt_TypeInfo);
    func_0x00a67900(&UnityEngine_Purchasing_Security_GooglePurchaseState_TypeInfo);
    func_0x00a67900(&UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    func_0x00a67900(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Purchaser_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_originalTransactionIdentifier__);
    func_0x00a67900(&Str_goldpack_2);
    func_0x00a67900(&Str_my);
    func_0x00a67900(&Str_productID_);
    func_0x00a67900(&Str_ProcessPurchase_is_starting____ID__);
    func_0x00a67900(&Str_My_Fake_Validation_is_____No_signature_f);
    func_0x00a67900(&Str_purchaseToken__);
    func_0x00a67900(&Str_Invalid_receipt__bundle_name___not_unloc);
    func_0x00a67900(&Str_goldpack_5);
    func_0x00a67900(&Str_Receipt__);
    func_0x00a67900(&Str_specialoffer_1);
    func_0x00a67900(&Str_purchaseState__);
    func_0x00a67900(&Str_json);
    func_0x00a67900(&Str_goldpack_3);
    func_0x00a67900(&Str_zombiederby);
    func_0x00a67900(&Str_specialoffer_5);
    func_0x00a67900(&Str_Payload);
    func_0x00a67900(&Str_transactionID__);
    func_0x00a67900(&Str_cancellationDate__);
    func_0x00a67900(&Str_specialoffer_3);
    func_0x00a67900(&Str_ProcessPurchase__FAIL__donate_item_is_nu);
    func_0x00a67900(&Str_receipt__);
    func_0x00a67900(&Str_specialoffer_2);
    func_0x00a67900(&Str_bundle);
    func_0x00a67900(&Str_quantity_);
    func_0x00a67900(&Str_Already_bougth_product______0__);
    func_0x00a67900(&Str_specialoffer_4);
    func_0x00a67900(&Str_ProcessPurchase__SUCCESS__Product____0__);
    func_0x00a67900(&Str_Invalid_receipt__productID___packageName);
    func_0x00a67900(&Str_ProcessPurchase__FAIL__Unrecognized_prod);
    func_0x00a67900(&Str_goldpack_4);
    func_0x00a67900(&Str_signature);
    func_0x00a67900(&Str_fake123);
    func_0x00a67900(&Str___title__);
    func_0x00a67900(&Str___iso__);
    func_0x00a67900(&Str_purchaseDate__);
    func_0x00a67900(&Str_My_Fake_Validation_is_FAIL___FREEDOM_det);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str___price__);
    func_0x00a67900(&Str_playerClassicCar_is_null_);
    func_0x00a67900(&Str_signature__);
    func_0x00a67900(&Str_goldpack_1);
    bRam0000000001916f4e = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  uStack_ac = 0;
  uStack_c0 = 0;
  plStack_f0 = (long *)0x0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_e0 = (long *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  if (((OHOAJCLLPDH == (void *)0x0) || (*(long *)((long)OHOAJCLLPDH + 0x10) == 0)) ||
     (lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x10), lVar7 == 0)) goto LAB_00c06794;
  pvVar14 = *(void **)(lVar7 + 0x10);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar7 == 0) goto LAB_00c06794;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (((uVar1 == 0) ||
      (*(undefined8 *)(lVar7 + 0x20) = _Str_ProcessPurchase_is_starting____ID__, uVar1 == 1)) ||
     (*(void **)(lVar7 + 0x28) = pvVar14, uVar1 < 3)) {
LAB_00c061f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar7 + 0x30) = _Str___iso__;
  if ((*(long *)((long)OHOAJCLLPDH + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x18), lVar11 == 0))
  goto LAB_00c06794;
  if ((uVar1 < 4) || (*(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar11 + 0x28), uVar1 == 4))
  goto LAB_00c061f4;
  *(undefined8 *)(lVar7 + 0x40) = _Str___title__;
  if ((*(long *)((long)OHOAJCLLPDH + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x18), lVar11 == 0))
  goto LAB_00c06794;
  if ((uVar1 < 6) || (*(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar11 + 0x18), uVar1 == 6))
  goto LAB_00c061f4;
  *(undefined8 *)(lVar7 + 0x50) = _Str___price__;
  if ((*(long *)((long)OHOAJCLLPDH + 0x10) == 0) ||
     (lVar11 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x18), lVar11 == 0))
  goto LAB_00c06794;
  uStack_98 = *(undefined8 *)(lVar11 + 0x38);
  uStack_a0 = *(undefined8 *)(lVar11 + 0x30);
  if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = System_Decimal__ToString(&uStack_a0,0);
  if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_00c061f4;
  *(undefined8 *)(lVar7 + 0x58) = uVar3;
  uVar3 = System_String__Concat(lVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar3,0,0);
  if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) goto LAB_00c06794;
  uVar3 = System_String__Concat
                    (_Str_Receipt__,*(undefined8 *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40),0);
  Main__GEMDEAMAGPG(uVar3,0,0);
  pvStack_168 = _Str_;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF == 0) ||
      (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
     (lVar7 = *(long *)(lVar7 + 0x650), lVar7 == 0)) goto LAB_00c06794;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if ((int)uVar1 < 1) {
    lVar11 = 0;
  }
  else {
    uVar13 = 0;
    lVar9 = 0;
    do {
      if (uVar1 <= uVar13) goto LAB_00c061f4;
      lVar15 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_00c06794;
      uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar15 + 0x20),0);
      lVar11 = lVar9;
      if (((uVar4 & 1) == 0) && ((*(uint *)(lVar15 + 0x2c) | 2) == 3)) {
        if (pvVar14 == (void *)0x0) goto LAB_00c06794;
        uVar4 = System_String__Contains(pvVar14,*(undefined8 *)(lVar15 + 0x20),0);
        lVar11 = lVar15;
        if ((uVar4 & 1) == 0) {
          lVar11 = lVar9;
        }
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      uVar13 = uVar13 + 1;
      lVar9 = lVar11;
    } while ((int)uVar13 < (int)uVar1);
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar11,0,0);
  if ((uVar4 & 1) != 0) {
    puVar8 = (undefined8 *)&Str_ProcessPurchase__FAIL__donate_item_is_nu;
    goto LAB_00c05cd0;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Application__get_isEditor(0);
  pvStack_160 = pvStack_168;
  if ((uVar4 & 1) == 0) {
    if ((*(long *)((long)OHOAJCLLPDH + 0x10) == 0) ||
       (lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40), lVar7 == 0))
    goto LAB_00c06794;
    uVar4 = System_String__Contains(lVar7,this.CPKEHBIPNGJ,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_My_Fake_Validation_is_____No_signature_f);
    }
    else {
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = System_String__IndexOf(lVar7,this.CPKEHBIPNGJ,0);
      lVar7 = _Str_fake123;
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (this.CPKEHBIPNGJ == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar9 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar3 = System_String__Substring
                        (lVar9,0,*(int *)(this.CPKEHBIPNGJ + 0x10) + iVar2,0);
      uVar3 = System_String__Concat(uVar3,lVar7,0);
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (this.CPKEHBIPNGJ == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar9 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar5 = System_String__Substring
                        (lVar9,*(int *)(this.CPKEHBIPNGJ + 0x10) + iVar2 +
                               *(int *)(lVar7 + 0x10),0);
      lVar7 = System_String__Concat(uVar3,uVar5,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar9 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(int *)(lVar7 + 0x10) == *(int *)(lVar9 + 0x10)) {
        if (this.NMCDBIEKCMM != 0) {
          UnityEngine_Purchasing_Security_CrossPlatformValidator__Validate
                    (this.NMCDBIEKCMM,lVar7,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__EEKNCFLMGDP(_Str_My_Fake_Validation_is_FAIL___FREEDOM_det);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar3 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF != 0) {
            lVar7 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
            if (lVar7 != 0) {
              AnalyticsController__PAHGPPCKPBM(lVar7,_Str_my,0);
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        goto LAB_00c06274;
      }
    }
    if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (this.NMCDBIEKCMM == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar7 = UnityEngine_Purchasing_Security_CrossPlatformValidator__Validate
                      (this.NMCDBIEKCMM,
                       *(undefined8 *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar16 = *(long **)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar9 = *plVar16;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                _UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_00c04c58;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 func_0x00a9e6c4(plVar16,_UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo,
                                 1);
LAB_00c04c58:
        uVar3 = (*(code *)*puVar8)(plVar16,puVar8[1]);
        uVar3 = System_String__Concat(_Str_productID_,uVar3,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(uVar3,0,0);
        lVar9 = *plVar16;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                _UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_00c04cf8;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 func_0x00a9e6c4(plVar16,_UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo,
                                 2);
LAB_00c04cf8:
        lStack_a8 = (*(code *)*puVar8)(plVar16,puVar8[1]);
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = System_DateTime__ToString(&lStack_a8,0);
        uVar3 = System_String__Concat(_Str_purchaseDate__,uVar3,0);
        Main__GEMDEAMAGPG(uVar3,0,0);
        lVar9 = *plVar16;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                _UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_00c04d90;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)
                 func_0x00a9e6c4(plVar16,_UnityEngine_Purchasing_Security_IPurchaseReceipt_TypeInfo,
                                 0);
LAB_00c04d90:
        uVar3 = (*(code *)*puVar8)(plVar16,puVar8[1]);
        uVar3 = System_String__Concat(_Str_transactionID__,uVar3,0);
        Main__GEMDEAMAGPG(uVar3,0,0);
        lVar9 = *plVar16;
        bVar10 = *(byte *)(lVar9 + 0x130);
        if ((*(byte *)(_UnityEngine_Purchasing_Security_GooglePlayReceipt_TypeInfo + 0x130) <=
             bVar10) &&
           (*(long *)(*(long *)(lVar9 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Purchasing_Security_GooglePlayReceipt_TypeInfo +
                                      0x130) * 8 + -8) ==
            _UnityEngine_Purchasing_Security_GooglePlayReceipt_TypeInfo)) {
          uStack_148 = (undefined4)plVar16[7];
          plStack_158 = _UnityEngine_Purchasing_Security_GooglePurchaseState_TypeInfo;
          uStack_150 = 0xffffffffffffffff;
          uVar3 = System_Enum__ToString(&plStack_158,0);
          uVar3 = System_String__Concat(_Str_purchaseState__,uVar3,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(uVar3,0,0);
          uVar3 = System_String__Concat(_Str_purchaseToken__,plVar16[5],0);
          Main__GEMDEAMAGPG(uVar3,0,0);
          if (plVar16[2] == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar4 = System_String__Contains(plVar16[2],_Str_zombiederby,0);
          if ((uVar4 & 1) == 0) {
LAB_00c055c4:
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            Main__EEKNCFLMGDP(_Str_Invalid_receipt__productID___packageName);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar3 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF != 0) {
              lVar7 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
              if (lVar7 != 0) {
                AnalyticsController__PAHGPPCKPBM(lVar7,_Str_bundle,0);
                return 0;
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (plVar16[4] == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar4 = System_String__Contains(plVar16[4],_Str_zombiederby,0);
          if ((uVar4 & 1) == 0) goto LAB_00c055c4;
          lVar9 = *plVar16;
          bVar10 = *(byte *)(lVar9 + 0x130);
        }
        if ((*(byte *)(_UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_TypeInfo + 0x130)
             <= bVar10) &&
           (*(long *)(*(long *)(lVar9 + 200) +
                      (ulong)*(byte *)(
                                      _UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_TypeInfo
                                      + 0x130) * 8 + -8) ==
            _UnityEngine_Purchasing_Security_AppleInAppPurchaseReceipt_TypeInfo)) {
          uVar3 = System_String__Concat(_Str_originalTransactionIdentifier__,plVar16[5],0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(uVar3,0,0);
          lStack_a8 = plVar16[9];
          if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = System_DateTime__ToString(&lStack_a8,0);
          uVar3 = System_String__Concat(_Str_cancellationDate__,uVar3,0);
          Main__GEMDEAMAGPG(uVar3,0,0);
          uStack_ac = (undefined4)plVar16[2];
          uVar3 = System_Int32__ToString(&uStack_ac,0);
          uVar3 = System_String__Concat(_Str_quantity_,uVar3,0);
          Main__GEMDEAMAGPG(uVar3,0,0);
          if (plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar4 = System_String__Contains(plVar16[3],_Str_zombiederby,0);
          if ((uVar4 & 1) == 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            Main__EEKNCFLMGDP(_Str_Invalid_receipt__bundle_name___not_unloc);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar3 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF != 0) {
              lVar7 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
              if (lVar7 != 0) {
                AnalyticsController__PAHGPPCKPBM(lVar7,_Str_bundle,0);
                return 0;
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) goto LAB_00c06794;
    lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
    uVar4 = System_String__op_Inequality(lVar7,_Str_,0);
    if ((uVar4 & 1) != 0) {
      if (lVar7 == 0) goto LAB_00c06794;
      uVar4 = System_String__Contains(lVar7,_Str_Payload,0);
      if ((uVar4 & 1) != 0) {
        plVar16 = (long *)UnityEngine_Purchasing_MiniJson__JsonDecode(lVar7,0);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((*(byte *)(*plVar16 + 0x130) <
             *(byte *)(_System_Collections_Generic_Dictionary_string__object__TypeInfo + 0x130)) ||
           (*(long *)(*(long *)(*plVar16 + 200) +
                      (ulong)*(byte *)(
                                      _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                      + 0x130) * 8 + -8) !=
            _System_Collections_Generic_Dictionary_string__object__TypeInfo)) {
          func_0x00a67eec();
LAB_00c06270:
          func_0x00a67eec();
LAB_00c06274:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                  (plVar16,&plStack_158,
                   _Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
        uStack_d0 = CONCAT44(uStack_144,uStack_148);
        uStack_c0 = uStack_138;
        uStack_d8 = uStack_150;
        plStack_e0 = plStack_158;
        uStack_c8 = uStack_140;
        pvStack_160 = pvStack_168;
        while (uVar4 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                                 (&plStack_e0,
                                  _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext
                                 ), (uVar4 & 1) != 0) {
          func_0x00b7fb78(&plStack_e0,&plStack_158,
                          _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Curr
                         );
          plStack_f0 = plStack_158;
          uStack_e8 = uStack_150;
          func_0x00b7fc68(&plStack_f0,&plStack_158,
                          _Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__)
          ;
          uVar4 = System_String__op_Equality(plStack_158,_Str_Payload,0);
          if ((uVar4 & 1) != 0) {
            func_0x00b7fd54(&plStack_f0,&plStack_158,
                            _Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__
                           );
            if (plStack_158 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar3 = (**(code **)(*plStack_158 + 0x168))
                              (plStack_158,*(undefined8 *)(*plStack_158 + 0x170));
            plVar16 = (long *)UnityEngine_Purchasing_MiniJson__JsonDecode(uVar3,0);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if ((*(byte *)(*plVar16 + 0x130) <
                 *(byte *)(_System_Collections_Generic_Dictionary_string__object__TypeInfo + 0x130))
               || (*(long *)(*(long *)(*plVar16 + 200) +
                             (ulong)*(byte *)(
                                             _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                             + 0x130) * 8 + -8) !=
                   _System_Collections_Generic_Dictionary_string__object__TypeInfo))
            goto LAB_00c06270;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
                      (plVar16,&plStack_158,
                       _Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__
                      );
            uStack_110 = CONCAT44(uStack_144,uStack_148);
            uStack_118 = uStack_150;
            plStack_120 = plStack_158;
            uStack_108 = uStack_140;
            uStack_100 = uStack_138;
            while (uVar4 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                                     (&plStack_120,
                                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext
                                     ), (uVar4 & 1) != 0) {
              func_0x00b7fb78(&plStack_120,&uStack_90,
                              _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Curr
                             );
              uStack_130 = uStack_90;
              uStack_128 = uStack_88;
              func_0x00b7fc68(&uStack_130,&uStack_80,
                              _Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__
                             );
              uVar4 = System_String__op_Equality(uStack_80,_Str_json,0);
              if ((uVar4 & 1) != 0) {
                func_0x00b7fd54(&uStack_130,&plStack_78,
                                _Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__
                               );
                if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                pvStack_168 = (void *)(**(code **)(*plStack_78 + 0x168))
                                                (plStack_78,*(undefined8 *)(*plStack_78 + 0x170));
              }
              func_0x00b7fc68(&uStack_130,&uStack_70,
                              _Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__
                             );
              uVar4 = System_String__op_Equality(uStack_70,_Str_signature,0);
              if ((uVar4 & 1) != 0) {
                func_0x00b7fd54(&uStack_130,&plStack_68,
                                _Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__
                               );
                if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                pvStack_160 = (void *)(**(code **)(*plStack_68 + 0x168))
                                                (plStack_68,*(undefined8 *)(*plStack_68 + 0x170));
              }
            }
            System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                      (&plStack_120,
                       _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose_
                      );
          }
        }
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                  (&plStack_e0,
                   _Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose_
                  );
      }
    }
    uVar3 = System_String__Concat(_Str_receipt__,pvStack_168,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar3,0,0);
    uVar3 = System_String__Concat(_Str_signature__,pvStack_160,0);
    Main__GEMDEAMAGPG(uVar3,0,0);
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(pvVar14,0);
  if (uVar1 < 0x1a754516) {
    if (uVar1 < 0x14753ba4) {
      if (uVar1 == 0x13753a10) {
        puVar8 = (undefined8 *)&Str_goldpack_3;
      }
      else {
        if (uVar1 != 0x14753ba3) goto LAB_00c05cc8;
        puVar8 = (undefined8 *)&Str_goldpack_2;
      }
    }
    else if (uVar1 == 0x15753d36) {
      puVar8 = (undefined8 *)&Str_goldpack_1;
    }
    else if (uVar1 == 0x19754382) {
      puVar8 = (undefined8 *)&Str_goldpack_5;
    }
    else {
      if (uVar1 != 0x1a754515) goto LAB_00c05cc8;
      puVar8 = (undefined8 *)&Str_goldpack_4;
    }
    uVar4 = System_String__op_Equality(pvVar14,*puVar8,0);
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
      lVar7 = Main.FBDDKIOEKDM;
      if ((lVar7 == 0) || (iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(lVar7,0), lVar11 == 0))
      goto LAB_00c06794;
      DAFNMLEKHAD__DIMKKHJDHFJ(lVar7,*(int *)(lVar11 + 0x28) + iVar2,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = Main.FBDDKIOEKDM;
      if (lVar7 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar7,1,0);
LAB_00c0585c:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.MDLMIEDLJMC != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
        uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (pvVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar6 == (void *)0x0)
             ) goto LAB_00c06794;
          GUIGarage__GFNKMDJEDBD(pvVar6);
        }
      }
      uVar3 = System_String__Format(_Str_ProcessPurchase__SUCCESS__Product____0__,pvVar14,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar3,0,0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__GIGBLEBBIEK(SoundScript.CIMAPDEBGGG,0);
      if (this.MCJPHMJFONO != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = Menu.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) == 0) goto LAB_00c05b54;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
        uVar3 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar7 = _Method_System_Array_Empty_object___;
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
          pvVar6 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
          lVar9 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
          if (lVar9 == 0) {
            func_0x00a9e42c(_Method_System_Array_Empty_object___);
            lVar9 = *(long *)(lVar7 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = func_0x00a9e3d0();
          }
          if (pvVar6 == (void *)0x0) goto LAB_00c06794;
          BridgePHP__StartServerConnect(pvVar6,3,(void *)**(undefined8 **)(lVar7 + 0xb8));
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
        uVar3 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (pvVar6 = Menu.KECGFPHIEHF.OJJAEEGGHJM, pvVar6 == (void *)0x0)
             ) {
LAB_00c06794:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          AnalyticsController__MLJBGIEIBJA(pvVar6);
          if (((Menu.KECGFPHIEHF == 0) ||
              (((lVar11 == 0 || (*(long *)((long)OHOAJCLLPDH + 0x10) == 0)) ||
               (lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x18), lVar7 == 0)))) ||
             (pvVar6 = Menu.KECGFPHIEHF.OJJAEEGGHJM, pvVar6 == (void *)0x0)
             ) goto LAB_00c06794;
          AnalyticsController__MICBBJKICOP
                    (pvVar6,pvVar14,*(float *)(lVar11 + 0x34),*(void **)(lVar7 + 0x30),
                     *(void **)(lVar7 + 0x38),*(void **)(lVar7 + 0x28),pvStack_168,pvStack_160);
        }
        this.MCJPHMJFONO = 0;
      }
LAB_00c05b54:
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Purchaser.PBCPPFALIJJ = 1;
      return 0;
    }
  }
  else if (uVar1 < 0xd2e328ec) {
    if (uVar1 == 0xd1e32758) {
      uVar4 = System_String__op_Equality(pvVar14,_Str_specialoffer_3,0);
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
        lVar7 = Main.FBDDKIOEKDM;
        if (lVar7 == 0) goto LAB_00c06794;
        uVar4 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar7,0);
        if ((uVar4 & 1) == 0) {
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
          lVar7 = Main.FBDDKIOEKDM;
          if ((lVar7 == 0) || (iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(lVar7,0), lVar11 == 0))
          goto LAB_00c06794;
          DAFNMLEKHAD__DIMKKHJDHFJ(lVar7,*(int *)(lVar11 + 0x28) + iVar2,0);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar7 = Main.FBDDKIOEKDM;
          if (lVar7 == 0) goto LAB_00c06794;
          DAFNMLEKHAD__NMKDDNOGEIJ(lVar7,1,0);
          Purchaser__PKMJJHKCJAM();
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar7 = Main.FBDDKIOEKDM;
          if (lVar7 == 0) goto LAB_00c06794;
          DAFNMLEKHAD__BDKMDDIBAAD(lVar7,1,0);
        }
        else {
          Purchaser__PKMJJHKCJAM();
          this.MCJPHMJFONO = 0;
          uVar3 = System_String__Format(_Str_Already_bougth_product______0__,pvVar14,0);
LAB_00c05c98:
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(uVar3,0,0);
        }
        goto LAB_00c0585c;
      }
    }
    else if (uVar1 == 0xd2e328eb) {
      puVar8 = (undefined8 *)&Str_specialoffer_2;
      goto LAB_00c0569c;
    }
  }
  else if (uVar1 == 0xd3e32a7e) {
    uVar4 = System_String__op_Equality(pvVar14,_Str_specialoffer_1,0);
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
      lVar7 = Main.FBDDKIOEKDM;
      if (lVar7 == 0) goto LAB_00c06794;
      lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,1,1,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = Main.FBDDKIOEKDM;
      if (lVar9 == 0) goto LAB_00c06794;
      uVar4 = DAFNMLEKHAD__HDBOCJPHJDD(lVar9,0);
      if (((uVar4 & 1) != 0) ||
         ((lVar7 != 0 && (iVar2 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,4,0), 4 < iVar2)))) {
        Purchaser__PKMJJHKCJAM();
        this.MCJPHMJFONO = 0;
        uVar3 = System_String__Format(_Str_Already_bougth_product______0__,pvVar14,0);
        goto LAB_00c05c98;
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
      lVar9 = Main.FBDDKIOEKDM;
      if ((lVar9 == 0) || (iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(lVar9,0), lVar11 == 0))
      goto LAB_00c06794;
      DAFNMLEKHAD__DIMKKHJDHFJ(lVar9,*(int *)(lVar11 + 0x28) + iVar2,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = Main.FBDDKIOEKDM;
      if (lVar9 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar9,1,0);
      Purchaser__PKMJJHKCJAM();
      if (lVar7 == 0) {
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
        lVar7 = Main.FBDDKIOEKDM;
        if (lVar7 == 0) goto LAB_00c06794;
        DAFNMLEKHAD__NODNJNKEFKM(lVar7,0,1,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = Main.FBDDKIOEKDM;
        if (lVar7 == 0) goto LAB_00c06794;
        lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,1,1,0);
        if (lVar7 != 0) goto LAB_00c0608c;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_playerClassicCar_is_null_);
      }
      else {
LAB_00c0608c:
        MKCBGHDANLA__KFALLEFKLJL(lVar7,0);
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
      lVar7 = Main.FBDDKIOEKDM;
      if (lVar7 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__CJPCGGCLNCK(lVar7,1,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
      uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((((Menu.KECGFPHIEHF == 0) ||
             (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
            (lVar7 = *(long *)(lVar7 + 0x78), lVar7 == 0)) ||
           (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c06794;
        uVar4 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c06794;
          Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
        }
      }
      goto LAB_00c0585c;
    }
  }
  else {
    if (uVar1 == 0xd7e330ca) {
      puVar8 = (undefined8 *)&Str_specialoffer_5;
    }
    else {
      if (uVar1 != 0xd8e3325d) goto LAB_00c05cc8;
      puVar8 = (undefined8 *)&Str_specialoffer_4;
    }
LAB_00c0569c:
    uVar4 = System_String__op_Equality(pvVar14,*puVar8,0);
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
      lVar7 = Main.FBDDKIOEKDM;
      if ((lVar7 == 0) || (iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(lVar7,0), lVar11 == 0))
      goto LAB_00c06794;
      DAFNMLEKHAD__DIMKKHJDHFJ(lVar7,*(int *)(lVar11 + 0x28) + iVar2,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = Main.FBDDKIOEKDM;
      if (lVar7 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar7,1,0);
      Purchaser__PKMJJHKCJAM();
      goto LAB_00c0585c;
    }
  }
LAB_00c05cc8:
  puVar8 = (undefined8 *)&Str_ProcessPurchase__FAIL__Unrecognized_prod;
LAB_00c05cd0:
  pvVar14 = (void *)System_String__Format(*puVar8,pvVar14,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(pvVar14);
  return 0;
}



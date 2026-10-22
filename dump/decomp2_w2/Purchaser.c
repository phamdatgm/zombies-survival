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
  __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
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
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
  uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
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
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar5 == (long *)0x0)) goto LAB_00c5d818;
  lVar9 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
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
  uVar6 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c036d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar6 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (((uVar2 & 1) != 0) && (*(char *)((long)__this + 0x29) == '\0')) {
      *(undefined1 *)((long)__this + 0x29) = 1;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
          (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0)) ||
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
  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
      (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
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
    uVar4 = System_String__Contains(lVar7,*(undefined8 *)((long)__this + 0x20),0);
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
      iVar2 = System_String__IndexOf(lVar7,*(undefined8 *)((long)__this + 0x20),0);
      lVar7 = _Str_fake123;
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(long *)((long)__this + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar9 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x40);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar3 = System_String__Substring
                        (lVar9,0,*(int *)(*(long *)((long)__this + 0x20) + 0x10) + iVar2,0);
      uVar3 = System_String__Concat(uVar3,lVar7,0);
      if (*(long *)((long)OHOAJCLLPDH + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(long *)((long)__this + 0x20) == 0) {
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
                        (lVar9,*(int *)(*(long *)((long)__this + 0x20) + 0x10) + iVar2 +
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
        if (*(long *)((long)__this + 0x40) != 0) {
          UnityEngine_Purchasing_Security_CrossPlatformValidator__Validate
                    (*(long *)((long)__this + 0x40),lVar7,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__EEKNCFLMGDP(_Str_My_Fake_Validation_is_FAIL___FREEDOM_det);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
          if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
            lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
    if (*(long *)((long)__this + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar7 = UnityEngine_Purchasing_Security_CrossPlatformValidator__Validate
                      (*(long *)((long)__this + 0x40),
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
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
            if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
              lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
            if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
              lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__NMKDDNOGEIJ(lVar7,1,0);
LAB_00c0585c:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
        uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), pvVar6 == (void *)0x0)
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
      SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
      if (*(char *)((long)__this + 0x28) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) == 0) goto LAB_00c05b54;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
        uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar7 = _Method_System_Array_Empty_object___;
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
          pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
        uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), pvVar6 == (void *)0x0)
             ) {
LAB_00c06794:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          AnalyticsController__MLJBGIEIBJA(pvVar6);
          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
              (((lVar11 == 0 || (*(long *)((long)OHOAJCLLPDH + 0x10) == 0)) ||
               (lVar7 = *(long *)(*(long *)((long)OHOAJCLLPDH + 0x10) + 0x18), lVar7 == 0)))) ||
             (pvVar6 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40), pvVar6 == (void *)0x0)
             ) goto LAB_00c06794;
          AnalyticsController__MICBBJKICOP
                    (pvVar6,pvVar14,*(float *)(lVar11 + 0x34),*(void **)(lVar7 + 0x30),
                     *(void **)(lVar7 + 0x38),*(void **)(lVar7 + 0x28),pvStack_168,pvStack_160);
        }
        *(undefined1 *)((long)__this + 0x28) = 0;
      }
LAB_00c05b54:
      if (*(int *)(_Purchaser_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      **(undefined1 **)(_Purchaser_TypeInfo + 0xb8) = 1;
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
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
          lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
          lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
          lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar7 == 0) goto LAB_00c06794;
          DAFNMLEKHAD__BDKMDDIBAAD(lVar7,1,0);
        }
        else {
          Purchaser__PKMJJHKCJAM();
          *(undefined1 *)((long)__this + 0x28) = 0;
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00c06794;
      lVar7 = DAFNMLEKHAD__DKJLCJPBPPN(lVar7,1,1,0);
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar9 == 0) goto LAB_00c06794;
      uVar4 = DAFNMLEKHAD__HDBOCJPHJDD(lVar9,0);
      if (((uVar4 & 1) != 0) ||
         ((lVar7 != 0 && (iVar2 = MKCBGHDANLA__IDOHKCCDGDG(lVar7,4,0), 4 < iVar2)))) {
        Purchaser__PKMJJHKCJAM();
        *(undefined1 *)((long)__this + 0x28) = 0;
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_00c06794;
        DAFNMLEKHAD__NODNJNKEFKM(lVar7,0,1,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00c06794;
      DAFNMLEKHAD__CJPCGGCLNCK(lVar7,1,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
      uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar7 == 0)) ||
            (lVar7 = *(long *)(lVar7 + 0x78), lVar7 == 0)) ||
           (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c06794;
        uVar4 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c06794;
          Menu__OLOGKIHIIEL(**(long **)(_Menu_TypeInfo + 0xb8),0);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
      lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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



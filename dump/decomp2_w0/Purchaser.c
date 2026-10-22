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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
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
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
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
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
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
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
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
  lVar6 = *(long *)(_Purchaser_TypeInfo + 0xb8);
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
          (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 == 0)) ||
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
            plVar9 = *(long **)(*(long *)(_Purchaser_TypeInfo + 0xb8) + 8);
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
    *(undefined4 *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



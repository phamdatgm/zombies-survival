// ==== private void IDANHAOJLGJ(Replay ODBLLMBEFEI) { }   @0xb3fc9c

/* WARNING: Removing unreachable block (ram,0x00c4012c) */
/* WARNING: Removing unreachable block (ram,0x00c402ec) */
/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__IDANHAOJLGJ(void *__this,void *ODBLLMBEFEI)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *pvVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x25;
  long lStack_68;
  
  if ((bRam0000000001917127 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_car_block);
    func_0x00a67900(&Str_cup_);
    func_0x00a67900(&Str_value_panel);
    func_0x00a67900(&Str_Fail_SetYourReward__);
    func_0x00a67900(&Str_Fail_SetYourReward_Main_current_level__);
    bRam0000000001917127 = 1;
  }
  lVar5 = RatingEventController__JGMFIPCELEF();
  uVar14 = _Str_Fail_SetYourReward__;
  if (((ODBLLMBEFEI == (void *)0x0) || (lVar5 == 0)) || (*(long *)(lVar5 + 0x20) == 0)) {
    if (ODBLLMBEFEI == (void *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*(long *)ODBLLMBEFEI + 0x168))
                         (ODBLLMBEFEI,*(undefined8 *)(*(long *)ODBLLMBEFEI + 0x170));
    }
    plVar7 = (long *)System_String__Concat(uVar14,uVar15,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
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
    UnityEngine_Debug__LogError(plVar7,0);
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
    pvVar10 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar10 == (void *)0x0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    bVar3 = DAFNMLEKHAD__LLEFEIHEJDE(pvVar10);
    if (!bVar3) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
    uVar14 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar7 == (long *)0x0)) goto LAB_00c5d818;
    lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (lVar5 == 0) goto LAB_00c5d818;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar14,1,0);
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
    plVar7 = *(long **)(lVar5 + 0x1e8);
    if ((plVar7 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar6 == 0)
       ) goto LAB_00c16768;
    if (10000 < *(int *)(lVar6 + 0x10)) {
      if (*(long *)(lVar5 + 0x1e8) == 0) goto LAB_00c16768;
      uVar15 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x1e8),0);
      if ((*(long *)(lVar5 + 0x1e8) == 0) ||
         (lVar6 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x1e8),0), lVar6 == 0))
      goto LAB_00c16768;
      uVar4 = UnityEngine_Transform__get_parent(lVar6,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar6 = UnityEngine_Object__Instantiate_object_
                        (uVar15,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar6 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar6,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___)
      ;
      *(long **)(lVar5 + 0x1e8) = unaff_x25;
      if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
    }
    plVar7 = *(long **)(lVar5 + 0x1e8);
    lVar5 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar7 != (long *)0x0) &&
       (uVar15 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar5 != 0
       )) {
      uVar11 = *(uint *)(lVar5 + 0x18);
      if ((uVar11 != 0) &&
         (((*(undefined8 *)(lVar5 + 0x20) = uVar15, uVar11 != 1 &&
           (*(undefined8 *)(lVar5 + 0x28) = _Str__color_, 2 < uVar11)) &&
          (*(undefined8 *)(lVar5 + 0x30) = _Str__FF4E4A, uVar11 != 3)))) {
        *(undefined8 *)(lVar5 + 0x38) = _Str___;
        UnityEngine_Time__get_time(0);
        uVar15 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
        uVar15 = System_String__Format(_Str__0_f2_,uVar15,0);
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (((4 < uVar11) && (*(undefined8 *)(lVar5 + 0x40) = uVar15, uVar11 != 5)) &&
           (*(undefined8 *)(lVar5 + 0x48) = _Str____color___, 6 < uVar11)) {
          *(undefined8 *)(lVar5 + 0x50) = uVar14;
          uVar14 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x58) = uVar14;
            uVar14 = System_String__Concat(lVar5,0);
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
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
  uVar14 = *(undefined8 *)((long)__this + 0x98);
  uVar15 = *(undefined8 *)((long)__this + 0xb0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__Instantiate_object_
            (uVar14,uVar15,_Method_UnityEngine_Object_Instantiate_GameObject___);
  lVar6 = UnityEngine_Object__Instantiate_object_
                    (*(undefined8 *)((long)__this + 0x88),*(undefined8 *)((long)__this + 0xb0),
                     _Method_UnityEngine_Object_Instantiate_GameObject___);
  if (((lVar6 != 0) &&
      (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                 (lVar6,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIReward___),
      lVar2 = lStack_68, lStack_68 != 0)) &&
     (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lStack_68,&lStack_68,_Method_UnityEngine_Component_GetComponent_Image___),
     lStack_68 != 0)) {
    UnityEngine_Behaviour__set_enabled(lStack_68,0,0);
    lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
    if (lVar6 != 0) {
      plVar7 = (long *)UnityEngine_Transform__GetEnumerator(lVar6,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar6 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_00c3fed4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c3fed4:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_00c40120;
          lVar6 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 == 0) goto LAB_00c400a8;
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_00c40090;
        }
        lVar6 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_00c3ff34;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c3ff34:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
LAB_00c402d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo)) {
          func_0x00a67eec(plVar9);
          goto LAB_00c402d4;
        }
        lVar6 = UnityEngine_Object__get_name(plVar9,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar12 = System_String__Contains(lVar6,_Str_cup_,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = UnityEngine_Object__get_name(plVar9,0);
          uVar12 = System_String__op_Equality(uVar14,_Str_value_panel,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = UnityEngine_Object__get_name(plVar9,0);
            uVar12 = System_String__op_Equality(uVar14,_Str_car_block,0);
            if ((uVar12 & 1) != 0) {
              UnityEngine_Transform__SetParent(plVar9,*(undefined8 *)(lVar2 + 0x30),0);
            }
          }
          else {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (plVar9,&lStack_68,_Method_UnityEngine_Component_GetComponent_RectTransform___
                      );
            if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44660000,lStack_68,0,0);
          }
        }
        else {
          lVar6 = UnityEngine_Component__get_gameObject(plVar9,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
      } while( true );
    }
  }
  goto LAB_00c402e4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_00c40090:
    if (*(long *)(piVar13 + -2) == _System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_00c40114;
    }
  }
LAB_00c400a8:
  puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_IDisposable_TypeInfo,0);
LAB_00c40114:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_00c40120:
  iVar1 = *(int *)((long)ODBLLMBEFEI + 0x10);
  if (iVar1 < 0) {
    uVar11 = 4;
  }
  else if (iVar1 < 6) {
    uVar11 = 0;
  }
  else if (iVar1 < 0xb) {
    uVar11 = 1;
  }
  else if (iVar1 < 0x33) {
    uVar11 = 2;
  }
  else {
    uVar11 = 3;
    if (100 < iVar1) {
      uVar11 = 4;
    }
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  if ((uVar12 & 1) != 0) {
    RatingEventController__DGFCAMFFCMH(uVar12,lVar2,*(undefined8 *)(lVar5 + 0x20),uVar11,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    plVar9 = *(long **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    plVar7 = plVar9;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      plVar7 = *(long **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    }
    uVar14 = _Str_Fail_SetYourReward_Main_current_level__;
    if (plVar9 != (long *)0x0) goto LAB_00c40220;
    if (plVar7 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      goto LAB_00c4027c;
    }
  }
  else {
    plVar7 = *(long **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (plVar7 != (long *)0x0) {
LAB_00c40220:
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        if (plVar7 != (long *)0x0) {
          plVar7[0xb] = *(long *)(lVar5 + (ulong)uVar11 * 8 + 0x20);
          return;
        }
      }
LAB_00c402e4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  uVar15 = 0;
  uVar14 = _Str_Fail_SetYourReward_Main_current_level__;
LAB_00c4027c:
  pvVar10 = (void *)System_String__Concat(uVar14,uVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(pvVar10);
  return;
}


// ==== private int DGJIDPJKAOG(int FGOHLMLBAOF) { }   @0xb403f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RatingEventController__DGJIDPJKAOG(void *__this,int FGOHLMLBAOF)

{
  int iVar1;
  
  if (FGOHLMLBAOF < 0) {
    return 4;
  }
  if (FGOHLMLBAOF < 6) {
    return 0;
  }
  if (FGOHLMLBAOF < 0xb) {
    return 1;
  }
  if (0x32 < FGOHLMLBAOF) {
    iVar1 = 3;
    if (100 < FGOHLMLBAOF) {
      iVar1 = 4;
    }
    return iVar1;
  }
  return 2;
}


// ==== public void BEGHPCPPIBK(Level ACLJCGMKGNP, Replay[] LAHMEIEJLEN) { }   @0xb429e0

/* WARNING: Removing unreachable block (ram,0x00c41dc4) */
/* WARNING: Removing unreachable block (ram,0x00c41df4) */
/* WARNING: Removing unreachable block (ram,0x00c41e00) */
/* WARNING: Removing unreachable block (ram,0x00c41e04) */
/* WARNING: Removing unreachable block (ram,0x00c41dd4) */
/* WARNING: Removing unreachable block (ram,0x00c41e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__BEGHPCPPIBK(void *__this,void *ACLJCGMKGNP,void *LAHMEIEJLEN)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  char cVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uStack_ac;
  void *pvStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  
  if ((ACLJCGMKGNP == (void *)0x0) ||
     (uVar7 = *(int *)((long)ACLJCGMKGNP + 0x10) - 100, *(int *)((long)ACLJCGMKGNP + 0x10) < 100)) {
    return;
  }
  *(undefined8 *)((long)ACLJCGMKGNP + 0x60) = 0;
  plVar19 = *(long **)((long)__this + 0xd0);
  if (plVar19 == (long *)0x0) {
LAB_00c42ae0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((LAHMEIEJLEN != (void *)0x0) &&
     (lVar13 = func_0x00a67a34(LAHMEIEJLEN,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
    uVar11 = func_0x00a67b74();
    lVar13 = func_0x00a67a20(uVar11,0);
    if ((bRam000000000191712f & 1) == 0) {
      func_0x00a67900(&Replay_____TypeInfo);
      func_0x00a67900(&float___TypeInfo);
      bRam000000000191712f = 1;
    }
    uVar11 = func_0x00a679a0(_Replay_____TypeInfo,3);
    *(undefined8 *)(lVar13 + 0xd0) = uVar11;
    uVar11 = func_0x00a679a0(_float___TypeInfo,3);
    *(undefined8 *)(lVar13 + 0xd8) = uVar11;
    *(undefined8 *)(lVar13 + 0xe8) = 0x3e23d70a3f800000;
    *(undefined8 *)(lVar13 + 0xe0) = 0x3f8000003f800000;
    if ((bRam000000000191c370 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
      bRam000000000191c370 = 1;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    return;
  }
  if (*(uint *)(plVar19 + 3) <= uVar7) {
LAB_00c42ae4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar19[(ulong)uVar7 + 4] = (long)LAHMEIEJLEN;
  lVar13 = *(long *)((long)__this + 0xd8);
  iVar3 = *(int *)((long)ACLJCGMKGNP + 0x10);
  uVar23 = UnityEngine_Time__get_time(0);
  if (lVar13 == 0) goto LAB_00c42ae0;
  uVar7 = iVar3 - 100;
  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_00c42ae4;
  *(undefined4 *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) = uVar23;
  if (LAHMEIEJLEN == (void *)0x0) goto LAB_00c42ae0;
  iVar3 = *(int *)((long)LAHMEIEJLEN + 0x18);
  if (0 < iVar3) {
    iVar14 = 0;
    do {
      if (iVar3 == iVar14) goto LAB_00c42ae4;
      lVar13 = *(long *)((long)LAHMEIEJLEN + (long)iVar14 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_00c42ae0;
      if ((*(long *)(lVar13 + 0x38) != 0) && (0 < *(int *)(*(long *)(lVar13 + 0x38) + 0x10))) {
        *(long *)((long)ACLJCGMKGNP + 0x60) = lVar13;
      }
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  acStack_7c[0] = '\x01';
  pvStack_88 = __this;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar17 = pvStack_88;
  if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
    return;
  }
  lVar13 = *(long *)((long)pvVar17 + 0x78);
  lVar16 = *(long *)((long)pvVar17 + 0xd0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = _Main_TypeInfo;
  lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if ((lVar15 == 0) || (lVar16 == 0)) goto LAB_00c429d8;
  uVar7 = *(int *)(lVar15 + 0x10) - 100;
  if (*(uint *)(lVar16 + 0x18) <= uVar7) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar19 = *(long **)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarReplay_TypeInfo);
    lVar8 = _Main_TypeInfo;
    lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
    if (lVar15 == 0) goto LAB_00c429d8;
  }
  else {
    *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
  }
  lVar16 = *(long *)(lVar15 + 0x50);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x00a67a30();
    if (lVar16 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
    lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)) goto LAB_00c429d8;
    uVar7 = EventContest__get_sort(lVar16,0);
    lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)) goto LAB_00c429d8;
    uStack_ac = *(undefined4 *)(lVar16 + 0x18);
  }
  else {
    if (lVar16 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
    Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
    uVar7 = 0;
    uStack_ac = 0;
  }
  pvVar17 = pvStack_88;
  RatingEventController__HPAFDOMPACP(pvStack_88);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = System_Boolean__ToString(acStack_7c,0);
  uVar6 = _Str_FillRating__;
  uVar11 = _Str___good_rating__;
  if (plVar19 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
  }
  uVar11 = System_String__Concat(uVar6,uVar9,uVar11,uVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  if (plVar19 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar17 + 0x70);
    pvStack_a8 = (void *)0x0;
    puStack_a0 = (undefined8 *)((long)pvVar17 + 0xb0);
    uVar20 = 0;
    uStack_80 = uVar7;
    cVar18 = acStack_7c[0];
    do {
      if (cVar18 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar17,uVar20 & 0xffffffff,(int)plVar19[3]);
      }
      cVar18 = acStack_7c[0];
      if ((long)uVar20 < (long)(int)*(uint *)(plVar19 + 3)) {
        if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
        if ((plVar19[uVar20 + 4] != 0) && (*(int *)(plVar19[uVar20 + 4] + 0x10) != -2)) {
          ppuVar5 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar5 = &puStack_98;
          }
          uVar11 = **ppuVar5;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar16 = UnityEngine_Object__Instantiate_object_
                             (lVar13,uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar16 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar16,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar8 = lStack_78;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar19[uVar20 + 4] + 0x10);
          plVar21 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar16;
          if (*piVar1 == -1) {
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar16 = *plVar21;
            uVar11 = _Str__100;
          }
          else {
            uVar11 = System_Int32__ToString(piVar1,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar16 = *plVar21;
          }
          (**(code **)(lVar16 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(lVar16 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) ||
             (lVar16 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar16 == 0))
          goto LAB_00c429d8;
          uVar11 = BridgePHP__GetCountryTextureFromID
                             (lVar16,*(undefined4 *)(plVar19[uVar20 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar12 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar12 & 1) != 0) {
            if (*(long *)(lVar8 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar8 + 0x30),uVar11,0);
          }
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) ||
             (plVar21 = *(long **)(lVar8 + 0x38), plVar21 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))
                    (plVar21,*(undefined8 *)(plVar19[uVar20 + 4] + 0x28),
                     *(undefined8 *)(*plVar21 + 0x5b0));
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
          plVar21 = *(long **)(lVar8 + 0x40);
          uVar11 = Car__DBJBMIGLBNF(*(undefined4 *)(plVar19[uVar20 + 4] + 0x1c),0);
          if (plVar21 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          uVar4 = uVar7 - 1;
          if (uVar7 < 2) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar8 + 0x50);
            uVar23 = *(undefined4 *)(plVar19[uVar20 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = Main__HIIJGDANAIK(uVar23,uStack_ac,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar8 + 0x60);
            uVar23 = *(undefined4 *)(plVar19[uVar20 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = Main__CHJONPOFGFA(uVar23,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          pvVar17 = pvStack_88;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
          iVar3 = *(int *)(plVar19[uVar20 + 4] + 0x18);
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
          lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar16 == 0) goto LAB_00c429d8;
          if (iVar3 == *(int *)(lVar16 + 0x10)) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            pvStack_a8 = (void *)plVar19[uVar20 + 4];
            RatingEventController__MKACNHEOJKP(pvVar17,lVar8,1,uVar20 & 0xffffffff);
            uVar7 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(void **)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = pvStack_a8;
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
              lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar16 == 0) ||
                 (lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar15 == 0))
              goto LAB_00c429d8;
              lVar16 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar15,*(undefined4 *)(lVar16 + 0x10),0);
              uVar7 = uStack_80;
              if (lVar16 != 0) {
                DJKGLJOCFCE__GEBLPKOKIDF(lVar16,1,0);
                uVar7 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar17,lVar8,0,uVar20 & 0xffffffff);
            uVar7 = uStack_80;
          }
          uStack_80 = uVar7;
          cVar18 = acStack_7c[0];
          if (uVar20 == 0) {
            if (uVar4 < 2) {
              if ((*(long *)(lVar8 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar8,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar7 == 1) {
                if ((*(long *)(lVar8 + 0x60) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x60),0),
                   lVar13 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar8 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar13 = lStack_78;
                if (((*(long *)(lVar8 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar8 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar13,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c429d8;
                  lVar13 = *(long *)(lVar8 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar22 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar8 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar8 + 0x48),0),
                     lVar13 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar22 + -86.0,lVar13,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar8 + 0x58) == 0) ||
                       (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x58),0),
                       lVar13 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar13,0,0);
                  }
                }
                if (*(long *)((long)pvVar17 + 0x68) == 0) goto LAB_00c429d8;
                lVar13 = *(long *)((long)pvVar17 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar17 + 0x68),0);
                if (lVar13 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar13,0);
                if (*(long *)((long)pvVar17 + 0x68) == 0) goto LAB_00c429d8;
                lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x68),0);
                uVar7 = uStack_80;
              }
              else {
                if (uVar7 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar8 + 0x50) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x50),0),
                   lVar13 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if ((*(long *)((long)pvVar17 + 0x60) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar17 + 0x60),0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if ((*(long *)((long)pvVar17 + 0x68) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar17 + 0x68),0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,1,0);
                lVar13 = lStack_90;
                cVar18 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar8 + 0x48) == 0) goto LAB_00c429d8;
                lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x48),0);
              }
              if (lVar13 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,0,0);
            }
            else if (uVar7 == 0) {
              if ((*(long *)((long)pvVar17 + 0x68) == 0) ||
                 (lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x68),0),
                 lVar13 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,1,0);
              if ((*(long *)((long)pvVar17 + 0x60) == 0) ||
                 (lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x60),0),
                 lVar13 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,1,0);
              lVar13 = *(long *)((long)pvVar17 + 0x60);
              if (lVar13 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar13,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar13,0);
              uVar7 = uStack_80;
            }
LAB_00c426ec:
            lVar13 = lStack_90;
            cVar18 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar8 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar13 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar18 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x66);
    if ((cVar18 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar17,pvStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) == 0) {
        uVar11 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = UnityEngine_Object__Instantiate_object_
                           (lVar13,uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar13 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar13,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar19 = *(long **)(lStack_78 + 0x28), plVar19 != (long *)0x0)) {
          (**(code **)(*plVar19 + 0x5a8))(plVar19,_Str__,*(undefined8 *)(*plVar19 + 0x5b0));
          plVar19 = *(long **)(lStack_78 + 0x50);
          if (plVar19 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar7) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar19 + 0x5a8))(plVar19,*puVar2,*(undefined8 *)(*plVar19 + 0x5b0));
            plVar19 = *(long **)(lStack_78 + 0x60);
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x5a8))(plVar19,_Str______,*(undefined8 *)(*plVar19 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                lVar13 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
                lVar16 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if ((lVar16 != 0) && (lVar13 != 0)) {
                  uVar11 = BridgePHP__GetCountryTextureFromID
                                     (lVar13,*(undefined4 *)(lVar16 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar20 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                  if ((uVar20 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar11,0);
                  }
                  plVar19 = *(long **)(lStack_78 + 0x38);
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
                  lVar13 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if ((lVar13 != 0) && (plVar19 != (long *)0x0)) {
                    (**(code **)(*plVar19 + 0x5a8))
                              (plVar19,*(undefined8 *)(lVar13 + 0x20),
                               *(undefined8 *)(*plVar19 + 0x5b0));
                    plVar19 = *(long **)(lStack_78 + 0x40);
                    if (plVar19 != (long *)0x0) {
                      (**(code **)(*plVar19 + 0x5a8))
                                (plVar19,_Str______,*(undefined8 *)(*plVar19 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== public void PLCDDDDLCBB(bool OCNNIGPFPHM) { }   @0xb41c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__PLCDDDDLCBB(void *__this,bool OCNNIGPFPHM)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  char cVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined4 uStack_ac;
  void *pvStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  
  pvStack_88 = __this;
  acStack_7c[0] = OCNNIGPFPHM;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar16 = pvStack_88;
  if (OCNNIGPFPHM) {
    if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40) == 0) {
      return;
    }
    lVar20 = *(long *)((long)pvVar16 + 0x78);
    lVar15 = *(long *)((long)pvVar16 + 0xd0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = _Main_TypeInfo;
    lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_00c429d8;
    uVar8 = *(int *)(lVar14 + 0x10) - 100;
    if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar17 = *(long **)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarReplay_TypeInfo);
      lVar9 = _Main_TypeInfo;
      lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
      if (lVar14 == 0) goto LAB_00c429d8;
    }
    else {
      *(undefined8 *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = 0;
    }
    lVar15 = *(long *)(lVar14 + 0x50);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x00a67a30();
      if (lVar15 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x50), lVar15 == 0)) goto LAB_00c429d8;
      uVar8 = EventContest__get_sort(lVar15,0);
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x50), lVar15 == 0)) goto LAB_00c429d8;
      uStack_ac = *(undefined4 *)(lVar15 + 0x18);
    }
    else {
      if (lVar15 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
      Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
      uVar8 = 0;
      uStack_ac = 0;
    }
    pvVar16 = pvStack_88;
    RatingEventController__HPAFDOMPACP(pvStack_88);
  }
  else {
    lVar20 = *(long *)((long)pvStack_88 + 0x90);
    lVar15 = RatingEventController__JGMFIPCELEF();
    if (lVar15 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_Error_in_FillRating__2,0,0);
      uVar8 = 0;
      plVar17 = (long *)0x0;
      uStack_ac = 0;
      pvVar16 = pvStack_88;
    }
    else {
      plVar17 = *(long **)(lVar15 + 0x30);
      uVar8 = EventContest__get_sort(lVar15,0);
      uStack_ac = *(undefined4 *)(lVar15 + 0x18);
      pvVar16 = pvStack_88;
    }
  }
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = System_Boolean__ToString(acStack_7c,0);
  uVar7 = _Str_FillRating__;
  uVar12 = _Str___good_rating__;
  if (plVar17 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
  }
  uVar12 = System_String__Concat(uVar7,uVar10,uVar12,uVar11,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  if (plVar17 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar16 + 0x70);
    pvStack_a8 = (void *)0x0;
    puStack_a0 = (undefined8 *)((long)pvVar16 + 0xb0);
    uVar19 = 0;
    uStack_80 = uVar8;
    cVar18 = acStack_7c[0];
    do {
      if (cVar18 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar16,uVar19 & 0xffffffff,(int)plVar17[3]);
      }
      cVar18 = acStack_7c[0];
      if ((long)uVar19 < (long)(int)*(uint *)(plVar17 + 3)) {
        if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
        if ((plVar17[uVar19 + 4] != 0) && (*(int *)(plVar17[uVar19 + 4] + 0x10) != -2)) {
          ppuVar6 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar6 = &puStack_98;
          }
          uVar12 = **ppuVar6;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar15 = UnityEngine_Object__Instantiate_object_
                             (lVar20,uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar15 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar15,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar9 = lStack_78;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar17[uVar19 + 4] + 0x10);
          plVar21 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar15;
          if (*piVar1 == -1) {
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar15 = *plVar21;
            uVar12 = _Str__100;
          }
          else {
            uVar12 = System_Int32__ToString(piVar1,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar15 = *plVar21;
          }
          (**(code **)(lVar15 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(lVar15 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) ||
             (lVar15 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar15 == 0))
          goto LAB_00c429d8;
          uVar12 = BridgePHP__GetCountryTextureFromID
                             (lVar15,*(undefined4 *)(plVar17[uVar19 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar13 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(lVar9 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar9 + 0x30),uVar12,0);
          }
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) ||
             (plVar21 = *(long **)(lVar9 + 0x38), plVar21 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))
                    (plVar21,*(undefined8 *)(plVar17[uVar19 + 4] + 0x28),
                     *(undefined8 *)(*plVar21 + 0x5b0));
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
          plVar21 = *(long **)(lVar9 + 0x40);
          uVar12 = Car__DBJBMIGLBNF(*(undefined4 *)(plVar17[uVar19 + 4] + 0x1c),0);
          if (plVar21 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          uVar5 = uVar8 - 1;
          if (uVar8 < 2) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar9 + 0x50);
            uVar3 = *(undefined4 *)(plVar17[uVar19 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar12 = Main__HIIJGDANAIK(uVar3,uStack_ac,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar9 + 0x60);
            uVar3 = *(undefined4 *)(plVar17[uVar19 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar12 = Main__CHJONPOFGFA(uVar3,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          pvVar16 = pvStack_88;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
          iVar4 = *(int *)(plVar17[uVar19 + 4] + 0x18);
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
          lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar15 == 0) goto LAB_00c429d8;
          if (iVar4 == *(int *)(lVar15 + 0x10)) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            pvStack_a8 = (void *)plVar17[uVar19 + 4];
            RatingEventController__MKACNHEOJKP(pvVar16,lVar9,1,uVar19 & 0xffffffff);
            uVar8 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              *(void **)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) = pvStack_a8;
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
              lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar15 == 0) ||
                 (lVar14 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar14 == 0))
              goto LAB_00c429d8;
              lVar15 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar14,*(undefined4 *)(lVar15 + 0x10),0);
              uVar8 = uStack_80;
              if (lVar15 != 0) {
                DJKGLJOCFCE__GEBLPKOKIDF(lVar15,1,0);
                uVar8 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar16,lVar9,0,uVar19 & 0xffffffff);
            uVar8 = uStack_80;
          }
          uStack_80 = uVar8;
          cVar18 = acStack_7c[0];
          if (uVar19 == 0) {
            if (uVar5 < 2) {
              if ((*(long *)(lVar9 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar9,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar8 == 1) {
                if ((*(long *)(lVar9 + 0x60) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x60),0),
                   lVar20 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar9 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar20 = lStack_78;
                if (((*(long *)(lVar9 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar9 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar20,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c429d8;
                  lVar20 = *(long *)(lVar9 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar22 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar9 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar9 + 0x48),0),
                     lVar20 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar22 + -86.0,lVar20,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar9 + 0x58) == 0) ||
                       (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x58),0),
                       lVar20 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar20,0,0);
                  }
                }
                if (*(long *)((long)pvVar16 + 0x68) == 0) goto LAB_00c429d8;
                lVar20 = *(long *)((long)pvVar16 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar16 + 0x68),0);
                if (lVar20 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar20,0);
                if (*(long *)((long)pvVar16 + 0x68) == 0) goto LAB_00c429d8;
                lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x68),0);
                uVar8 = uStack_80;
              }
              else {
                if (uVar8 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar9 + 0x50) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x50),0),
                   lVar20 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if ((*(long *)((long)pvVar16 + 0x60) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar16 + 0x60),0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if ((*(long *)((long)pvVar16 + 0x68) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar16 + 0x68),0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,1,0);
                lVar20 = lStack_90;
                cVar18 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar9 + 0x48) == 0) goto LAB_00c429d8;
                lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x48),0);
              }
              if (lVar20 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,0,0);
            }
            else if (uVar8 == 0) {
              if ((*(long *)((long)pvVar16 + 0x68) == 0) ||
                 (lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x68),0),
                 lVar20 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,1,0);
              if ((*(long *)((long)pvVar16 + 0x60) == 0) ||
                 (lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x60),0),
                 lVar20 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,1,0);
              lVar20 = *(long *)((long)pvVar16 + 0x60);
              if (lVar20 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar20,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar20,0);
              uVar8 = uStack_80;
            }
LAB_00c426ec:
            lVar20 = lStack_90;
            cVar18 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar9 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar20 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar18 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x66);
    if ((cVar18 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar16,pvStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 8) == 0) {
        uVar12 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar20 = UnityEngine_Object__Instantiate_object_
                           (lVar20,uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar20 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar20,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar17 = *(long **)(lStack_78 + 0x28), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 0x5a8))(plVar17,_Str__,*(undefined8 *)(*plVar17 + 0x5b0));
          plVar17 = *(long **)(lStack_78 + 0x50);
          if (plVar17 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar8) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar17 + 0x5a8))(plVar17,*puVar2,*(undefined8 *)(*plVar17 + 0x5b0));
            plVar17 = *(long **)(lStack_78 + 0x60);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x5a8))(plVar17,_Str______,*(undefined8 *)(*plVar17 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                lVar20 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
                lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if ((lVar15 != 0) && (lVar20 != 0)) {
                  uVar12 = BridgePHP__GetCountryTextureFromID
                                     (lVar20,*(undefined4 *)(lVar15 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar19 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                  if ((uVar19 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar12,0);
                  }
                  plVar17 = *(long **)(lStack_78 + 0x38);
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
                  lVar20 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if ((lVar20 != 0) && (plVar17 != (long *)0x0)) {
                    (**(code **)(*plVar17 + 0x5a8))
                              (plVar17,*(undefined8 *)(lVar20 + 0x20),
                               *(undefined8 *)(*plVar17 + 0x5b0));
                    plVar17 = *(long **)(lStack_78 + 0x40);
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(*plVar17 + 0x5a8))
                                (plVar17,_Str______,*(undefined8 *)(*plVar17 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}



// ==== private void HIPELCKHJCI(Transform AIOFDKLKCPM) { }   @0xb40914

/* WARNING: Removing unreachable block (ram,0x00c40b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__HIPELCKHJCI(void *__this,void *AIOFDKLKCPM)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001917129 & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    __this = (void *)func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    bRam0000000001917129 = 1;
  }
  if (AIOFDKLKCPM == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50(__this);
  }
  plVar1 = (long *)UnityEngine_Transform__GetEnumerator(AIOFDKLKCPM,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  do {
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00c409f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c409f0:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      plVar1 = (long *)func_0x00a67a34(plVar1,_System_IDisposable_TypeInfo);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_00c40b00;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00c40a50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c40a50:
    plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_00c40b44;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo)) {
      func_0x00a67eec();
LAB_00c40b44:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(uVar4,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00c40b1c;
    }
  }
LAB_00c40b00:
  puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_IDisposable_TypeInfo,0);
LAB_00c40b1c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


// ==== public static void MDGLEPOJOAM(Level GDJDPNDHBNN) { }   @0xb4125c

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MDGLEPOJOAM(void *GDJDPNDHBNN)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  void *CIDKMFLFJEJ;
  long *plVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 extraout_s0;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *in_stack_ffffffffffffffc8;
  
  if ((bRam000000000191712d & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_Fail_SetEventReward__);
    bRam000000000191712d = 1;
  }
  if (GDJDPNDHBNN == (void *)0x0) goto LAB_00c417c0;
  if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) {
    plVar9 = (long *)System_String__Concat(_Str_Fail_SetEventReward__,0,0);
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
    UnityEngine_Debug__LogError(plVar9,0);
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar13 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar9 == (long *)0x0)) goto LAB_00c5d818;
    lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar13 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    if (lVar4 == 0) goto LAB_00c5d818;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar13,1,0);
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
    plVar9 = *(long **)(lVar4 + 0x1e8);
    if ((plVar9 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
       lVar10 == 0)) goto LAB_00c16768;
    if (10000 < *(int *)(lVar10 + 0x10)) {
      if (*(long *)(lVar4 + 0x1e8) == 0) goto LAB_00c16768;
      uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1e8),0);
      if ((*(long *)(lVar4 + 0x1e8) == 0) ||
         (lVar10 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1e8),0), lVar10 == 0))
      goto LAB_00c16768;
      uVar3 = UnityEngine_Transform__get_parent(lVar10,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar10 = UnityEngine_Object__Instantiate_object_
                         (uVar6,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar10 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar10,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___
                );
      *(long **)(lVar4 + 0x1e8) = in_stack_ffffffffffffffc8;
      if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x5a8))
                (in_stack_ffffffffffffffc8,_Str_,*(undefined8 *)(*in_stack_ffffffffffffffc8 + 0x5b0)
                );
    }
    plVar9 = *(long **)(lVar4 + 0x1e8);
    lVar4 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar9 != (long *)0x0) &&
       (uVar6 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)), lVar4 != 0)
       ) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((uVar1 != 0) &&
         (((*(undefined8 *)(lVar4 + 0x20) = uVar6, uVar1 != 1 &&
           (*(undefined8 *)(lVar4 + 0x28) = _Str__color_, 2 < uVar1)) &&
          (*(undefined8 *)(lVar4 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
        *(undefined8 *)(lVar4 + 0x38) = _Str___;
        uVar14 = UnityEngine_Time__get_time(0);
        _uStack_40 = CONCAT44(uVar14,uStack_40);
        uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
        uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (((4 < uVar1) && (*(undefined8 *)(lVar4 + 0x40) = uVar6, uVar1 != 5)) &&
           (*(undefined8 *)(lVar4 + 0x48) = _Str____color___, 6 < uVar1)) {
          *(undefined8 *)(lVar4 + 0x50) = uVar13;
          uVar13 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x58) = uVar13;
            uVar13 = System_String__Concat(lVar4,0);
            (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar13,*(undefined8 *)(*plVar9 + 0x5b0));
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
  if (0 < *(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10)) {
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
    if ((*(long *)((long)GDJDPNDHBNN + 0x58) == 0) ||
       (lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar4 == 0)) goto LAB_00c417c0;
    lVar4 = DAFNMLEKHAD__DKJLCJPBPPN
                      (lVar4,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10),0,0);
    if (lVar4 == 0) {
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
      if ((*(long *)((long)GDJDPNDHBNN + 0x58) == 0) ||
         (lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar4 == 0)) goto LAB_00c417c0;
      DAFNMLEKHAD__NODNJNKEFKM
                (lVar4,0,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10),0);
    }
  }
  lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
  if (lVar4 == 0) goto LAB_00c417c0;
  if (0 < *(int *)(lVar4 + 0x18)) {
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
    pvVar12 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar12 == (void *)0x0) goto LAB_00c417c0;
    iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(pvVar12,0);
    if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) goto LAB_00c417c0;
    DAFNMLEKHAD__DIMKKHJDHFJ(pvVar12,*(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x18) + iVar2);
    lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
    if (lVar4 == 0) goto LAB_00c417c0;
  }
  if (0 < *(int *)(lVar4 + 0x14)) {
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00c417c0;
    iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar4,0);
    if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) goto LAB_00c417c0;
    DAFNMLEKHAD__JLEEMPONONF(lVar4,*(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x14) + iVar2,0);
    lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
    if (lVar4 == 0) goto LAB_00c417c0;
  }
  if (0 < *(int *)(lVar4 + 0x1c)) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c417c0;
    uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (*(long *)((long)GDJDPNDHBNN + 0x58) == 0))
         || (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x28), lVar4 == 0))
      goto LAB_00c417c0;
      FuelManager__PNAAGCJLMLB
                (lVar4,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x1c),0,0);
    }
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60));
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c417c0;
  uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = _Method_System_Array_Empty_object___;
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c417c0;
    lVar11 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
    lVar10 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
    if (lVar10 == 0) {
      func_0x00a9e42c(_Method_System_Array_Empty_object___);
      lVar10 = *(long *)(lVar4 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x00a9e3d0();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x00a9e3d0();
    }
    if (lVar11 == 0) goto LAB_00c417c0;
    BridgePHP__StartServerConnect(lVar11,3,**(undefined8 **)(lVar4 + 0xb8),0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) {
LAB_00c417c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
     (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) goto LAB_00c417c0;
  uVar13 = *(undefined8 *)(lVar4 + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
      (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) goto LAB_00c417c0;
  if ((bRam0000000001917128 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917128 = 1;
  }
  if ((*(long *)(lVar4 + 0xc0) == 0) ||
     (lVar10 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0xc0),0), lVar10 == 0)) {
LAB_00c40910:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar10,0,0);
  if (*(long *)(lVar4 + 0xb8) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0xb8),1,0);
  if (*(long *)(lVar4 + 200) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 200),1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = Main__KCHOEBEIOCE(0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0)) goto LAB_00c40910;
  if (*(char *)(*(long *)(lVar10 + 0x58) + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar10 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (lVar10 == 0) goto LAB_00c40910;
  }
  pvVar12 = *(void **)(lVar10 + 0x58);
  if (pvVar12 == (void *)0x0) goto LAB_00c40910;
  plVar9 = *(long **)(lVar4 + 0xb8);
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___,plVar9,0);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&MLCNINCNANA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SetButton__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str_lvl_);
    bRam00000000019171a4 = 1;
  }
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(plVar9,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c55ff4;
  uVar13 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x150), lVar4 == 0)) ||
       (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) goto LAB_00c55ff4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(pvVar12);
  uVar13 = _Str_SetButton__;
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  }
  uVar3 = _Str___last__;
  plVar7 = *(long **)((long)pvVar12 + 0x38);
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(uVar13,uVar6,uVar3,uVar8,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  *(long **)((long)pvVar12 + 0x38) = plVar9;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar4 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar4,plVar9,0);
  uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)pvVar12 + 0x58) = uVar14;
  if (*(long *)((long)pvVar12 + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)pvVar12 + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar4 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar4,0);
        *(long *)((long)pvVar12 + 0x20) = lVar4;
        if ((lVar4 == 0) || (*(long **)(lVar4 + 0x10) = plVar9, plVar9 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar13 = UnityEngine_Object__get_name(plVar9,0);
        uVar5 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar4 + 0x10),0);
        if ((uVar5 & 1) != 0) {
          if (lVar10 == 0) goto LAB_00c55ff4;
          lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
        }
        *(long *)(lVar4 + 0x20) = lVar10;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar4 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar4 + 0x18) = plStack_a8;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar4 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar4 + 0x28) = plStack_a8;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) ||
           (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar4 + 0x20),0), lVar10 == 0))
        goto LAB_00c55ff4;
        uVar5 = System_String__Contains(lVar10,_Str_lvl_,0);
        uVar19 = 0x3f800000;
        uVar17 = 0x3f800000;
        uVar14 = 0x3f800000;
        if ((uVar5 & 1) == 0) {
          if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
             (lVar10 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x20), lVar10 == 0))
          goto LAB_00c55ff4;
          uVar14 = UnityEngine_Transform__get_localScale(lVar10,0);
        }
        *(undefined4 *)(lVar4 + 0x30) = uVar14;
        *(undefined4 *)(lVar4 + 0x34) = uVar17;
        *(undefined4 *)(lVar4 + 0x38) = uVar19;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar13 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar4 + 0x28),0);
        *(undefined4 *)(lVar4 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar4 + 0x40) = uVar17;
        uVar5 = GamePadController__PJOJJBEIFAE(uVar13,*(undefined8 *)((long)pvVar12 + 0x20));
        if ((uVar5 & 1) == 0) {
          lVar4 = *(long *)((long)pvVar12 + 0x20);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar14 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar4 + 0x28),0);
          *(undefined4 *)(lVar4 + 0x44) = uVar14;
          *(undefined4 *)(lVar4 + 0x48) = uVar17;
        }
        if (*(long *)((long)pvVar12 + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)((long)pvVar12 + 0x28),*(undefined8 *)((long)pvVar12 + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar4 = lStack_78;
    } while (lStack_78 == 0);
    uVar13 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,plVar9,0);
  } while ((uVar5 & 1) == 0);
  *(long *)((long)pvVar12 + 0x20) = lVar4;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)((long)pvVar12 + 0x20) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28);
  if (lVar4 == 0) goto LAB_00c55ff4;
  fVar15 = (float)UnityEngine_RectTransform__get_pivot(lVar4,0);
  fVar18 = 0.5;
  if (fVar15 == 0.5) {
    if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28), lVar4 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar4,0);
    if (fVar18 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28), lVar4 == 0)) goto LAB_00c55ff4;
    fVar15 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar4,0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if ((lVar4 == 0) || (lVar10 = *(long *)(lVar4 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
    fVar20 = *(float *)(lVar4 + 0x44);
    fVar18 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar22 = *(float *)(lVar4 + 0x3c);
    fVar24 = *(float *)(lVar4 + 0x30);
    fVar23 = *(float *)(lVar4 + 0x44);
    fVar21 = *(float *)(lVar4 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar4 + 0x28),0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if (lVar4 == 0) goto LAB_00c55ff4;
    fVar16 = ABS(fVar22 + -0.5);
    fVar22 = fVar18 * fVar16;
    if (fVar23 < 0.0) {
      fVar22 = -(fVar18 * fVar16);
    }
    fVar23 = ABS(*(float *)(lVar4 + 0x40) + -0.5);
    fVar18 = fVar15 * fVar23;
    if (*(float *)(lVar4 + 0x48) < 0.0) {
      fVar18 = -(fVar15 * fVar23);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar20 + ABS(fVar24) * fVar22,fVar21 + ABS(*(float *)(lVar4 + 0x34)) * fVar18,lVar10,
               0);
  }
  if ((*(long *)((long)pvVar12 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x10), lVar4 != 0)) {
    uVar13 = UnityEngine_Object__get_name(lVar4,0);
    uVar5 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x20), lVar4 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar5 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (*(undefined4 *)((long)pvVar12 + 0x6c),*(undefined4 *)((long)pvVar12 + 0x70),
                   *(undefined4 *)((long)pvVar12 + 0x74),*(undefined4 *)((long)pvVar12 + 0x78),
                   plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DGFCAMFFCMH(GUIReward MHPNFMDOMDH, RewardContest[] IPAKMJAIKIA, int NCDDOMDGKBN, bool OCNNIGPFPHM) { }   @0xb4043c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__DGFCAMFFCMH
               (void *__this,void *MHPNFMDOMDH,void *IPAKMJAIKIA,int NCDDOMDGKBN,bool OCNNIGPFPHM)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uStack_34;
  
  if ((bRam0000000001917130 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    __this = (void *)func_0x00a67900(&Str_Fail_FillGUIRewardLine__);
    bRam0000000001917130 = 1;
  }
  if (IPAKMJAIKIA == (void *)0x0) goto LAB_00c407e8;
  uStack_34 = *(uint *)((long)IPAKMJAIKIA + 0x18);
  if ((int)uStack_34 <= NCDDOMDGKBN) {
    uVar3 = System_Int32__ToString(&uStack_34,0);
    uVar3 = System_String__Concat(_Str_Fail_FillGUIRewardLine__,uVar3,0);
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar3,0);
    return;
  }
  if (uStack_34 <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
  plVar6 = (long *)((long)IPAKMJAIKIA + (long)NCDDOMDGKBN * 8 + 0x20);
  if (*plVar6 == 0) goto LAB_00c407e8;
  if (*(int *)(*plVar6 + 0x10) < 1) {
    if (OCNNIGPFPHM) {
      if ((MHPNFMDOMDH == (void *)0x0) || (*(long *)((long)MHPNFMDOMDH + 0x30) == 0))
      goto LAB_00c407e8;
      UnityEngine_RectTransform__set_anchoredPosition
                (0,0xc1c80000,*(long *)((long)MHPNFMDOMDH + 0x30),0);
    }
    else if (MHPNFMDOMDH == (void *)0x0) goto LAB_00c407e8;
    if (*(long *)((long)MHPNFMDOMDH + 0x68) == 0) goto LAB_00c407e8;
    __this = (void *)UnityEngine_GameObject__SetActive(*(long *)((long)MHPNFMDOMDH + 0x68),0,0);
  }
  else {
    if ((MHPNFMDOMDH == (void *)0x0) || (*(long *)((long)MHPNFMDOMDH + 0x30) == 0))
    goto LAB_00c407e8;
    UnityEngine_RectTransform__set_anchoredPosition
              (0,0x40400000,*(long *)((long)MHPNFMDOMDH + 0x30),0);
    if (*(long *)((long)MHPNFMDOMDH + 0x68) == 0) goto LAB_00c407e8;
    __this = (void *)UnityEngine_GameObject__SetActive(*(long *)((long)MHPNFMDOMDH + 0x68),1,0);
    if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
    if (*plVar6 == 0) goto LAB_00c407e8;
    iVar1 = *(int *)(*plVar6 + 0x10);
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = **(long **)((long)_Main_TypeInfo + 0xb8);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c407e8;
    __this = _Main_TypeInfo;
    if (iVar1 < *(int *)(*(long *)(lVar4 + 0x28) + 0x18)) {
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x70);
      if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
        __this = (void *)func_0x00a67a30();
        lVar4 = **(long **)((long)_Main_TypeInfo + 0xb8);
        if (lVar4 == 0) goto LAB_00c407e8;
      }
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if ((*plVar6 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_00c407e8;
      uVar2 = *(uint *)(*plVar6 + 0x10);
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_00c407ec;
      lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))
                                 (plVar5,*(undefined8 *)(lVar4 + 0x10),
                                  *(undefined8 *)(*plVar5 + 0x5b0));
    }
  }
  if ((uint)NCDDOMDGKBN < *(uint *)((long)IPAKMJAIKIA + 0x18)) {
    if ((*plVar6 == 0) || (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x48), lVar4 == 0))
    goto LAB_00c407e8;
    if (*(int *)(*plVar6 + 0x18) < 1) {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    else {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if (*plVar6 == 0) goto LAB_00c407e8;
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x50);
      uVar3 = System_Int32__ToString(*plVar6 + 0x18,0);
      if (plVar5 == (long *)0x0) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0))
      ;
    }
    if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
    if ((*plVar6 == 0) || (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x38), lVar4 == 0))
    goto LAB_00c407e8;
    if (*(int *)(*plVar6 + 0x14) < 1) {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    else {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if (*plVar6 == 0) goto LAB_00c407e8;
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x40);
      uVar3 = System_Int32__ToString(*plVar6 + 0x14,0);
      if (plVar5 == (long *)0x0) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0))
      ;
    }
    if ((uint)NCDDOMDGKBN < *(uint *)((long)IPAKMJAIKIA + 0x18)) {
      if ((*plVar6 != 0) && (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x58), lVar4 != 0)) {
        if (*(int *)(*plVar6 + 0x1c) < 1) {
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          return;
        }
        __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
        if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
        if (*plVar6 != 0) {
          plVar5 = *(long **)((long)MHPNFMDOMDH + 0x60);
          uVar3 = System_Int32__ToString(*plVar6 + 0x1c,0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0));
            return;
          }
        }
      }
LAB_00c407e8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
LAB_00c407ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58(__this);
}


// ==== public void ClaimReward() { }   @0xb42ddc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__ClaimReward(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__this_00;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917134 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917134 = 1;
  }
  if (*(long *)((long)__this + 0xc0) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0xc0),0,0);
    if ((*(long *)((long)__this + 0xa0) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xa0),0), lVar1 != 0)
       ) {
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
        uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar1 = _Method_System_Array_Empty_object___;
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          __this_00 = *(void **)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
          lVar4 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
          if (lVar4 == 0) {
            func_0x00a9e42c(_Method_System_Array_Empty_object___);
            lVar4 = *(long *)(lVar1 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = func_0x00a9e3d0();
          }
          if (__this_00 != (void *)0x0) {
            uVar5 = **(undefined8 **)(lVar1 + 0xb8);
            if ((bRam0000000001916e14 & 1) == 0) {
              func_0x00a67900(&BridgePHP_TypeInfo,5,uVar5,0);
              func_0x00a67900(&Str_);
              bRam0000000001916e14 = 1;
            }
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = System_String__op_Inequality
                              (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0
                              );
            if ((uVar2 & 1) != 0) {
              if ((*(long *)((long)__this_00 + 0x68) != 0) &&
                 (*(char *)((long)__this_00 + 0x7b) != '\0')) {
                *(undefined8 *)((long)__this_00 + 0x28) = 0;
                BridgePHP__StopServerConnect(__this_00);
              }
              lVar1 = BridgePHP__ServerConnect(__this_00,5,uVar5);
              *(long *)((long)__this_00 + 0x68) = lVar1;
              if (lVar1 == 0) {
                func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                uVar3 = func_0x00a67b44();
                uVar5 = func_0x00a67914(&Str_routine_is_null);
                System_NullReferenceException___ctor(uVar3,uVar5,0);
              }
              else {
                if (pcRam000000000191c478 == (code *)0x0) {
                  pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
                }
                uVar2 = (*pcRam000000000191c478)(__this_00);
                if ((uVar2 & 1) != 0) {
                  if (pcRam000000000191c488 == (code *)0x0) {
                    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                  }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191c488)(__this_00,lVar1);
                  return;
                }
                func_0x00a67914(&System_ArgumentException_TypeInfo);
                uVar3 = func_0x00a67b44();
                uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
                System_ArgumentException___ctor(uVar3,uVar5,0);
              }
              uVar5 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
              auVar6 = func_0x00a67a20(uVar3,uVar5);
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



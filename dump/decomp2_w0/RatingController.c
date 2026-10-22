// ==== private void HIPELCKHJCI() { }   @0xaf6508

/* WARNING: Removing unreachable block (ram,0x00bf6760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__HIPELCKHJCI(void *__this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001916ee1 & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    bRam0000000001916ee1 = 1;
  }
  if (*(long *)((long)__this + 0x88) != 0) {
    plVar1 = (long *)UnityEngine_Transform__GetEnumerator(*(long *)((long)__this + 0x88),0);
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
            goto LAB_00bf65e4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bf65e4:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        plVar1 = (long *)func_0x00a67a34(plVar1,_System_IDisposable_TypeInfo);
        if (plVar1 == (long *)0x0) goto LAB_00bf671c;
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_00bf66f4;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_00bf66dc;
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00bf6644;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bf6644:
      plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
      if (plVar3 == (long *)0x0) goto LAB_00bf6754;
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) {
        func_0x00a67eec();
LAB_00bf6754:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar4,0);
    } while( true );
  }
  goto LAB_00bf6758;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_00bf66dc:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00bf6710;
    }
  }
LAB_00bf66f4:
  puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_IDisposable_TypeInfo,0);
LAB_00bf6710:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_00bf671c:
  if ((*(long *)((long)__this + 200) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 200),0), lVar5 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar5,0);
    return;
  }
LAB_00bf6758:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void MEDLEEIBALB() { }   @0xaf6ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__MEDLEEIBALB(void *__this)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916ee4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Coroutine_stopped_);
    func_0x00a67900(&Str_server_coroutine_is_NULL);
    bRam0000000001916ee4 = 1;
  }
  if (*(long *)((long)__this + 0xd8) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = _Str_server_coroutine_is_NULL;
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
    UnityEngine_Debug__LogError(plVar3,0);
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
    if (lVar7 == 0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c5d818;
    uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c5d818;
    lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar7 == 0) goto LAB_00c5d818;
    iVar9 = 1;
  }
  else {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 0xd8),0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = _Str_Coroutine_stopped_;
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
    lVar7 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar7 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__Log(plVar3,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
    uVar10 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
    lVar7 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar7 == 0) goto LAB_00c590c8;
    iVar9 = 0;
  }
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar10,iVar9,0);
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
  plVar3 = *(long **)(lVar7 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar3 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar7 != 0))
  {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if ((uVar2 != 0) &&
       ((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar2 != 1 &&
        (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar2)))) {
      puVar1 = (undefined8 *)&Str__FF4E4A;
      if (iVar9 == 0) {
        puVar1 = (undefined8 *)&Str__78e938;
      }
      *(undefined8 *)(lVar7 + 0x30) = *puVar1;
      if (uVar2 != 3) {
        *(undefined8 *)(lVar7 + 0x38) = _Str___;
        uStack_3c = UnityEngine_Time__get_time(0);
        uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
        uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (((4 < uVar2) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar2 != 5)) &&
           (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar2)) {
          *(undefined8 *)(lVar7 + 0x50) = uVar10;
          uVar10 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x58) = uVar10;
            uVar10 = System_String__Concat(lVar7,0);
            (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar10,*(undefined8 *)(*plVar3 + 0x5b0));
            return;
          }
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


// ==== public void BEGHPCPPIBK(int JEIDCHDLOGG, int LIJCAJCAIMC, Rating[] LAHMEIEJLEN) { }   @0xaf7308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BEGHPCPPIBK(void *__this,int JEIDCHDLOGG,int LIJCAJCAIMC,void *LAHMEIEJLEN)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if (*(long *)((long)__this + 0xb0) != 0) {
    iVar3 = System_Array__get_Length(*(long *)((long)__this + 0xb0),0);
    if (iVar3 <= JEIDCHDLOGG) {
      return;
    }
    lVar9 = *(long *)((long)__this + 0xb0);
    *(undefined1 *)((long)__this + 0x30) = 0;
    if (lVar9 != 0) {
      if (((uint)JEIDCHDLOGG < **(uint **)(lVar9 + 0x10)) &&
         (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
        *(void **)(lVar9 + ((long)LIJCAJCAIMC + lVar10 * JEIDCHDLOGG) * 8 + 0x20) = LAHMEIEJLEN;
        lVar9 = *(long *)((long)__this + 0xb8);
        uVar16 = UnityEngine_Time__get_time(0);
        if (lVar9 == 0) goto LAB_00bf73e0;
        if (((uint)JEIDCHDLOGG < **(uint **)(lVar9 + 0x10)) &&
           (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
          *(undefined4 *)(lVar9 + ((long)LIJCAJCAIMC + lVar10 * JEIDCHDLOGG) * 4 + 0x20) = uVar16;
          if ((bRam0000000001916ee2 & 1) == 0) {
            func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
            func_0x00a67900(&Main_TypeInfo);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            func_0x00a67900(&Str__100);
            bRam0000000001916ee2 = 1;
          }
          lVar9 = *(long *)((long)__this + 0xb0);
          if (lVar9 == 0) {
            return;
          }
          if (*(uint *)((long)__this + 0x48) < **(uint **)(lVar9 + 0x10)) {
            lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4);
            if (*(uint *)((long)__this + 0x60) < (uint)lVar10) {
              lVar9 = *(long *)(lVar9 + ((long)(int)*(uint *)((long)__this + 0x60) +
                                        lVar10 * (int)*(uint *)((long)__this + 0x48)) * 8 + 0x20);
              if (lVar9 == 0) {
                return;
              }
              if (*(long *)(lVar9 + 0x18) == 0) {
                return;
              }
              RatingController__HPAFDOMPACP(__this);
              RatingController__GGOIKHNAIJB(__this,1);
              if (*(int *)(lVar9 + 0x18) < 1) {
                return;
              }
              uVar15 = 0;
              lVar10 = lVar9 + 0x20;
              while( true ) {
                uVar5 = *(undefined8 *)((long)__this + 0x88);
                uVar2 = *(undefined8 *)((long)__this + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar4 = UnityEngine_Object__Instantiate_object_
                                  (uVar2,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___)
                ;
                if (lVar4 == 0) goto LAB_00bf6cfc;
                UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                          (lVar4,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___
                          );
                lVar4 = lStack_68;
                uVar14 = (uint)uVar15;
                if ((uVar15 & 1) == 0) {
                  if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
                  UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) || (lVar4 == 0)) goto LAB_00bf6cfc;
                piVar1 = (int *)(lVar8 + 0x10);
                plVar11 = *(long **)(lVar4 + 0x28);
                if (*piVar1 == -1) {
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  lVar8 = *plVar11;
                  uVar5 = _Str__100;
                }
                else {
                  uVar5 = System_Int32__ToString(piVar1,0);
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  lVar8 = *plVar11;
                }
                (**(code **)(lVar8 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(lVar8 + 0x5b0));
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf6cfc;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) ||
                   (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar6 == 0))
                goto LAB_00bf6cfc;
                uVar5 = BridgePHP__GetCountryTextureFromID(lVar6,*(undefined4 *)(lVar8 + 0x20),0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(long *)(lVar4 + 0x30) == 0) goto LAB_00bf6cfc;
                  UnityEngine_UI_Image__set_sprite(*(long *)(lVar4 + 0x30),uVar5,0);
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) || (plVar11 = *(long **)(lVar4 + 0x38), plVar11 == (long *)0x0))
                goto LAB_00bf6cfc;
                (**(code **)(*plVar11 + 0x5a8))
                          (plVar11,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(*plVar11 + 0x5b0));
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if (lVar8 == 0) goto LAB_00bf6cfc;
                plVar11 = *(long **)(lVar4 + 0x50);
                uVar5 = System_Int32__ToString(lVar8 + 0x24,0);
                if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5b0));
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if (lVar8 == 0) goto LAB_00bf6cfc;
                if (*(int *)(lVar8 + 0x10) == -1) {
LAB_00bf6c18:
                  plVar11 = *(long **)(lVar4 + 0x20);
                  if (plVar11 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  (**(code **)(*plVar11 + 0x2a8))
                            (*(undefined4 *)((long)__this + 0x98),
                             *(undefined4 *)((long)__this + 0x9c),
                             *(undefined4 *)((long)__this + 0xa0),
                             *(undefined4 *)((long)__this + 0xa4),plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                  if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00bf6cfc;
                  UnityEngine_Behaviour__set_enabled(*(long *)(lVar4 + 0x20),1,0);
                  plVar11 = *(long **)(lVar4 + 0x50);
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  plVar12 = *(long **)(lVar4 + 0x28);
                  plVar13 = *(long **)(lVar4 + 0x38);
                  (**(code **)(*plVar11 + 0x2a8))
                            (0,0,0,0x3f800000,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
                  if ((plVar13 == (long *)0x0) ||
                     ((**(code **)(*plVar13 + 0x2a8))
                                (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)),
                     plVar12 == (long *)0x0)) goto LAB_00bf6cfc;
                  (**(code **)(*plVar12 + 0x2a8))
                            (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
                }
                else {
                  iVar3 = *(int *)(lVar8 + 0x14);
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
                  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                  if (lVar8 == 0) goto LAB_00bf6cfc;
                  if (iVar3 == *(int *)(lVar8 + 0x10)) goto LAB_00bf6c18;
                }
                uVar15 = uVar15 + 1;
                if (*(int *)(lVar9 + 0x18) <= (int)uVar15) {
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00bf73e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HPAFDOMPACP() { }   @0xaf6d04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__HPAFDOMPACP(void *__this)

{
  long *plVar1;
  long lStack_18;
  
  if ((bRam0000000001916ee7 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916ee7 = 1;
  }
  plVar1 = *(long **)((long)__this + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (*(long *)((long)__this + 0x88) != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)((long)__this + 0x88),&lStack_18,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (lStack_18 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition(0,0,lStack_18,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PGHILJEKJEJ() { }   @0xaf78a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PGHILJEKJEJ(void *__this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_58;
  
  if (*(long *)((long)__this + 0x58) != 0) {
    uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x58),0);
    if (((uVar4 & 1) == 0) || (*(char *)((long)__this + 0x30) != '\0')) {
      return;
    }
    lVar5 = *(long *)((long)__this + 0x68);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if ((int)(uVar2 - 1) <= *(int *)((long)__this + 0x60)) {
        return;
      }
      uVar1 = *(int *)((long)__this + 0x60) + 1;
      *(uint *)((long)__this + 0x60) = uVar1;
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar5 != 0) {
        UnityEngine_UI_Toggle__set_isOn(lVar5,1,0);
        uVar2 = *(uint *)((long)__this + 0x60);
        if ((bRam0000000001916ee6 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam0000000001916ee6 = 1;
        }
        if (*(char *)((long)__this + 0x30) == '\0') {
          lVar5 = *(long *)((long)__this + 0x68);
          if (lVar5 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
              if ((lVar6 == 0) ||
                 (lVar3 = UnityEngine_Component__get_gameObject(lVar6,0), lVar3 == 0))
              goto LAB_00bf75f0;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar3,&lStack_58,
                         _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
              lVar3 = lStack_58;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar4 & 1) != 0) {
                if (lVar3 == 0) goto LAB_00bf75f0;
                uVar9 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                uVar10 = 0;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0xc1200000;
                }
                UnityEngine_RectTransform__set_anchoredPosition(uVar9,uVar10,lVar3,0);
              }
              uVar7 = *(undefined8 *)((long)__this + 0x78);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar4 & 1) != 0) {
                if (*(long *)((long)__this + 0x78) == 0) goto LAB_00bf75f0;
                uVar10 = 0xc2680000;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0x42680000;
                }
                UnityEngine_RectTransform__set_anchoredPosition
                          (uVar10,0xc1a00000,*(long *)((long)__this + 0x78),0);
              }
              if ((uVar2 == uVar8) && (*(char *)(lVar6 + 0x120) != '\0')) {
                lVar6 = UnityEngine_Component__get_transform(lVar6,0);
                if (lVar6 == 0) goto LAB_00bf75f0;
                UnityEngine_Transform__SetAsLastSibling(lVar6,0);
                *(uint *)((long)__this + 0x60) = uVar2;
                RatingController__OJBAJGILIJN(__this,*(undefined4 *)((long)__this + 0x48),uVar2);
              }
              uVar1 = *(uint *)(lVar5 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



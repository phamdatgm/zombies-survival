// ==== public void EKGEIOGPKIJ() { }   @0xaf6174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__EKGEIOGPKIJ(void *__this)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001916ee0 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ERROR_SOCIAL_APP_STORE);
    func_0x00a67900(&Str_ERROR_SOCIAL_GOOGLE_PLAY);
    bRam0000000001916ee0 = 1;
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) == 0) {
LAB_00bf63d0:
    if (*(long *)((long)__this + 0x58) == 0) goto LAB_00bf6504;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),0,0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar4 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
    if (iVar4 == 1) {
      plVar2 = *(long **)((long)__this + 0xc0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar3 = (void *)**(long **)(_Translate_TypeInfo + 0xb8);
      if (pvVar3 == (void *)0x0) goto LAB_00bf6504;
      puVar7 = (undefined8 *)&Str_ERROR_SOCIAL_GOOGLE_PLAY;
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar4 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      }
      plVar2 = *(long **)((long)__this + 0xc0);
      if (iVar4 != 2) goto joined_r0x00bf64d8;
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar3 = (void *)**(long **)(_Translate_TypeInfo + 0xb8);
      if (pvVar3 == (void *)0x0) goto LAB_00bf6504;
      puVar7 = (undefined8 *)&Str_ERROR_SOCIAL_APP_STORE;
    }
    pvVar3 = Translate__JJJNIPAKLJF(pvVar3,(void *)*puVar7);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5a8))(plVar2,pvVar3,*(undefined8 *)(*plVar2 + 0x5b0));
      if ((*(long *)((long)__this + 0xc0) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0xc0),0),
         lVar5 != 0)) {
        uVar1 = 1;
        goto LAB_00bf64f0;
      }
    }
  }
  else {
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00bf6504;
    if (*(int *)(lVar5 + 0x14) < 1) goto LAB_00bf63d0;
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00bf6504;
    iVar4 = *(int *)(lVar5 + 0x14);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00bf6504;
    if (*(int *)(lVar5 + 0x18) <= iVar4) goto LAB_00bf63d0;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf6504;
    lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
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
    if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_00bf6504;
    uVar1 = BridgePHP__GetCountryTextureFromID(lVar5,*(undefined4 *)(lVar6 + 0x14),0);
    if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bf6504;
    UnityEngine_UI_Image__set_sprite(*(long *)((long)__this + 0x70),uVar1,0);
    if (*(long *)((long)__this + 0x58) == 0) goto LAB_00bf6504;
    UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),1,0);
    plVar2 = *(long **)((long)__this + 0xc0);
joined_r0x00bf64d8:
    if ((plVar2 != (long *)0x0) &&
       (lVar5 = UnityEngine_Component__get_gameObject(plVar2,0), lVar5 != 0)) {
      uVar1 = 0;
LAB_00bf64f0:
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar5,uVar1);
      return;
    }
  }
LAB_00bf6504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf6df4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController___ctor(void *__this)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001916ee3 & 1) == 0) {
    func_0x00a67900(&Rating______TypeInfo);
    func_0x00a67900(&float____TypeInfo);
    bRam0000000001916ee3 = 1;
  }
  uStack_38 = 2;
  uStack_40 = 4;
  uVar1 = func_0x00a679a8(_Rating______TypeInfo,&uStack_40);
  *(undefined8 *)((long)__this + 0xb0) = uVar1;
  uStack_48 = 2;
  uStack_50 = 4;
  uVar1 = func_0x00a679a8(_float____TypeInfo,&uStack_50);
  *(undefined8 *)((long)__this + 0xb8) = uVar1;
  UnityEngine_MonoBehaviour___ctor(__this,0);
  return;
}


// ==== public void PAHDFNGJABH(RatingController.DBDHJONGNMF GIHDNMOMBIG) { }   @0xaf6840

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PAHDFNGJABH(void *__this,int GIHDNMOMBIG)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x50);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= (uint)GIHDNMOMBIG) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar1 = *(long *)(lVar1 + (long)GIHDNMOMBIG * 8 + 0x20);
    if (lVar1 != 0) {
      UnityEngine_UI_Toggle__set_isOn(lVar1,1,0);
      *(int *)((long)__this + 0x48) = GIHDNMOMBIG;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OJBAJGILIJN(int PCFMDDLGOIK, int LIJCAJCAIMC) { }   @0xaf7064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__OJBAJGILIJN(void *__this,int PCFMDDLGOIK,int LIJCAJCAIMC)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  long lStack_68;
  
  RatingController__HIPELCKHJCI();
  lVar8 = *(long *)((long)__this + 0xb8);
  if (lVar8 == 0) {
LAB_00bf713c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (((uint)PCFMDDLGOIK < **(uint **)(lVar8 + 0x10)) &&
     (lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
    lVar9 = *(long *)((long)__this + 0xb0);
    if (lVar9 == 0) goto LAB_00bf713c;
    if (((uint)PCFMDDLGOIK < **(uint **)(lVar9 + 0x10)) &&
       (lVar11 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar11)) {
      fVar17 = *(float *)(lVar8 + ((long)LIJCAJCAIMC + lVar10 * PCFMDDLGOIK) * 4 + 0x20);
      if ((fVar17 == 0.0) ||
         ((*(long *)(lVar9 + ((long)LIJCAJCAIMC + lVar11 * PCFMDDLGOIK) * 8 + 0x20) == 0 ||
          (fVar16 = (float)UnityEngine_Time__get_time(0), 60.0 < fVar16 - fVar17)))) {
        if (*(long *)((long)__this + 0xd8) != 0) {
          *(undefined8 *)((long)__this + 0xd0) = 0;
          RatingController__MEDLEEIBALB(__this);
        }
        lVar8 = RatingController__LDGNMLFKAKM(__this);
        *(long *)((long)__this + 0xd8) = lVar8;
        if (lVar8 == 0) {
          func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
          uVar6 = func_0x00a67b44();
          uVar7 = func_0x00a67914(&Str_routine_is_null);
          System_NullReferenceException___ctor(uVar6,uVar7,0);
        }
        else {
          if (pcRam000000000191c478 == (code *)0x0) {
            pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
          }
          uVar5 = (*pcRam000000000191c478)(__this);
          if ((uVar5 & 1) != 0) {
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(__this,lVar8);
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar6 = func_0x00a67b44();
          uVar7 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
          System_ArgumentException___ctor(uVar6,uVar7,0);
        }
        uVar7 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
        auVar18 = func_0x00a67a20(uVar6,uVar7);
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(auVar18._0_8_,auVar18._8_8_);
        return;
      }
      if ((bRam0000000001916ee2 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&Menu_TypeInfo);
        func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str__100);
        bRam0000000001916ee2 = 1;
      }
      lVar8 = *(long *)((long)__this + 0xb0);
      if (lVar8 == 0) {
        return;
      }
      if (*(uint *)((long)__this + 0x48) < **(uint **)(lVar8 + 0x10)) {
        lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4);
        if (*(uint *)((long)__this + 0x60) < (uint)lVar10) {
          lVar8 = *(long *)(lVar8 + ((long)(int)*(uint *)((long)__this + 0x60) +
                                    lVar10 * (int)*(uint *)((long)__this + 0x48)) * 8 + 0x20);
          if (lVar8 == 0) {
            return;
          }
          if (*(long *)(lVar8 + 0x18) == 0) {
            return;
          }
          RatingController__HPAFDOMPACP(__this);
          RatingController__GGOIKHNAIJB(__this,1);
          if (*(int *)(lVar8 + 0x18) < 1) {
            return;
          }
          uVar5 = 0;
          lVar10 = lVar8 + 0x20;
          while( true ) {
            uVar7 = *(undefined8 *)((long)__this + 0x88);
            uVar6 = *(undefined8 *)((long)__this + 0x90);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar9 = UnityEngine_Object__Instantiate_object_
                              (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
            if (lVar9 == 0) goto LAB_00bf6cfc;
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                      (lVar9,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
            lVar9 = lStack_68;
            uVar15 = (uint)uVar5;
            if ((uVar5 & 1) == 0) {
              if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
              UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) || (lVar9 == 0)) goto LAB_00bf6cfc;
            piVar1 = (int *)(lVar11 + 0x10);
            plVar12 = *(long **)(lVar9 + 0x28);
            if (*piVar1 == -1) {
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              lVar11 = *plVar12;
              uVar7 = _Str__100;
            }
            else {
              uVar7 = System_Int32__ToString(piVar1,0);
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              lVar11 = *plVar12;
            }
            (**(code **)(lVar11 + 0x5a8))(plVar12,uVar7,*(undefined8 *)(lVar11 + 0x5b0));
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf6cfc;
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) ||
               (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar3 == 0))
            goto LAB_00bf6cfc;
            uVar7 = BridgePHP__GetCountryTextureFromID(lVar3,*(undefined4 *)(lVar11 + 0x20),0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(lVar9 + 0x30) == 0) goto LAB_00bf6cfc;
              UnityEngine_UI_Image__set_sprite(*(long *)(lVar9 + 0x30),uVar7,0);
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) || (plVar12 = *(long **)(lVar9 + 0x38), plVar12 == (long *)0x0))
            goto LAB_00bf6cfc;
            (**(code **)(*plVar12 + 0x5a8))
                      (plVar12,*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(*plVar12 + 0x5b0));
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if (lVar11 == 0) goto LAB_00bf6cfc;
            plVar12 = *(long **)(lVar9 + 0x50);
            uVar7 = System_Int32__ToString(lVar11 + 0x24,0);
            if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
            (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x5b0));
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if (lVar11 == 0) goto LAB_00bf6cfc;
            if (*(int *)(lVar11 + 0x10) == -1) {
LAB_00bf6c18:
              plVar12 = *(long **)(lVar9 + 0x20);
              if (plVar12 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              (**(code **)(*plVar12 + 0x2a8))
                        (*(undefined4 *)((long)__this + 0x98),*(undefined4 *)((long)__this + 0x9c),
                         *(undefined4 *)((long)__this + 0xa0),*(undefined4 *)((long)__this + 0xa4),
                         plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
              if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00bf6cfc;
              UnityEngine_Behaviour__set_enabled(*(long *)(lVar9 + 0x20),1,0);
              plVar12 = *(long **)(lVar9 + 0x50);
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              plVar13 = *(long **)(lVar9 + 0x28);
              plVar14 = *(long **)(lVar9 + 0x38);
              (**(code **)(*plVar12 + 0x2a8))
                        (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
              if ((plVar14 == (long *)0x0) ||
                 ((**(code **)(*plVar14 + 0x2a8))
                            (0,0,0,0x3f800000,plVar14,*(undefined8 *)(*plVar14 + 0x2b0)),
                 plVar13 == (long *)0x0)) goto LAB_00bf6cfc;
              (**(code **)(*plVar13 + 0x2a8))
                        (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
            }
            else {
              iVar2 = *(int *)(lVar11 + 0x14);
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
              lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar11 == 0) goto LAB_00bf6cfc;
              if (iVar2 == *(int *)(lVar11 + 0x10)) goto LAB_00bf6c18;
            }
            uVar5 = uVar5 + 1;
            if (*(int *)(lVar8 + 0x18) <= (int)uVar5) {
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


// ==== private string EDCLKAIGBGF(bool PGFNFDFOJKL) { }   @0xaf7804

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController__EDCLKAIGBGF(void *__this,bool PGFNFDFOJKL)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvStack_28;
  
  if ((bRam0000000001916ee9 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ERROR_INTERNET);
    func_0x00a67900(&Str_ERROR_UNKNOWN);
    bRam0000000001916ee9 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  puVar1 = (undefined8 *)&Str_ERROR_INTERNET;
  if (!PGFNFDFOJKL) {
    puVar1 = (undefined8 *)&Str_ERROR_UNKNOWN;
  }
  uVar5 = *puVar1;
  if ((bRam0000000001917112 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
                    uVar5,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_error);
    bRam0000000001917112 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_00c31f48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                    (lVar2,uVar5,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  pvVar4 = _Str_error;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8);
    if (lVar2 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar2,uVar5,&pvStack_28,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar4 = pvStack_28;
  }
  return pvVar4;
}



// ==== private void OnTriggerEnter(Collider GLKAJMJEIEM) { }   @0xae8d28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__OnTriggerEnter(void *__this,void *GLKAJMJEIEM)

{
  uint uVar1;
  void *OPBPCFOOBHD;
  void *HAKKOAADCOE;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *FJBLHMNOPEP;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *__this_00;
  undefined1 auVar8 [16];
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916e53 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_TramplinCircle___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_circle_tramplin_exit);
    func_0x00a67900(&Str_barrel_throw);
    func_0x00a67900(&Str_circle_tramplin_enter);
    func_0x00a67900(&Str_bird);
    func_0x00a67900(&Str_bat);
    func_0x00a67900(&Str_wood_box);
    func_0x00a67900(&Str_pumpkin);
    func_0x00a67900(&Str_tramplin_circle);
    func_0x00a67900(&Str_finish);
    func_0x00a67900(&Str_bird_spawn);
    func_0x00a67900(&Str_bus_destroy);
    func_0x00a67900(&Str_BarrelTipped);
    func_0x00a67900(&Str_CRASH_2);
    func_0x00a67900(&Str_yama_trigger);
    func_0x00a67900(&Str_barrel);
    func_0x00a67900(&Str_car_pack_destroy);
    func_0x00a67900(&Str_tramplin_barrel);
    func_0x00a67900(&Str_zombie);
    func_0x00a67900(&Str_bomb);
    func_0x00a67900(&Str_lava_trigger);
    bRam0000000001916e53 = 1;
  }
  if ((GLKAJMJEIEM == (void *)0x0) ||
     (OPBPCFOOBHD = (void *)UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0),
     OPBPCFOOBHD == (void *)0x0)) goto LAB_00be95e0;
  HAKKOAADCOE = (void *)UnityEngine_GameObject__get_transform(OPBPCFOOBHD,0);
  lVar2 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
  if (lVar2 == 0) goto LAB_00be95e0;
  lVar2 = UnityEngine_Object__get_name(lVar2,0);
  UnityEngine_Collider__set_enabled(GLKAJMJEIEM,0,0);
  lVar3 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
  if (lVar3 == 0) goto LAB_00be95e0;
  uVar4 = UnityEngine_GameObject__get_tag(lVar3,0);
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(uVar4,0);
  if (uVar1 < 0x70b773a9) {
    if (uVar1 < 0x123c95d2) {
      if (uVar1 == 0x110302df) {
        uVar5 = System_String__op_Equality(uVar4,_Str_zombie,0);
        if ((uVar5 & 1) != 0) {
          CarCollision__JDLKLAGFELO(__this,0,OPBPCFOOBHD,HAKKOAADCOE);
        }
      }
      else if (uVar1 == 0x123c95d1) {
        puVar7 = (undefined8 *)&Str_barrel;
        goto LAB_00be90c8;
      }
    }
    else if (uVar1 == 0x4eb746ea) {
      puVar7 = (undefined8 *)&Str_barrel_throw;
LAB_00be90c8:
      uVar5 = System_String__op_Equality(uVar4,*puVar7,0);
      if ((uVar5 & 1) != 0) {
        CarCollision__GLBHMAKJKHB(__this,0,OPBPCFOOBHD,HAKKOAADCOE);
      }
    }
    else if (uVar1 == 0x70b773a8) {
      auVar8 = System_String__op_Equality(uVar4,_Str_bat,0);
      if ((auVar8._0_8_ & 1) != 0) {
        CarCollision__FHFJHOHDHKM(__this,auVar8._8_8_,OPBPCFOOBHD,HAKKOAADCOE);
      }
    }
  }
  else if (uVar1 < 0x977128b3) {
    if (uVar1 == 0x94e99982) {
      uVar5 = System_String__op_Equality(uVar4,_Str_wood_box,0);
      if ((uVar5 & 1) != 0) {
        CarCollision__GBLOCBGPAPN(__this,0,OPBPCFOOBHD,HAKKOAADCOE);
      }
    }
    else if ((uVar1 == 0x977128b2) &&
            (uVar5 = System_String__op_Equality(uVar4,_Str_bird,0), (uVar5 & 1) != 0)) {
      CarCollision__CODGMCKJNEO(__this,OPBPCFOOBHD,HAKKOAADCOE);
    }
  }
  else if (uVar1 == 0xca991591) {
    uVar5 = System_String__op_Equality(uVar4,_Str_bomb,0);
    if ((uVar5 & 1) != 0) {
      CarCollision__AINHBDLOANI(__this,OPBPCFOOBHD,HAKKOAADCOE);
    }
  }
  else if (uVar1 == 0xd9b9523f) {
    uVar5 = System_String__op_Equality(uVar4,_Str_pumpkin,0);
    if ((uVar5 & 1) != 0) {
      CarCollision__HILOPNIFJDL(__this,HAKKOAADCOE);
    }
  }
  else if ((uVar1 == 0xda8b7812) &&
          (uVar5 = System_String__op_Equality(uVar4,_Str_bird_spawn,0), (uVar5 & 1) != 0)) {
    uVar4 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
    CarCollision__GCAMMBECDIH(__this,uVar4);
  }
  uVar5 = System_String__op_Equality(lVar2,_Str_yama_trigger,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
    uVar4 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
      __this_00 = *(void **)(*(long *)((long)__this + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (FJBLHMNOPEP = (void *)Translate__JJJNIPAKLJF
                                          (**(long **)(_Translate_TypeInfo + 0xb8),_Str_CRASH_2,0),
         __this_00 == (void *)0x0)) goto LAB_00be95e0;
      GUIGameplay__HNKHJLDJMHB(__this_00,FJBLHMNOPEP,1,false,true);
    }
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
    CarController__DPKGKJMAPLO(*(long *)((long)__this + 0x20),0);
    lVar3 = *(long *)((long)__this + 0x20);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&lStack_78,0,0);
    uStack_58 = uStack_70;
    lStack_60 = lStack_78;
    uStack_50 = uStack_68;
    if (lVar3 == 0) goto LAB_00be95e0;
    *(undefined4 *)(lVar3 + 0x19c) = uStack_68;
    *(undefined8 *)(lVar3 + 0x194) = uStack_70;
    *(long *)(lVar3 + 0x18c) = lStack_78;
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
    *(undefined1 *)(*(long *)((long)__this + 0x20) + 0x3fe) = 1;
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__FIGKLLNAMLG(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd8));
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
    uVar5 = CarController__HECJKCAMLHJ(*(long *)((long)__this + 0x20),OPBPCFOOBHD,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
      uVar4 = CarController__FIOKLNLIDNH(*(long *)((long)__this + 0x20),0,0);
      UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar4,0);
    }
  }
  uVar5 = System_String__op_Equality(lVar2,_Str_lava_trigger,0);
  if ((uVar5 & 1) == 0) {
    if (lVar2 != 0) {
      uVar5 = System_String__Contains(lVar2,_Str_bomb,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = System_String__Contains(lVar2,_Str_tramplin_circle,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = System_String__Contains(lVar2,_Str_tramplin_barrel,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = System_String__Contains(lVar2,_Str_finish,0);
            if ((uVar5 & 1) == 0) {
              uVar5 = System_String__Contains(lVar2,_Str_bus_destroy,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = System_String__Contains(lVar2,_Str_car_pack_destroy,0);
                if ((uVar5 & 1) == 0) {
                  uVar5 = System_String__Contains(lVar2,_Str_BarrelTipped,0);
                  if ((uVar5 & 1) == 0) {
                    uVar5 = System_String__Contains(lVar2,_Str_circle_tramplin_enter,0);
                    if ((uVar5 & 1) == 0) {
                      uVar5 = System_String__Contains(lVar2,_Str_circle_tramplin_exit,0);
                      if ((uVar5 & 1) == 0) {
                        return;
                      }
                      if (*(long *)((long)__this + 0x20) != 0) {
                        *(undefined1 *)(*(long *)((long)__this + 0x20) + 0x27c) = 0;
                        return;
                      }
                    }
                    else if (*(long *)((long)__this + 0x20) != 0) {
                      *(undefined1 *)(*(long *)((long)__this + 0x20) + 0x27c) = 1;
                      return;
                    }
                  }
                  else if (*(long *)((long)__this + 0x20) != 0) {
                    CarController__GCHFPNMJHCA(0x3f666666,*(long *)((long)__this + 0x20),1,0);
                    if (*(long *)((long)__this + 0x20) != 0) {
                      CarController__KPFMJNAJAIJ(*(long *)((long)__this + 0x20),0);
                      return;
                    }
                  }
                  goto LAB_00be95e0;
                }
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
              }
              CarCollision__NPBHJPAEJMB(__this,OPBPCFOOBHD,HAKKOAADCOE,uVar4);
            }
            else {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__GIGBLEBBIEK
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x88),0);
              if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be95e0;
              uVar4 = CarController__FIOKLNLIDNH(*(long *)((long)__this + 0x20),1,0);
              UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar4,0);
            }
          }
          else {
            uVar4 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
            uVar6 = UnityEngine_Component__get_transform(GLKAJMJEIEM,0);
            CarCollision__FMLEBCMDJID(__this,0,uVar4,uVar6);
          }
        }
        else {
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (GLKAJMJEIEM,&lStack_60,
                     _Method_UnityEngine_Component_GetComponent_TramplinCircle___);
          lVar2 = lStack_60;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(lVar2,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar2 == 0) goto LAB_00be95e0;
            TramplinCircle__MPLPGOBGOJA(lVar2,0);
          }
        }
      }
      else {
        uVar4 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy(uVar4,0);
      }
      return;
    }
  }
  else {
    uVar4 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(uVar4,0);
    if (*(long *)((long)__this + 0x20) != 0) {
      CarController__AEFMMNHIGLH(*(long *)((long)__this + 0x20),0);
      return;
    }
  }
LAB_00be95e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OKOFPODNOFH() { }   @0xaea5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__OKOFPODNOFH(void *__this)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_d0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  long lStack_a8;
  code *pcStack_a0;
  void *pvStack_98;
  long lStack_88;
  
  if ((bRam0000000001916e58 & 1) == 0) {
    func_0x00a67900(&AutoDestructShuriken___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_FX_wood_box_crush);
    bRam0000000001916e58 = 1;
  }
  uVar1 = func_0x00a679a0(_AutoDestructShuriken___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x50) = uVar1;
  uVar8 = 0;
  do {
    uVar1 = UnityEngine_Resources__Load(_Str_FX_wood_box_crush,0);
    if (cRam000000000191678a == '\0') {
      func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
      cRam000000000191678a = '\x01';
    }
    puVar5 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
    uVar15 = *puVar5;
    uVar14 = puVar5[1];
    uVar13 = puVar5[2];
    uVar12 = puVar5[3];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = 0;
    uVar11 = 0xc1f00000;
    plVar2 = (long *)UnityEngine_Object__Instantiate
                               (0,0,0xc1f00000,uVar15,uVar14,uVar13,uVar12,uVar1,0);
    if (plVar2 == (long *)0x0) {
LAB_00bea77c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*plVar2 != _UnityEngine_GameObject_TypeInfo) {
      func_0x00a67eec();
LAB_00bea784:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar9 = *(long **)((long)__this + 0x50);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar2,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    lVar7 = lStack_88;
    if (plVar9 == (long *)0x0) goto LAB_00bea77c;
    if ((lStack_88 != 0) &&
       (lVar3 = func_0x00a67a34(lStack_88,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0)) {
      uVar1 = func_0x00a67b74();
      lVar3 = func_0x00a67a20(uVar1,0);
      lStack_a8 = lVar7;
      pcStack_a0 = (code *)&UnityEngine_Quaternion_TypeInfo;
      pvStack_98 = __this;
      if ((bRam0000000001916e5e & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam0000000001916e5e = 1;
      }
      lVar7 = 0x48;
      if ((extraout_x1 & 1) == 0) {
        lVar7 = 0x40;
      }
      lVar7 = *(long *)(lVar3 + lVar7);
      if (lVar7 == 0) goto LAB_00bea8cc;
      if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
        return;
      }
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      break;
    }
    if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_00bea784;
    uVar6 = uVar8 + 1;
    plVar9[uVar8 + 4] = lVar7;
    uVar8 = uVar6;
    if (uVar6 == 3) {
      return;
    }
  } while( true );
LAB_00bea814:
  if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar3 = *(long *)(lVar7 + 0x20 + uVar8 * 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar6 & 1) != 0) {
    if ((lVar3 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar3,0), lVar4 == 0))
    goto LAB_00bea8cc;
    uVar6 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar3 + 0x20) != 0) {
        UnityEngine_Transform__set_position(extraout_d0,uVar10,uVar11,*(long *)(lVar3 + 0x20),0);
        uVar1 = 0;
        pcStack_a0 = CarCollision__NDLJJLDOHIA;
        *(undefined4 *)(lVar3 + 0x34) = 0;
        if (*(long *)(lVar3 + 0x28) != 0) {
          lStack_a8 = UnityEngine_ParticleSystem__get_main(*(long *)(lVar3 + 0x28),0);
          uVar12 = UnityEngine_ParticleSystem_MainModule__get_duration(&lStack_a8,0);
          *(undefined4 *)(lVar3 + 0x38) = uVar12;
          auVar16 = UnityEngine_Component__get_gameObject(lVar3,0);
          uVar1 = auVar16._8_8_;
          if (auVar16._0_8_ != 0) {
            UnityEngine_GameObject__SetActive(auVar16._0_8_,1,0);
            uVar1 = extraout_x1_00;
            if (*(long *)(lVar3 + 0x28) != 0) {
              UnityEngine_ParticleSystem__Play(*(long *)(lVar3 + 0x28),1,0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50(0,uVar1);
      }
LAB_00bea8cc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
  uVar8 = uVar8 + 1;
  if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar8) {
    return;
  }
  goto LAB_00bea814;
}


// ==== public void AGBOIHPBOOM(Vector3 FGOHLMLBAOF) { }   @0xae8c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__AGBOIHPBOOM
               (void *__this,float FGOHLMLBAOF_x,float FGOHLMLBAOF_y,float FGOHLMLBAOF_z)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined1 auVar8 [16];
  
  if ((bRam0000000001916e5c & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e5c = 1;
  }
  lVar5 = *(long *)((long)__this + 0x50);
  if (lVar5 == 0) {
LAB_00be8d24:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar6 = 0;
    uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar4 = *(long *)(lVar5 + 0x20 + uVar6 * 8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if ((lVar4 == 0) || (lVar1 = UnityEngine_Component__get_gameObject(lVar4,0), lVar1 == 0))
        goto LAB_00be8d24;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar1,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(lVar4 + 0x20) != 0) {
            UnityEngine_Transform__set_position
                      (CONCAT44(in_register_00005004,FGOHLMLBAOF_x),
                       CONCAT44(in_register_00005024,FGOHLMLBAOF_y),
                       CONCAT44(in_register_00005044,FGOHLMLBAOF_z),*(long *)(lVar4 + 0x20),0);
            uVar2 = 0;
            *(undefined4 *)(lVar4 + 0x34) = 0;
            if (*(long *)(lVar4 + 0x28) != 0) {
              UnityEngine_ParticleSystem__get_main(*(long *)(lVar4 + 0x28),0);
              uVar7 = UnityEngine_ParticleSystem_MainModule__get_duration
                                (&stack0xffffffffffffffe8,0);
              *(undefined4 *)(lVar4 + 0x38) = uVar7;
              auVar8 = UnityEngine_Component__get_gameObject(lVar4,0);
              uVar2 = auVar8._8_8_;
              if (auVar8._0_8_ != 0) {
                UnityEngine_GameObject__SetActive(auVar8._0_8_,1,0);
                uVar2 = extraout_x1;
                if (*(long *)(lVar4 + 0x28) != 0) {
                  UnityEngine_ParticleSystem__Play(*(long *)(lVar4 + 0x28),1,0);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50(0,uVar2);
          }
          goto LAB_00be8d24;
        }
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return;
}


// ==== private void ELLMIFLLMNM(EONPOEEAEOK ELAGCAKJDAN, Transform HAKKOAADCOE, bool GBHLMIHHOPI) { }   @0xaeb438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__ELLMIFLLMNM(void *__this,int ELAGCAKJDAN,void *HAKKOAADCOE,bool GBHLMIHHOPI)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  undefined8 in_d3;
  long lStack_68;
  
  if ((bRam0000000001916e5f & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_ZombieParts___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e5f = 1;
  }
  lVar1 = *(long *)((long)__this + 0x58);
  if (lVar1 == 0) goto LAB_00beb5ac;
  if ((*(long *)(lVar1 + 0x18) != 0) &&
     (uVar2 = (uint)*(long *)(lVar1 + 0x18), ELAGCAKJDAN < (int)uVar2)) {
    if (uVar2 <= (uint)ELAGCAKJDAN) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    if (HAKKOAADCOE == (void *)0x0) goto LAB_00beb5ac;
    uVar3 = *(undefined8 *)(lVar1 + (long)ELAGCAKJDAN * 8 + 0x20);
    uVar4 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
    uVar6 = in_d1;
    uVar7 = in_d2;
    uVar5 = UnityEngine_Transform__get_rotation(HAKKOAADCOE,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = UnityEngine_Object__Instantiate_object_
                      (uVar4,in_d1,in_d2,uVar5,uVar6,uVar7,in_d3,uVar3,
                       _Method_UnityEngine_Object_Instantiate_GameObject___);
    if (GBHLMIHHOPI) {
      if (lVar1 == 0) {
LAB_00beb5ac:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar1,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_ZombieParts___);
      if (lStack_68 == 0) goto LAB_00beb5ac;
      *(undefined1 *)(lStack_68 + 0x4c) = 1;
    }
    else if (lVar1 == 0) goto LAB_00beb5ac;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
  }
  return;
}


// ==== private void AINHBDLOANI(GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae95e4

/* WARNING: Removing unreachable block (ram,0x00c23a28) */
/* WARNING: Removing unreachable block (ram,0x00c23cf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__AINHBDLOANI(void *__this,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  void *__this_00;
  ulong uVar4;
  void *FJBLHMNOPEP;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  void *__this_01;
  undefined4 uVar14;
  float fVar15;
  float in_s1;
  float in_s2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  if ((bRam0000000001916e64 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916e64 = 1;
  }
  if (*(long *)((long)__this + 0x20) == 0) {
LAB_00be970c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  CarController__DPKGKJMAPLO(*(long *)((long)__this + 0x20),0);
  if ((*(long *)((long)__this + 0x20) == 0) ||
     (CarController__HECJKCAMLHJ(*(long *)((long)__this + 0x20),OPBPCFOOBHD,0),
     HAKKOAADCOE == (void *)0x0)) goto LAB_00be970c;
  UnityEngine_Transform__get_position(HAKKOAADCOE,0);
  CarCollision__NDLJJLDOHIA(__this,0);
  lVar10 = *(long *)((long)__this + 0x20);
  if (lVar10 == 0) goto LAB_00be970c;
  if (*(char *)(lVar10 + 0x3c9) == '\0') {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    lVar10 = *(long *)((long)__this + 0x20);
    if (lVar10 == 0) goto LAB_00be970c;
  }
  if (*(long *)(lVar10 + 0x28) == 0) goto LAB_00be970c;
  uVar3 = CarCamera__OIKFBMHJDBN(*(long *)(lVar10 + 0x28),0);
  UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar3,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__Destroy(OPBPCFOOBHD,0);
  __this_00 = *(void **)((long)__this + 0x20);
  if (__this_00 == (void *)0x0) goto LAB_00be970c;
  if ((bRam000000000191702b & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Clear__)
    ;
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_FindObjectOfType_CameraGarage___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_CRASH_1);
    bRam000000000191702b = 1;
  }
  if (*(char *)((long)__this_00 + 0x3c8) != '\0') {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) != '\0') &&
     (*(char *)((long)__this_00 + 0x4f4) == '\0')) {
    return;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b8,0,0);
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  *(undefined4 *)((long)__this_00 + 0x19c) = uStack_a8;
  *(undefined8 *)((long)__this_00 + 0x194) = uStack_b0;
  *(undefined8 *)((long)__this_00 + 0x18c) = uStack_b8;
  *(undefined1 *)((long)__this_00 + 0x3c8) = 1;
  *(undefined1 *)((long)__this_00 + 0x3fe) = 1;
  if ((*(char *)((long)__this_00 + 0x414) == '\0') || (*(char *)((long)__this_00 + 0x60) == '\0')) {
LAB_00c23388:
    uVar14 = 0;
  }
  else {
    if (*(long *)((long)__this_00 + 0x38) == 0) goto LAB_00c236e8;
    UnityEngine_Transform__get_position(*(long *)((long)__this_00 + 0x38),0);
    if (in_s2 < (float)*(int *)((long)__this_00 + 0x408)) goto LAB_00c23388;
    uVar14 = 1;
    *(undefined1 *)((long)__this_00 + 0x3fe) = 0;
  }
  uVar3 = *(undefined8 *)((long)__this_00 + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    __this_01 = *(void **)((long)__this_00 + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
       (FJBLHMNOPEP = (void *)Translate__JJJNIPAKLJF
                                        (**(long **)(_Translate_TypeInfo + 0xb8),_Str_CRASH_1,0),
       __this_01 == (void *)0x0)) goto LAB_00c236e8;
    GUIGameplay__HNKHJLDJMHB(__this_01,FJBLHMNOPEP,1,false,true);
    if (*(void **)((long)__this_00 + 0x30) == (void *)0x0) goto LAB_00c236e8;
    GUIGameplay__HNKHJLDJMHB
              (*(void **)((long)__this_00 + 0x30),(void *)**(undefined8 **)(_string_TypeInfo + 0xb8)
               ,4,false,false);
    CarController__OFLMLGPBOBL(__this_00);
  }
  if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)((long)_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
    if (*(long *)((long)__this_00 + 0x28) == 0) goto LAB_00c236e8;
    uVar3 = CarCamera__OIKFBMHJDBN(*(long *)((long)__this_00 + 0x28),0);
    UnityEngine_MonoBehaviour__StartCoroutine(__this_00,uVar3,0);
    if (*(long *)((long)__this_00 + 0x38) == 0) goto LAB_00c236e8;
    lVar10 = *(long *)((long)__this_00 + 0x20);
    UnityEngine_Transform__get_position(*(long *)((long)__this_00 + 0x38),0);
    if (lVar10 == 0) goto LAB_00c236e8;
    CarCollision__NDLJJLDOHIA(lVar10,0,0);
  }
  else {
    CarController__FALNNMMGIDA(__this_00);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar10 = UnityEngine_Object__FindObjectOfType_object_
                       (_Method_UnityEngine_Object_FindObjectOfType_CameraGarage___);
    uVar4 = UnityEngine_Object__op_Inequality(lVar10,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar10 == 0) goto LAB_00c236e8;
      uVar3 = CameraGarage__OIKFBMHJDBN(lVar10,0);
      UnityEngine_MonoBehaviour__StartCoroutine(__this_00,uVar3,0);
    }
  }
  if (*(char *)((long)__this_00 + 0x3c9) == '\0') {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    SoundScript__FIGKLLNAMLG(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd0));
  }
  if (*(long *)((long)__this_00 + 0x48) != 0) {
    UnityEngine_AudioSource__Stop(*(long *)((long)__this_00 + 0x48),0);
    CarController__OENKDDLNKCJ(__this_00,1);
    if (*(char *)((long)__this_00 + 0x4f4) != '\0') {
      if (*(long *)((long)__this_00 + 0x510) == 0) goto LAB_00c236e8;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                (*(long *)((long)__this_00 + 0x510),
                 _Method_System_Collections_Generic_Dictionary_MeshRenderer__Material____Clear__);
      uVar3 = *(undefined8 *)((long)__this_00 + 0x360);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)((long)__this_00 + 0x360) == 0) ||
           (lVar10 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x360),0),
           lVar10 == 0)) goto LAB_00c236e8;
        uVar4 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)((long)__this_00 + 0x505) = 1;
        }
      }
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Main_TypeInfo + 0xb8) != 0) {
      CarController__AKNFDJKEDOC
                (__this_00,*(undefined8 *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x60));
      lVar10 = *(long *)((long)__this_00 + 0x520);
      if (lVar10 != 0) {
        lVar12 = 4;
        while (uVar13 = (int)lVar12 - 4, (int)uVar13 < *(int *)(lVar10 + 0x18)) {
          if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar10 = *(long *)((long)__this_00 + 0x520);
            if (lVar10 == 0) goto LAB_00c236e8;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_00c23cec;
          lVar10 = *(long *)(lVar10 + lVar12 * 8);
          if (lVar10 == 0) goto LAB_00c236e8;
          if (*(char *)(*(long *)((long)_Menu_TypeInfo + 0xb8) + 0xc) == '\0') {
            uVar3 = 300;
            uVar9 = 800;
          }
          else {
            uVar3 = 100;
            uVar9 = 0x15e;
          }
          CarController__AOOHMIALOJP(__this_00,*(undefined8 *)(lVar10 + 0x10),uVar3,uVar9,0,0);
          lVar10 = *(long *)((long)__this_00 + 0x520);
          if (lVar10 == 0) goto LAB_00c236e8;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_00c23cec;
          lVar10 = *(long *)(lVar10 + lVar12 * 8);
          if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto LAB_00c236e8;
          UnityEngine_Collider__set_enabled(lVar10,0,0);
          lVar10 = *(long *)((long)__this_00 + 0x520);
          lVar12 = lVar12 + 1;
          if (lVar10 == 0) goto LAB_00c236e8;
        }
        if (*(char *)((long)__this_00 + 0x344) != '\0') {
          uVar3 = *(undefined8 *)((long)__this_00 + 800);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)((long)__this_00 + 800) == 0) goto LAB_00c236e8;
            uVar3 = UnityEngine_GameObject__get_transform(*(long *)((long)__this_00 + 800),0);
            CarController__AOOHMIALOJP(__this_00,uVar3,0x1e,0x3c,1,0);
          }
        }
        lVar10 = *(long *)((long)__this_00 + 0x350);
        if (lVar10 != 0) {
          uVar4 = 0;
          goto LAB_00c23778;
        }
      }
    }
  }
LAB_00c236e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00c23778:
  if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar4) {
    if (*(char *)((long)__this_00 + 0x314) != '\0') {
      uVar3 = *(undefined8 *)((long)__this_00 + 0x2e0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this_00 + 0x2e0) == 0) goto LAB_00c236e8;
        uVar3 = UnityEngine_GameObject__get_transform(*(long *)((long)__this_00 + 0x2e0),0);
        CarController__AOOHMIALOJP(__this_00,uVar3,100,200,1,0);
      }
      uVar3 = *(undefined8 *)((long)__this_00 + 0x2e8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this_00 + 0x2e8) == 0) goto LAB_00c236e8;
        uVar3 = UnityEngine_GameObject__get_transform(*(long *)((long)__this_00 + 0x2e8),0);
        CarController__AOOHMIALOJP(__this_00,uVar3,100,200,1,0);
      }
    }
    lVar10 = *(long *)((long)__this_00 + 0x40);
    iVar2 = UnityEngine_Random__Range(250000,310000,0);
    if (*(long *)((long)__this_00 + 0x38) != 0) {
      fVar15 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this_00 + 0x38),0);
      if (cRam0000000001916e68 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e68 = '\x01';
      }
      if (lVar10 != 0) {
        lVar12 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
        in_s1 = in_s1 - *(float *)(lVar12 + 0x1c);
        UnityEngine_Rigidbody__AddExplosionForce
                  ((float)iVar2,fVar15 - *(float *)(lVar12 + 0x18),in_s1,
                   in_s2 - *(float *)(lVar12 + 0x20),0x453b8000,lVar10,0);
        CarController__OPEHNMHCDAJ(__this_00);
        if (*(int *)((long)_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (*(char *)(*(long *)((long)_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
          return;
        }
        if (*(char *)((long)__this_00 + 0x4f4) != '\0') {
          return;
        }
        bVar1 = CarController__CDEJPMCFIHK(_Menu_TypeInfo);
        if (bVar1) {
          uVar3 = CarController__FNDOKMIBKCA(__this_00);
        }
        else {
          uVar3 = CarController__FIOKLNLIDNH(__this_00,uVar14);
        }
        UnityEngine_MonoBehaviour__StartCoroutine(__this_00,uVar3,0);
        uVar4 = CarController__JMAEOBLLHHN();
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(long *)((long)__this_00 + 0x38) != 0) {
          UnityEngine_Transform__get_position(*(long *)((long)__this_00 + 0x38),0);
          if (in_s1 <= 250.0) {
            return;
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
          lVar10 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar10 != 0) {
            DAFNMLEKHAD__AKHLCOADEAA(lVar10,1,0);
            return;
          }
        }
      }
    }
    goto LAB_00c236e8;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_00c23cec;
  uVar3 = *(undefined8 *)(lVar10 + uVar4 * 8 + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar5 & 1) != 0) {
    lVar10 = *(long *)((long)__this_00 + 0x350);
    if (lVar10 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_00c23cec;
    lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_00c236e8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
    if ((uVar5 & 1) == 0) goto LAB_00c23a2c;
    lVar10 = *(long *)((long)__this_00 + 0x350);
    if (lVar10 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_00c23cec:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_00c236e8;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar10,&uStack_a0,_Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    uVar3 = uStack_a0;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    lVar10 = *(long *)((long)__this_00 + 0x350);
    if (lVar10 == 0) goto LAB_00c236e8;
    if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_00c23cec;
    lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_00c236e8;
    lVar10 = UnityEngine_GameObject__get_transform(lVar10,0);
    if ((uVar5 & 1) == 0) {
      if (lVar10 != 0) {
        plVar6 = (long *)UnityEngine_Transform__GetEnumerator(lVar10,0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        do {
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_00c238e8;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c238e8:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) == 0) goto LAB_00c239a8;
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_00c23948;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c23948:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 != (long *)0x0) {
            if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
               (*(long *)(*(long *)(*plVar8 + 200) +
                          (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
                _UnityEngine_Transform_TypeInfo)) {
              uVar3 = func_0x00a67eec(plVar8);
              plVar6 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) goto LAB_00c23d74;
              lVar10 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar4 == 0) goto LAB_00c23d4c;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_00c23d34;
            }
          }
          CarController__AOOHMIALOJP(__this_00,plVar8,300,400,1,0);
        } while( true );
      }
      goto LAB_00c236e8;
    }
    CarController__AOOHMIALOJP(__this_00,lVar10,300,400,1,0);
  }
LAB_00c23a2c:
  lVar10 = *(long *)((long)__this_00 + 0x350);
  uVar4 = uVar4 + 1;
  if (lVar10 == 0) goto LAB_00c236e8;
  goto LAB_00c23778;
LAB_00c239a8:
  plVar6 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00c23a10;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_IDisposable_TypeInfo,0);
LAB_00c23a10:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  goto LAB_00c23a2c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_00c23d34:
    if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_00c23d68;
    }
  }
LAB_00c23d4c:
  puVar7 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_IDisposable_TypeInfo,0);
LAB_00c23d68:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_00c23d74:
  func_0x00b65214(uVar3);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}



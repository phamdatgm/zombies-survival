// ==== private void OnCollisionStay(Collision PNKAOOKHBAI) { }   @0xae815c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__OnCollisionStay(void *__this,void *PNKAOOKHBAI)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float in_s1;
  float in_s2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001916e52 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_barrel_big);
    func_0x00a67900(&Str_collider_NO_DIE);
    func_0x00a67900(&Str_wood_box);
    func_0x00a67900(&Str_collider_NO_DIE_);
    bRam0000000001916e52 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((PNKAOOKHBAI == (void *)0x0) ||
     (lVar2 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0), lVar2 == 0)) goto LAB_00be8554;
  iVar1 = UnityEngine_GameObject__get_layer(lVar2,0);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarController_TypeInfo);
  }
  if (iVar1 == *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14)) {
    lVar2 = *(long *)((long)__this + 0x20);
    if (lVar2 == 0) goto LAB_00be8554;
    if (*(char *)(lVar2 + 0x3c8) == '\0') {
      in_s1 = 140.0;
      if (140.0 < *(float *)(lVar2 + 0x3cc)) {
        in_s1 = 140.0;
        lVar2 = UnityEngine_Collision__get_contacts(PNKAOOKHBAI,0);
        if (lVar2 == 0) goto LAB_00be8554;
        if (*(long *)(lVar2 + 0x18) != 0) {
          lVar2 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0);
          if (lVar2 == 0) goto LAB_00be8554;
          uVar3 = UnityEngine_Object__get_name(lVar2,0);
          uVar4 = System_String__op_Equality(uVar3,_Str_collider_NO_DIE,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            Main__GEMDEAMAGPG(_Str_collider_NO_DIE_,0,0);
            return;
          }
          lVar2 = UnityEngine_Collision__get_contacts(PNKAOOKHBAI,0);
          if (lVar2 == 0) goto LAB_00be8554;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00be8558;
          uStack_48 = *(undefined8 *)(lVar2 + 0x38);
          uVar3 = *(undefined8 *)(lVar2 + 0x30);
          uStack_38 = *(undefined8 *)(lVar2 + 0x48);
          uStack_40 = *(undefined8 *)(lVar2 + 0x40);
          uStack_58 = *(undefined8 *)(lVar2 + 0x28);
          uVar5 = *(undefined8 *)(lVar2 + 0x20);
          uStack_60 = uVar5;
          uStack_50 = uVar3;
          if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be8554;
          lVar2 = *(long *)(*(long *)((long)__this + 0x20) + 0x38);
          UnityEngine_ContactPoint__get_point(&uStack_60,0);
          in_s1 = (float)uVar3;
          in_s2 = (float)uVar5;
          if (lVar2 == 0) goto LAB_00be8554;
          UnityEngine_Transform__InverseTransformPoint(lVar2,0);
          if (0.0 < in_s1) {
            if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be8554;
            in_s1 = 100.0;
            if (100.0 < *(float *)(*(long *)((long)__this + 0x20) + 0x3cc)) {
              in_s1 = 100.0;
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                in_s1 = 100.0;
                func_0x00a67a30();
              }
              lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if (lVar2 != 0) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
                  if (lVar2 == 0) goto LAB_00be8554;
                }
                uVar4 = Level__get_IsTutorial(lVar2,0);
                if ((uVar4 & 1) != 0) {
                  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be8554;
                  CarController__DPKGKJMAPLO(*(long *)((long)__this + 0x20),0);
                  lVar2 = *(long *)((long)__this + 0x20);
                  uVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0);
                  if (lVar2 == 0) goto LAB_00be8554;
                  CarController__HECJKCAMLHJ(lVar2,uVar3,0);
                }
              }
              if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be8554;
              CarController__AEFMMNHIGLH(*(long *)((long)__this + 0x20),0);
            }
          }
        }
      }
    }
  }
  lVar2 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_GameObject__get_tag(lVar2,0);
    uVar4 = System_String__op_Equality(uVar3,_Str_barrel_big,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = System_String__op_Equality(uVar3,_Str_wood_box,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = UnityEngine_Collision__get_contacts(PNKAOOKHBAI,0);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x18) == 0) {
            return;
          }
          if (*(long *)((long)__this + 0x20) != 0) {
            lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x38);
            lVar2 = UnityEngine_Collision__get_contacts(PNKAOOKHBAI,0);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00be8558:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              UnityEngine_ContactPoint__get_point(lVar2 + 0x20,0);
              if (lVar6 != 0) {
                UnityEngine_Transform__InverseTransformPoint(lVar6,0);
                if (in_s2 <= -2.2) {
                  return;
                }
                if (0.0 <= in_s1) {
                  return;
                }
                if (2.2 <= in_s2) {
                  return;
                }
                lVar2 = UnityEngine_Collision__get_transform(PNKAOOKHBAI,0);
                if (lVar2 != 0) {
                  UnityEngine_Transform__get_position(lVar2,0);
                  CarCollision__AGBOIHPBOOM(__this);
                  uVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  UnityEngine_Object__Destroy(uVar3,0);
                  return;
                }
              }
            }
          }
        }
        goto LAB_00be8554;
      }
    }
    else {
      uVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0);
      uVar5 = UnityEngine_Collision__get_transform(PNKAOOKHBAI,0);
      CarCollision__GLBHMAKJKHB(__this,0,uVar3,uVar5);
    }
    return;
  }
LAB_00be8554:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xaea560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__Start(void *__this)

{
  undefined8 uStack_28;
  
  if ((bRam0000000001916e57 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_CarController___);
    bRam0000000001916e57 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_CarController___);
  *(undefined8 *)((long)__this + 0x20) = uStack_28;
  return;
}


// ==== public void FMLEBCMDJID(PLFKMIMGIDF JDDOHFIKJDN, GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae9f8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__FMLEBCMDJID(void *__this,int JDDOHFIKJDN,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000001916e5b & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_TramplinBarrel___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e5b = 1;
  }
  if (((HAKKOAADCOE != (void *)0x0) &&
      (UnityEngine_Transform__get_position(HAKKOAADCOE,0), OPBPCFOOBHD != (void *)0x0)) &&
     (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (OPBPCFOOBHD,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_Collider___),
     lStack_38 != 0)) {
    UnityEngine_Collider__set_enabled(lStack_38,0,0);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (OPBPCFOOBHD,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_TramplinBarrel___)
    ;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_00bea130;
      uVar3 = *(undefined8 *)(lStack_38 + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        UnityEngine_Behaviour__set_enabled(lStack_38,1,0);
        if (JDDOHFIKJDN == 0) {
          TramplinBarrel__MJODMEOIAIJ(lStack_38,0);
          TramplinBarrel__NNIADFNMHGB(lStack_38,0);
          if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bea130;
          CarController__EKOHIKFFBFC(*(long *)((long)__this + 0x20),0x28,0,0);
        }
        else {
          if (JDDOHFIKJDN != 1) {
            return;
          }
          TramplinBarrel__NNIADFNMHGB(lStack_38,0);
        }
        lVar2 = *(long *)(lStack_38 + 0x30);
        if (lVar2 == 0) goto LAB_00bea130;
        uVar3 = UnityEngine_GameObject__get_transform(lVar2,0);
        CarCollision__GLBHMAKJKHB(__this,1,lVar2,uVar3);
      }
    }
    return;
  }
LAB_00bea130:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NDLJJLDOHIA(bool BIIKAINALDJ, Vector3 FGOHLMLBAOF) { }   @0xaea794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__NDLJJLDOHIA
               (void *__this,bool BIIKAINALDJ,float FGOHLMLBAOF_x,float FGOHLMLBAOF_y,
               float FGOHLMLBAOF_z)

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
  
  if ((bRam0000000001916e5e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e5e = 1;
  }
  lVar5 = 0x48;
  if (!BIIKAINALDJ) {
    lVar5 = 0x40;
  }
  lVar5 = *(long *)((long)__this + lVar5);
  if (lVar5 == 0) {
LAB_00bea8cc:
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
        goto LAB_00bea8cc;
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
          goto LAB_00bea8cc;
        }
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return;
}


// ==== private void HABMFNMJMDL(GameObject OPBPCFOOBHD, Vector3 FGOHLMLBAOF, Quaternion MPKEMNCNKOK) { }   @0xaea8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__HABMFNMJMDL
               (void *__this,void *OPBPCFOOBHD,float FGOHLMLBAOF_x,float FGOHLMLBAOF_y,
               float FGOHLMLBAOF_z,float MPKEMNCNKOK_x,float MPKEMNCNKOK_y,float MPKEMNCNKOK_z,
               float MPKEMNCNKOK_w)

{
  ulong uVar1;
  undefined8 uVar2;
  float extraout_s0;
  long lStack_18;
  
  if ((bRam0000000001916e63 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
    __this = (void *)func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e63 = 1;
    FGOHLMLBAOF_x = extraout_s0;
  }
  if (OPBPCFOOBHD != (void *)0x0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (FGOHLMLBAOF_x,OPBPCFOOBHD,&lStack_18,
               _Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    __this = (void *)UnityEngine_Object__op_Inequality(lStack_18,0,0);
    if (((ulong)__this & 1) != 0) {
      if (lStack_18 == 0) goto LAB_00bea9a0;
      uVar2 = *(undefined8 *)(lStack_18 + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        __this = (void *)0x0;
        if (*(long *)(lStack_18 + 0x20) == 0) goto LAB_00bea9a0;
        UnityEngine_GameObject__SetActive(*(long *)(lStack_18 + 0x20),1,0);
      }
    }
    return;
  }
LAB_00bea9a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(__this);
}



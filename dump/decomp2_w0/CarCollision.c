// ==== private int EKCHOFEOEKM() { }   @0xae7e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int CarCollision__EKCHOFEOEKM(void *__this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 auStack_128 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916e51 & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_GREAT_COMBO);
    func_0x00a67900(&Str_COMBO);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___x);
    bRam0000000001916e51 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = *(undefined4 *)((long)__this + 0xa0);
  uStack_78 = *(undefined8 *)((long)__this + 0x98);
  uStack_80 = *(undefined8 *)((long)__this + 0x90);
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (iVar2 == 0) {
    fVar10 = (float)UnityEngine_Time__get_time(0);
    fVar10 = fVar10 + 1.0;
    *(float *)((long)__this + 0xa4) = fVar10;
  }
  else {
    fVar10 = *(float *)((long)__this + 0xa4);
  }
  puVar1 = (undefined8 *)((long)__this + 0x90);
  fVar9 = (float)UnityEngine_Time__get_time(0);
  if (fVar10 <= fVar9) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b8,0,0);
  }
  else {
    uStack_c0 = *(undefined4 *)((long)__this + 0xa0);
    uStack_c8 = *(undefined8 *)((long)__this + 0x98);
    uStack_d0 = *puVar1;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_b8,&uStack_d0,0);
  }
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  *(undefined8 *)((long)__this + 0x98) = uStack_b0;
  *puVar1 = uStack_b8;
  uStack_e8 = *(undefined8 *)((long)__this + 0x98);
  uStack_f0 = *puVar1;
  *(undefined4 *)((long)__this + 0xa0) = uStack_a8;
  uStack_e0 = uStack_a8;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
  uStack_108 = *(undefined8 *)((long)__this + 0x98);
  uStack_110 = *puVar1;
  uStack_100 = *(undefined4 *)((long)__this + 0xa0);
  iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_110,0);
  if (iVar3 == 5) {
    fVar10 = (float)UnityEngine_Time__get_time(0);
    if (*(float *)((long)__this + 0xa8) < fVar10) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = SoundScript__FIGKLLNAMLG
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf0),0);
      if ((uVar4 & 1) != 0) {
        fVar10 = (float)UnityEngine_Time__get_time(0);
        *(float *)((long)__this + 0xa8) = fVar10 + 25.0;
      }
    }
    if (*(long *)((long)__this + 0x20) != 0) {
      lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
         (uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_GREAT_COMBO,0)
         , lVar8 != 0)) {
        GUIGameplay__HNKHJLDJMHB(lVar8,uVar5,2,0,0,0);
        puVar7 = auStack_128;
LAB_00be8118:
        uVar6 = *(undefined8 *)((long)__this + 0x98);
        uVar5 = *puVar1;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((long)__this + 0xa0);
        puVar7[1] = uVar6;
        *puVar7 = uVar5;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(puVar7,0);
        return iVar2 * 5;
      }
    }
  }
  else {
    uStack_130 = *(undefined4 *)((long)__this + 0xa0);
    uStack_138 = *(undefined8 *)((long)__this + 0x98);
    uStack_140 = *puVar1;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_140,0);
    if (iVar3 < 2) {
      return 0;
    }
    if (*(long *)((long)__this + 0x20) != 0) {
      lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_COMBO,0);
        uStack_58 = *(undefined8 *)((long)__this + 0x98);
        uStack_60 = *puVar1;
        uStack_50 = *(undefined4 *)((long)__this + 0xa0);
        uVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
        uVar5 = System_String__Concat(uVar5,_Str___x,uVar6,_Str__,0);
        if (lVar8 != 0) {
          GUIGameplay__HNKHJLDJMHB(lVar8,uVar5,3,1,iVar2 == 2,0);
          puVar7 = auStack_158;
          goto LAB_00be8118;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HNNICJHLCMM() { }   @0xaea28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__HNNICJHLCMM(void *__this)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_d3;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  void *pvStack_98;
  long lStack_88;
  
  if ((bRam0000000001916e56 & 1) == 0) {
    func_0x00a67900(&AutoDestructShuriken___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_FX_Explosion_Small);
    func_0x00a67900(&Str_FX_Explosion_Big);
    bRam0000000001916e56 = 1;
  }
  uVar3 = func_0x00a679a0(_AutoDestructShuriken___TypeInfo,3);
  *(undefined8 *)((long)__this + 0x40) = uVar3;
  uVar9 = 0;
  do {
    uVar4 = UnityEngine_Resources__Load(_Str_FX_Explosion_Small,0);
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar3 = UnityEngine_Quaternion__Internal_FromEulerRad(0xbfc90fdb,0,0,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar5 = (long *)UnityEngine_Object__Instantiate
                               (0,0,0xc1f00000,uVar3,CONCAT44(uVar13,uVar12),CONCAT44(uVar15,uVar14)
                                ,in_d3,uVar4,0);
    if (plVar5 == (long *)0x0) goto LAB_00bea548;
    if (*plVar5 != _UnityEngine_GameObject_TypeInfo) goto LAB_00bea54c;
    plVar10 = *(long **)((long)__this + 0x40);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar5,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    lVar7 = lStack_88;
    if (plVar10 == (long *)0x0) goto LAB_00bea548;
    if ((lStack_88 != 0) &&
       (lVar6 = func_0x00a67a34(lStack_88,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0))
    goto LAB_00bea554;
    if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_00bea550;
    uVar1 = uVar9 + 1;
    plVar10[uVar9 + 4] = lVar7;
    uVar9 = uVar1;
    in_d3 = uVar3;
  } while (uVar1 != 3);
  uVar4 = func_0x00a679a0(_AutoDestructShuriken___TypeInfo,2);
  *(undefined8 *)((long)__this + 0x48) = uVar4;
  uVar9 = 0;
  bVar8 = true;
  while( true ) {
    uVar4 = UnityEngine_Resources__Load(_Str_FX_Explosion_Big,0);
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar11 = UnityEngine_Quaternion__Internal_FromEulerRad(0xbfc90fdb,0,0,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar5 = (long *)UnityEngine_Object__Instantiate
                               (0,0,0xc1f00000,uVar11,CONCAT44(uVar13,uVar12),
                                CONCAT44(uVar15,uVar14),uVar3,uVar4,0);
    if (plVar5 == (long *)0x0) break;
    if (*plVar5 != _UnityEngine_GameObject_TypeInfo) {
LAB_00bea54c:
      func_0x00a67eec();
LAB_00bea550:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar10 = *(long **)((long)__this + 0x48);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (plVar5,&lStack_88,_Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___
              );
    lVar7 = lStack_88;
    if (plVar10 == (long *)0x0) break;
    if ((lStack_88 != 0) &&
       (lVar6 = func_0x00a67a34(lStack_88,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
LAB_00bea554:
      uVar3 = func_0x00a67b74();
      lVar7 = func_0x00a67a20(uVar3,0);
      pcStack_b0 = CarCollision__Start;
      puStack_a8 = &UnityEngine_Object_TypeInfo;
      pvStack_98 = __this;
      if ((bRam0000000001916e57 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_Component_GetComponent_CarController___);
        bRam0000000001916e57 = 1;
      }
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar7,&uStack_b8,_Method_UnityEngine_Component_GetComponent_CarController___);
      *(undefined8 *)(lVar7 + 0x20) = uStack_b8;
      return;
    }
    if (*(uint *)(plVar10 + 3) <= uVar9) goto LAB_00bea550;
    plVar10[uVar9 + 4] = lVar7;
    bVar2 = !bVar8;
    uVar9 = 1;
    uVar3 = uVar11;
    bVar8 = false;
    if (bVar2) {
      return;
    }
  }
LAB_00bea548:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void GCAMMBECDIH(GameObject OPBPCFOOBHD) { }   @0xae9710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__GCAMMBECDIH(void *__this,void *OPBPCFOOBHD)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_18;
  
  if (cRam0000000001916789 == '\0') {
    __this = (void *)func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  if (cRam000000000191678a == '\0') {
    __this = (void *)func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
    cRam000000000191678a = '\x01';
  }
  if ((bRam0000000001916e63 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
    __this = (void *)func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e63 = 1;
  }
  if (OPBPCFOOBHD != (void *)0x0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (OPBPCFOOBHD,&lStack_18,_Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___
              );
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


// ==== private void EJHCIMAAIKB(bool BIMDKCKIPAO, PLFKMIMGIDF FHOFNGHGNGF, Vector3 FGOHLMLBAOF, Vector3 FFAMPNGFKIG) { }   @0xae79b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__EJHCIMAAIKB
               (void *__this,bool BIMDKCKIPAO,int FHOFNGHGNGF,float FGOHLMLBAOF_x,
               float FGOHLMLBAOF_y,float FGOHLMLBAOF_z,float FFAMPNGFKIG_x,float FFAMPNGFKIG_y,
               float FFAMPNGFKIG_z)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  float *pfVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  undefined4 in_register_00005084;
  undefined4 in_register_000050a4;
  undefined1 auVar10 [16];
  
  if (BIMDKCKIPAO) {
    lVar7 = *(long *)((long)__this + 0x28);
    if (lVar7 == 0) {
LAB_00be7b14:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar6 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar6,0), lVar2 == 0))
        goto LAB_00be7b14;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
        if ((uVar3 & 1) == 0) {
          if (*(long *)(lVar6 + 0x20) == 0) goto LAB_00be7b14;
          UnityEngine_Transform__set_position
                    (CONCAT44(in_register_00005004,FGOHLMLBAOF_x),
                     CONCAT44(in_register_00005024,FGOHLMLBAOF_y),
                     CONCAT44(in_register_00005044,FGOHLMLBAOF_z),*(long *)(lVar6 + 0x20),0);
          if (cRam0000000001916789 == '\0') {
            func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
            cRam0000000001916789 = '\x01';
          }
          pfVar5 = *(float **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          if (9.9999994e-11 <=
              (FFAMPNGFKIG_z - pfVar5[2]) * (FFAMPNGFKIG_z - pfVar5[2]) +
              (FFAMPNGFKIG_x - *pfVar5) * (FFAMPNGFKIG_x - *pfVar5) +
              (FFAMPNGFKIG_y - pfVar5[1]) * (FFAMPNGFKIG_y - pfVar5[1])) {
            if (*(long *)(lVar6 + 0x20) == 0) goto LAB_00be7b14;
            UnityEngine_Transform__set_up
                      (CONCAT44(in_register_00005064,FFAMPNGFKIG_x),
                       CONCAT44(in_register_00005084,FFAMPNGFKIG_y),
                       CONCAT44(in_register_000050a4,FFAMPNGFKIG_z),*(long *)(lVar6 + 0x20),0);
          }
          uVar4 = 0;
          *(undefined4 *)(lVar6 + 0x34) = 0;
          if (*(long *)(lVar6 + 0x28) != 0) {
            UnityEngine_ParticleSystem__get_main(*(long *)(lVar6 + 0x28),0);
            uVar9 = UnityEngine_ParticleSystem_MainModule__get_duration(&stack0xffffffffffffffe8,0);
            *(undefined4 *)(lVar6 + 0x38) = uVar9;
            auVar10 = UnityEngine_Component__get_gameObject(lVar6,0);
            uVar4 = auVar10._8_8_;
            if (auVar10._0_8_ != 0) {
              UnityEngine_GameObject__SetActive(auVar10._0_8_,1,0);
              uVar4 = extraout_x1;
              if (*(long *)(lVar6 + 0x28) != 0) {
                UnityEngine_ParticleSystem__Play(*(long *)(lVar6 + 0x28),1,0);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50(0,uVar4);
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
  }
  return;
}


// ==== public void JDLKLAGFELO(PLFKMIMGIDF JDDOHFIKJDN, GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xad7de4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__JDLKLAGFELO(void *__this,int JDDOHFIKJDN,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void *__this_00;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float in_s1;
  float fVar18;
  float in_s2;
  float fVar19;
  float fVar20;
  void *pvStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  void *pvStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  void *pvStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  
  if ((bRam0000000001916e62 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Zombie___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS_2);
    func_0x00a67900(&Str_SPLATTER_BONUS);
    func_0x00a67900(&Str_ground);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___x);
    func_0x00a67900(&Str_EXTRA_STYLE_BONUS);
    func_0x00a67900(&Str_Zombie_script_problem);
    bRam0000000001916e62 = 1;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(OPBPCFOOBHD,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (OPBPCFOOBHD == (void *)0x0) goto LAB_00bd8c10;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (OPBPCFOOBHD,&pvStack_100,_Method_UnityEngine_GameObject_GetComponent_Zombie___);
  __this_00 = pvStack_100;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar5 = 0;
  uVar6 = UnityEngine_Object__op_Equality(__this_00,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Zombie_script_problem,0);
    return;
  }
  if (__this_00 == (void *)0x0) goto LAB_00bd8c10;
  iVar1 = *(int *)((long)__this_00 + 0x30);
  if (iVar1 == 6) {
    if (JDDOHFIKJDN != 1) {
      if (HAKKOAADCOE == (void *)0x0) goto LAB_00bd8c10;
      UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      CarCollision__NDLJJLDOHIA(__this,0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x28), lVar8 == 0)) goto LAB_00bd8c10;
      uVar17 = CarCamera__OIKFBMHJDBN(lVar8,0);
      UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar17,0);
      goto LAB_00bd80d4;
    }
    if (HAKKOAADCOE == (void *)0x0) goto LAB_00bd8c10;
    iVar12 = *(int *)((long)__this_00 + 0x24);
    uVar17 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
    if (1 < iVar12) {
      fVar18 = in_s1;
      fVar19 = in_s2;
      fVar13 = (float)UnityEngine_Transform__get_up(HAKKOAADCOE,0);
      fVar15 = *(float *)((long)__this_00 + 0x84);
      fVar18 = fVar18 * fVar15;
      fVar19 = fVar19 * fVar15;
      in_s1 = in_s1 + fVar18;
      in_s2 = in_s2 + fVar19;
      fVar14 = (float)UnityEngine_RaycastHit__get_normal((long)__this_00 + 0x3c,0);
      CarCollision__EJHCIMAAIKB
                (__this,true,iVar5,(float)uVar17 + fVar13 * fVar15,in_s1,in_s2,fVar14,fVar18,fVar19)
      ;
      if (*(long *)((long)__this_00 + 0x98) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this_00 + 0x98),1,0);
        *(int *)((long)__this_00 + 0x24) = *(int *)((long)__this_00 + 0x24) + -1;
        return;
      }
      goto LAB_00bd8c10;
    }
    CarCollision__NDLJJLDOHIA(uVar17,__this,0);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    bVar2 = false;
LAB_00bd82fc:
    uVar17 = 1;
  }
  else {
    switch(iVar1) {
    case 1:
      uVar17 = *(undefined8 *)((long)__this_00 + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar17,0,0);
      if ((uVar6 & 1) != 0) {
        if (HAKKOAADCOE == (void *)0x0) goto LAB_00bd8c10;
        UnityEngine_Transform__get_position(HAKKOAADCOE,0);
        CarCollision__NDLJJLDOHIA(__this,0);
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
        if (*(char *)(*(long *)((long)__this + 0x20) + 0x3c9) == '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          SoundScript__GIGBLEBBIEK
                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
        }
        uVar17 = *(undefined8 *)((long)__this_00 + 0x98);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Object__Destroy(uVar17,0);
      }
      break;
    case 3:
    case 8:
      if (JDDOHFIKJDN == 0) goto LAB_00bd82a4;
      if (JDDOHFIKJDN == 1) {
        Zombie__HMEFLNGHPDI(__this_00);
      }
code_r0x00bd8204:
      bVar2 = false;
      goto LAB_00bd834c;
    case 4:
      if (JDDOHFIKJDN != 0) goto code_r0x00bd8204;
      if (HAKKOAADCOE == (void *)0x0) goto LAB_00bd8c10;
      UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      CarCollision__NDLJJLDOHIA(__this,0);
      lVar8 = *(long *)((long)__this + 0x20);
      if (lVar8 == 0) goto LAB_00bd8c10;
      if (*(char *)(lVar8 + 0x3c9) == '\0') {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
        lVar8 = *(long *)((long)__this + 0x20);
        if (lVar8 == 0) goto LAB_00bd8c10;
      }
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_00bd8c10;
      uVar17 = CarCamera__OIKFBMHJDBN(*(long *)(lVar8 + 0x28),0);
      UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar17,0);
      goto LAB_00bd82a4;
    case 7:
      if ((JDDOHFIKJDN | 2U) != 2) {
        return;
      }
      Zombie__HMEFLNGHPDI(__this_00);
    }
LAB_00bd80d4:
    if (JDDOHFIKJDN == 0) {
LAB_00bd82a4:
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
      fVar18 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x20),0);
      in_s1 = 25.0;
      if (fVar18 <= 25.0) {
LAB_00bd82f0:
        bVar2 = true;
        goto LAB_00bd82f4;
      }
      in_s1 = 25.0;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        in_s1 = 25.0;
        func_0x00a67a30();
      }
      lVar8 = **(long **)(_CarController_TypeInfo + 0xb8);
      if (lVar8 == 0) goto LAB_00bd8c10;
      if (*(char *)(lVar8 + 0x3c8) != '\0') goto LAB_00bd82f0;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar8 = **(long **)(_CarController_TypeInfo + 0xb8);
        if (lVar8 == 0) goto LAB_00bd8c10;
      }
      lVar8 = *(long *)(lVar8 + 0x520);
      if (lVar8 == 0) goto LAB_00bd8c10;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00bd8c14;
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_00bd8c10;
      bVar2 = true;
      if ((iVar1 == 6) || (*(char *)(*(long *)(lVar8 + 0x20) + 0x50) != '\0')) goto LAB_00bd82fc;
    }
    else {
      bVar2 = false;
LAB_00bd82f4:
      if (iVar1 == 6) goto LAB_00bd82fc;
    }
LAB_00bd834c:
    uVar17 = 0;
  }
  pvVar10 = HAKKOAADCOE;
  CarCollision__ELLMIFLLMNM(__this,*(undefined4 *)((long)__this_00 + 0x34),HAKKOAADCOE,uVar17);
  iVar5 = (int)pvVar10;
  if (HAKKOAADCOE == (void *)0x0) goto LAB_00bd8c10;
  fVar13 = (float)UnityEngine_Transform__get_position(HAKKOAADCOE,0);
  fVar18 = in_s1;
  fVar19 = in_s2;
  fVar14 = (float)UnityEngine_Transform__get_up(HAKKOAADCOE,0);
  fVar20 = *(float *)((long)__this_00 + 0x84);
  fVar18 = fVar18 * fVar20;
  fVar19 = fVar19 * fVar20;
  in_s1 = in_s1 + fVar18;
  in_s2 = in_s2 + fVar19;
  uVar6 = (ulong)(uint)in_s2;
  fVar15 = (float)UnityEngine_RaycastHit__get_normal((long)__this_00 + 0x3c,0);
  CarCollision__EJHCIMAAIKB
            (__this,true,iVar5,fVar13 + fVar14 * fVar20,in_s1,in_s2,fVar15,fVar18,fVar19);
  if (bVar2) {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
    uVar17 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x480);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar7 & 1) != 0) {
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x480), lVar8 == 0)) goto LAB_00bd8c10;
      UnityEngine_ParticleSystem__Play(lVar8,0);
    }
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
    fVar18 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x20),0);
    fVar19 = (float)*(int *)((long)__this + 0x68);
    if (fVar18 <= fVar19) {
LAB_00bd861c:
      uVar7 = (ulong)(uint)fVar19;
      iVar12 = 5;
    }
    else {
      fVar18 = (float)UnityEngine_Time__get_time(0);
      fVar19 = *(float *)((long)__this + 0x6c);
      if (fVar18 <= fVar19) goto LAB_00bd861c;
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__FIGKLLNAMLG(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf8),0);
      fVar18 = (float)UnityEngine_Time__get_time(0);
      uVar7 = 0x41000000;
      *(float *)((long)__this + 0x6c) = fVar18 + 8.0;
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
      lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
         (uVar17 = Translate__JJJNIPAKLJF
                             (**(long **)(_Translate_TypeInfo + 0xb8),_Str_SPLATTER_BONUS,0),
         lVar8 == 0)) goto LAB_00bd8c10;
      GUIGameplay__HNKHJLDJMHB(lVar8,uVar17,0,0,1,0);
      if ((*(long *)((long)__this + 0x20) == 0) ||
         (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30), lVar8 == 0)) goto LAB_00bd8c10;
      GUIGameplay__HNKHJLDJMHB(lVar8,**(undefined8 **)(_string_TypeInfo + 0xb8),4,0,0,0);
      iVar12 = 10;
    }
    lVar8 = *(long *)((long)__this + 0x20);
    if (lVar8 == 0) goto LAB_00bd8c10;
    if (*(char *)(lVar8 + 0x3c8) != '\0') goto LAB_00bd8864;
    lVar11 = *(long *)(lVar8 + 0x520);
    if (lVar11 == 0) goto LAB_00bd8c10;
    if (*(uint *)(lVar11 + 0x18) == 0) {
LAB_00bd8c14:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_00bd8c10;
    if (*(char *)(*(long *)(lVar11 + 0x20) + 0x50) != '\0') goto LAB_00bd8864;
    if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_00bd8c14;
    if (*(long *)(lVar11 + 0x30) == 0) goto LAB_00bd8c10;
    if (*(char *)(*(long *)(lVar11 + 0x30) + 0x50) != '\0') goto LAB_00bd8864;
    if (*(long *)(lVar8 + 0x38) == 0) goto LAB_00bd8c10;
    uVar17 = UnityEngine_Transform__get_position(*(long *)(lVar8 + 0x38),0);
    if (cRam0000000001916e68 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e68 = '\x01';
    }
    lVar8 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
    fVar18 = *(float *)(lVar8 + 0x18);
    fVar19 = *(float *)(lVar8 + 0x1c);
    fVar13 = *(float *)(lVar8 + 0x20);
    uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_ground,0);
    if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
    }
    uVar6 = UnityEngine_Physics__Raycast
                      (uVar17,uVar7,uVar6,-fVar18,-fVar19,-fVar13,0x40a00000,&uStack_c0,
                       1 << (ulong)(uVar4 & 0x1f),0);
    if ((uVar6 & 1) == 0) {
LAB_00bd8864:
      bVar3 = false;
    }
    else {
      fVar18 = (float)UnityEngine_RaycastHit__get_distance(&uStack_c0,0);
      fVar19 = 0.4;
      if (iVar1 != 2) {
        fVar19 = 0.0;
      }
      if (fVar18 <= *(float *)((long)__this + 0x88) - fVar19) goto LAB_00bd8864;
      fVar18 = (float)UnityEngine_Time__get_time(0);
      if (0.5 <= fVar18 - *(float *)((long)__this + 0x84)) {
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&pvStack_120,1,0);
        uStack_f0 = uStack_110;
        uStack_f8 = uStack_118;
        pvStack_100 = pvStack_120;
        *(undefined4 *)((long)__this + 0x80) = uStack_110;
        *(undefined8 *)((long)__this + 0x78) = uStack_118;
        *(void **)((long)__this + 0x70) = pvStack_120;
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
        lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
           (uVar17 = Translate__JJJNIPAKLJF
                               (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EXTRA_STYLE_BONUS,0),
           lVar8 == 0)) goto LAB_00bd8c10;
        uVar9 = 0;
      }
      else {
        uStack_130 = *(undefined4 *)((long)__this + 0x80);
        uStack_138 = *(undefined8 *)((long)__this + 0x78);
        uStack_140 = *(undefined8 *)((long)__this + 0x70);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&pvStack_120,&uStack_140,0);
        uStack_f0 = uStack_110;
        uStack_f8 = uStack_118;
        pvStack_100 = pvStack_120;
        *(undefined4 *)((long)__this + 0x80) = uStack_110;
        *(undefined8 *)((long)__this + 0x78) = uStack_118;
        *(void **)((long)__this + 0x70) = pvStack_120;
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
        lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bd8c10;
        uVar17 = Translate__JJJNIPAKLJF
                           (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EXTRA_STYLE_BONUS,0);
        uStack_d8 = *(undefined8 *)((long)__this + 0x78);
        uStack_e0 = *(undefined8 *)((long)__this + 0x70);
        uStack_d0 = *(undefined4 *)((long)__this + 0x80);
        uVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_e0,0);
        uVar17 = System_String__Concat(uVar17,_Str___x,uVar9,_Str__,0);
        if (lVar8 == 0) goto LAB_00bd8c10;
        uVar9 = 1;
      }
      GUIGameplay__HNKHJLDJMHB(lVar8,uVar17,0,uVar9,0,0);
      uStack_150 = *(undefined4 *)((long)__this + 0x80);
      uStack_158 = *(undefined8 *)((long)__this + 0x78);
      uStack_160 = *(undefined8 *)((long)__this + 0x70);
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_160,0);
      iVar12 = iVar5 * 5 + iVar12;
      uVar16 = UnityEngine_Time__get_time(0);
      bVar3 = true;
      *(undefined4 *)((long)__this + 0x84) = uVar16;
    }
    iVar5 = CarCollision__EKCHOFEOEKM(__this);
    iVar5 = iVar5 + iVar12;
  }
  else if (JDDOHFIKJDN == 2) {
    iVar5 = CarCollision__EKCHOFEOEKM(__this);
    fVar18 = (float)UnityEngine_Time__get_time(0);
    if (*(float *)((long)__this + 0x8c) < fVar18) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = SoundScript__FIGKLLNAMLG
                        (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x100),0);
      if ((uVar6 & 1) != 0) {
        fVar18 = (float)UnityEngine_Time__get_time(0);
        *(float *)((long)__this + 0x8c) = fVar18 + 25.0;
      }
    }
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
    lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Translate_TypeInfo + 0xb8) == 0) ||
       (uVar17 = Translate__JJJNIPAKLJF
                           (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EXTRA_STYLE_BONUS_2,0),
       lVar8 == 0)) goto LAB_00bd8c10;
    iVar5 = iVar5 + 10;
    GUIGameplay__HNKHJLDJMHB(lVar8,uVar17,0,0,0,0);
    bVar3 = false;
  }
  else {
    bVar3 = false;
    iVar5 = 5;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
    lVar8 = *(long *)((long)__this + 0x20);
    if (lVar8 == 0) goto LAB_00bd8c10;
    uStack_170 = *(undefined4 *)(lVar8 + 0x23c);
    uStack_178 = *(undefined8 *)(lVar8 + 0x234);
    uStack_180 = *(undefined8 *)(lVar8 + 0x22c);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&pvStack_120,&uStack_180,0);
    uStack_f0 = uStack_110;
    uStack_f8 = uStack_118;
    pvStack_100 = pvStack_120;
    *(undefined4 *)(lVar8 + 0x23c) = uStack_110;
    *(undefined8 *)(lVar8 + 0x234) = uStack_118;
    *(undefined8 *)(lVar8 + 0x22c) = pvStack_120;
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
    CarController__IKOEIGDJPEK(*(long *)((long)__this + 0x20),iVar5,0,0);
    lVar8 = *(long *)((long)__this + 0x20);
    if (lVar8 == 0) goto LAB_00bd8c10;
    uStack_190 = *(undefined4 *)(lVar8 + 0x88);
    uStack_198 = *(undefined8 *)(lVar8 + 0x80);
    uStack_1a0 = *(undefined8 *)(lVar8 + 0x78);
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1a0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
              (&pvStack_1b8,*(int *)((long)__this_00 + 0x2c) + iVar5,0);
    uStack_110 = uStack_1a8;
    uStack_118 = uStack_1b0;
    pvStack_120 = pvStack_1b8;
    *(undefined4 *)(lVar8 + 0x88) = uStack_1a8;
    *(undefined8 *)(lVar8 + 0x80) = uStack_1b0;
    *(void **)(lVar8 + 0x78) = pvStack_1b8;
    if (bVar3 || !bVar2) goto joined_r0x00bd8a4c;
    if (iVar1 != 1) {
LAB_00bd8a34:
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
      CarController__EKOHIKFFBFC
                (*(long *)((long)__this + 0x20),*(undefined4 *)((long)__this_00 + 0x28),1,0);
      goto joined_r0x00bd8a4c;
    }
    uVar17 = *(undefined8 *)((long)__this_00 + 0x98);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Equality(uVar17,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00bd8a34;
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
    CarController__EKOHIKFFBFC
              (*(long *)((long)__this + 0x20),*(int *)((long)__this_00 + 0x28) / 5,1,0);
  }
  else {
joined_r0x00bd8a4c:
    if ((bVar2) && ((iVar1 == 8 || (iVar1 == 3)))) {
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
      uVar17 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x3a8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar17,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)((long)__this + 0x20) == 0) ||
           (lVar8 = *(long *)(*(long *)((long)__this + 0x20) + 0x3a8), lVar8 == 0))
        goto LAB_00bd8c10;
        UnityEngine_ParticleSystem__Play(lVar8,0);
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd8c10;
        CarController__KIPCFFHJBPB(*(long *)((long)__this + 0x20),0);
      }
    }
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    if (*(char *)(*(long *)((long)__this + 0x20) + 0x3c9) == '\0') {
      if (bVar2) {
        iVar5 = *(int *)((long)__this_00 + 0x34);
        if (iVar5 == 9) {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          SoundScript__NEOEGHNJJNF(0);
        }
        else {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (iVar5 == 10) {
            SoundScript__ONLLENOAJLH();
          }
          else {
            SoundScript__FJCLBOAMFFN(0);
          }
        }
      }
      else if (JDDOHFIKJDN == 2) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x18),0);
      }
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(OPBPCFOOBHD,0);
    return;
  }
LAB_00bd8c10:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



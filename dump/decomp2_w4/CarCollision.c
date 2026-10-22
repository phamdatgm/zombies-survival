// ==== public void KMNFKGPKPNE() { }   @0xae7b1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__KMNFKGPKPNE(void *__this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 auStack_1f8 [3];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 auStack_1c8 [3];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  if ((bRam0000000001916e50 & 1) == 0) {
    func_0x00a67900(&AutoDestructShuriken___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_FX_BloodSplatter);
    bRam0000000001916e50 = 1;
  }
  uStack_58 = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = **(undefined8 **)(_Main_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = func_0x00a679a0(_AutoDestructShuriken___TypeInfo,*(undefined4 *)((long)__this + 0x30));
    *(undefined8 *)((long)__this + 0x28) = uVar10;
    if (0 < *(int *)((long)__this + 0x30)) {
      uVar4 = 0;
      do {
        uVar10 = UnityEngine_Resources__Load(_Str_FX_BloodSplatter,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        plVar5 = (long *)UnityEngine_Object__Instantiate(uVar10,0);
        if (plVar5 == (long *)0x0) goto LAB_00be7dd8;
        if (*plVar5 != _UnityEngine_GameObject_TypeInfo) {
          func_0x00a67eec();
LAB_00be7e04:
          uVar10 = func_0x00a67b74();
          lVar9 = func_0x00a67a20(uVar10,0);
          if ((bRam0000000001916e51 & 1) == 0) {
            func_0x00a67900(&SoundScript_TypeInfo);
            func_0x00a67900(&Translate_TypeInfo);
            func_0x00a67900(&Str_GREAT_COMBO);
            func_0x00a67900(&Str_COMBO);
            func_0x00a67900(&Str__);
            func_0x00a67900(&Str___x);
            bRam0000000001916e51 = 1;
          }
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_110 = *(undefined4 *)(lVar9 + 0xa0);
          uStack_118 = *(undefined8 *)(lVar9 + 0x98);
          uStack_120 = *(undefined8 *)(lVar9 + 0x90);
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_120,0);
          if (iVar2 == 0) {
            fVar14 = (float)UnityEngine_Time__get_time(0);
            fVar14 = fVar14 + 1.0;
            *(float *)(lVar9 + 0xa4) = fVar14;
          }
          else {
            fVar14 = *(float *)(lVar9 + 0xa4);
          }
          puVar1 = (undefined8 *)(lVar9 + 0x90);
          fVar12 = (float)UnityEngine_Time__get_time(0);
          if (fVar14 <= fVar12) {
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_158,0,0);
          }
          else {
            uStack_160 = *(undefined4 *)(lVar9 + 0xa0);
            uStack_168 = *(undefined8 *)(lVar9 + 0x98);
            uStack_170 = *puVar1;
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_158,&uStack_170,0);
          }
          uStack_130 = uStack_148;
          uStack_138 = uStack_150;
          uStack_140 = uStack_158;
          *(undefined8 *)(lVar9 + 0x98) = uStack_150;
          *puVar1 = uStack_158;
          uStack_188 = *(undefined8 *)(lVar9 + 0x98);
          uStack_190 = *puVar1;
          *(undefined4 *)(lVar9 + 0xa0) = uStack_148;
          uStack_180 = uStack_148;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_190,0);
          uStack_1a8 = *(undefined8 *)(lVar9 + 0x98);
          uStack_1b0 = *puVar1;
          uStack_1a0 = *(undefined4 *)(lVar9 + 0xa0);
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1b0,0);
          if (iVar3 == 5) {
            fVar14 = (float)UnityEngine_Time__get_time(0);
            if (*(float *)(lVar9 + 0xa8) < fVar14) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = SoundScript__FIGKLLNAMLG
                                (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf0),0);
              if ((uVar4 & 1) != 0) {
                fVar14 = (float)UnityEngine_Time__get_time(0);
                *(float *)(lVar9 + 0xa8) = fVar14 + 25.0;
              }
            }
            if (*(long *)(lVar9 + 0x20) != 0) {
              lVar6 = *(long *)(*(long *)(lVar9 + 0x20) + 0x30);
              if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) &&
                 (pvVar7 = Translate__JJJNIPAKLJF
                                     ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                      _Str_GREAT_COMBO), lVar6 != 0)) {
                GUIGameplay__HNKHJLDJMHB(lVar6,pvVar7,2,0,0,0);
                puVar8 = auStack_1c8;
LAB_00be8118:
                uVar13 = *(undefined8 *)(lVar9 + 0x98);
                uVar10 = *puVar1;
                *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar9 + 0xa0);
                puVar8[1] = uVar13;
                *puVar8 = uVar10;
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(puVar8,0);
                return;
              }
            }
          }
          else {
            uStack_1d0 = *(undefined4 *)(lVar9 + 0xa0);
            uStack_1d8 = *(undefined8 *)(lVar9 + 0x98);
            uStack_1e0 = *puVar1;
            iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_1e0,0);
            if (iVar3 < 2) {
              return;
            }
            if (*(long *)(lVar9 + 0x20) != 0) {
              lVar6 = *(long *)(*(long *)(lVar9 + 0x20) + 0x30);
              if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) != (void *)0x0) {
                pvVar7 = Translate__JJJNIPAKLJF
                                   ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),_Str_COMBO
                                   );
                uStack_f8 = *(undefined8 *)(lVar9 + 0x98);
                uStack_100 = *puVar1;
                uStack_f0 = *(undefined4 *)(lVar9 + 0xa0);
                uVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_100,0);
                uVar10 = System_String__Concat(pvVar7,_Str___x,uVar10,_Str__,0);
                if (lVar6 != 0) {
                  GUIGameplay__HNKHJLDJMHB(lVar6,uVar10,3,1,iVar2 == 2,0);
                  puVar8 = auStack_1f8;
                  goto LAB_00be8118;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        plVar11 = *(long **)((long)__this + 0x28);
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (plVar5,&lStack_80,
                   _Method_UnityEngine_GameObject_GetComponent_AutoDestructShuriken___);
        lVar9 = lStack_80;
        if (plVar11 == (long *)0x0) goto LAB_00be7dd8;
        if ((lStack_80 != 0) &&
           (lVar6 = func_0x00a67a34(lStack_80,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0))
        goto LAB_00be7e04;
        if (*(uint *)(plVar11 + 3) <= uVar4) goto LAB_00be7dfc;
        plVar11[uVar4 + 4] = lVar9;
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)((long)__this + 0x30));
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar9 == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar9 == 0) goto LAB_00be7dd8;
    }
    uVar4 = Level__get_IsEvent(lVar9,0);
    if ((uVar4 & 1) != 0) {
      lVar9 = *(long *)((long)__this + 0x28);
      if (lVar9 != 0) {
        lVar6 = 0;
        do {
          if ((int)*(uint *)(lVar9 + 0x18) <= (int)(uint)lVar6) {
            return;
          }
          if (*(uint *)(lVar9 + 0x18) <= (uint)lVar6) {
LAB_00be7dfc:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar9 = *(long *)(lVar9 + lVar6 * 8 + 0x20);
          if (lVar9 == 0) break;
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (lVar9,&lStack_80,_Method_UnityEngine_Component_GetComponent_ParticleSystem___);
          lVar9 = lStack_80;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar9,0,0);
          if ((uVar4 & 1) != 0) {
            if (lVar9 == 0) break;
            uStack_58 = UnityEngine_ParticleSystem__get_velocityOverLifetime(lVar9,0);
            UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit(&lStack_80,0x3ecccccd,0);
            uStack_98 = uStack_78;
            lStack_a0 = lStack_80;
            uStack_88 = uStack_68;
            uStack_90 = uStack_70;
            UnityEngine_ParticleSystem_VelocityOverLifetimeModule__set_speedModifier
                      (&uStack_58,&lStack_a0,0);
          }
          lVar9 = *(long *)((long)__this + 0x28);
          lVar6 = lVar6 + 1;
        } while (lVar9 != 0);
      }
LAB_00be7dd8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void GBLOCBGPAPN(PLFKMIMGIDF JDDOHFIKJDN, GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae9b28

/* WARNING: Removing unreachable block (ram,0x00c28de8) */
/* WARNING: Removing unreachable block (ram,0x00c28e18) */
/* WARNING: Removing unreachable block (ram,0x00c28e08) */
/* WARNING: Removing unreachable block (ram,0x00c28ea4) */
/* WARNING: Removing unreachable block (ram,0x00c28eac) */
/* WARNING: Removing unreachable block (ram,0x00c28eb4) */
/* WARNING: Removing unreachable block (ram,0x00c28ebc) */
/* WARNING: Removing unreachable block (ram,0x00c28e6c) */
/* WARNING: Removing unreachable block (ram,0x00c28e74) */
/* WARNING: Removing unreachable block (ram,0x00c28e7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__GBLOCBGPAPN(void *__this,int JDDOHFIKJDN,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_58;
  
  if ((bRam0000000001916e55 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916e55 = 1;
  }
  if (JDDOHFIKJDN == 1) {
    if (OPBPCFOOBHD != (void *)0x0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (OPBPCFOOBHD,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_Collider___);
      lVar5 = lStack_58;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar5 == 0) goto LAB_00be9e1c;
        UnityEngine_Collider__set_enabled(lVar5,0,0);
      }
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (OPBPCFOOBHD,&lStack_58,
                 _Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
      if ((uVar2 & 1) != 0) {
        if ((lStack_58 == 0) || (lVar5 = *(long *)(lStack_58 + 0x28), lVar5 == 0))
        goto LAB_00be9e1c;
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar2 = 0;
          uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar5 + 0x20 + uVar2 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
            if ((uVar3 & 1) != 0) {
              fVar13 = 900.0;
              fVar10 = *(float *)(lStack_58 + 0x30) * 900.0;
              uVar9 = UnityEngine_Random__Range(*(float *)(lStack_58 + 0x30) * 600.0,fVar10,0);
              if (HAKKOAADCOE == (void *)0x0) goto LAB_00be9e1c;
              fVar6 = (float)UnityEngine_Transform__get_position(HAKKOAADCOE,0);
              fVar14 = fVar13;
              fVar11 = fVar10;
              fVar7 = (float)UnityEngine_Transform__get_up(HAKKOAADCOE,0);
              fVar15 = fVar14;
              fVar12 = fVar11;
              fVar8 = (float)UnityEngine_Transform__get_forward(HAKKOAADCOE,0);
              if (lVar4 == 0) goto LAB_00be9e1c;
              UnityEngine_Rigidbody__AddExplosionForce
                        (uVar9,(fVar6 + fVar7 * 0.5) - fVar8,(fVar10 + fVar11 * 0.5) - fVar12,
                         (fVar13 + fVar14 * 0.5) - fVar15,0x42c80000,lVar4,0);
              lVar4 = UnityEngine_Component__get_transform(lVar4,0);
              if (lVar4 == 0) goto LAB_00be9e1c;
              UnityEngine_Transform__set_parent(lVar4,0,0);
            }
            uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
      }
      return;
    }
  }
  else {
    lVar5 = *(long *)((long)__this + 0x20);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x3c9) == '\0') {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x28));
        lVar5 = *(long *)((long)__this + 0x20);
        if (lVar5 == 0) goto LAB_00be9e1c;
      }
      if ((bRam0000000001917047 & 1) == 0) {
        func_0x00a67900(&CarController_TypeInfo,5,0,0);
        bRam0000000001917047 = 1;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) == '\0') {
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                          (&stack0xffffffffffffff80,0);
        if (0 < iVar1) {
          iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                            (&stack0xffffffffffffff60,0);
          iVar1 = iVar1 + -5;
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,iVar1,0);
          uStack_b0 = uStack_c8;
          uStack_b8 = uStack_d0;
          uStack_c0 = uStack_d8;
          *(undefined4 *)(lVar5 + 0x19c) = uStack_c8;
          *(undefined8 *)(lVar5 + 0x194) = uStack_d0;
          *(undefined8 *)(lVar5 + 0x18c) = uStack_d8;
          if (((*(long *)(lVar5 + 0x30) != 0) &&
              (lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x150), lVar4 != 0)) &&
             (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
            UnityEngine_UI_Text__set_fontSize(lVar4,0x40,0);
            CarController__CHPDPBCCBJP(0x40000000,lVar5);
            CarController__OJOPPNIEGLL(lVar5);
            if ((*(long *)(lVar5 + 0x30) != 0) &&
               (lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x148), lVar4 != 0)) {
              GUICoins__ICMOCEHIFOI(lVar4,0);
              if ((*(long *)(lVar5 + 0x30) != 0) &&
                 (lVar4 = *(long *)(*(long *)(lVar5 + 0x30) + 0x150), lVar4 != 0)) {
                GUICoins__ICMOCEHIFOI
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar4,0xfffffffb,0
                          );
                CarController__GCHFPNMJHCA(0x3e955555,lVar5,0);
                uStack_e0 = *(undefined4 *)(lVar5 + 0x19c);
                uStack_e8 = *(undefined8 *)(lVar5 + 0x194);
                uStack_f0 = *(undefined8 *)(lVar5 + 0x18c);
                iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
                if (0 < iVar1) {
                  return;
                }
                if (*(char *)(lVar5 + 0x3c8) != '\0') {
                  return;
                }
                CarController__AEFMMNHIGLH(lVar5);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
      return;
    }
  }
LAB_00be9e1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GLBHMAKJKHB(PLFKMIMGIDF JDDOHFIKJDN, GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae855c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__GLBHMAKJKHB(void *__this,int JDDOHFIKJDN,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_s2;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_a8;
  long lStack_58;
  
  if ((bRam0000000001916e5a & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Zombie___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_barrel_throw);
    func_0x00a67900(&Str_barrel_big);
    func_0x00a67900(&Str_barrel_with_box_pack);
    func_0x00a67900(&Str_barrel_pack_x5);
    func_0x00a67900(&Str_barrel_pack_x8);
    func_0x00a67900(&Str_barrel_pack_x3);
    func_0x00a67900(&Str_barrel_big_zombie_walk);
    func_0x00a67900(&Str_barrel_pack_x10);
    bRam0000000001916e5a = 1;
  }
  if (JDDOHFIKJDN != 0) {
    if (JDDOHFIKJDN != 2) {
      if (JDDOHFIKJDN != 1) {
        return;
      }
      if (OPBPCFOOBHD == (void *)0x0) goto LAB_00be8bf8;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (OPBPCFOOBHD,&lStack_58,
                 _Method_UnityEngine_GameObject_GetComponent_DynamicAccessor___);
      lVar3 = lStack_58;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if ((lVar3 == 0) || (lVar7 = *(long *)(lVar3 + 0x28), lVar7 == 0)) goto LAB_00be8bf8;
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar2 = 0;
          uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          fStack_a8 = 15000.0;
          do {
            if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar6 = *(long *)(lVar7 + 0x20 + uVar2 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
            if ((uVar5 & 1) != 0) {
              fVar12 = *(float *)(lVar3 + 0x30) * 15000.0;
              fVar15 = fStack_a8;
              uVar11 = UnityEngine_Random__Range(*(float *)(lVar3 + 0x30) * 10000.0,0);
              if (HAKKOAADCOE == (void *)0x0) goto LAB_00be8bf8;
              fVar8 = (float)UnityEngine_Transform__get_position(HAKKOAADCOE,0);
              fVar13 = fVar12;
              fVar16 = fVar15;
              fVar9 = (float)UnityEngine_Transform__get_up(HAKKOAADCOE,0);
              fVar14 = fVar13;
              fVar17 = fVar16;
              fVar10 = (float)UnityEngine_Transform__get_forward(HAKKOAADCOE,0);
              if (lVar6 == 0) goto LAB_00be8bf8;
              in_s2 = (fVar12 + fVar13 * 0.5) - fVar14 * 0.5;
              UnityEngine_Rigidbody__AddExplosionForce
                        (uVar11,(fVar8 + fVar9 * 0.5) - fVar10 * 0.5,in_s2,
                         (fVar15 + fVar16 * 0.5) - fVar17 * 0.5,0x42c80000,lVar6,0);
              lVar6 = UnityEngine_Component__get_transform(lVar6,0);
              if (lVar6 == 0) goto LAB_00be8bf8;
              UnityEngine_Transform__set_parent(lVar6,0,0);
            }
            uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
      }
      lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
      if (lVar3 == 0) goto LAB_00be8bf8;
      uVar2 = System_String__Contains(lVar3,_Str_barrel_big_zombie_walk,0);
      if ((uVar2 & 1) != 0) {
        uVar11 = *(undefined8 *)((long)__this + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar11,0,0);
        if ((uVar2 & 1) != 0) {
          if ((HAKKOAADCOE == (void *)0x0) ||
             (lVar3 = UnityEngine_Transform__get_parent(HAKKOAADCOE,0), lVar3 == 0))
          goto LAB_00be8bf8;
          lVar3 = UnityEngine_Transform__get_parent(lVar3,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if (lVar3 == 0) goto LAB_00be8bf8;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar3,&lStack_58,_Method_UnityEngine_Component_GetComponent_Zombie___);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(lStack_58,0,0);
            if ((uVar2 & 1) != 0) {
              *(long *)((long)__this + 0x38) = lVar3;
            }
          }
        }
        uVar11 = *(undefined8 *)((long)__this + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)((long)__this + 0x38) == 0) ||
             (UnityEngine_Transform__get_position(*(long *)((long)__this + 0x38),0),
             HAKKOAADCOE == (void *)0x0)) goto LAB_00be8bf8;
          fVar15 = in_s2;
          UnityEngine_Transform__get_position(HAKKOAADCOE,0);
          if (in_s2 - fVar15 < 3.0) {
            if (*(long *)((long)__this + 0x38) == 0) goto LAB_00be8bf8;
            uVar11 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x38),0);
            CarCollision__JDLKLAGFELO(__this,1,uVar11,*(undefined8 *)((long)__this + 0x38));
          }
        }
      }
    }
    if (((OPBPCFOOBHD != (void *)0x0) &&
        (lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0), lVar3 != 0)) &&
       (uVar1 = System_String__Contains(lVar3,_Str_barrel_pack_x10,0), HAKKOAADCOE != (void *)0x0))
    {
      UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      CarCollision__NDLJJLDOHIA(__this,uVar1 & 1);
      if (*(long *)((long)__this + 0x20) != 0) {
        if (*(char *)(*(long *)((long)__this + 0x20) + 0x3c9) == '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30));
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Object__Destroy(OPBPCFOOBHD,0);
        return;
      }
    }
    goto LAB_00be8bf8;
  }
  if (HAKKOAADCOE == (void *)0x0) goto LAB_00be8bf8;
  UnityEngine_Transform__get_position(HAKKOAADCOE,0);
  CarCollision__NDLJJLDOHIA(__this,0);
  if (*(long *)((long)__this + 0x20) == 0) goto LAB_00be8bf8;
  if (*(char *)(*(long *)((long)__this + 0x20) + 0x3c9) == '\0') {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30));
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__Destroy(OPBPCFOOBHD,0);
  if (OPBPCFOOBHD == (void *)0x0) goto LAB_00be8bf8;
  uVar11 = UnityEngine_GameObject__get_tag(OPBPCFOOBHD,0);
  uVar2 = System_String__op_Equality(uVar11,_Str_barrel_throw,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)((long)__this + 0x20);
    if (lVar3 == 0) goto LAB_00be8bf8;
    uVar4 = 0xf;
    goto LAB_00be8bbc;
  }
  lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
  if (lVar3 == 0) goto LAB_00be8bf8;
  uVar2 = System_String__Contains(lVar3,_Str_barrel_pack_x3,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
    if (lVar3 == 0) goto LAB_00be8bf8;
    uVar2 = System_String__Contains(lVar3,_Str_barrel_pack_x5,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
      if (lVar3 == 0) goto LAB_00be8bf8;
      uVar2 = System_String__Contains(lVar3,_Str_barrel_pack_x8,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
        if (lVar3 == 0) goto LAB_00be8bf8;
        uVar2 = System_String__Contains(lVar3,_Str_barrel_pack_x10,0);
        if ((uVar2 & 1) == 0) {
          lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
          if (lVar3 == 0) goto LAB_00be8bf8;
          uVar2 = System_String__Contains(lVar3,_Str_barrel_with_box_pack,0);
          if ((uVar2 & 1) == 0) {
            lVar3 = UnityEngine_Object__get_name(OPBPCFOOBHD,0);
            if (lVar3 == 0) goto LAB_00be8bf8;
            uVar2 = System_String__Contains(lVar3,_Str_barrel_big,0);
            uVar4 = 0x3c;
            if ((uVar2 & 1) == 0) {
              uVar4 = 0;
            }
            goto LAB_00be8bb4;
          }
        }
        uVar4 = 0x32;
      }
      else {
        uVar4 = 0x28;
      }
    }
    else {
      uVar4 = 0x19;
    }
  }
  else {
    uVar4 = 0xf;
  }
LAB_00be8bb4:
  lVar3 = *(long *)((long)__this + 0x20);
  if (lVar3 != 0) {
LAB_00be8bbc:
    CarController__EKOHIKFFBFC(lVar3,uVar4,0,0);
    return;
  }
LAB_00be8bf8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaeb3a8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision___ctor(void *__this)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  *(undefined4 *)((long)__this + 0x30) = 6;
  *(undefined4 *)((long)__this + 0x68) = 0x42;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0,0);
  uStack_20 = uStack_40;
  uStack_28 = uStack_48;
  uStack_30 = uStack_50;
  *(undefined4 *)((long)__this + 0x80) = uStack_40;
  *(undefined8 *)((long)__this + 0x78) = uStack_48;
  *(undefined8 *)((long)__this + 0x70) = uStack_50;
  *(undefined4 *)((long)__this + 0x88) = 0x3f99999a;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,0,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0xa0) = uStack_58;
  *(undefined8 *)((long)__this + 0x98) = uStack_60;
  *(undefined8 *)((long)__this + 0x90) = uStack_68;
  UnityEngine_MonoBehaviour___ctor(__this,0);
  return;
}


// ==== public void FKJKPFAKBLM() { }   @0xaeb5b4

/* WARNING: Removing unreachable block (ram,0x00beb914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__FKJKPFAKBLM(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  long lStack_38;
  
  if ((bRam0000000001916e61 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_Pumkin_Parts);
    bRam0000000001916e61 = 1;
  }
  uVar2 = UnityEngine_Resources__Load(_Str_Pumkin_Parts,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  plVar3 = (long *)UnityEngine_Object__Instantiate(uVar2,0);
  lVar1 = _UnityEngine_GameObject_TypeInfo;
  lVar4 = 0;
  if (plVar3 == (long *)0x0) {
LAB_00beb6ac:
    __this = (void *)((long)__this + 0x60);
    *(long *)__this = lVar4;
  }
  else {
    if (*plVar3 != _UnityEngine_GameObject_TypeInfo) {
LAB_00beb6a8:
      lVar4 = func_0x00a67eec();
      goto LAB_00beb6ac;
    }
    __this = (void *)((long)__this + 0x60);
    *(long **)__this = plVar3;
    if (*plVar3 != lVar1) goto LAB_00beb6a8;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar4 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00beb90c;
    }
    uVar5 = Level__get_IsEvent(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)__this != 0) &&
         (lVar4 = UnityEngine_GameObject__get_transform(*(long *)__this,0), lVar4 != 0)) {
        plVar3 = (long *)UnityEngine_Transform__GetEnumerator(lVar4,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        do {
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_00beb78c;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x00a9e6c4(plVar3,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00beb78c:
          uVar5 = (*(code *)*puVar6)(plVar3,puVar6[1]);
          if ((uVar5 & 1) == 0) {
            plVar3 = (long *)func_0x00a67a34(plVar3,_System_IDisposable_TypeInfo);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar4 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_00beb8c0;
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_00beb8a8;
          }
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_00beb7ec;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)func_0x00a9e6c4(plVar3,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00beb7ec:
          plVar7 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
          if (plVar7 == (long *)0x0) {
LAB_00beb904:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
             (*(long *)(*(long *)(*plVar7 + 200) +
                        (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
              _UnityEngine_Transform_TypeInfo)) {
            func_0x00a67eec();
            goto LAB_00beb904;
          }
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (plVar7,&lStack_38,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
          lVar4 = lStack_38;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            UnityEngine_Rigidbody__set_interpolation(lVar4,0,0);
          }
        } while( true );
      }
LAB_00beb90c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
LAB_00beb8a8:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00beb8dc;
    }
  }
LAB_00beb8c0:
  puVar6 = (undefined8 *)func_0x00a9e6c4(plVar3,_System_IDisposable_TypeInfo,0);
LAB_00beb8dc:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return;
}



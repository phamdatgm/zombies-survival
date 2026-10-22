// ==== public void FHFJHOHDHKM(PLFKMIMGIDF JDDOHFIKJDN, GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae7878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__FHFJHOHDHKM(void *__this,int JDDOHFIKJDN,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  long lStack_48;
  
  if ((bRam0000000001916e4f & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_TheBat___,JDDOHFIKJDN);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e4f = 1;
  }
  if (OPBPCFOOBHD != (void *)0x0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (OPBPCFOOBHD,&lStack_48,_Method_UnityEngine_GameObject_GetComponent_TheBat___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(lStack_48,0,0);
    if ((uVar1 & 1) != 0) {
      if (lStack_48 == 0) goto LAB_00be79b0;
      UnityEngine_Behaviour__set_enabled(lStack_48,1,0);
    }
    if (HAKKOAADCOE != (void *)0x0) {
      uVar3 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      if (cRam0000000001916789 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916789 = '\x01';
      }
      puVar2 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
      CarCollision__EJHCIMAAIKB(uVar3,in_d1,in_d2,*puVar2,puVar2[1],puVar2[2],__this,1);
      return;
    }
  }
LAB_00be79b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void CODGMCKJNEO(GameObject OPBPCFOOBHD, Transform HAKKOAADCOE) { }   @0xae976c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__CODGMCKJNEO(void *__this,void *OPBPCFOOBHD,void *HAKKOAADCOE)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  if ((bRam0000000001916e54 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Bird___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_FLYING_BONUS);
    bRam0000000001916e54 = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__FIGKLLNAMLG(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe8),0);
  if (OPBPCFOOBHD == (void *)0x0) goto LAB_00be9b24;
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
            (OPBPCFOOBHD,&lStack_a0,_Method_UnityEngine_GameObject_GetComponent_Bird___);
  lVar3 = lStack_a0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
LAB_00be9928:
    if (HAKKOAADCOE == (void *)0x0) goto LAB_00be9b24;
  }
  else {
    if (lVar3 == 0) goto LAB_00be9b24;
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) == 0) goto LAB_00be9928;
    if (HAKKOAADCOE == (void *)0x0) goto LAB_00be9b24;
    uVar4 = *(undefined8 *)(lVar3 + 0x40);
    uVar6 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
    uVar5 = in_d1;
    uVar8 = in_d2;
    uVar7 = UnityEngine_Transform__get_rotation(HAKKOAADCOE,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Instantiate_object_
              (uVar6,in_d1,in_d2,uVar7,uVar5,uVar8,in_d3,uVar4,
               _Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  uVar5 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
  if (cRam0000000001916789 == '\0') {
    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
    cRam0000000001916789 = '\x01';
  }
  puVar2 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
  CarCollision__EJHCIMAAIKB(uVar5,in_d1,in_d2,*puVar2,puVar2[1],puVar2[2],__this,1);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x68),0);
  if (*(long *)((long)__this + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)((long)__this + 0x20) + 0x30);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
       (uVar5 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_FLYING_BONUS,0),
       lVar3 != 0)) {
      GUIGameplay__HNKHJLDJMHB(lVar3,uVar5,0,0,0,0);
      lVar3 = *(long *)((long)__this + 0x20);
      if (lVar3 != 0) {
        uStack_c0 = *(undefined4 *)(lVar3 + 0x278);
        uStack_c8 = *(undefined8 *)(lVar3 + 0x270);
        lStack_d0 = *(long *)(lVar3 + 0x268);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&lStack_b8,&lStack_d0,0);
        uStack_90 = uStack_a8;
        uStack_98 = uStack_b0;
        lStack_a0 = lStack_b8;
        *(undefined4 *)(lVar3 + 0x278) = uStack_a8;
        *(undefined8 *)(lVar3 + 0x270) = uStack_b0;
        *(long *)(lVar3 + 0x268) = lStack_b8;
        if (*(void **)((long)__this + 0x20) != (void *)0x0) {
          CarController__IKOEIGDJPEK(*(void **)((long)__this + 0x20),0x32,false);
          if (*(long *)((long)__this + 0x20) != 0) {
            if (*(char *)(*(long *)((long)__this + 0x20) + 0x62) != '\0') {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
              if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) goto LAB_00be9b24;
              if (*(int *)(lVar3 + 0x18) == 3) {
                if (*(void **)((long)__this + 0x20) == (void *)0x0) goto LAB_00be9b24;
                CarController__IKOEIGDJPEK(*(void **)((long)__this + 0x20),1,true);
              }
            }
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            UnityEngine_Object__Destroy(OPBPCFOOBHD,0);
            return;
          }
        }
      }
    }
  }
LAB_00be9b24:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HILOPNIFJDL(Transform HAKKOAADCOE) { }   @0xae9e24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__HILOPNIFJDL(void *__this,void *HAKKOAADCOE)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar6;
  undefined8 in_d3;
  
  if ((bRam0000000001916e59 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916e59 = 1;
  }
  if (*(void **)((long)__this + 0x20) != (void *)0x0) {
    CarController__IKOEIGDJPEK(*(void **)((long)__this + 0x20),1,true);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x90),0);
    if (HAKKOAADCOE != (void *)0x0) {
      uVar3 = *(undefined8 *)((long)__this + 0x60);
      uVar4 = UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      uVar2 = in_d1;
      uVar6 = in_d2;
      uVar5 = UnityEngine_Transform__get_rotation(HAKKOAADCOE,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar1 = UnityEngine_Object__Instantiate_object_
                        (uVar4,in_d1,in_d2,uVar5,uVar2,uVar6,in_d3,uVar3,
                         _Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar1 != 0) {
        UnityEngine_GameObject__SetActive(lVar1,1,0);
        uVar2 = UnityEngine_Component__get_gameObject(HAKKOAADCOE,0);
        if ((bRam000000000191c518 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
          bRam000000000191c518 = 1;
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (pcRam000000000191c510 == (code *)0x0) {
          pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
        }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c510)(0,uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CFMCPPEAHAF() { }   @0xaea9a4

/* WARNING: Removing unreachable block (ram,0x00beb0bc) */
/* WARNING: Removing unreachable block (ram,0x00beb280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__CFMCPPEAHAF(void *__this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  long extraout_x8;
  int *piVar16;
  int *extraout_x10;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  void *pvStack_88;
  long alStack_80 [2];
  uint uStack_70;
  long lStack_68;
  
  if ((bRam0000000001916e5d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    func_0x00a67900(&EONPOEEAEOK_var);
    func_0x00a67900(&EONPOEEAEOK_TypeInfo);
    func_0x00a67900(&System_Enum_TypeInfo);
    func_0x00a67900(&UnityEngine_GameObject___TypeInfo);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001916e5d = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = **(undefined8 **)(_Main_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar17,0,0);
  uVar17 = _EONPOEEAEOK_var;
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar17 = System_Type__GetTypeFromHandle(uVar17,0);
  if (*(int *)(_System_Enum_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_Enum_TypeInfo);
  }
  lVar7 = System_Enum__GetValues(uVar17,0);
  if (lVar7 == 0) goto LAB_00beb28c;
  uVar5 = System_Array__get_Length(lVar7,0);
  uVar17 = func_0x00a679a0(_UnityEngine_GameObject___TypeInfo,uVar5);
  *(undefined8 *)((long)__this + 0x58) = uVar17;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar14 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      pvVar14 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if (pvVar14 == (void *)0x0) goto LAB_00beb28c;
    }
    bVar3 = Level__get_IsEvent(pvVar14);
    if (bVar3) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x50) == 0)) {
LAB_00beb28c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(int *)(*(long *)(lVar15 + 0x50) + 0x18) == 6) {
        bVar3 = true;
      }
      else {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar15 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar15 == 0) goto LAB_00beb28c;
        }
        if (*(long *)(lVar15 + 0x50) == 0) goto LAB_00beb28c;
        bVar3 = *(int *)(*(long *)(lVar15 + 0x50) + 0x18) == 7;
      }
      goto LAB_00beac18;
    }
  }
  bVar3 = false;
LAB_00beac18:
  plVar8 = (long *)System_Array__GetEnumerator(lVar7,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar18 = 0;
  do {
    lVar7 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_00beacb4;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x00a9e6c4(plVar8,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00beacb4:
    uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar6 & 1) == 0) {
      lVar7 = 0;
      goto LAB_00beb128;
    }
    lVar7 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_00bead14;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x00a9e6c4(plVar8,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bead14:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(_EONPOEEAEOK_TypeInfo + 0x40)) {
      func_0x00a67eec();
      goto LAB_00beb238;
    }
    puVar11 = (uint *)func_0x00a67a3c();
    uVar1 = *puVar11;
    uVar6 = (ulong)uVar1;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar17 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar17,0,0);
    if ((uVar12 & 1) == 0) {
joined_r0x00beadb8:
      if (1 < uVar1 - 9) {
LAB_00beadd0:
        alStack_80[0] = _EONPOEEAEOK_TypeInfo;
        lVar7 = *(long *)((long)__this + 0x58);
        alStack_80[1] = 0xffffffffffffffff;
        uStack_70 = uVar1;
        uVar17 = System_Enum__ToString(alStack_80,0);
        plVar10 = (long *)UnityEngine_Resources__Load(uVar17,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        plVar13 = (long *)UnityEngine_Object__Instantiate(plVar10,0);
        if (lVar7 == 0) {
LAB_00beb238:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((plVar13 != (long *)0x0) && (*plVar13 != _UnityEngine_GameObject_TypeInfo)) {
          func_0x00a67eec();
          lVar15 = extraout_x8;
          piVar16 = extraout_x10;
          pvStack_88 = __this;
          break;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        *(long **)(lVar7 + (long)(int)uVar18 * 8 + 0x20) = plVar13;
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        pvVar14 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (pvVar14 != (void *)0x0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
            pvVar14 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
          }
          bVar4 = Level__get_IsEvent(pvVar14);
          if (bVar4) {
            lVar15 = *(long *)((long)__this + 0x58);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar15 = *(long *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            lVar15 = UnityEngine_GameObject__get_transform(lVar15,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            plVar10 = (long *)UnityEngine_Transform__GetEnumerator(lVar15,0);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
LAB_00beaefc:
            lVar15 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar6 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_00beaf48;
                }
                uVar6 = uVar6 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)
                     func_0x00a9e6c4(plVar10,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00beaf48:
            uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
            if ((uVar6 & 1) != 0) {
              lVar15 = *plVar10;
              uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar6 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == _System_Collections_IEnumerator_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar15 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_00beafa8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)
                       func_0x00a9e6c4(plVar10,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00beafa8:
              plVar13 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130))
                 || (*(long *)(*(long *)(*plVar13 + 200) +
                               (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8)
                     != _UnityEngine_Transform_TypeInfo)) {
                auVar19 = func_0x00a67eec();
                pvStack_88 = auVar19._8_8_;
                uVar6 = auVar19._0_8_;
                plVar10 = (long *)func_0x00a67a34(plVar10,_System_IDisposable_TypeInfo);
                iVar2 = auVar19._8_4_;
                if (plVar10 == (long *)0x0) goto LAB_00beb25c;
                lVar15 = *plVar10;
                uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar12 == 0) goto LAB_00beb220;
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                goto LAB_00beb208;
              }
              UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (plVar13,&lStack_68,_Method_UnityEngine_Component_GetComponent_Rigidbody___)
              ;
              lVar7 = lStack_68;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar6 = UnityEngine_Object__op_Implicit(lVar7,0);
              if ((uVar6 & 1) != 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                UnityEngine_Rigidbody__set_interpolation(lVar7,0,0);
              }
              goto LAB_00beaefc;
            }
            plVar10 = (long *)func_0x00a67a34(plVar10,_System_IDisposable_TypeInfo);
            if (plVar10 != (long *)0x0) {
              lVar7 = *plVar10;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == _System_IDisposable_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_00beb0a4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)func_0x00a9e6c4(plVar10,_System_IDisposable_TypeInfo,0);
LAB_00beb0a4:
              (*(code *)*puVar9)(plVar10,puVar9[1]);
            }
          }
        }
      }
    }
    else if (uVar1 - 0x12 < 4) {
      if (1 < uVar1 - 9 && bVar3) goto LAB_00beadd0;
    }
    else if (!bVar3) goto joined_r0x00beadb8;
    uVar18 = uVar18 + 1;
  } while( true );
LAB_00beb244:
  puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
  goto LAB_00beb250;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar16 = piVar16 + 4;
    if (uVar12 == 0) break;
LAB_00beb208:
    if (*(long *)(piVar16 + -2) == _System_IDisposable_TypeInfo) goto LAB_00beb244;
  }
LAB_00beb220:
  puVar9 = (undefined8 *)func_0x00a9e6c4(plVar10,_System_IDisposable_TypeInfo,0);
  pvStack_88._0_4_ = auVar19._8_4_;
LAB_00beb250:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  iVar2 = (int)pvStack_88;
LAB_00beb25c:
  pvStack_88._0_4_ = iVar2;
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar7);
  }
  if ((int)pvStack_88 != 1) {
    plVar8 = (long *)func_0x00a67a34(plVar8,_System_IDisposable_TypeInfo);
    if (plVar8 != (long *)0x0) {
      lVar7 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _System_IDisposable_TypeInfo) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_00beb384;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x00a9e6c4(plVar8,_System_IDisposable_TypeInfo,0);
LAB_00beb384:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
    func_0x00b65214(uVar6);
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(0);
  }
  plVar10 = (long *)func_0x016dec50();
  lVar7 = *plVar10;
  func_0x016dec60();
LAB_00beb128:
  plVar8 = (long *)func_0x00a67a34(plVar8,_System_IDisposable_TypeInfo);
  if (plVar8 != (long *)0x0) {
    lVar15 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _System_IDisposable_TypeInfo) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_00beb190;
        }
        uVar6 = uVar6 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)func_0x00a9e6c4(plVar8,_System_IDisposable_TypeInfo,0);
LAB_00beb190:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(lVar7);
}


// ==== private void NPBHJPAEJMB(GameObject OPBPCFOOBHD, Transform HAKKOAADCOE, bool CJMAAEHCNEN) { }   @0xaea134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCollision__NPBHJPAEJMB(void *__this,void *OPBPCFOOBHD,void *HAKKOAADCOE,bool CJMAAEHCNEN)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  long lStack_38;
  
  if ((bRam0000000001916e60 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916e60 = 1;
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    fVar3 = (float)CarController__AGKGCILIANE(*(long *)((long)__this + 0x20),0);
    if (15.0 < fVar3) {
      if (HAKKOAADCOE == (void *)0x0) goto LAB_00bea288;
      UnityEngine_Transform__get_position(HAKKOAADCOE,0);
      CarCollision__NDLJJLDOHIA(__this,0);
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x30),0);
    }
    if (*(long *)((long)__this + 0x20) != 0) {
      uVar2 = 0x3c;
      if (!CJMAAEHCNEN) {
        uVar2 = 0x14;
      }
      CarController__EKOHIKFFBFC(*(long *)((long)__this + 0x20),uVar2,0,0);
      if (OPBPCFOOBHD != (void *)0x0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (OPBPCFOOBHD,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_Collider___);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
        if ((uVar1 & 1) != 0) {
          if (lStack_38 == 0) goto LAB_00bea288;
          UnityEngine_Collider__set_enabled(lStack_38,0,0);
        }
        return;
      }
    }
  }
LAB_00bea288:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



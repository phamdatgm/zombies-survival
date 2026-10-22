// ==== public void OFLAMIIDAPI() { }   @0xb3d474

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__OFLAMIIDAPI(void *__this)

{
  return;
}


// ==== public void NINJNGGDOJC() { }   @0xb3d8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__NINJNGGDOJC(void *__this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001917113 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917113 = 1;
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
  lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar8 != 0) && (*(long *)((long)__this + 0x40) != 0)) {
    iVar7 = *(int *)(lVar8 + 0x94);
    iVar1 = *(int *)(*(long *)((long)__this + 0x40) + 0x18);
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
    if (lVar8 != 0) {
      if (iVar7 < iVar1 + -1) {
        iVar7 = *(int *)(lVar8 + 0x94) + 1;
      }
      else {
        iVar7 = 0;
      }
      DAFNMLEKHAD__DGAGHJIDJEM(lVar8,iVar7,0);
      lVar8 = *(long *)((long)__this + 0x40);
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
      lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((lVar9 != 0) && (lVar8 != 0)) {
        uVar2 = *(uint *)(lVar9 + 0x94);
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar8 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        if (lVar8 != 0) {
          Translate__PPPHBJFOJDK(_Main_TypeInfo,*(undefined8 *)(lVar8 + 0x10));
          Translate__BDEKKODPMCA(__this);
          if ((bRam0000000001917118 & 1) == 0) {
            func_0x00a67900(&UnityEngine_AudioClip_TypeInfo);
            func_0x00a67900(&Main_TypeInfo);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            func_0x00a67900(&SoundScript_TypeInfo);
            func_0x00a67900(&Str__4_too_slow);
            func_0x00a67900(&Str__2_that_hurts);
            func_0x00a67900(&Str__7_splatter_bonus);
            func_0x00a67900(&Str__5_sorry_bird);
            func_0x00a67900(&Str__3_wasted);
            func_0x00a67900(&Str__8_extra_style);
            func_0x00a67900(&Str__1_flip);
            func_0x00a67900(&Str__6_great_combo);
            bRam0000000001917118 = 1;
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
          if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
            uVar10 = *(undefined8 *)((long)__this + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lVar8 = *(long *)((long)__this + 0x30);
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
            uVar10 = System_String__Concat(uVar10,_Str__1_flip,0);
            plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
            if (lVar8 != 0) {
              if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                SoundScript__PNPJEJLNGMF
                          (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 200,plVar6,0);
                lVar8 = *(long *)((long)__this + 0x30);
                uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                uVar10 = System_String__Concat(uVar10,_Str__2_that_hurts,0);
                plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                if (lVar8 == 0) goto LAB_00c3b224;
                if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                  SoundScript__PNPJEJLNGMF
                            (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd0,plVar6,
                             0);
                  lVar8 = *(long *)((long)__this + 0x30);
                  uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                  uVar10 = System_String__Concat(uVar10,_Str__3_wasted,0);
                  plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                  if (lVar8 == 0) goto LAB_00c3b224;
                  if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                    SoundScript__PNPJEJLNGMF
                              (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd8,
                               plVar6,0);
                    lVar8 = *(long *)((long)__this + 0x30);
                    uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                    uVar10 = System_String__Concat(uVar10,_Str__4_too_slow,0);
                    plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                    if (lVar8 == 0) goto LAB_00c3b224;
                    if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                      SoundScript__PNPJEJLNGMF
                                (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe0,
                                 plVar6,0);
                      lVar8 = *(long *)((long)__this + 0x30);
                      uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                      uVar10 = System_String__Concat(uVar10,_Str__5_sorry_bird,0);
                      plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                      if (lVar8 == 0) goto LAB_00c3b224;
                      if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                        SoundScript__PNPJEJLNGMF
                                  (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe8,
                                   plVar6,0);
                        lVar8 = *(long *)((long)__this + 0x30);
                        uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                        uVar10 = System_String__Concat(uVar10,_Str__6_great_combo,0);
                        plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                        if (lVar8 == 0) goto LAB_00c3b224;
                        if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo))
                        {
                          SoundScript__PNPJEJLNGMF
                                    (0x3f800000,lVar8,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf0
                                     ,plVar6,0);
                          lVar8 = *(long *)((long)__this + 0x30);
                          uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                          uVar10 = System_String__Concat(uVar10,_Str__7_splatter_bonus,0);
                          plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                          if (lVar8 == 0) goto LAB_00c3b224;
                          if ((plVar6 == (long *)0x0) ||
                             (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                            SoundScript__PNPJEJLNGMF
                                      (0x3f800000,lVar8,
                                       *(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf8,plVar6,0);
                            lVar8 = *(long *)((long)__this + 0x30);
                            uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                            uVar10 = System_String__Concat(uVar10,_Str__8_extra_style,0);
                            plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                            if (lVar8 == 0) goto LAB_00c3b224;
                            if ((plVar6 == (long *)0x0) ||
                               (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                              SoundScript__PNPJEJLNGMF
                                        (0x3f800000,lVar8,
                                         *(long *)(_SoundScript_TypeInfo + 0xb8) + 0x100,plVar6,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              func_0x00a67eec(plVar6);
              if ((bRam0000000001917107 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Physics_TypeInfo);
                func_0x00a67900(&Str_zombie_parts);
                func_0x00a67900(&Str_zombie);
                func_0x00a67900(&Str_dynamic_obstacle);
                func_0x00a67900(&Str_dyn_obst_nofire);
                bRam0000000001917107 = 1;
              }
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_zombie,0);
              if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
              }
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_dyn_obst_nofire,0);
              if ((bRam000000000191d3e8 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Physics_TypeInfo,uVar4,0);
                bRam000000000191d3e8 = 1;
              }
              if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (pcRam000000000191d3e0 == (code *)0x0) {
                pcRam000000000191d3e0 = (code *)func_0x00a678c4(&UNK_005b98a7);
              }
                    /* WARNING: Could not recover jumptable at 0x014cb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191d3e0)(uVar3,uVar4,1);
              return;
            }
          }
LAB_00c3b224:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OGEJCBEMJLE() { }   @0xb3ad84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__OGEJCBEMJLE(void *__this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uStack_24;
  
  if ((bRam0000000001917118 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AudioClip_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str__4_too_slow);
    func_0x00a67900(&Str__2_that_hurts);
    func_0x00a67900(&Str__7_splatter_bonus);
    func_0x00a67900(&Str__5_sorry_bird);
    func_0x00a67900(&Str__3_wasted);
    func_0x00a67900(&Str__8_extra_style);
    func_0x00a67900(&Str__1_flip);
    func_0x00a67900(&Str__6_great_combo);
    bRam0000000001917118 = 1;
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 != 0) {
    uStack_24 = *(uint *)(lVar5 + 0x94);
    if ((uStack_24 & 0xfffffff7) != 0 && uStack_24 != 7) {
      uStack_24 = 0;
    }
    uVar6 = *(undefined8 *)((long)__this + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)((long)__this + 0x30);
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = System_Int32__ToString(&uStack_24,0);
    uVar6 = System_String__Concat(uVar6,_Str__1_flip,0);
    plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
    if (lVar5 != 0) {
      if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
        SoundScript__PNPJEJLNGMF
                  (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 200,plVar4,0);
        lVar5 = *(long *)((long)__this + 0x30);
        uVar6 = System_Int32__ToString(&uStack_24,0);
        uVar6 = System_String__Concat(uVar6,_Str__2_that_hurts,0);
        plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
        if (lVar5 == 0) goto LAB_00c3b224;
        if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
          SoundScript__PNPJEJLNGMF
                    (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd0,plVar4,0);
          lVar5 = *(long *)((long)__this + 0x30);
          uVar6 = System_Int32__ToString(&uStack_24,0);
          uVar6 = System_String__Concat(uVar6,_Str__3_wasted,0);
          plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
          if (lVar5 == 0) goto LAB_00c3b224;
          if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
            SoundScript__PNPJEJLNGMF
                      (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xd8,plVar4,0);
            lVar5 = *(long *)((long)__this + 0x30);
            uVar6 = System_Int32__ToString(&uStack_24,0);
            uVar6 = System_String__Concat(uVar6,_Str__4_too_slow,0);
            plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
            if (lVar5 == 0) goto LAB_00c3b224;
            if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
              SoundScript__PNPJEJLNGMF
                        (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe0,plVar4,0);
              lVar5 = *(long *)((long)__this + 0x30);
              uVar6 = System_Int32__ToString(&uStack_24,0);
              uVar6 = System_String__Concat(uVar6,_Str__5_sorry_bird,0);
              plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
              if (lVar5 == 0) goto LAB_00c3b224;
              if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                SoundScript__PNPJEJLNGMF
                          (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xe8,plVar4,0)
                ;
                lVar5 = *(long *)((long)__this + 0x30);
                uVar6 = System_Int32__ToString(&uStack_24,0);
                uVar6 = System_String__Concat(uVar6,_Str__6_great_combo,0);
                plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                if (lVar5 == 0) goto LAB_00c3b224;
                if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                  SoundScript__PNPJEJLNGMF
                            (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf0,plVar4,
                             0);
                  lVar5 = *(long *)((long)__this + 0x30);
                  uVar6 = System_Int32__ToString(&uStack_24,0);
                  uVar6 = System_String__Concat(uVar6,_Str__7_splatter_bonus,0);
                  plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                  if (lVar5 == 0) goto LAB_00c3b224;
                  if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                    SoundScript__PNPJEJLNGMF
                              (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0xf8,
                               plVar4,0);
                    lVar5 = *(long *)((long)__this + 0x30);
                    uVar6 = System_Int32__ToString(&uStack_24,0);
                    uVar6 = System_String__Concat(uVar6,_Str__8_extra_style,0);
                    plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                    if (lVar5 == 0) goto LAB_00c3b224;
                    if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                      SoundScript__PNPJEJLNGMF
                                (0x3f800000,lVar5,*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x100,
                                 plVar4,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      func_0x00a67eec(plVar4);
      if ((bRam0000000001917107 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Physics_TypeInfo);
        func_0x00a67900(&Str_zombie_parts);
        func_0x00a67900(&Str_zombie);
        func_0x00a67900(&Str_dynamic_obstacle);
        func_0x00a67900(&Str_dyn_obst_nofire);
        bRam0000000001917107 = 1;
      }
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie,0);
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
      }
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_dyn_obst_nofire,0);
      if ((bRam000000000191d3e8 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Physics_TypeInfo,uVar2,0);
        bRam000000000191d3e8 = 1;
      }
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (pcRam000000000191d3e0 == (code *)0x0) {
        pcRam000000000191d3e0 = (code *)func_0x00a678c4(&UNK_005b98a7);
      }
                    /* WARNING: Could not recover jumptable at 0x014cb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d3e0)(uVar1,uVar2,1);
      return;
    }
  }
LAB_00c3b224:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



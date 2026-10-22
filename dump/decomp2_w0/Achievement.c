// ==== public void PPHJGAMIKLM() { }   @0xaf3d9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PPHJGAMIKLM(void *__this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((bRam0000000001916ed5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_REWARD);
    func_0x00a67900(&Str__x_);
    bRam0000000001916ed5 = 1;
  }
  Achievement__MAMIHJCBDBD(__this);
  *(undefined4 *)((long)__this + 0x28) = 0;
  switch(*(undefined4 *)((long)__this + 0x10)) {
  case 0:
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
    if (lVar8 == 0) goto LAB_00bf46c4;
    lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,0);
    if (lVar8 != 0) {
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
      if ((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,0), lVar8 == 0))
      goto LAB_00bf46c4;
      iVar5 = DJKGLJOCFCE__NIDLADCDMOH(lVar8,0);
      if (0 < iVar5) goto code_r0x00bf44a8;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    uVar7 = Achievement__ABKANHONENG();
    if (((uVar7 & 1) != 0) && (*(int *)((long)__this + 0x10) == 1)) {
      *(undefined4 *)((long)__this + 0x28) = 0;
      iVar5 = 0;
      bVar2 = false;
      while( true ) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0)) break;
        if (*(int *)(lVar8 + 0x18) <= iVar5) {
          if (!bVar2) goto LAB_00bf441c;
          goto code_r0x00bf44b0;
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
        if (lVar8 == 0) break;
        lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,iVar5,1);
        if (lVar8 != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
              (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)) ||
             (lVar8 = *(long *)(lVar8 + 0x560), lVar8 == 0)) break;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) goto code_r0x00bf46c8;
              lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_00bf46c4;
              if (((*(char *)(lVar9 + 0x70) != '\0') && (0 < *(int *)(lVar9 + 0x74))) &&
                 (iVar3 = ShopItem__HJICMDCENKN(lVar9,iVar5,0), iVar3 != 0)) {
                bVar2 = true;
                *(undefined4 *)((long)__this + 0x28) = 1;
                break;
              }
              uVar1 = *(uint *)(lVar8 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar1);
          }
        }
        iVar5 = iVar5 + 1;
      }
      goto LAB_00bf46c4;
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
    if (lVar8 == 0) goto LAB_00bf46c4;
    iVar5 = DAFNMLEKHAD__BHMFJBCOKOA(lVar8,*(undefined4 *)((long)__this + 0x10));
    goto code_r0x00bf440c;
  case 6:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar8 == 0))
    goto LAB_00bf46c4;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
code_r0x00bf46c8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
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
        if ((lVar9 == 0) || (lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar6 == 0))
        goto LAB_00bf46c4;
        lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,*(undefined4 *)(lVar9 + 0x10));
        if (lVar6 != 0) {
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
          if ((lVar6 == 0) ||
             (lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,*(undefined4 *)(lVar9 + 0x10)), lVar6 == 0))
          goto LAB_00bf46c4;
          iVar5 = DJKGLJOCFCE__NIDLADCDMOH(lVar6,0);
          if ((0 < iVar5) && (iVar5 = Level__MNPHCGOJNCN(lVar9,0), iVar5 == 3))
          goto code_r0x00bf44a8;
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    break;
  case 7:
    iVar5 = 1;
    while( true ) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
         (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0))
      goto LAB_00bf46c4;
      if (*(int *)(lVar8 + 0x18) <= iVar5) goto LAB_00bf441c;
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
      if (lVar8 == 0) goto LAB_00bf46c4;
      lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,iVar5,1);
      if (lVar8 != 0) break;
code_r0x00bf4350:
      iVar5 = iVar5 + 1;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x560), lVar8 != 0)) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) goto code_r0x00bf46c8;
          lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00bf46c4;
          if (*(char *)(lVar9 + 0x70) == '\0') {
            iVar3 = ShopItem__HJICMDCENKN(lVar9,iVar5,0);
            iVar4 = ShopItem__EKBFKEBGGOP(lVar9,0);
            if (iVar3 < iVar4) goto code_r0x00bf4350;
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar12 = uVar12 + 1;
          if ((int)uVar1 <= (int)uVar12) break;
        } while( true );
      }
      goto code_r0x00bf44a8;
    }
    goto LAB_00bf46c4;
  case 8:
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
code_r0x00bf43fc:
    if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) == 0) goto LAB_00bf46c4;
    iVar5 = DAFNMLEKHAD__ADDNPHMAFBA();
code_r0x00bf440c:
    *(int *)((long)__this + 0x28) = iVar5;
    if (iVar5 < *(int *)((long)__this + 0x2c)) break;
code_r0x00bf44b0:
    Achievement__PCJAFFALGCM(__this);
    goto LAB_00bf44b8;
  case 9:
    uVar7 = Achievement__ABKANHONENG();
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if ((uVar7 & 1) != 0) {
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      goto code_r0x00bf43fc;
    }
    if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
       (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar8 == 0))
    goto LAB_00bf46c4;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) goto code_r0x00bf46c8;
        lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00bf46c4;
        uVar7 = Level__get_IsEvent(lVar9,0);
        if (((uVar7 & 1) == 0) && (iVar5 = Level__MNPHCGOJNCN(lVar9,0), iVar5 != 3))
        goto LAB_00bf441c;
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
code_r0x00bf44a8:
    *(undefined4 *)((long)__this + 0x28) = 1;
    goto code_r0x00bf44b0;
  }
LAB_00bf441c:
  Achievement__PAJCJMENMMI(__this,0);
LAB_00bf44b8:
  uVar10 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x38) == 0) goto LAB_00bf46c4;
  uVar10 = *(undefined8 *)(*(long *)((long)__this + 0x38) + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)((long)__this + 0x38);
    if (lVar8 == 0) goto LAB_00bf46c4;
    plVar11 = *(long **)(lVar8 + 0x28);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = *(long *)((long)__this + 0x38);
      if (lVar8 == 0) goto LAB_00bf46c4;
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bf46c4;
    lVar8 = Translate__JJJNIPAKLJF
                      (**(long **)(_Translate_TypeInfo + 0xb8),*(undefined8 *)(lVar8 + 0x30),0);
    uVar10 = System_Int32__ToString((long)__this + 0x2c,0);
    if ((lVar8 == 0) ||
       (uVar10 = System_String__Replace(lVar8,_Str__x_,uVar10,0), plVar11 == (long *)0x0))
    goto LAB_00bf46c4;
    (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5b0));
  }
  if (*(long *)((long)__this + 0x38) != 0) {
    uVar10 = *(undefined8 *)(*(long *)((long)__this + 0x38) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(long *)((long)__this + 0x38) != 0) {
      plVar11 = *(long **)(*(long *)((long)__this + 0x38) + 0x40);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        uVar10 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_REWARD,0);
        uVar10 = System_String__Concat(uVar10,_Str__,0);
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bf46a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5b0));
          return;
        }
      }
    }
  }
LAB_00bf46c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



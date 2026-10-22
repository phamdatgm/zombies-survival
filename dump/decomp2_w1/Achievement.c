// ==== private void PAJCJMENMMI(bool FJJAPMGNMKC) { }   @0xaf3598

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PAJCJMENMMI(void *__this,bool FJJAPMGNMKC)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iStack_34;
  
  if ((bRam0000000001916ed2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    bRam0000000001916ed2 = 1;
  }
  iStack_34 = 0;
  uVar2 = Achievement__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (FJJAPMGNMKC) {
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
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (__this_00 == (void *)0x0) goto LAB_00bf3a14;
    bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(__this_00,*(int *)((long)__this + 0x10));
  }
  else {
    bVar1 = false;
  }
  lVar4 = Achievement__get_gui(__this);
  if (lVar4 == 0) goto LAB_00bf3a14;
  plVar7 = *(long **)(lVar4 + 0x48);
  uVar2 = System_Int32__ToString((int *)((long)__this + 0x30),0);
  if (plVar7 == (long *)0x0) goto LAB_00bf3a14;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x58),bVar1 & FJJAPMGNMKC,0);
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x38),~bVar1 & 1,0);
  if (bVar1 == false && ((FJJAPMGNMKC ^ 0xffU) & 1) == 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
LAB_00bf38d8:
      uVar6 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf3a14;
      uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf38d8;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar4 == 0))
      goto LAB_00bf3a14;
      uVar3 = AdvController__HNDMJBICLJF(lVar4,3,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf38d8;
      lVar4 = Achievement__get_gui(__this);
      if (lVar4 == 0) goto LAB_00bf3a14;
      iStack_34 = *(int *)((long)__this + 0x30);
      plVar7 = *(long **)(lVar4 + 0x88);
      if (iStack_34 < 0) {
        iStack_34 = iStack_34 + 1;
      }
      iStack_34 = iStack_34 >> 1;
      uVar2 = System_Int32__ToString(&iStack_34,0);
      uVar2 = System_String__Concat(_Str__,uVar2,0);
      if (plVar7 == (long *)0x0) goto LAB_00bf3a14;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
      uVar6 = 1;
    }
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x78),uVar6 ^ 1,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x80),uVar6,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_00bf3a14;
    uVar2 = 0;
  }
  else {
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x78),0,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x80),0,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_00bf3a14;
    uVar2 = 1;
  }
  UnityEngine_GameObject__SetActive(lVar4,uVar2,0);
  iVar11 = *(int *)((long)__this + 0x28);
  iVar10 = *(int *)((long)__this + 0x2c);
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x68) != 0)) {
    fVar8 = (float)iVar11 / (float)iVar10;
    fVar9 = fVar8;
    if (1.0 < fVar8) {
      fVar9 = 1.0;
    }
    fVar9 = fVar9 * 689.0;
    if (fVar8 < 0.0) {
      fVar9 = 0.0;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar9,*(long *)(lVar4 + 0x68),0,0);
    lVar4 = Achievement__get_gui(__this);
    if (lVar4 != 0) {
      plVar7 = *(long **)(lVar4 + 0x70);
      uVar2 = System_Int32__ToString((int *)((long)__this + 0x28),0);
      uVar5 = System_Int32__ToString((int *)((long)__this + 0x2c),0);
      uVar2 = System_String__Concat(uVar2,_Str__,uVar5,0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
        return;
      }
    }
  }
LAB_00bf3a14:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PCJAFFALGCM() { }   @0xaf48f0

/* WARNING: Removing unreachable block (ram,0x00bf36b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PCJAFFALGCM(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iStack_34;
  
  if ((bRam0000000001916ed6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916ed6 = 1;
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
  lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar3 == 0) {
LAB_00bf4b5c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar4 = DAFNMLEKHAD__HIFFBAOPBGD(lVar3,*(undefined4 *)((long)__this + 0x10));
  if ((uVar4 & 1) == 0) {
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
    pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar5 == (void *)0x0) goto LAB_00bf4b5c;
    bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(pvVar5,*(int *)((long)__this + 0x10));
    if (!bVar1) {
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
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_00bf4b5c;
      DAFNMLEKHAD__EBANJKOABAL(lVar3,*(undefined4 *)((long)__this + 0x10),1);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf4b5c;
        uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = System_String__op_Inequality(*(undefined8 *)((long)__this + 0x18),_Str_,0),
           (uVar4 & 1) != 0)) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar3 == 0))
          goto LAB_00bf4b5c;
          BridgePHP__UnlockAchievement(lVar3,*(undefined8 *)((long)__this + 0x18),0);
        }
      }
    }
  }
  if ((bRam0000000001916ed2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    bRam0000000001916ed2 = 1;
  }
  iStack_34 = 0;
  uVar7 = Achievement__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
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
  pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar5 == (void *)0x0) goto LAB_00bf3a14;
  bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(pvVar5,*(int *)((long)__this + 0x10));
  lVar3 = Achievement__get_gui(__this);
  if (lVar3 == 0) goto LAB_00bf3a14;
  plVar8 = *(long **)(lVar3 + 0x48);
  uVar7 = System_Int32__ToString((int *)((long)__this + 0x30),0);
  if (plVar8 == (long *)0x0) goto LAB_00bf3a14;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x58),bVar1,0);
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x38),~bVar1 & 1,0);
  if (bVar1) {
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x78),0,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x80),0,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_00bf3a14;
    uVar7 = 1;
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
LAB_00bf38d8:
      uVar6 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf3a14;
      uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00bf38d8;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar3 == 0))
      goto LAB_00bf3a14;
      uVar4 = AdvController__HNDMJBICLJF(lVar3,3,0);
      if ((uVar4 & 1) == 0) goto LAB_00bf38d8;
      lVar3 = Achievement__get_gui(__this);
      if (lVar3 == 0) goto LAB_00bf3a14;
      iStack_34 = *(int *)((long)__this + 0x30);
      plVar8 = *(long **)(lVar3 + 0x88);
      if (iStack_34 < 0) {
        iStack_34 = iStack_34 + 1;
      }
      iStack_34 = iStack_34 >> 1;
      uVar7 = System_Int32__ToString(&iStack_34,0);
      uVar7 = System_String__Concat(_Str__,uVar7,0);
      if (plVar8 == (long *)0x0) goto LAB_00bf3a14;
      (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
      uVar6 = 1;
    }
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x78),uVar6 ^ 1,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x80),uVar6,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_00bf3a14;
    uVar7 = 0;
  }
  UnityEngine_GameObject__SetActive(lVar3,uVar7,0);
  iVar12 = *(int *)((long)__this + 0x28);
  iVar11 = *(int *)((long)__this + 0x2c);
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    fVar9 = (float)iVar12 / (float)iVar11;
    fVar10 = fVar9;
    if (1.0 < fVar9) {
      fVar10 = 1.0;
    }
    fVar10 = fVar10 * 689.0;
    if (fVar9 < 0.0) {
      fVar10 = 0.0;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar10,*(long *)(lVar3 + 0x68),0,0);
    lVar3 = Achievement__get_gui(__this);
    if (lVar3 != 0) {
      plVar8 = *(long **)(lVar3 + 0x70);
      uVar7 = System_Int32__ToString((int *)((long)__this + 0x28),0);
      uVar2 = System_Int32__ToString((int *)((long)__this + 0x2c),0);
      uVar7 = System_String__Concat(uVar7,_Str__,uVar2,0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
        return;
      }
    }
  }
LAB_00bf3a14:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



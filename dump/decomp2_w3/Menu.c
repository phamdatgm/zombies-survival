// ==== public void OBLKMKHMBEA() { }   @0xb32670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OBLKMKHMBEA(void *__this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  void *__this_00;
  undefined8 uVar4;
  
  if ((bRam00000000019170cf & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170cf = 1;
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
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
  }
  else {
    __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar2 != 0) && (bVar1 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0), __this_00 != (void *)0x0)) {
    DAFNMLEKHAD__MCDGKFFGABE(__this_00,(bool)(~bVar1 & 1));
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
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
      lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar2 != 0) {
        uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48), lVar2 != 0)) {
            if (pcRam000000000191b628 == (code *)0x0) {
              pcRam000000000191b628 = (code *)func_0x00a678c4(&UNK_005b29ad,0);
            }
                    /* WARNING: Could not recover jumptable at 0x01464c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191b628)(lVar2,1);
            return;
          }
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
            return;
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar2 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x48), lVar2 != 0)) {
            if (pcRam000000000191b620 == (code *)0x0) {
              pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
            }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191b620)(lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool CLJDAMIIAKE() { }   @0xb32d8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__CLJDAMIIAKE(void *__this)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  
  if ((bRam00000000019170d2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170d2 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  bVar1 = 0;
  if (lVar4 == 0) goto LAB_00c32e04;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar4 == 0) goto LAB_00c3314c;
  }
  if (*(int *)(lVar4 + 0x10) == 0) {
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
    pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar3 == (void *)0x0) goto LAB_00c3314c;
    pvVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar3,0);
    if (pvVar3 != (void *)0x0) {
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
      pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar3 == (void *)0x0) goto LAB_00c3314c;
      pvVar3 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar3,0,true);
      if (pvVar3 != (void *)0x0) {
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
        pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar3 == (void *)0x0) ||
           (pvVar3 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar3,0), pvVar3 == (void *)0x0)) goto LAB_00c3314c;
        if (*(int *)((long)pvVar3 + 0x3c) == 0) {
LAB_00c33000:
          bVar1 = 1;
          goto LAB_00c32e04;
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
        pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar3 == (void *)0x0) ||
           (pvVar3 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar3,0,true), pvVar3 == (void *)0x0))
        goto LAB_00c3314c;
        iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar3,3,0);
        if (iVar2 == 0) {
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
          lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_00c3314c;
          iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar4,0);
          if (iVar2 < 0xb4) goto LAB_00c33000;
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
        pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar3 == (void *)0x0) ||
           (pvVar3 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar3,0,true), pvVar3 == (void *)0x0))
        goto LAB_00c3314c;
        iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar3,3,0);
        if (iVar2 == 5) {
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
          pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((pvVar3 == (void *)0x0) ||
             (pvVar3 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar3,0,true), pvVar3 == (void *)0x0)) {
LAB_00c3314c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar3,4,0);
          if (iVar2 == 4) {
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
            lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar4 != 0) {
              bVar1 = DAFNMLEKHAD__JHCIANGHEAK(lVar4,0);
              bVar1 = bVar1 ^ 1;
              goto LAB_00c32e04;
            }
            goto LAB_00c3314c;
          }
        }
      }
    }
  }
  bVar1 = 0;
LAB_00c32e04:
  return (bool)(bVar1 & 1);
}


// ==== public void FPPIKAMLPDC() { }   @0xb33730

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__FPPIKAMLPDC(void *__this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)((long)__this + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x578), lVar1 != 0)) {
    lVar1 = UnityEngine_Component__get_transform(lVar1,0);
    if ((*(long *)((long)__this + 0x20) != 0) &&
       ((lVar2 = *(long *)(*(long *)((long)__this + 0x20) + 0x78), lVar2 != 0 &&
        (uVar3 = UnityEngine_Component__get_transform(lVar2,0), lVar1 != 0)))) {
      UnityEngine_Transform__SetParent(lVar1,uVar3,0);
      if ((*(long *)((long)__this + 0x20) != 0) &&
         (lVar1 = *(long *)(*(long *)((long)__this + 0x20) + 0x580), lVar1 != 0)) {
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool HMCFLJKHPAI() { }   @0xb34d7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu__HMCFLJKHPAI(void *__this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  
  if ((bRam00000000019170d9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170d9 = 1;
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = DAFNMLEKHAD__GDGPFCLJEIL(lVar2,0);
    if ((uVar3 & 1) != 0) {
      return false;
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
    pvVar4 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (pvVar4 != (void *)0x0) {
      pvVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar4,0);
      if (pvVar4 == (void *)0x0) {
        return false;
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
      pvVar4 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if ((pvVar4 != (void *)0x0) &&
         (pvVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar4,0), pvVar4 != (void *)0x0)) {
        if (*(int *)((long)pvVar4 + 0x3c) != 0) {
          return false;
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
        pvVar4 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((pvVar4 != (void *)0x0) &&
           (pvVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar4,0), pvVar4 != (void *)0x0)) {
          bVar1 = DJKGLJOCFCE__MCDLFBJCNNA(pvVar4);
          return !bVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PPBIOKBJGPG() { }   @0xb3410c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__PPBIOKBJGPG(void *__this)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  undefined8 uStack_58;
  
  if ((bRam00000000019170dc & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    bRam00000000019170dc = 1;
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(lVar6 + 0xe0);
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = System_DateTime__get_Now(0);
    uStack_58 = System_DateTime__op_Subtraction(uVar9,uVar3,0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar11 = (double)System_TimeSpan__get_TotalMinutes(&uStack_58,0);
    if (0.0 <= dVar11) {
      bVar1 = 0;
    }
    else {
      if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c3443c;
      bVar1 = AdvController__HNDMJBICLJF(*(long *)((long)__this + 0x38),1,0);
    }
    if ((*(long *)((long)__this + 0x20) != 0) &&
       (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x690), lVar6 != 0)) {
      UnityEngine_GameObject__SetActive(lVar6,0.0 <= dVar11,0);
      if ((*(long *)((long)__this + 0x20) != 0) &&
         ((lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x688), lVar6 != 0 &&
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 != 0)))) {
        UnityEngine_GameObject__SetActive(lVar6,dVar11 < 0.0,0);
        if (dVar11 < 0.0) {
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x688), lVar6 == 0))
          goto LAB_00c3443c;
          UnityEngine_UI_Selectable__set_interactable(lVar6,bVar1 & 1,0);
          if ((*(long *)((long)__this + 0x20) == 0) ||
             (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x688), lVar6 == 0))
          goto LAB_00c3443c;
          plVar4 = (long *)UnityEngine_UI_Selectable__get_image(lVar6,0);
          uVar9 = 0;
          if ((bVar1 & 1) == 0) {
            if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c3443c;
            uVar9 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x680);
          }
          if (plVar4 == (long *)0x0) goto LAB_00c3443c;
          (**(code **)(*plVar4 + 0x348))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x350));
        }
        if ((*(long *)((long)__this + 0x20) != 0) &&
           (lVar6 = *(long *)(*(long *)((long)__this + 0x20) + 0x6d8), lVar6 != 0)) {
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar10 = 0;
            uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar8 = *(long *)(lVar6 + 0x20 + uVar10 * 8);
              if ((dVar11 < 0.0 & bVar1) == 0) {
LAB_00c343f8:
                bVar2 = false;
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
                pvVar5 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (pvVar5 == (void *)0x0) goto LAB_00c3443c;
                pvVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar5,0);
                if (pvVar5 == (void *)0x0) goto LAB_00c343f8;
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
                if ((pvVar5 == (void *)0x0) ||
                   (pvVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar5,0), pvVar5 == (void *)0x0))
                goto LAB_00c3443c;
                bVar2 = DJKGLJOCFCE__MCDLFBJCNNA(pvVar5);
              }
              if (lVar8 == 0) goto LAB_00c3443c;
              UnityEngine_GameObject__SetActive(lVar8,bVar2,0);
              uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_00c3443c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator HNBGLFPDGMH() { }   @0xb36d58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Menu__HNBGLFPDGMH(void *__this)

{
  void *pvVar1;
  
  if ((bRam00000000019170e0 & 1) == 0) {
    func_0x00a67900(&Menu_GOCBIMNHIEI_TypeInfo);
    bRam00000000019170e0 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_Menu_GOCBIMNHIEI_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  return pvVar1;
}


// ==== public void NHEEMPFMAHD() { }   @0xb37734

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__NHEEMPFMAHD(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  if ((bRam00000000019170e4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019170e4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar8 != 0)) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar11 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_00c379bc;
        if (*(int *)(lVar11 + 0x10) - 1U < 10) {
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
          if (pvVar5 == (void *)0x0) goto LAB_00c379bc;
          pvVar5 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar5,*(int *)(lVar11 + 0x10));
          if (pvVar5 != (void *)0x0) {
            bVar4 = DJKGLJOCFCE__MCDLFBJCNNA(pvVar5);
            if (!bVar4) {
              iVar2 = *(int *)((long)pvVar5 + 0x3c);
              iVar3 = *(int *)(lVar11 + 0x10);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              iVar10 = 2;
              if (iVar3 != 1) {
                iVar10 = 3;
              }
              if (iVar10 <= iVar2) {
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
                if (lVar6 == 0) goto LAB_00c379bc;
                uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
                if ((uVar7 & 1) == 0) {
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
                  if (lVar6 == 0) goto LAB_00c379bc;
                  uVar7 = DAFNMLEKHAD__HDBOCJPHJDD(lVar6,0);
                  if ((uVar7 & 1) == 0) {
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
                    if (lVar6 == 0) goto LAB_00c379bc;
                    uVar7 = DAFNMLEKHAD__KHJGIDLMPLJ(lVar6,0);
                    if ((uVar7 & 1) == 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar6 = *(long *)(_Menu_TypeInfo + 0xb8);
                      *(undefined1 *)(lVar6 + 0xe) = 1;
                      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar11 + 0x10);
                    }
                  }
                }
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    return;
  }
LAB_00c379bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BOBGEDIMPGG(int HKGEOJPHLAN) { }   @0xb37de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__BOBGEDIMPGG(void *__this,int HKGEOJPHLAN)

{
  long lVar1;
  
  if ((bRam00000000019170e8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170e8 = 1;
  }
  if (0 < HKGEOJPHLAN) {
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
    lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    DAFNMLEKHAD__FLDGADKLBMI(lVar1,HKGEOJPHLAN,0);
  }
  if ((bRam00000000019170fd & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170fd = 1;
  }
  *(undefined8 *)((long)__this + 0x80) = 0;
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
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__EIGEDMABAKJ(lVar1,0xffffffff,0);
  *(undefined1 *)((long)__this + 0x88) = 0;
  return;
}


// ==== public void MNGOIBGJMMG(bool EBOKAPAKELF) { }   @0xb38068

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__MNGOIBGJMMG(void *__this,bool EBOKAPAKELF)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam00000000019170eb & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str_Try_to_restore_HP_for_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str_Finish_restore_HP_for_);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    bRam00000000019170eb = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lVar10 = 4;
  while( true ) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
    if ((*plVar7 == 0) || (lVar9 = *(long *)(*plVar7 + 0x28), lVar9 == 0)) goto LAB_00c3867c;
    uVar11 = lVar10 - 4;
    if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar11) break;
    if (EBOKAPAKELF) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar7 = *(long **)(_Main_TypeInfo + 0xb8);
      }
      if (uVar11 != *(uint *)((long)plVar7 + 0x2c)) goto LAB_00c381a4;
    }
    else {
LAB_00c381a4:
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
      if (pvVar5 == (void *)0x0) goto LAB_00c3867c;
      pvVar5 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar5,(int)lVar10 + -4,true);
      if ((pvVar5 != (void *)0x0) && (iVar2 = MKCBGHDANLA__EAEAJMKGDPD(pvVar5,0), iVar2 != -1)) {
        uVar3 = MKCBGHDANLA__IDOHKCCDGDG(pvVar5,4,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
           (lVar9 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar9 == 0))
        goto LAB_00c3867c;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_00c38680:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar9 + lVar10 * 8);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) goto LAB_00c3867c;
        if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_00c38680;
        uStack_78._4_4_ = *(int *)(lVar9 + (long)(int)uVar3 * 4 + 0x20);
        iVar4 = MKCBGHDANLA__EAEAJMKGDPD(pvVar5,0);
        iVar2 = -0x80000000;
        if ((float)uStack_78._4_4_ * 0.2 != INFINITY) {
          iVar2 = (int)((float)uStack_78._4_4_ * 0.2);
        }
        iVar1 = uStack_78._4_4_;
        if (iVar4 <= uStack_78._4_4_) {
          iVar1 = iVar4;
        }
        if (iVar2 <= iVar4) {
          iVar2 = iVar1;
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,iVar2);
        if (iVar2 < uStack_78._4_4_) {
          lVar9 = func_0x00a679a0(_string___TypeInfo,7);
          if (lVar9 == 0) goto LAB_00c3867c;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x20) = _Str_Try_to_restore_HP_for_;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
             (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0))
          goto LAB_00c3867c;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_00c38680;
          lVar8 = *(long *)(lVar8 + lVar10 * 8);
          if (lVar8 == 0) goto LAB_00c3867c;
          if ((*(uint *)(lVar9 + 0x18) < 2) ||
             (*(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x10),
             *(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x30) = _Str___;
          uVar6 = System_Int32__ToString(&uStack_78,0);
          if ((*(uint *)(lVar9 + 0x18) < 4) ||
             (*(undefined8 *)(lVar9 + 0x38) = uVar6, *(uint *)(lVar9 + 0x18) == 4))
          goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x40) = _Str__;
          uVar6 = System_Int32__ToString((long)&uStack_78 + 4,0);
          if ((*(uint *)(lVar9 + 0x18) < 6) ||
             (*(undefined8 *)(lVar9 + 0x48) = uVar6, *(uint *)(lVar9 + 0x18) == 6))
          goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x50) = _Str__;
          uVar6 = System_String__Concat(lVar9,0);
          Main__GEMDEAMAGPG(uVar6,0,0);
          if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = System_DateTime__get_Now(0);
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar9 == 0) goto LAB_00c3867c;
          uStack_80 = System_DateTime__op_Subtraction(uVar6,*(undefined8 *)(lVar9 + 0xf8),0);
          if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_TimeSpan_TypeInfo);
          }
          dVar12 = (double)System_TimeSpan__get_TotalSeconds(&uStack_80,0);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          iVar4 = *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0xc);
          iVar2 = -0x80000000;
          if (dVar12 != INFINITY) {
            iVar2 = (int)dVar12;
          }
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = iVar2 / iVar4;
          }
          iVar1 = (int)uStack_78 + iVar1;
          iVar2 = uStack_78._4_4_;
          if (iVar1 <= uStack_78._4_4_) {
            iVar2 = iVar1;
          }
          iVar4 = 0;
          if (-1 < iVar1) {
            iVar4 = iVar2;
          }
          MKCBGHDANLA__DDPLLMLFICC(pvVar5,iVar4,0);
          lVar9 = func_0x00a679a0(_string___TypeInfo,7);
          if (lVar9 == 0) goto LAB_00c3867c;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 == 0) goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x20) = _Str_Finish_restore_HP_for_;
          if ((**(long **)(_Main_TypeInfo + 0xb8) == 0) ||
             (lVar8 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x28), lVar8 == 0))
          goto LAB_00c3867c;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_00c38680;
          lVar8 = *(long *)(lVar8 + lVar10 * 8);
          if (lVar8 == 0) goto LAB_00c3867c;
          if ((uVar3 < 2) ||
             (*(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x10), uVar3 == 2))
          goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x30) = _Str___;
          uVar6 = System_Int32__ToString(&uStack_78,0);
          if ((*(uint *)(lVar9 + 0x18) < 4) ||
             (*(undefined8 *)(lVar9 + 0x38) = uVar6, *(uint *)(lVar9 + 0x18) == 4))
          goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x40) = _Str__;
          uVar6 = System_Int32__ToString((long)&uStack_78 + 4,0);
          if ((*(uint *)(lVar9 + 0x18) < 6) ||
             (*(undefined8 *)(lVar9 + 0x48) = uVar6, *(uint *)(lVar9 + 0x18) == 6))
          goto LAB_00c38680;
          *(undefined8 *)(lVar9 + 0x50) = _Str__;
          uVar6 = System_String__Concat(lVar9,0);
          Main__GEMDEAMAGPG(uVar6,0,0);
        }
      }
    }
    lVar10 = lVar10 + 1;
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
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uVar6 = System_DateTime__get_Now(0);
  if (lVar10 != 0) {
    DAFNMLEKHAD__DIKNLDOMCHP(lVar10,uVar6,0);
    return;
  }
LAB_00c3867c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb38c7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__Awake(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam00000000019170f0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_Menu_PHJCEJEOECH__);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
    func_0x00a67900(&Str__MainData);
    bRam00000000019170f0 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = UnityEngine_Component__get_gameObject(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
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
    (*pcRam000000000191c510)(0,uVar3);
    return;
  }
  uVar3 = func_0x00a67b44(_UnityEngine_Events_UnityAction_Scene__LoadSceneMode__TypeInfo);
  UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar3,__this,_Method_Menu_PHJCEJEOECH__,0);
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_SceneManagement_SceneManager__add_sceneLoaded(uVar3,0);
  uVar3 = UnityEngine_Component__get_gameObject(__this,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(uVar3,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined8 **)(_Menu_TypeInfo + 0xb8) = __this;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(**(undefined8 **)(_Main_TypeInfo + 0xb8),0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = UnityEngine_Resources__Load(_Str__MainData,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    if ((bRam000000000191c507 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
      func_0x00a67900(&Str_The_Object_you_want_to_instantiate_is_nu);
      bRam000000000191c507 = 1;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__CheckNullArgument(uVar3,_Str_The_Object_you_want_to_instantiate_is_nu);
    if (pcRam000000000191c560 == (code *)0x0) {
      pcRam000000000191c560 = (code *)func_0x00a678c4(&UNK_005b0feb);
    }
    uVar3 = (*pcRam000000000191c560)(uVar3);
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    func_0x00a67914(&UnityEngine_UnityException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_Instantiate_failed_because_the_clone_was);
    UnityEngine_UnityException___ctor(uVar3,uVar2);
    uVar2 = func_0x00a67914(&Method_UnityEngine_Object_Instantiate__);
    uVar3 = func_0x00a67a20(uVar3,uVar2);
    if (pcRam000000000191c560 == (code *)0x0) {
      pcRam000000000191c560 = (code *)func_0x00a678c4(&UNK_005b0feb);
    }
                    /* WARNING: Could not recover jumptable at 0x0148ef08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c560)(uVar3);
    return;
  }
  return;
}


// ==== public void DEIAOEOJDGI() { }   @0xb398ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__DEIAOEOJDGI(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000019170f5 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170f5 = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c39ac0;
    lVar3 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x20),0);
    if (((*(long *)((long)__this + 0x20) == 0) ||
        (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x20),0), lVar4 == 0
        )) || (uVar1 = UnityEngine_GameObject__get_activeSelf(lVar4,0), lVar3 == 0))
    goto LAB_00c39ac0;
    UnityEngine_GameObject__SetActive(lVar3,~uVar1 & 1,0);
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 != 0)) {
      lVar3 = UnityEngine_Component__get_gameObject(lVar3,0);
      if (((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
          ((lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 != 0 &&
           (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)))) &&
         (uVar1 = UnityEngine_GameObject__get_activeSelf(lVar4,0), lVar3 != 0)) {
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar3,~uVar1 & 1);
        return;
      }
    }
  }
LAB_00c39ac0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CKPDEIAFHEC() { }   @0xb35e74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__CKPDEIAFHEC(void *__this)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_d1;
  long lStack_28;
  
  if ((bRam00000000019170f9 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170f9 = 1;
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
  pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (pvVar3 == (void *)0x0) goto LAB_00c3630c;
  pvVar3 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar3,-1,true);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar6 != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar6 == 0) goto LAB_00c3630c;
      }
      if (99 < *(int *)(lVar6 + 0x10)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
          if (lVar6 == 0) goto LAB_00c3630c;
        }
        if (*(void **)(lVar6 + 0x50) == (void *)0x0) goto LAB_00c3630c;
        iVar2 = EventContest__get_car_id(*(void **)(lVar6 + 0x50));
        if (-1 < iVar2) goto LAB_00c3601c;
      }
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
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c3630c;
    DAFNMLEKHAD__AFIOLIDLHAH(lVar6,*(undefined4 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c),0);
  }
LAB_00c3601c:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(uVar9,0);
  lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c3630c;
  uVar1 = *(uint *)((long)*(long **)(_Main_TypeInfo + 0xb8) + 0x2c);
  if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_00c36310;
  lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_00c3630c;
  uVar9 = UnityEngine_Resources__Load(*(undefined8 *)(lVar6 + 0x18),0);
  plVar4 = (long *)UnityEngine_Object__Instantiate(uVar9,0);
  lVar6 = _UnityEngine_GameObject_TypeInfo;
  if (plVar4 != (long *)0x0) {
    if ((*plVar4 == _UnityEngine_GameObject_TypeInfo) &&
       (*(long **)(*(long *)(_Main_TypeInfo + 0xb8) + 0x30) = plVar4, *plVar4 == lVar6))
    goto LAB_00c360ec;
    goto LAB_00c36254;
  }
  *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x30) = 0;
LAB_00c360ec:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar6 == 0) goto LAB_00c3630c;
  }
  if (*(int *)(lVar6 + 0x10) < 100) {
    return;
  }
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = CarReplay__DJKMCIEIAMH(0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = *(undefined8 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(uVar9,0);
  lVar6 = **(long **)(_Main_TypeInfo + 0xb8);
  if ((((lVar6 == 0) || (lVar8 = (*(long **)(_Main_TypeInfo + 0xb8))[8], lVar8 == 0)) ||
      (lVar8 = *(long *)(lVar8 + 0x60), lVar8 == 0)) ||
     (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_00c3630c;
  uVar1 = *(uint *)(lVar8 + 0x1c);
  if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_00c36310:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
  if (lVar6 == 0) goto LAB_00c3630c;
  uVar9 = UnityEngine_Resources__Load(*(undefined8 *)(lVar6 + 0x18),0);
  plVar4 = (long *)UnityEngine_Object__Instantiate(uVar9,0);
  lVar8 = _UnityEngine_GameObject_TypeInfo;
  lVar6 = 0;
  if (plVar4 == (long *)0x0) {
LAB_00c36258:
    plVar7 = (long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
    *plVar7 = lVar6;
  }
  else {
    if (*plVar4 != _UnityEngine_GameObject_TypeInfo) {
LAB_00c36254:
      lVar6 = func_0x00a67eec();
      goto LAB_00c36258;
    }
    plVar7 = (long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
    *plVar7 = (long)plVar4;
    if (*plVar4 != lVar8) goto LAB_00c36254;
  }
  if ((*plVar7 != 0) && (lVar6 = UnityEngine_GameObject__get_transform(*plVar7,0), lVar6 != 0)) {
    uVar9 = UnityEngine_Transform__get_position(lVar6,0);
    lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
    if ((lVar6 != 0) && (lVar6 = UnityEngine_GameObject__get_transform(lVar6,0), lVar6 != 0)) {
      UnityEngine_Transform__set_position(uVar9,in_d1,0xc1700000,lVar6,0);
      lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x38);
      if (lVar6 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar6,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_Rigidbody___);
        uVar5 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
        if ((uVar5 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_00c3630c;
          UnityEngine_Rigidbody__set_interpolation(lStack_28,0,0);
        }
        return;
      }
    }
  }
LAB_00c3630c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OOFKKAKFKEL(bool EIIDHBCJNNO) { }   @0xb37e9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OOFKKAKFKEL(void *__this,bool EIIDHBCJNNO)

{
  long lVar1;
  
  if ((bRam00000000019170fd & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170fd = 1;
  }
  *(undefined8 *)((long)__this + 0x80) = 0;
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
  lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar1 != 0) {
    DAFNMLEKHAD__EIGEDMABAKJ(lVar1,0xffffffff,0);
    if (EIIDHBCJNNO) {
      *(undefined1 *)((long)__this + 0x88) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OODBEAHDBMH() { }   @0xb3ac40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__OODBEAHDBMH(void *__this)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000001917102 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917102 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar3 = *(long **)(_Main_TypeInfo + 0xb8);
  lVar4 = plVar3[8];
  if (lVar4 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      plVar3 = *(long **)(_Main_TypeInfo + 0xb8);
      lVar4 = plVar3[8];
      if (lVar4 == 0) goto LAB_00c3ad80;
    }
    iVar1 = *(int *)(lVar4 + 0x10);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      plVar3 = *(long **)(_Main_TypeInfo + 0xb8);
    }
    if (iVar1 < 100) {
      if (((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x28), lVar4 == 0)) ||
         (lVar5 = plVar3[8], lVar5 == 0)) goto LAB_00c3ad80;
      if (*(int *)(lVar5 + 0x10) <= *(int *)(lVar4 + 0x18)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          plVar3 = *(long **)(_Main_TypeInfo + 0xb8);
          lVar5 = plVar3[8];
          if (lVar5 == 0) goto LAB_00c3ad80;
        }
        *(undefined4 *)((long)plVar3 + 0x2c) = *(undefined4 *)(lVar5 + 0x10);
      }
    }
    else {
      if ((plVar3[8] == 0) || (pvVar2 = *(void **)(plVar3[8] + 0x50), pvVar2 == (void *)0x0)) {
LAB_00c3ad80:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar1 = EventContest__get_car_id(pvVar2);
      if (-1 < iVar1) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if ((lVar4 == 0) || (pvVar2 = *(void **)(lVar4 + 0x50), pvVar2 == (void *)0x0))
        goto LAB_00c3ad80;
        iVar1 = EventContest__get_car_id(pvVar2);
        *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x2c) = iVar1;
      }
    }
  }
  return;
}


// ==== private void ANEDMKOIIOO() { }   @0xb3b230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Menu__ANEDMKOIIOO(void *__this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
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



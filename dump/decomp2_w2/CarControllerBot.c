// ==== private void LOPCCLDAPAE() { }   @0xb438a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__LOPCCLDAPAE(void *__this)

{
  if ((bRam0000000001917138 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917138 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void KIDOGHJAMDM() { }   @0xb438f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__KIDOGHJAMDM(void *__this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000191713d & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191713d = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = **(long **)(_CarController_TypeInfo + 0xb8);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x488) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = **(long **)(_CarController_TypeInfo + 0xb8);
        if (lVar3 == 0) goto LAB_00c43bd8;
      }
      if (*(long *)(lVar3 + 0x488) == 0) goto LAB_00c43bd8;
      if (*(long *)(*(long *)(lVar3 + 0x488) + 0x18) != 0) {
        lVar3 = 4;
        do {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x488) == 0)) goto LAB_00c43bd8;
          uVar1 = lVar3 - 4;
          if ((long)*(int *)(*(long *)(lVar4 + 0x488) + 0x18) <= (long)uVar1) break;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
            if (lVar4 == 0) goto LAB_00c43bd8;
          }
          lVar4 = *(long *)(lVar4 + 0x488);
          if (lVar4 == 0) goto LAB_00c43bd8;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
          uVar5 = *(undefined8 *)(lVar4 + lVar3 * 8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x488), lVar4 == 0))
            goto LAB_00c43bd8;
            if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_00c43bdc:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar4 + lVar3 * 8);
            if (lVar4 == 0) goto LAB_00c43bd8;
            UnityEngine_Transform__get_localScale(lVar4,0);
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x488), lVar4 == 0))
            goto LAB_00c43bd8;
            if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
            lVar4 = *(long *)(lVar4 + lVar3 * 8);
            if (lVar4 == 0) goto LAB_00c43bd8;
            if (lVar3 == 4) {
              UnityEngine_Transform__set_localScale(0x40800000,lVar4,0);
            }
            else {
              UnityEngine_Transform__set_localScale(0x40a00000,lVar4,0);
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x488), lVar4 == 0
                 )) goto LAB_00c43bd8;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
              lVar4 = *(long *)(lVar4 + lVar3 * 8);
              if (lVar4 == 0) goto LAB_00c43bd8;
              UnityEngine_Transform__get_localPosition(lVar4,0);
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x488), lVar4 == 0
                 )) goto LAB_00c43bd8;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
              lVar4 = *(long *)(lVar4 + lVar3 * 8);
              if (lVar4 == 0) goto LAB_00c43bd8;
              UnityEngine_Transform__set_localPosition(0x3ecccccd,lVar4,0);
            }
          }
          lVar3 = lVar3 + 1;
        } while( true );
      }
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x40), lVar3 != 0)) {
      if (pcRam000000000191d460 == (code *)0x0) {
        pcRam000000000191d460 = (code *)func_0x00a678c4(&UNK_005a9438);
      }
                    /* WARNING: Could not recover jumptable at 0x014ce608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d460)(0x43fa0000,lVar3);
      return;
    }
  }
LAB_00c43bd8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



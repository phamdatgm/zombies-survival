// ==== public void BGNPJIHMIMI(bool FJDCALHGHCI) { }   @0xad5e8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem__BGNPJIHMIMI(void *__this,bool FJDCALHGHCI)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001916e01 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e01 = 1;
  }
  if (FJDCALHGHCI) {
    lVar2 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) && (lVar2 != 0))
    {
      UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(lVar5 + 0x20),0);
      uVar6 = *(undefined8 *)((long)__this + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar2 = *(long *)((long)__this + 0x50);
      if (lVar2 != 0) {
        uVar6 = 1;
LAB_00bd6140:
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar2,uVar6);
        return;
      }
    }
  }
  else {
    cVar1 = *(char *)((long)__this + 0x70);
    lVar2 = UnityEngine_Component__get_transform(__this,0);
    if (lVar2 != 0) {
      uVar6 = UnityEngine_Transform__get_parent(lVar2,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 != 0)) {
        if (cVar1 == '\0') {
          if (*(long *)(lVar2 + 0x640) != 0) {
            uVar4 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x640),0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar4,0);
            if ((uVar3 & 1) != 0) {
              lVar2 = UnityEngine_Component__get_transform(__this,0);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Menu_TypeInfo);
              }
              if ((((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 == 0)) ||
                  (lVar5 = *(long *)(lVar5 + 0x640), lVar5 == 0)) ||
                 (uVar6 = UnityEngine_Component__get_transform(lVar5,0), lVar2 == 0))
              goto LAB_00bd6164;
              UnityEngine_Transform__SetParent(lVar2,uVar6,0);
            }
            uVar6 = *(undefined8 *)((long)__this + 0x50);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            lVar2 = *(long *)((long)__this + 0x50);
            if (lVar2 != 0) {
              uVar6 = 0;
              goto LAB_00bd6140;
            }
          }
        }
        else if (*(long *)(lVar2 + 0x648) != 0) {
          uVar4 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x648),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar4,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar2 = UnityEngine_Component__get_transform(__this,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
              (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar5 != 0)) &&
             ((lVar5 = *(long *)(lVar5 + 0x648), lVar5 != 0 &&
              (uVar6 = UnityEngine_Component__get_transform(lVar5,0), lVar2 != 0)))) {
            if (pcRam000000000191c838 == (code *)0x0) {
              pcRam000000000191c838 = (code *)func_0x00a678c4(&UNK_005b208a,uVar6,0);
            }
                    /* WARNING: Could not recover jumptable at 0x0149458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c838)(lVar2,uVar6,1);
            return;
          }
        }
      }
    }
  }
LAB_00bd6164:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



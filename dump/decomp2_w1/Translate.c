// ==== public void IJFFLNNCGHI() { }   @0xb3d478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__IJFFLNNCGHI(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000191710f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191710f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar5 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x8f0), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x18) < 2) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (lVar3 == 0) goto LAB_00c3d6f4;
      }
      if ((*(long *)(lVar3 + 0x20) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x8f0), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_00c3d6f8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x28);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) &&
           (lVar3 = *(long *)(lVar3 + 0x8f0), lVar3 != 0)) {
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_00c3d6f8;
          if (*(long *)(lVar3 + 0x28) != 0) {
            uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar3 + 0x28),0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) {
              lVar3 = *(long *)(lVar3 + 0x8e8);
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
              if ((lVar4 != 0) && (lVar3 != 0)) {
                iVar1 = *(int *)(lVar4 + 0x94);
                if (pcRam000000000191c3f8 == (code *)0x0) {
                  pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
                }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191c3f8)(lVar3,iVar1 == 7);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00c3d6f4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xb3db08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917114 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917114 = 1;
  }
  uVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  *(undefined8 *)(*(long *)(_Translate_TypeInfo + 0xb8) + 8) = uVar1;
  return;
}


// ==== public void CCHEMMCPAOO() { }   @0xb3dd2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__CCHEMMCPAOO(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000001917119 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_SystemLanguage_TypeInfo);
    func_0x00a67900(&Str_Language__);
    bRam0000000001917119 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_48 = UnityEngine_Application__get_systemLanguage(0);
  uStack_58 = _UnityEngine_SystemLanguage_TypeInfo;
  uStack_50 = 0xffffffffffffffff;
  uVar2 = System_Enum__ToString(&uStack_58,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar4 + 0x94) < 0) {
    lVar4 = *(long *)((long)__this + 0x40);
    if (lVar4 != 0) {
      uVar6 = 0;
      do {
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)uVar6) goto LAB_00c3dedc;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_00c3e0a0;
        lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
        if (lVar4 == 0) break;
        uVar3 = System_String__op_Equality(*(undefined8 *)(lVar4 + 0x10),uVar2,0);
        if ((uVar3 & 1) != 0) {
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
          if (lVar4 == 0) break;
          DAFNMLEKHAD__DGAGHJIDJEM(lVar4,uVar6 & 0xffffffff,0);
        }
        lVar4 = *(long *)((long)__this + 0x40);
        uVar6 = uVar6 + 1;
      } while (lVar4 != 0);
    }
    goto LAB_00c3ded4;
  }
LAB_00c3dedc:
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
  if (lVar4 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar4 + 0x94) < 0) {
LAB_00c3df8c:
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
    if (lVar4 == 0) goto LAB_00c3ded4;
    DAFNMLEKHAD__DGAGHJIDJEM(lVar4,0,0);
    lVar5 = *(long *)((long)__this + 0x40);
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar4 == 0) || (lVar5 = *(long *)((long)__this + 0x40), lVar5 == 0)) goto LAB_00c3ded4;
    if (*(int *)(lVar5 + 0x18) <= *(int *)(lVar4 + 0x94)) goto LAB_00c3df8c;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar4 != 0) && (lVar5 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x94);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_00c3e0a0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar4 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x10);
      Translate__PPPHBJFOJDK(_Main_TypeInfo,uVar2);
      Translate__BDEKKODPMCA(__this);
      uVar2 = System_String__Concat(_Str_Language__,uVar2,0);
      Main__GEMDEAMAGPG(uVar2,0,0);
      return;
    }
  }
LAB_00c3ded4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



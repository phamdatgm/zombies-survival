// ==== public GUIAchievement get_gui() { }   @0xaf3a18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Achievement__get_gui(void *__this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ed4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ed4 = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x38);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = **(long **)(_Menu_TypeInfo + 0xb8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
LAB_00bf3bac:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*(long *)(lVar2 + 0x20) + 0x210) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar2 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (lVar2 == 0) goto LAB_00bf3bac;
      }
      if ((*(long *)(lVar2 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar2 + 0x20) + 0x210), lVar4 == 0)) goto LAB_00bf3bac;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = **(long **)(_Menu_TypeInfo + 0xb8);
          if (lVar2 == 0) goto LAB_00bf3bac;
        }
        if ((*(long *)(lVar2 + 0x20) == 0) ||
           (lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x210), lVar2 == 0)) goto LAB_00bf3bac;
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar1 = 0;
          uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar2 + 0x20 + uVar1 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
            if ((uVar3 & 1) != 0) {
              if (lVar4 == 0) goto LAB_00bf3bac;
              if (*(int *)(lVar4 + 0x20) == *(int *)((long)__this + 0x10)) {
                *(long *)((long)__this + 0x38) = lVar4;
                break;
              }
            }
            uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar1 = uVar1 + 1;
          } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
      }
    }
  }
  return *(void **)((long)__this + 0x38);
}



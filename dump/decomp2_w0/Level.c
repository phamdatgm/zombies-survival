// ==== public static Level FHMGLDDPEDJ(int HKGEOJPHLAN) { }   @0xb30e84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__FHMGLDDPEDJ(int HKGEOJPHLAN)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  
  if ((bRam00000000019170c0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170c0 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x38), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      pvVar5 = (void *)0x0;
    }
    else {
      iVar4 = 0;
      pvVar2 = (void *)0x0;
      do {
        if (iVar1 == iVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        pvVar5 = *(void **)(lVar3 + (long)iVar4 * 8 + 0x20);
        if (pvVar5 == (void *)0x0) goto LAB_00c30f38;
        iVar4 = iVar4 + 1;
        if (*(int *)((long)pvVar5 + 0x10) != HKGEOJPHLAN) {
          pvVar5 = pvVar2;
        }
        pvVar2 = pvVar5;
      } while (iVar1 != iVar4);
    }
    return pvVar5;
  }
LAB_00c30f38:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public GUILevel get_gui() { }   @0xb2f514

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__get_gui(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((bRam00000000019170c5 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c5 = 1;
  }
  uVar6 = *(undefined8 *)((long)__this + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) {
LAB_00c2f668:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*(long *)(lVar3 + 0x20) + 0x238) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
        if (lVar3 == 0) goto LAB_00c2f668;
      }
      if ((*(long *)(lVar3 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x238), lVar4 == 0)) goto LAB_00c2f668;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar3 = **(long **)(_Menu_TypeInfo + 0xb8);
          if (lVar3 == 0) goto LAB_00c2f668;
        }
        if ((*(long *)(lVar3 + 0x20) == 0) ||
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x238), lVar3 == 0)) goto LAB_00c2f668;
        iVar1 = *(int *)(lVar3 + 0x18);
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            if (iVar1 == iVar5) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar3 + (long)iVar5 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_00c2f668;
            if (*(int *)(lVar4 + 0x20) == *(int *)((long)__this + 0x10)) {
              *(long *)((long)__this + 0x40) = lVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
      }
    }
  }
  return *(void **)((long)__this + 0x40);
}


// ==== public bool get_IsTutorial() { }   @0xb32050

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsTutorial(void *__this)

{
  return *(int *)((long)__this + 0x10) == 0;
}



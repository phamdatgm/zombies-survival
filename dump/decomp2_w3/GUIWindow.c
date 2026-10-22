// ==== private void EPGDFDEPGCB(RectTransform KIMPLIODKPG, float NIGCBLFGFKO, float APPEAGGPNAB) { }   @0xb464ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__EPGDFDEPGCB(void *__this,void *KIMPLIODKPG,float NIGCBLFGFKO,float APPEAGGPNAB)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_register_00005004;
  
  fVar3 = APPEAGGPNAB;
  if ((bRam0000000001917150 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917150 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(KIMPLIODKPG,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)__this + 0x48) == '\0') {
      *(undefined1 *)((long)__this + 0x48) = 1;
      if (KIMPLIODKPG == (void *)0x0) goto LAB_00c46608;
      UnityEngine_RectTransform__get_anchoredPosition(KIMPLIODKPG,0);
      *(float *)((long)__this + 0x4c) = fVar3;
      uVar2 = UnityEngine_Transform__get_localScale(KIMPLIODKPG,0);
      *(undefined4 *)((long)__this + 0x50) = uVar2;
      *(float *)((long)__this + 0x44) = NIGCBLFGFKO;
    }
    else {
      *(float *)((long)__this + 0x44) = NIGCBLFGFKO;
      if (KIMPLIODKPG == (void *)0x0) {
LAB_00c46608:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (0,CONCAT44(in_register_00005004,NIGCBLFGFKO),KIMPLIODKPG,0);
    if ((0.0 < APPEAGGPNAB) &&
       (fVar3 = (float)UnityEngine_Transform__get_localScale(KIMPLIODKPG,0), fVar3 != APPEAGGPNAB))
    {
      if (pcRam000000000191c8c0 == (code *)0x0) {
        pcRam000000000191c8c0 = (code *)func_0x00a678c4(&UNK_005b50fa,0);
      }
      (*pcRam000000000191c8c0)(KIMPLIODKPG,&stack0xffffffffffffffd0);
      return;
    }
  }
  return;
}


// ==== private GameObject FEHHGIGJIKL() { }   @0xb488b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIWindow__FEHHGIGJIKL(void *__this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001917154 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917154 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c48b5c;
      uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 == 0))
        goto LAB_00c48b5c;
        uVar4 = *(undefined8 *)(lVar3 + 0x1b0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) {
            return *(void **)(lVar3 + 0x1b0);
          }
          goto LAB_00c48b5c;
        }
      }
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  pvVar2 = (void *)0x0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) {
LAB_00c48b5c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    pvVar2 = (void *)0x0;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 == 0))
      goto LAB_00c48b5c;
      uVar4 = *(undefined8 *)(lVar3 + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      pvVar2 = (void *)0x0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 == 0))
        goto LAB_00c48b5c;
        pvVar2 = *(void **)(lVar3 + 0x98);
      }
    }
  }
  return pvVar2;
}



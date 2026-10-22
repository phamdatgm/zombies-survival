// ==== private void IPELKJAHFGL() { }   @0xb4639c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__IPELKJAHFGL(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if ((bRam000000000191714f & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_isWindowChangedByAds__Rect__null___);
    bRam000000000191714f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar1 != 0)) {
    AdvController__JJDJIEJLCFM(lVar1,0);
    if (*(char *)((long)__this + 0x48) != '\0') {
      lVar1 = UnityEngine_Component__get_gameObject(__this,0);
      if (lVar1 == 0) goto LAB_00c464e8;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar1,&uStack_28,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uStack_28,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_isWindowChangedByAds__Rect__null___,0,0);
      }
      else {
        GUIWindow__EPGDFDEPGCB
                  (*(undefined4 *)((long)__this + 0x4c),*(undefined4 *)((long)__this + 0x50),__this,
                   uStack_28);
        *(undefined1 *)((long)__this + 0x48) = 0;
      }
    }
    return;
  }
LAB_00c464e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JGDCBENNDFO(bool OIAHOGEKCHK = False) { }   @0xb485bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__JGDCBENNDFO(void *__this,bool OIAHOGEKCHK)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001917153 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917153 = 1;
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
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c488ac;
    uVar3 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 == 0))
      goto LAB_00c488ac;
      uVar3 = *(undefined8 *)(lVar2 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
           (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 == 0))
        goto LAB_00c488ac;
        uVar3 = *(undefined8 *)(lVar2 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
             (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar2 == 0))
          goto LAB_00c488ac;
          uVar3 = *(undefined8 *)(lVar2 + 0x90);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c488ac;
            Menu__FPPIKAMLPDC(**(long **)(_Menu_TypeInfo + 0xb8),0);
          }
          goto LAB_00c4876c;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c488ac;
      Menu__AFBPIADEOPC(**(long **)(_Menu_TypeInfo + 0xb8),0);
    }
  }
LAB_00c4876c:
  if (OIAHOGEKCHK) {
    uVar3 = *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 8) = 0;
      lVar2 = GUIWindow__FEHHGIGJIKL();
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (lVar2 == 0) goto LAB_00c488ac;
        uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
        if ((uVar1 & 1) != 0) {
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
      }
    }
  }
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar2,0);
    return;
  }
LAB_00c488ac:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



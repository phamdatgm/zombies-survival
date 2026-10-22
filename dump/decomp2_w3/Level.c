// ==== public string get_SceneId() { }   @0xb30df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__get_SceneId(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uStack_14;
  
  if ((bRam00000000019170be & 1) == 0) {
    func_0x00a67900(&Str_level_event_);
    bRam00000000019170be = 1;
  }
  if ((*(int *)((long)__this + 0x10) < 100) || (*(long *)((long)__this + 0x50) == 0)) {
    pvVar2 = *(void **)((long)__this + 0x20);
  }
  else {
    uStack_14 = *(undefined4 *)(*(long *)((long)__this + 0x50) + 0x18);
    uVar1 = System_Int32__ToString(&uStack_14,0);
    pvVar2 = (void *)System_String__Concat(_Str_level_event_,uVar1,0);
  }
  return pvVar2;
}


// ==== public string DBEGLMBGKNL() { }   @0xb31b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__DBEGLMBGKNL(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iStack_34;
  
  if ((bRam00000000019170c3 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_Level__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_LEVEL);
    func_0x00a67900(&Str_EVENT_);
    func_0x00a67900(&Str_EVENT);
    bRam00000000019170c3 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = **(undefined8 **)(_Translate_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    return _Str_Level__;
  }
  uVar1 = System_String__op_Equality
                    (*(undefined8 *)((long)__this + 0x18),**(undefined8 **)(_string_TypeInfo + 0xb8)
                     ,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c31e54;
    lVar5 = _Translate_TypeInfo;
    lVar4 = *(long *)((long)__this + 0x18);
LAB_00c31d70:
    pvVar3 = (void *)Translate__JJJNIPAKLJF(lVar5,lVar4);
  }
  else {
    if (*(int *)((long)__this + 0x10) < 100) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00c31e54;
      uVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LEVEL);
      iStack_34 = *(int *)((long)__this + 0x10) + 1;
    }
    else {
      if ((*(long *)((long)__this + 0x50) != 0) &&
         (*(int *)(*(long *)((long)__this + 0x50) + 0x18) != 0)) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = System_String__op_Equality
                          (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c31e54;
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar5 == 0))
            goto LAB_00c31e54;
            if (*(long *)(lVar5 + 0x58) != 0) goto LAB_00c31d0c;
          }
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(long *)((long)__this + 0x50) == 0) goto LAB_00c31e54;
          iStack_34 = *(int *)(*(long *)((long)__this + 0x50) + 0x18);
          lVar6 = **(long **)(_Translate_TypeInfo + 0xb8);
          uVar7 = System_Int32__ToString(&iStack_34,0);
          lVar5 = System_String__Concat(_Str_EVENT_,uVar7,0);
          lVar4 = lVar5;
          if (lVar6 == 0) goto LAB_00c31e54;
          goto LAB_00c31d70;
        }
      }
LAB_00c31d0c:
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) {
LAB_00c31e54:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT);
      iStack_34 = *(int *)((long)__this + 0x10) + -99;
    }
    uVar2 = System_Int32__ToString(&iStack_34,0);
    pvVar3 = (void *)System_String__Concat(uVar7,_Str__,uVar2,0);
  }
  return pvVar3;
}


// ==== public bool get_IsEvent() { }   @0xb30e74

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsEvent(void *__this)

{
  return 99 < *(int *)((long)__this + 0x10);
}


// ==== public void ICIKEDJLOBK() { }   @0xb31f64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__ICIKEDJLOBK(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  if ((bRam00000000019170c9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c9 = 1;
  }
  uVar1 = Level__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = Level__get_gui(__this);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = Level__get_gui(__this);
    if (lVar3 != 0) {
      plVar5 = *(long **)(lVar3 + 0x38);
      pvVar4 = Level__DBEGLMBGKNL(__this);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x5a8))(plVar5,pvVar4,*(undefined8 *)(*plVar5 + 0x5b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



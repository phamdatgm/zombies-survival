// ==== protected void Awake() { }   @0xad3ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InMenuUnitClickHandler__Awake(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plStack_28;
  
  if ((bRam0000000001916dc9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_InMenuUnit___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&UnityEngine_Debug_TypeInfo);
    func_0x00a67900(&Str_Click_handler_expects_Collider_on_Unit_);
    bRam0000000001916dc9 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&plStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
  *(long **)((long)__this + 0x28) = plStack_28;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&plStack_28,_Method_UnityEngine_Component_GetComponent_InMenuUnit___);
  *(long **)((long)__this + 0x20) = plStack_28;
  if (plStack_28 != (long *)0x0) {
    lVar2 = (**(code **)(*plStack_28 + 0x1b8))(plStack_28,*(undefined8 *)(*plStack_28 + 0x1c0));
    if (lVar2 != 0) {
      uVar1 = Adverty_AdUnit_UnitConfiguration__get_RenderType(lVar2,0);
      *(uint *)((long)__this + 0x30) = uVar1;
      if ((uVar1 | 2) == 2) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (__this,&plStack_28,_Method_UnityEngine_Component_GetComponent_Collider___);
        *(long **)((long)__this + 0x38) = plStack_28;
      }
      uVar3 = InMenuUnitClickHandler__HKMCNGPDBGA(__this);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Debug__LogWarning(_Str_Click_handler_expects_Collider_on_Unit_,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OnPointerClick(PointerEventData GFLJNNPANJG) { }   @0xad3ef4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InMenuUnitClickHandler__OnPointerClick(void *__this,void *GFLJNNPANJG)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000001916dcc & 1) == 0) {
    func_0x00a67900(&UnityEngine_RectTransformUtility_TypeInfo);
    bRam0000000001916dcc = 1;
  }
  uStack_38 = 0;
  if (*(int *)((long)__this + 0x30) == 1) {
    if (GFLJNNPANJG == (void *)0x0) {
LAB_00bd3fc8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = *(undefined8 *)((long)__this + 0x28);
    uVar4 = *(undefined4 *)((long)GFLJNNPANJG + 0x104);
    uVar5 = *(undefined4 *)((long)GFLJNNPANJG + 0x108);
    uVar1 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(GFLJNNPANJG,0);
    if (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_RectTransformUtility_TypeInfo);
    }
    uVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (uVar4,uVar5,uVar3,uVar1,&uStack_38,0);
    if ((uVar2 & 1) != 0) {
      InMenuUnitClickHandler__KDGCLHPEMGO(uStack_38 & 0xffffffff,uStack_38._4_4_,__this);
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bd3fc8;
      Adverty_BaseUnit__Interact(*(long *)((long)__this + 0x20),0);
    }
  }
  return;
}



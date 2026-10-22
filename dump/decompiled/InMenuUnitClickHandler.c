/* ---- class definition (Il2CppDumper) ----
(not found)
*/

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


// ==== private bool HKMCNGPDBGA() { }   @0xad3bf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool InMenuUnitClickHandler__HKMCNGPDBGA(void *__this)

{
  bool bVar1;
  long lVar2;
  
  if ((bRam0000000001916dca & 1) == 0) {
    func_0x00a67900(&UnityEngine_BoxCollider_TypeInfo);
    bRam0000000001916dca = 1;
  }
  if (*(int *)((long)__this + 0x30) == 2) {
    if (*(long **)((long)__this + 0x38) != (long *)0x0) {
      lVar2 = **(long **)((long)__this + 0x38);
      if (*(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130) <= *(byte *)(lVar2 + 0x130)) {
        return *(long *)(*(long *)(lVar2 + 200) +
                         (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130) * 8 + -8) !=
               _UnityEngine_BoxCollider_TypeInfo;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ==== private Vector2 KDGCLHPEMGO(Vector2 CIGEHLOPCJP) { }   @0xad3c88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * InMenuUnitClickHandler__KDGCLHPEMGO(void *__this,float CIGEHLOPCJP_x,float CIGEHLOPCJP_y)

{
  void *pvVar1;
  
  if (*(long *)((long)__this + 0x28) != 0) {
    CIGEHLOPCJP_x =
         (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x28),0);
    if (*(long *)((long)__this + 0x28) != 0) {
      CIGEHLOPCJP_x = (float)UnityEngine_RectTransform__get_pivot(*(long *)((long)__this + 0x28),0);
      if (*(long *)((long)__this + 0x28) != 0) {
        pvVar1 = (void *)UnityEngine_RectTransform__get_pivot(*(long *)((long)__this + 0x28),0);
        return pvVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(CIGEHLOPCJP_x);
}


// ==== public void .ctor() { }   @0xad3d2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InMenuUnitClickHandler___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== protected void OnMouseDown() { }   @0xad3d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void InMenuUnitClickHandler__OnMouseDown(void *__this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float in_s1;
  float fVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000001916dcb & 1) == 0) {
    func_0x00a67900(&UnityEngine_BoxCollider_TypeInfo);
    bRam0000000001916dcb = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  if ((*(int *)((long)__this + 0x30) == 1) ||
     (uVar1 = InMenuUnitClickHandler__HKMCNGPDBGA(__this), (uVar1 & 1) != 0)) {
    return;
  }
  lVar2 = UnityEngine_Camera__get_main(0);
  UnityEngine_Input__get_mousePosition(0);
  if (lVar2 != 0) {
    UnityEngine_Camera__ScreenPointToRay(&uStack_a0,lVar2,0);
    uStack_40 = uStack_90;
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    if (*(long *)((long)__this + 0x38) != 0) {
      uStack_b0 = uStack_90;
      uStack_b8 = uStack_98;
      uStack_c0 = uStack_a0;
      uVar1 = UnityEngine_Collider__Raycast
                        (0x42c80000,*(long *)((long)__this + 0x38),&uStack_c0,&uStack_80,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)((long)__this + 0x38) != 0) {
        lVar2 = UnityEngine_Component__get_transform(*(long *)((long)__this + 0x38),0);
        UnityEngine_RaycastHit__get_point(&uStack_80,0);
        if (lVar2 != 0) {
          fVar4 = (float)UnityEngine_Transform__InverseTransformPoint(lVar2,0);
          if (*(int *)((long)__this + 0x30) == 2) {
            plVar3 = *(long **)((long)__this + 0x38);
            if (plVar3 == (long *)0x0) goto LAB_00bd3ef0;
            if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130))
               || (*(long *)(*(long *)(*plVar3 + 200) +
                             (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130) * 8 + -8)
                   != _UnityEngine_BoxCollider_TypeInfo)) goto LAB_00bd3ef0;
            fVar6 = in_s1;
            fVar5 = (float)UnityEngine_BoxCollider__get_size(plVar3,0);
            fVar4 = (fVar4 + fVar5) / fVar5 + -0.5;
            fVar6 = (1.0 - (in_s1 + fVar6) / fVar6) + 0.5;
          }
          else {
            if (*(int *)((long)__this + 0x30) != 0) {
              return;
            }
            fVar4 = fVar4 + 0.5;
            fVar6 = 1.0 - (in_s1 + 0.5);
          }
          if (*(long *)((long)__this + 0x20) != 0) {
            Adverty_BaseUnit__Interact(fVar4,fVar6,*(long *)((long)__this + 0x20),0);
            return;
          }
        }
      }
    }
  }
LAB_00bd3ef0:
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



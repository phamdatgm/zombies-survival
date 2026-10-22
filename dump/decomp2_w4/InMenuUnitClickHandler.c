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



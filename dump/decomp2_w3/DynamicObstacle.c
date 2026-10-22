// ==== private void OnEnable() { }   @0xaf59cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle__OnEnable(void *__this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_28;
  
  if ((bRam0000000001916edd & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Collider___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_car);
    func_0x00a67900(&Str_dynamic_obstacle);
    bRam0000000001916edd = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_Collider___);
  lVar7 = lStack_28;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = UnityEngine_Component__get_gameObject(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(uVar5,0);
    return;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  *(long *)((long)__this + 0x20) = lStack_28;
  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar6 != 0) {
    iVar1 = UnityEngine_GameObject__get_layer(lVar6,0);
    iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
    if (iVar1 == iVar2) {
      lVar7 = UnityEngine_Component__get_gameObject(__this,0);
      uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
      if (lVar7 != 0) {
        UnityEngine_GameObject__set_layer(lVar7,uVar3,0);
        return;
      }
    }
    else {
      uVar5 = *(undefined8 *)((long)__this + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)((long)__this + 0x20) == 0) goto LAB_00bf5ba0;
        UnityEngine_Rigidbody__Sleep(*(long *)((long)__this + 0x20),0);
      }
      if (lVar7 != 0) {
        UnityEngine_Collider__set_enabled(lVar7,0,0);
        return;
      }
    }
  }
LAB_00bf5ba0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void OnTriggerEnter(Collider GLKAJMJEIEM) { }   @0xaf5dd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DynamicObstacle__OnTriggerEnter(void *__this,void *GLKAJMJEIEM)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *OPBPCFOOBHD;
  void *HAKKOAADCOE;
  void *__this_00;
  float fVar5;
  float in_s1;
  float in_s2;
  
  if ((bRam0000000001916edf & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&DynamicObstacle_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_wood_box);
    func_0x00a67900(&Str_metal_box);
    func_0x00a67900(&Str_barrel);
    func_0x00a67900(&Str_zombie);
    func_0x00a67900(&Str_zombie_sidewalk);
    bRam0000000001916edf = 1;
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    fVar5 = (float)UnityEngine_Rigidbody__get_velocity(*(long *)((long)__this + 0x20),0);
    if (in_s2 * in_s2 + fVar5 * fVar5 + in_s1 * in_s1 <= 1.0) {
      return;
    }
    if ((GLKAJMJEIEM != (void *)0x0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0), lVar1 != 0)) {
      uVar2 = UnityEngine_GameObject__get_tag(lVar1,0);
      uVar3 = System_String__op_Equality(uVar2,_Str_zombie,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar1 = UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
      if ((lVar1 != 0) && (lVar1 = UnityEngine_Object__get_name(lVar1,0), lVar1 != 0)) {
        uVar3 = System_String__Contains(lVar1,_Str_zombie_sidewalk,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        UnityEngine_Collider__set_enabled(GLKAJMJEIEM,0,0);
        lVar1 = UnityEngine_Component__get_gameObject(__this,0);
        if (lVar1 != 0) {
          uVar2 = UnityEngine_GameObject__get_tag(lVar1,0);
          uVar3 = System_String__op_Equality(uVar2,_Str_barrel,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = System_String__op_Equality(uVar2,_Str_wood_box,0);
            if (((uVar3 & 1) != 0) ||
               (uVar3 = System_String__op_Equality(uVar2,_Str_metal_box,0), (uVar3 & 1) != 0)) {
              uVar2 = UnityEngine_Component__get_gameObject(__this,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy(uVar2,0);
            }
          }
          else {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_CarController_TypeInfo + 0xb8) == 0) goto LAB_00bf6168;
              lVar1 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x20);
              uVar2 = UnityEngine_Component__get_gameObject(__this,0);
              uVar4 = UnityEngine_Component__get_transform(GLKAJMJEIEM,0);
              if (lVar1 == 0) goto LAB_00bf6168;
              CarCollision__GLBHMAKJKHB(lVar1,2,uVar2,uVar4,0);
            }
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar3 & 1) != 0) {
            uVar2 = **(undefined8 **)(_DynamicObstacle_TypeInfo + 0xb8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar2,GLKAJMJEIEM,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
                __this_00 = *(void **)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x20);
                OPBPCFOOBHD = (void *)UnityEngine_Component__get_gameObject(GLKAJMJEIEM,0);
                HAKKOAADCOE = (void *)UnityEngine_Component__get_transform(GLKAJMJEIEM,0);
                if (__this_00 != (void *)0x0) {
                  CarCollision__JDLKLAGFELO(__this_00,2,OPBPCFOOBHD,HAKKOAADCOE);
                  goto LAB_00bf6144;
                }
              }
              goto LAB_00bf6168;
            }
          }
LAB_00bf6144:
          **(undefined8 **)(_DynamicObstacle_TypeInfo + 0xb8) = GLKAJMJEIEM;
          return;
        }
      }
    }
  }
LAB_00bf6168:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



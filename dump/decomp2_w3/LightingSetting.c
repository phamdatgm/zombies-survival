// ==== private void DDLHBBKFAKB() { }   @0xb2ed94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__DDLHBBKFAKB(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uStack_48;
  
  if ((bRam00000000019170b8 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    func_0x00a67900(&LMSetting___TypeInfo);
    func_0x00a67900(&LMSetting_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_MeshRenderer__TypeInfo);
    func_0x00a67900(&Str_baked);
    bRam00000000019170b8 = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar4 != 0) {
    lVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                      (lVar4,_Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___)
    ;
    lVar5 = func_0x00a67b44(_System_Collections_Generic_List_MeshRenderer__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (lVar5,_Method_System_Collections_Generic_List_MeshRenderer___ctor__);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) goto LAB_00c2f018;
          plVar10 = (long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          lVar6 = *plVar10;
          if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
          goto LAB_00c2effc;
          iVar2 = UnityEngine_GameObject__get_layer(lVar6,0);
          iVar3 = UnityEngine_LayerMask__NameToLayer(_Str_baked,0);
          if (iVar2 == iVar3) {
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_00c2f018;
            if (lVar5 == 0) goto LAB_00c2effc;
            func_0x00b7fe44(lVar5,*plVar10,
                            _Method_System_Collections_Generic_List_MeshRenderer__Add__);
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      if (lVar5 != 0) {
        plVar10 = (long *)func_0x00a679a0(_LMSetting___TypeInfo,*(undefined4 *)(lVar5 + 0x18));
        *(long **)((long)__this + 0x20) = plVar10;
        if (*(int *)(lVar5 + 0x18) < 1) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar5,0,&uStack_48,
                   _Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
        uVar8 = uStack_48;
        lVar4 = func_0x00a67b44(_LMSetting_TypeInfo);
        LMSetting___ctor(lVar4,uVar8,0);
        if (plVar10 != (long *)0x0) {
          lVar6 = 4;
          do {
            if ((lVar4 != 0) &&
               (lVar7 = func_0x00a67a34(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
              uVar8 = func_0x00a67b74();
              func_0x00a67a20(uVar8,0);
              if ((bRam000000000191c370 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
                bRam000000000191c370 = 1;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              return;
            }
            if ((ulong)*(uint *)(plVar10 + 3) <= lVar6 - 4U) {
LAB_00c2f018:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar10[lVar6] = lVar4;
            if ((long)*(int *)(lVar5 + 0x18) <= lVar6 + -3) {
              return;
            }
            plVar10 = *(long **)((long)__this + 0x20);
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                      (lVar5,(int)lVar6 + -3,&uStack_48,
                       _Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
            uVar8 = uStack_48;
            lVar4 = func_0x00a67b44(_LMSetting_TypeInfo);
            LMSetting___ctor(lVar4,uVar8,0);
            lVar6 = lVar6 + 1;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
LAB_00c2effc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



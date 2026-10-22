// ==== public void OnPointerDown(PointerEventData GFLJNNPANJG) { }   @0xb2f1f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIPressHandler__OnPointerDown(void *__this,void *GFLJNNPANJG)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long *aplStack_48 [2];
  
  lVar2 = *(long *)((long)__this + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam000000000191c9ef & 1) == 0) {
    func_0x00a67900(&UnityEngine_Events_InvokableCall_TypeInfo,0);
    func_0x00a67900(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item__);
    func_0x00a67900(&object___TypeInfo);
    bRam000000000191c9ef = 1;
  }
  auVar7 = UnityEngine_Events_UnityEventBase__PrepareInvoke(lVar2,0);
  lVar5 = auVar7._8_8_;
  lVar3 = auVar7._0_8_;
  lVar4 = 0;
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar6 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar3,iVar6,aplStack_48,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__get_Item__);
        if (aplStack_48[0] == (long *)0x0) {
LAB_014992a0:
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                    (lVar3,iVar6,aplStack_48,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__get_Item__);
          if (aplStack_48[0] != (long *)0x0) {
            if ((*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo + 0x130) <=
                 *(byte *)(*aplStack_48[0] + 0x130)) &&
               (*(long *)(*(long *)(*aplStack_48[0] + 200) +
                          (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo + 0x130) * 8 +
                         -8) == _UnityEngine_Events_InvokableCall_TypeInfo)) goto LAB_01499330;
          }
          lVar4 = System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                            (lVar3,iVar6,aplStack_48,
                             _Method_System_Collections_Generic_List_BaseInvokableCall__get_Item__);
          plVar1 = aplStack_48[0];
          lVar5 = *(long *)(lVar2 + 0x28);
          if (*(long *)(lVar2 + 0x28) == 0) {
            lVar4 = func_0x00a679a0(_object___TypeInfo);
            *(long *)(lVar2 + 0x28) = lVar4;
            lVar5 = lVar4;
          }
          if (plVar1 == (long *)0x0) goto LAB_01499360;
          (**(code **)(*plVar1 + 0x178))(plVar1,lVar5,*(undefined8 *)(*plVar1 + 0x180));
        }
        else {
          if ((*(byte *)(*aplStack_48[0] + 0x130) <
               *(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo + 0x130)) ||
             (*(long *)(*(long *)(*aplStack_48[0] + 200) +
                        (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo + 0x130) * 8 +
                       -8) != _UnityEngine_Events_InvokableCall_TypeInfo)) goto LAB_014992a0;
LAB_01499330:
          UnityEngine_Events_InvokableCall__Invoke(aplStack_48[0],0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar3 + 0x18));
    }
    return;
  }
LAB_01499360:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(lVar4,lVar5);
}



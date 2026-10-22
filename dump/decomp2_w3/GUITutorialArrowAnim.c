// ==== private void Awake() { }   @0xb07874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__Awake(void *__this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  long lStack_28;
  
  if ((bRam0000000001916f53 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916f53 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
  *(long *)((long)__this + 0x28) = lStack_28;
  if (lStack_28 != 0) {
    uVar1 = UnityEngine_Transform__get_parent(lStack_28,0);
    *(undefined8 *)((long)__this + 0x20) = uVar1;
    if (*(long *)((long)__this + 0x28) != 0) {
      uVar2 = UnityEngine_Transform__get_localPosition(*(long *)((long)__this + 0x28),0);
      *(undefined4 *)((long)__this + 0x30) = uVar2;
      *(undefined4 *)((long)__this + 0x34) = in_s1;
      if (*(long *)((long)__this + 0x28) != 0) {
        uVar2 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x28),0);
        *(undefined4 *)((long)__this + 0x38) = uVar2;
        *(undefined4 *)((long)__this + 0x3c) = in_s1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



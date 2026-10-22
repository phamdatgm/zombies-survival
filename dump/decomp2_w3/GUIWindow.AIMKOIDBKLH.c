// ==== private bool MoveNext() { }   @0xb49478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIWindow_AIMKOIDBKLH__MoveNext(void *__this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  long lStack_38;
  
  if ((bRam0000000001917155 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917155 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
LAB_00c495cc:
    fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    fVar8 = *(float *)((long)__this + 0x48);
    if (fVar8 <= fVar5) {
      *(undefined4 *)((long)__this + 0x34) = *(undefined4 *)((long)__this + 0x3c);
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c496a4;
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)((long)__this + 0x30),*(long *)((long)__this + 0x28),0);
      bVar1 = false;
      *(undefined1 *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x18) = 0;
    }
    else {
      fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
      uVar9 = *(undefined4 *)((long)__this + 0x40);
      fVar7 = *(float *)((long)__this + 0x44);
      uVar4 = *(undefined4 *)((long)__this + 0x3c);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = Main__BKPNLKDKAKA(uVar9,uVar4,1.0 - (fVar8 - fVar5) / fVar7,0);
      *(int *)((long)__this + 0x34) = (int)uVar6;
      if (*(long *)((long)__this + 0x28) == 0) {
LAB_00c496a4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)((long)__this + 0x30),uVar6,*(long *)((long)__this + 0x28),0);
      bVar1 = true;
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
    }
  }
  else {
    if (*(int *)((long)__this + 0x10) == 0) {
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      lVar3 = *(long *)((long)__this + 0x20);
      if (*(char *)(*(long *)(_GUIWindow_TypeInfo + 0xb8) + 0x18) == '\0') {
        if ((lVar3 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar3,0), lVar2 == 0))
        goto LAB_00c496a4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long *)((long)__this + 0x28) = lStack_38;
        if (lStack_38 == 0) goto LAB_00c496a4;
        uVar4 = UnityEngine_RectTransform__get_anchoredPosition(lStack_38,0);
        *(undefined4 *)((long)__this + 0x30) = uVar4;
        *(undefined8 *)((long)__this + 0x34) = 0x43c80000;
        fVar5 = *(float *)(lVar3 + 0x44);
        if (fVar5 == -1.0) {
          if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c496a4;
          fVar5 = -1.0;
          UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x28),0);
          *(float *)(lVar3 + 0x44) = fVar5;
          uVar4 = *(undefined4 *)((long)__this + 0x34);
        }
        else {
          uVar4 = 0x43c80000;
        }
        *(float *)((long)__this + 0x3c) = fVar5;
        *(undefined4 *)((long)__this + 0x40) = uVar4;
        if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c496a4;
        UnityEngine_RectTransform__set_anchoredPosition
                  (*(undefined4 *)((long)__this + 0x30),*(long *)((long)__this + 0x28),0);
        *(undefined4 *)((long)__this + 0x44) = 0x3ecccccd;
        fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        *(float *)((long)__this + 0x48) = fVar5 + *(float *)((long)__this + 0x44);
        goto LAB_00c495cc;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



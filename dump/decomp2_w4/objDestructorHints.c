// ==== public void NNIADFNMHGB() { }   @0xad9268

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints__NNIADFNMHGB(void *__this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined4 in_s1;
  float fVar9;
  undefined4 in_s2;
  undefined4 in_s3;
  long lStack_28;
  
  if ((bRam0000000001916e09 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e09 = 1;
  }
  if (*(char *)((long)__this + 0x20) == '\0') {
    if (*(int *)((long)__this + 0x28) != 4) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
      *(long *)((long)__this + 0x70) = lStack_28;
      if (lStack_28 == 0) goto LAB_00bd9510;
      uVar6 = UnityEngine_Transform__get_localScale(lStack_28,0);
      *(undefined4 *)((long)__this + 0x90) = uVar6;
      if (*(long *)((long)__this + 0x70) == 0) goto LAB_00bd9510;
      UnityEngine_Transform__get_localPosition(*(long *)((long)__this + 0x70),0);
      *(undefined4 *)((long)__this + 0x94) = in_s1;
    }
    plVar1 = *(long **)((long)__this + 0x78);
    if (plVar1 == (long *)0x0) goto LAB_00bd9510;
    uVar6 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    *(undefined4 *)((long)__this + 0x30) = uVar6;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    *(undefined4 *)((long)__this + 0x38) = in_s2;
    *(undefined4 *)((long)__this + 0x3c) = in_s3;
    *(undefined4 *)((long)__this + 0x50) = uVar6;
    *(undefined4 *)((long)__this + 0x54) = in_s1;
    *(undefined4 *)((long)__this + 0x58) = in_s2;
    *(undefined4 *)((long)__this + 0x5c) = in_s3;
    uVar4 = *(undefined8 *)((long)__this + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      plVar1 = *(long **)((long)__this + 0x88);
      if (plVar1 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar1 + 0x2a8))
                (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      auVar8 = NEON_fmov(0x3f800000,4);
      *(long *)((long)__this + 0x68) = auVar8._8_8_;
      *(long *)((long)__this + 0x60) = auVar8._0_8_;
    }
    *(undefined1 *)((long)__this + 0x20) = 1;
  }
  else {
    plVar1 = *(long **)((long)__this + 0x78);
    *(undefined4 *)((long)__this + 0x30) = *(undefined4 *)((long)__this + 0x50);
    *(undefined4 *)((long)__this + 0x34) = *(undefined4 *)((long)__this + 0x54);
    *(undefined4 *)((long)__this + 0x38) = *(undefined4 *)((long)__this + 0x58);
    *(undefined4 *)((long)__this + 0x3c) = *(undefined4 *)((long)__this + 0x5c);
    if (plVar1 == (long *)0x0) goto LAB_00bd9510;
    (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    uVar4 = *(undefined8 *)((long)__this + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      plVar1 = *(long **)((long)__this + 0x88);
      *(undefined4 *)((long)__this + 0x40) = *(undefined4 *)((long)__this + 0x60);
      *(undefined4 *)((long)__this + 0x44) = *(undefined4 *)((long)__this + 100);
      *(undefined4 *)((long)__this + 0x48) = *(undefined4 *)((long)__this + 0x68);
      *(undefined4 *)((long)__this + 0x4c) = *(undefined4 *)((long)__this + 0x6c);
      if (plVar1 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    }
  }
  *(undefined4 *)((long)__this + 0x2c) = 0;
  lVar3 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar3 == 0) {
LAB_00bd9510:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar3,1,0);
  uVar4 = *(undefined8 *)((long)__this + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(undefined8 *)((long)__this + 0x88);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if (((uVar2 & 1) != 0) && (*(int *)((long)__this + 0x28) != 6)) {
      plVar1 = *(long **)((long)__this + 0x88);
      if (plVar1 != (long *)0x0) {
        lVar5 = *(long *)((long)__this + 0x70);
        lVar3 = (**(code **)(*plVar1 + 0x598))(plVar1,*(undefined8 *)(*plVar1 + 0x5a0));
        if (lVar3 != 0) {
          fVar7 = (float)*(int *)(lVar3 + 0x10) / 20.0;
          fVar9 = fVar7;
          if (1.0 < fVar7) {
            fVar9 = 1.0;
          }
          fVar9 = fVar9 * 580.0 + 420.0;
          if (fVar7 < 0.0) {
            fVar9 = 420.0;
          }
          if ((*(long *)((long)__this + 0x70) != 0) &&
             (UnityEngine_RectTransform__get_sizeDelta(*(long *)((long)__this + 0x70),0), lVar5 != 0
             )) {
            UnityEngine_RectTransform__set_sizeDelta(fVar9,lVar5,0);
            return;
          }
        }
      }
      goto LAB_00bd9510;
    }
  }
  return;
}



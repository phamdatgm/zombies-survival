// ==== public void ICMOCEHIFOI(int ALLBGCHDGNC) { }   @0xaf4ec0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI(void *__this,int ALLBGCHDGNC)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  int iStack_14;
  
  iStack_14 = ALLBGCHDGNC;
  uVar4 = UnityEngine_Time__get_time(0);
  *(undefined4 *)((long)__this + 0x38) = uVar4;
  *(undefined1 *)((long)__this + 0x6c) = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  iVar1 = *(int *)((long)__this + 0x20);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      plVar3 = *(long **)((long)__this + 0x28);
      auVar5 = NEON_fmov(0x3f800000,4);
      *(long *)((long)__this + 0x54) = auVar5._8_8_;
      *(long *)((long)__this + 0x4c) = auVar5._0_8_;
      if (plVar3 == (long *)0x0) goto LAB_00bf4f9c;
      (**(code **)(*plVar3 + 0x2a8))
                (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bf4f9c;
      auVar5 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x30),0);
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bf4f9c;
      UnityEngine_RectTransform__set_anchoredPosition
                (auVar5,*(undefined4 *)((long)__this + 0x44),*(long *)((long)__this + 0x30),0);
    }
    else if (iVar1 != 0) {
      return;
    }
  }
  plVar3 = *(long **)((long)__this + 0x28);
  uVar2 = System_Int32__ToString(&iStack_14,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
    return;
  }
LAB_00bf4f9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xaf58b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__Start(void *__this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  
  if ((bRam0000000001916edc & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916edc = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x30);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bf59b0;
    uVar4 = UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x30),0);
    *(undefined4 *)((long)__this + 0x3c) = uVar4;
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bf59b0;
    uVar4 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x30),0);
    *(undefined4 *)((long)__this + 0x40) = uVar4;
    *(undefined4 *)((long)__this + 0x44) = in_s1;
    *(undefined4 *)((long)__this + 0x48) = 0;
  }
  if (*(int *)((long)__this + 0x20) == 1) {
    plVar2 = *(long **)((long)__this + 0x28);
    if (plVar2 == (long *)0x0) {
LAB_00bf59b0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar2 + 0x5a8))
              (plVar2,**(undefined8 **)(_string_TypeInfo + 0xb8),*(undefined8 *)(*plVar2 + 0x5b0));
  }
  if (*(char *)((long)__this + 0x6c) != '\0') {
    return;
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,0);
  return;
}



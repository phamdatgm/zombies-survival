// ==== public void ICMOCEHIFOI() { }   @0xaf4fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI(void *__this)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  long *in_stack_ffffffffffffffe8;
  
  if ((bRam0000000001916ed9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    bRam0000000001916ed9 = 1;
  }
  uVar3 = UnityEngine_Time__get_time(0);
  *(undefined4 *)((long)__this + 0x38) = uVar3;
  *(undefined1 *)((long)__this + 0x6c) = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  if (*(int *)((long)__this + 0x20) == 4) {
    *(float *)((long)__this + 0x38) = *(float *)((long)__this + 0x38) + 0.3;
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar1,1);
      return;
    }
  }
  else {
    if (*(int *)((long)__this + 0x20) != 3) {
      return;
    }
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (*(long *)((long)__this + 0x30) != 0) {
        uVar3 = 0x3fc00000;
        uVar6 = 0x3f800000;
        UnityEngine_Transform__set_localScale(*(long *)((long)__this + 0x30),0);
        plVar2 = *(long **)((long)__this + 0x28);
        auVar5 = NEON_fmov(0x3f800000,4);
        *(long *)((long)__this + 100) = auVar5._8_8_;
        *(long *)((long)__this + 0x5c) = auVar5._0_8_;
        if (plVar2 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
          *(undefined4 *)((long)__this + 0x4c) = uVar4;
          *(undefined4 *)((long)__this + 0x50) = uVar3;
          *(undefined4 *)((long)__this + 0x54) = uVar6;
          *(undefined4 *)((long)__this + 0x68) = 0;
          *(undefined4 *)((long)__this + 0x58) = 0;
          if ((*(long *)((long)__this + 0x30) != 0) &&
             (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (*(long *)((long)__this + 0x30),&stack0xffffffffffffffe8,
                         _Method_UnityEngine_Component_GetComponent_Image___),
             in_stack_ffffffffffffffe8 != (long *)0x0)) {
            (**(code **)(*in_stack_ffffffffffffffe8 + 0x2a8))
                      (*(undefined4 *)((long)__this + 0x5c),*(undefined4 *)((long)__this + 0x60),
                       *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                       in_stack_ffffffffffffffe8,*(undefined8 *)(*in_stack_ffffffffffffffe8 + 0x2b0)
                      );
            plVar2 = *(long **)((long)__this + 0x28);
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x2a8))
                        (*(undefined4 *)((long)__this + 0x4c),*(undefined4 *)((long)__this + 0x50),
                         *(undefined4 *)((long)__this + 0x54),*(undefined4 *)((long)__this + 0x58),
                         plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf59b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins___ctor(void *__this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)((long)__this + 0x24) = 0x3f800000;
  *(long *)((long)__this + 0x54) = auVar1._8_8_;
  *(long *)((long)__this + 0x4c) = auVar1._0_8_;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



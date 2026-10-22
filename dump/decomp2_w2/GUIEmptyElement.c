// ==== public void .ctor() { }   @0xb3230c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIEmptyElement___ctor(void *__this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam00000000019170cb & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_Graphic_TypeInfo);
    bRam00000000019170cb = 1;
  }
  if (*(int *)(_UnityEngine_UI_Graphic_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191db37 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__Init__,0);
    func_0x00a67900(&Method_UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween___ctor__);
    func_0x00a67900(&UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__TypeInfo);
    bRam000000000191db37 = 1;
  }
  auVar2 = NEON_fmov(0x3f800000,4);
  *(long *)((long)__this + 0x30) = auVar2._8_8_;
  *(long *)((long)__this + 0x28) = auVar2._0_8_;
  *(undefined2 *)((long)__this + 0x3a) = 0x101;
  UnityEngine_EventSystems_UIBehaviour___ctor(__this,0);
  lVar1 = *(long *)((long)__this + 0x98);
  if (lVar1 == 0) {
    lVar1 = func_0x00a67b44(_UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween__TypeInfo);
    UnityEngine_UI_CoroutineTween_TweenRunner___Il2CppFullySharedGenericStructType____ctor
              (lVar1,_Method_UnityEngine_UI_CoroutineTween_TweenRunner_ColorTween___ctor__);
    *(long *)((long)__this + 0x98) = lVar1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  *(void **)(lVar1 + 0x10) = __this;
  *(undefined1 *)((long)__this + 0xa0) = 1;
  return;
}



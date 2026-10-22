// ==== private bool HKMCNGPDBGA() { }   @0xad3bf8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool InMenuUnitClickHandler__HKMCNGPDBGA(void *__this)

{
  bool bVar1;
  long lVar2;
  
  if ((bRam0000000001916dca & 1) == 0) {
    func_0x00a67900(&UnityEngine_BoxCollider_TypeInfo);
    bRam0000000001916dca = 1;
  }
  if (*(int *)((long)__this + 0x30) == 2) {
    if (*(long **)((long)__this + 0x38) != (long *)0x0) {
      lVar2 = **(long **)((long)__this + 0x38);
      if (*(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130) <= *(byte *)(lVar2 + 0x130)) {
        return *(long *)(*(long *)(lVar2 + 200) +
                         (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo + 0x130) * 8 + -8) !=
               _UnityEngine_BoxCollider_TypeInfo;
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



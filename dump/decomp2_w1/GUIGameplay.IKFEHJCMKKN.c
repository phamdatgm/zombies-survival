// ==== private bool MoveNext() { }   @0xb67724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay_IKFEHJCMKKN__MoveNext(void *__this)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000001917241 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    func_0x00a67900(&Str_2);
    func_0x00a67900(&Str_1);
    bRam0000000001917241 = 1;
  }
  if (*(uint *)((long)__this + 0x10) < 4) {
    lVar2 = *(long *)((long)__this + 0x20);
    switch(*(uint *)((long)__this + 0x10)) {
    case 0:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
        GUIWindow__JGDCBENNDFO(*(long *)(lVar2 + 0x88),0,0);
        uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(0x3e99999a,uVar3,0);
        *(undefined8 *)((long)__this + 0x18) = uVar3;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
code_r0x00c678a0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    case 1:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__PEDBEOIPIIB(lVar2,_Str_2);
      uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f800000,uVar3,0);
      uVar4 = 2;
      *(undefined8 *)((long)__this + 0x18) = uVar3;
      break;
    case 2:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__PEDBEOIPIIB(lVar2,_Str_1);
      uVar3 = func_0x00a67b44(_UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f800000,uVar3,0);
      *(undefined8 *)((long)__this + 0x18) = uVar3;
      uVar4 = 3;
      break;
    case 3:
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (lVar2 == 0) goto code_r0x00c678a0;
      GUIGameplay__ButtonRewardEncyclopediaItem(lVar2,1);
      goto LAB_00c67890;
    }
    *(undefined4 *)((long)__this + 0x10) = uVar4;
    bVar1 = true;
  }
  else {
LAB_00c67890:
    bVar1 = false;
  }
  return bVar1;
}



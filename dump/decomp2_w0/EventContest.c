// ==== public int get_TimeLeft() { }   @0xaef30c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EventContest__get_TimeLeft(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((bRam0000000001916ed0 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916ed0 = 1;
  }
  iVar2 = *(int *)((long)__this + 0x28);
  fVar3 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = -0x80000000;
  if (fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  return (iVar2 - iVar1) + *(int *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x50);
}


// ==== public void .ctor() { }   @0xaf3590

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EventContest___ctor(void *__this)

{
  return;
}



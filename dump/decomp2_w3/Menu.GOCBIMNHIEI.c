// ==== private bool MoveNext() { }   @0xb3b904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Menu_GOCBIMNHIEI__MoveNext(void *__this)

{
  float fVar1;
  
  if ((bRam000000000191710a & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_CheatDetectCloseGame);
    bRam000000000191710a = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    *(undefined4 *)((long)__this + 0x20) = 0x40400000;
    fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x24) = fVar1 + *(float *)((long)__this + 0x20);
  }
  fVar1 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (*(float *)((long)__this + 0x24) <= fVar1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_CheatDetectCloseGame,0);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__Quit(0);
    return false;
  }
  UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined8 *)((long)__this + 0x18) = 0;
  *(undefined4 *)((long)__this + 0x10) = 1;
  return true;
}



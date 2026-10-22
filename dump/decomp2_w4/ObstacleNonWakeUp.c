// ==== private void OnBecameVisible() { }   @0xb57640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ObstacleNonWakeUp__OnBecameVisible(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000019171b6 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b6 = 1;
  }
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)((long)__this + 0x28);
    if (lVar2 != 0) {
      if (pcRam000000000191d500 == (code *)0x0) {
        pcRam000000000191d500 = (code *)func_0x00a678c4(&UNK_005a79ad);
      }
                    /* WARNING: Could not recover jumptable at 0x014ceec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d500)(lVar2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}



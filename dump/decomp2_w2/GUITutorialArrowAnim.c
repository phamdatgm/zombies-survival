// ==== private void OnEnable() { }   @0xb076fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__OnEnable(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)__this + 0x40) = uVar4;
  if ((bRam0000000001916f54 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f54 = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    UnityEngine_Transform__TransformPoint
              (*(undefined4 *)((long)__this + 0x30),*(long *)((long)__this + 0x20),0);
    if (*(long *)((long)__this + 0x28) != 0) {
      UnityEngine_Transform__get_up(*(long *)((long)__this + 0x28),0);
      UnityEngine_Time__get_realtimeSinceStartup(0);
      lVar2 = *(long *)((long)__this + 0x28);
      if (lVar2 != 0) {
        if (pcRam000000000191c880 == (code *)0x0) {
          pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531,0);
        }
        (*pcRam000000000191c880)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



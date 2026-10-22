// ==== private void Update() { }   @0xb325f8

/* WARNING: Removing unreachable block (ram,0x014947c8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShipMovement__Update(void *__this)

{
  long lVar1;
  
  lVar1 = *(long *)((long)__this + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_Transform__get_forward(lVar1,0);
  UnityEngine_Time__get_deltaTime(0);
  UnityEngine_Transform__get_position(lVar1,0,0);
  if (pcRam000000000191c880 == (code *)0x0) {
    pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531);
  }
  (*pcRam000000000191c880)(lVar1,&stack0xffffffffffffffd0);
  return;
}



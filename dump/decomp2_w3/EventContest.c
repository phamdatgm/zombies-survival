// ==== public int get_car_id() { }   @0xaf3554

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EventContest__get_car_id(void *__this)

{
  uint uVar1;
  
  uVar1 = *(int *)((long)__this + 0x18) - 1;
  if (uVar1 < 7) {
    return *(int *)(&UNK_005b9f5c + (long)(int)uVar1 * 4);
  }
  return -1;
}



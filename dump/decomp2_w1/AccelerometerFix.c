// ==== public void GLNOJMCENOE() { }   @0xb4d45c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__GLNOJMCENOE(void *__this)

{
  *(undefined1 *)((long)__this + 0x2c) = 1;
  *(undefined4 *)((long)__this + 0x30) = 0;
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,1);
  return;
}



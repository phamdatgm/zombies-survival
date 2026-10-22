// ==== public void .ctor(object JPHMBPHCDPM, IntPtr AHFAMLAFKPO) { }   @0xb49bc8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LPHEHJBLEPI___ctor(void *__this,void *JPHMBPHCDPM,long AHFAMLAFKPO)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  uVar4 = *(undefined8 *)(AHFAMLAFKPO + 8);
  *(void **)((long)__this + 0x20) = JPHMBPHCDPM;
  *(long *)((long)__this + 0x28) = AHFAMLAFKPO;
  *(undefined8 *)((long)__this + 0x10) = uVar4;
  cVar1 = *(char *)(AHFAMLAFKPO + 0x52);
  *(void **)((long)__this + 0x40) = __this;
  uVar2 = func_0x00a679b8(AHFAMLAFKPO);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (JPHMBPHCDPM == (void *)0x0) {
        uVar4 = func_0x00a67b6c(0,&UNK_005b1a65);
        auVar6 = func_0x00a67a20(uVar4,0);
        lVar3 = auVar6._0_8_;
                    /* WARNING: Could not recover jumptable at 0x00c49c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),auVar6._8_8_,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      goto LAB_00c49c14;
    }
    puVar5 = &UNK_009bee80;
  }
  else {
    if (cVar1 != '\x01') {
LAB_00c49c14:
      *(undefined8 *)((long)__this + 0x18) = *(undefined8 *)((long)__this + 0x10);
      *(undefined8 *)((long)__this + 0x40) = *(undefined8 *)((long)__this + 0x20);
      goto LAB_00c49c34;
    }
    puVar5 = &UNK_009beea0;
  }
  *(undefined **)((long)__this + 0x18) = puVar5;
LAB_00c49c34:
  *(undefined **)((long)__this + 0x38) = &UNK_009bee2c;
  return;
}



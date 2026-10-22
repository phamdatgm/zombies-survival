// ==== public virtual bool Invoke(GameObject OPBPCFOOBHD) { }   @0xb49c64

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool LPHEHJBLEPI__Invoke(void *__this,void *OPBPCFOOBHD)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00c49c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((long)__this + 0x18))
                    (*(undefined8 *)((long)__this + 0x40),OPBPCFOOBHD,
                     *(undefined8 *)((long)__this + 0x28));
  return (bool)uVar1;
}



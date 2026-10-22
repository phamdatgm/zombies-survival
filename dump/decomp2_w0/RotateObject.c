// ==== private void Start() { }   @0xb5d32c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RotateObject__Start(void *__this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = UnityEngine_Component__get_transform(__this,0);
  *(undefined8 *)((long)__this + 0x20) = uVar2;
  if (*(char *)((long)__this + 0x30) != '\0') {
    uVar1 = UnityEngine_Random__Range
                      (*(undefined4 *)((long)__this + 0x28),*(undefined4 *)((long)__this + 0x2c),0);
    *(undefined4 *)((long)__this + 0x28) = uVar1;
  }
  return;
}



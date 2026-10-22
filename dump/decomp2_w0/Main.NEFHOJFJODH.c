// ==== private bool MoveNext() { }   @0xb5eb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Main_NEFHOJFJODH__MoveNext(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000001917211 & 1) == 0) {
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001917211 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)((long)__this + 0x20) == 0) {
      bVar1 = true;
      uVar3 = 0;
    }
    else {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c5ed10;
      uVar3 = UnityEngine_AudioSource__get_volume(*(long *)((long)__this + 0x28),0);
      bVar1 = *(int *)((long)__this + 0x20) == 0;
    }
    uVar5 = 0x3f333333;
    if (!bVar1) {
      uVar5 = 0;
    }
    *(undefined4 *)((long)__this + 0x3c) = 0;
    *(undefined4 *)((long)__this + 0x34) = uVar3;
    *(undefined4 *)((long)__this + 0x38) = uVar5;
    *(float *)((long)__this + 0x40) = 1.0 / *(float *)((long)__this + 0x30);
    if (bVar1) {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c5ed10;
      UnityEngine_AudioSource__Play(*(long *)((long)__this + 0x28),0);
    }
  }
  fVar6 = *(float *)((long)__this + 0x3c);
  if (fVar6 <= 1.0) {
    fVar7 = *(float *)((long)__this + 0x40);
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar6 = fVar6 + fVar7 * fVar4;
    *(float *)((long)__this + 0x3c) = fVar6;
    if (*(long *)((long)__this + 0x28) != 0) {
      bVar1 = fVar6 < 0.0;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      if (bVar1) {
        fVar6 = 0.0;
      }
      UnityEngine_AudioSource__set_volume
                (*(float *)((long)__this + 0x34) +
                 fVar6 * (*(float *)((long)__this + 0x38) - *(float *)((long)__this + 0x34)),
                 *(long *)((long)__this + 0x28),0);
      fVar4 = *(float *)((long)__this + 0x40);
      fVar6 = (float)UnityEngine_Time__get_deltaTime(0);
      uVar2 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(fVar4 * fVar6,uVar2,0);
      *(undefined8 *)((long)__this + 0x18) = uVar2;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
LAB_00c5ed10:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)((long)__this + 0x20) == 1) {
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00c5ed10;
    UnityEngine_AudioSource__Stop(*(long *)((long)__this + 0x28),0);
  }
  return false;
}



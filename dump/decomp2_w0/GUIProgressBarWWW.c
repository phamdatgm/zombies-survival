// ==== private void Update() { }   @0xb43030

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIProgressBarWWW__Update(void *__this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)((long)__this + 0x34) == '\0') {
    return;
  }
  fVar4 = *(float *)((long)__this + 0x58);
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  plVar1 = *(long **)((long)__this + 0x28);
  *(float *)((long)__this + 0x58) = fVar4 - fVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)((long)__this + 0x4c),*(undefined4 *)((long)__this + 0x50),
               *(undefined4 *)((long)__this + 0x54),plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    fVar4 = *(float *)((long)__this + 0x38);
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar4 = fVar4 + fVar3;
    *(float *)((long)__this + 0x38) = fVar4;
    if (fVar4 <= *(float *)((long)__this + 0x30)) {
      return;
    }
    lVar2 = *(long *)((long)__this + 0x20);
    *(undefined1 *)((long)__this + 0x34) = 0;
    if (lVar2 != 0) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



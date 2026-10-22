// ==== private void Update() { }   @0xb19280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken__Update(void *__this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000001916fd7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd7 = 1;
  }
  fVar4 = *(float *)((long)__this + 0x34);
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar4 = fVar4 + fVar3;
  *(float *)((long)__this + 0x34) = fVar4;
  if (fVar4 <= *(float *)((long)__this + 0x38)) {
    return;
  }
  cVar1 = *(char *)((long)__this + 0x30);
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (cVar1 == '\0') {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((bRam000000000191c518 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
      bRam000000000191c518 = 1;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (pcRam000000000191c510 == (code *)0x0) {
      pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
    }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c510)(0,lVar2);
    return;
  }
  if (lVar2 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



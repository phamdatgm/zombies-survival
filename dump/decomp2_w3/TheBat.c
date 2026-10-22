// ==== private void Update() { }   @0xae4550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TheBat__Update(void *__this)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (*(float *)((long)__this + 0x30) <= 7.0) {
    lVar1 = *(long *)((long)__this + 0x20);
    if (cRam0000000001916e68 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e68 = '\x01';
    }
    uVar4 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x18);
    fVar5 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x20);
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar1 != 0) {
      uVar3 = NEON_fmov(0x40400000,4);
      UnityEngine_Transform__Translate
                ((float)uVar4 * (float)uVar3 * fVar2,
                 (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar3 >> 0x20) * fVar2,
                 fVar5 * 3.0 * fVar2,lVar1,0);
      fVar5 = *(float *)((long)__this + 0x30);
      fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
      *(float *)((long)__this + 0x30) = fVar5 + fVar2;
      return;
    }
  }
  else {
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      if (pcRam000000000191c328 == (code *)0x0) {
        pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
      }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c328)(__this,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



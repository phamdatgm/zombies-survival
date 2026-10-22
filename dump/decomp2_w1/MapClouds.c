// ==== private void GNKKKBEHJOH(RectTransform HAKKOAADCOE) { }   @0xb49e90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__GNKKKBEHJOH(void *__this,void *HAKKOAADCOE)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (HAKKOAADCOE == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  fVar2 = *(float *)((long)__this + 0x2c);
  fVar3 = *(float *)((long)__this + 0x30);
  UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  UnityEngine_RectTransform__set_anchoredPosition(fVar1 - fVar2 * fVar3,HAKKOAADCOE,0);
  fVar2 = *(float *)((long)__this + 0x30);
  fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  if (fVar2 == 1.0) {
    if ((float)-*(int *)((long)__this + 0x28) <= fVar1) {
      return;
    }
    UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  }
  else {
    if (fVar1 <= (float)*(int *)((long)__this + 0x28)) {
      return;
    }
    UnityEngine_RectTransform__get_anchoredPosition(HAKKOAADCOE,0);
  }
  if (pcRam000000000191c800 == (code *)0x0) {
    pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
  }
  (*pcRam000000000191c800)(HAKKOAADCOE,&stack0xffffffffffffffe8);
  return;
}



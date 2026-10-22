// ==== private void LateUpdate() { }   @0xb49e2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__LateUpdate(void *__this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_18;
  float fStack_14;
  
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  lVar2 = *(long *)((long)__this + 0x20);
  *(float *)((long)__this + 0x2c) = fVar3 * 20.0;
  if (lVar2 == 0) {
LAB_00c49e88:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    MapClouds__GNKKKBEHJOH(__this,*(undefined8 *)(lVar2 + 0x20));
    lVar2 = *(long *)((long)__this + 0x20);
    if (lVar2 == 0) goto LAB_00c49e88;
    if (1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      fVar4 = *(float *)((long)__this + 0x2c);
      fVar5 = *(float *)((long)__this + 0x30);
      UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      UnityEngine_RectTransform__set_anchoredPosition(fVar3 - fVar4 * fVar5,lVar2,0);
      fVar4 = *(float *)((long)__this + 0x30);
      fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      iVar1 = *(int *)((long)__this + 0x28);
      if (fVar4 == 1.0) {
        fVar4 = (float)-iVar1;
        if (fVar4 <= fVar3) {
          return;
        }
        UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
      }
      else {
        fVar4 = (float)iVar1;
        if (fVar3 <= fVar4) {
          return;
        }
        UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
        iVar1 = -iVar1;
      }
      _fStack_18 = CONCAT44(fVar4,(float)iVar1);
      if (pcRam000000000191c800 == (code *)0x0) {
        pcRam000000000191c800 = (code *)func_0x00a678c4(&UNK_005a0a0c,0);
      }
      (*pcRam000000000191c800)(lVar2,&fStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}



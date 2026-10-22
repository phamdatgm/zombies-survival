// ==== public void KHDFDGMBOIJ() { }   @0xae75e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__KHDFDGMBOIJ(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  fVar5 = (float)UnityEngine_Time__get_time(0);
  iVar1 = UnityEngine_Random__Range(5,0x14,0);
  *(float *)((long)__this + 0x28) = fVar5 + (float)iVar1;
  if ((*(long *)((long)__this + 0x30) != 0) && (*(long *)((long)__this + 0x38) != 0)) {
    iVar1 = *(int *)(*(long *)((long)__this + 0x30) + 0x18);
    if (iVar1 != *(int *)(*(long *)((long)__this + 0x38) + 0x18)) {
      return;
    }
    uVar2 = UnityEngine_Random__Range(0,iVar1,0);
    lVar3 = UnityEngine_Component__get_transform(__this,0);
    lVar4 = *(long *)((long)__this + 0x30);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
LAB_00be7748:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      if (lVar3 != 0) {
        lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
        UnityEngine_Transform__set_position
                  (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),lVar3,0);
        lVar3 = UnityEngine_Component__get_transform(__this,0);
        lVar4 = UnityEngine_Component__get_transform(__this,0);
        if (lVar4 != 0) {
          fVar5 = (float)UnityEngine_Transform__get_rotation(lVar4,0);
          if (*(long *)((long)__this + 0x38) != 0) {
            if (*(uint *)(*(long *)((long)__this + 0x38) + 0x18) <= uVar2) goto LAB_00be7748;
            lVar4 = UnityEngine_Component__get_transform(__this,0);
            if (lVar4 != 0) {
              UnityEngine_Transform__get_rotation(lVar4,0);
              UnityEngine_Quaternion__Internal_FromEulerRad(fVar5 * 0.017453292,0);
              if (lVar3 != 0) {
                if (pcRam000000000191c8a0 == (code *)0x0) {
                  pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
                }
                (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



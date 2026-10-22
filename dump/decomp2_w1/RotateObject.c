// ==== private void Update() { }   @0xb5d360

/* WARNING: Removing unreachable block (ram,0x01493ecc) */
/* WARNING: Removing unreachable block (ram,0x01493ef0) */
/* WARNING: Removing unreachable block (ram,0x01493f04) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RotateObject__Update(void *__this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  lVar1 = *(long *)((long)__this + 0x20);
  if (lVar1 != 0) {
    fVar2 = (float)UnityEngine_Transform__get_forward(lVar1,0);
    iVar4 = *(int *)((long)__this + 0x28);
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    UnityEngine_Quaternion__Internal_FromEulerRad
              (fVar3 * fVar2 * (float)iVar4 * 0.017453292,lVar1,0,0);
    UnityEngine_Transform__get_rotation(lVar1);
    UnityEngine_Transform__get_rotation(lVar1);
    UnityEngine_Quaternion__Inverse();
    UnityEngine_Transform__get_rotation(lVar1);
    if (pcRam000000000191c8a0 == (code *)0x0) {
      pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb);
    }
    (*pcRam000000000191c8a0)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



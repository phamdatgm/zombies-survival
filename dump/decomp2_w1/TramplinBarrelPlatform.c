// ==== public void BPABDCCIAGL(int DBHAEOFNOKO) { }   @0xb51ed8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__BPABDCCIAGL(void *__this,int DBHAEOFNOKO)

{
  long lVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  undefined4 uVar3;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if (*(long *)((long)__this + 0x28) != 0) {
    UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x28),0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    fVar2 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar2 * 57.29578,0);
    uVar3 = 0x3c8efa35;
    lVar1 = *(long *)((long)__this + 0x28);
    in_s1 = in_s1 * 0.017453292;
    in_s2 = in_s2 * 0.017453292;
    uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((fVar2 - (float)DBHAEOFNOKO) * 0.017453292,0);
    if (lVar1 != 0) {
      fStack_2c = in_s1;
      fStack_28 = in_s2;
      uStack_24 = uVar3;
      if (pcRam000000000191c8a0 == (code *)0x0) {
        pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
      }
      (*pcRam000000000191c8a0)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



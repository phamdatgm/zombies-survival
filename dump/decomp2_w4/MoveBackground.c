// ==== public void CKHDANMOBCL(Vector3 KCNOMBKCNBM) { }   @0xb4c398

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MoveBackground__CKHDANMOBCL
               (void *__this,float KCNOMBKCNBM_x,float KCNOMBKCNBM_y,float KCNOMBKCNBM_z)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)((long)__this + 0x28) != 0) {
    KCNOMBKCNBM_x = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
    *(float *)((long)__this + 0x3c) = KCNOMBKCNBM_x;
    *(float *)((long)__this + 0x40) = KCNOMBKCNBM_y;
    *(float *)((long)__this + 0x44) =
         *(float *)((long)__this + 0x20) * (KCNOMBKCNBM_z + *(float *)((long)__this + 0x38) + 9.0);
    if (*(long *)((long)__this + 0x28) != 0) {
      UnityEngine_Transform__set_position(*(long *)((long)__this + 0x28),0);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar1 = *(long *)((long)__this + 0x48);
      if (((lVar1 != 0) && (uVar2 = *(ulong *)(lVar1 + 0x18), uVar2 != 0)) && (0 < (int)uVar2)) {
        uVar7 = 0;
        KCNOMBKCNBM_x = fVar8;
        do {
          lVar3 = *(long *)((long)__this + 0x50);
          if (lVar3 == 0) goto LAB_00c4c4cc;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) {
LAB_00c4c4d0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar4 = (long)(int)uVar7;
          pfVar5 = (float *)(lVar3 + lVar4 * 0xc + 0x28);
          KCNOMBKCNBM_x = *pfVar5;
          lVar6 = *(long *)((long)__this + 0x58);
          if (lVar6 == 0) goto LAB_00c4c4cc;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_00c4c4d0;
          fVar9 = KCNOMBKCNBM_x + fVar8 * *(float *)(lVar6 + lVar4 * 4 + 0x20);
          *pfVar5 = fVar9;
          KCNOMBKCNBM_x = (float)*(int *)((long)__this + 0x60);
          if (KCNOMBKCNBM_x < fVar9) {
            *pfVar5 = fVar9 * -1.8;
          }
          if ((uint)uVar2 <= uVar7) goto LAB_00c4c4d0;
          lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
          if (lVar1 == 0) goto LAB_00c4c4cc;
          lVar3 = lVar3 + lVar4 * 0xc;
          KCNOMBKCNBM_x =
               (float)UnityEngine_Transform__set_localPosition
                                (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),lVar1,0
                                );
          lVar1 = *(long *)((long)__this + 0x48);
          if (lVar1 == 0) goto LAB_00c4c4cc;
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
LAB_00c4c4cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50(KCNOMBKCNBM_x);
}



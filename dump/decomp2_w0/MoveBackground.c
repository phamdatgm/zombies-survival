// ==== private void Awake() { }   @0xb4c4d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MoveBackground__Awake(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_s1;
  undefined4 in_s2;
  
  if ((bRam0000000001917170 & 1) == 0) {
    func_0x00a67900(&float___TypeInfo);
    func_0x00a67900(&UnityEngine_Vector3___TypeInfo);
    bRam0000000001917170 = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(__this,0);
  *(long *)((long)__this + 0x28) = lVar1;
  if (lVar1 != 0) {
    uVar7 = UnityEngine_Transform__get_position(lVar1,0);
    *(undefined4 *)((long)__this + 0x30) = uVar7;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    *(undefined4 *)((long)__this + 0x38) = in_s2;
    if (*(long *)((long)__this + 0x48) != 0) {
      uVar2 = func_0x00a679a0(_UnityEngine_Vector3___TypeInfo,
                              *(undefined4 *)(*(long *)((long)__this + 0x48) + 0x18));
      *(undefined8 *)((long)__this + 0x50) = uVar2;
      if (*(long *)((long)__this + 0x48) != 0) {
        uVar2 = func_0x00a679a0(_float___TypeInfo,
                                *(undefined4 *)(*(long *)((long)__this + 0x48) + 0x18));
        lVar1 = *(long *)((long)__this + 0x48);
        *(undefined8 *)((long)__this + 0x58) = uVar2;
        if (lVar1 != 0) {
          lVar3 = 0;
          lVar5 = 0;
          do {
            uVar4 = (uint)lVar5;
            if (*(int *)(lVar1 + 0x18) <= (int)uVar4) {
              return;
            }
            lVar1 = *(long *)((long)__this + 0x58);
            uVar7 = 0x3dcccccd;
            uVar8 = UnityEngine_Random__Range(0x3cf5c28f,0);
            if (lVar1 == 0) break;
            if (*(uint *)(lVar1 + 0x18) <= uVar4) {
LAB_00c4c644:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            *(undefined4 *)(lVar1 + lVar5 * 4 + 0x20) = uVar8;
            lVar1 = *(long *)((long)__this + 0x48);
            if (lVar1 == 0) break;
            if (*(uint *)(lVar1 + 0x18) <= uVar4) goto LAB_00c4c644;
            lVar1 = *(long *)(lVar1 + lVar5 * 8 + 0x20);
            if (lVar1 == 0) break;
            lVar6 = *(long *)((long)__this + 0x50);
            uVar8 = UnityEngine_Transform__get_localPosition(lVar1,0);
            if (lVar6 == 0) break;
            lVar5 = lVar5 + 1;
            if (*(uint *)(lVar6 + 0x18) <= (int)lVar5 - 1U) goto LAB_00c4c644;
            lVar6 = lVar6 + lVar3;
            *(undefined4 *)(lVar6 + 0x20) = uVar8;
            *(undefined4 *)(lVar6 + 0x24) = uVar7;
            *(undefined4 *)(lVar6 + 0x28) = in_s2;
            lVar1 = *(long *)((long)__this + 0x48);
            lVar3 = lVar3 + 0xc;
          } while (lVar1 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



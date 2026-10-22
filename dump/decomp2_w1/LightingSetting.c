// ==== public void BAGDFDNHDEJ() { }   @0xb2f114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__BAGDFDNHDEJ(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  if ((bRam00000000019170b9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170b9 = 1;
  }
  lVar5 = *(long *)((long)__this + 0x20);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar7 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00c2f1f0;
        uVar4 = *(undefined8 *)(lVar7 + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c2f1f0;
          uVar2 = UnityEngine_Renderer__get_lightmapIndex(*(long *)(lVar7 + 0x10),0);
          *(undefined4 *)(lVar7 + 0x18) = uVar2;
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c2f1f0;
          uVar2 = UnityEngine_Renderer__get_lightmapScaleOffset(*(long *)(lVar7 + 0x10),0);
          *(undefined4 *)(lVar7 + 0x1c) = uVar2;
          *(undefined4 *)(lVar7 + 0x20) = in_s1;
          *(undefined4 *)(lVar7 + 0x24) = in_s2;
          *(undefined4 *)(lVar7 + 0x28) = in_s3;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    return;
  }
LAB_00c2f1f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



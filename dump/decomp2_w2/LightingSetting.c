// ==== private void PAIDHOGONLO() { }   @0xb2f034

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__PAIDHOGONLO(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam00000000019170ba & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170ba = 1;
  }
  lVar4 = *(long *)((long)__this + 0x20);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c2f10c;
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapIndex
                    (*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18),0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapScaleOffset
                    (*(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                     *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),
                     *(long *)(lVar6 + 0x10),0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c2f10c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



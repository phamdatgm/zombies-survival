// ==== public void MJODMEOIAIJ() { }   @0xb32364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__MJODMEOIAIJ(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float in_s1;
  float fVar8;
  
  if ((bRam00000000019170cc & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170cc = 1;
  }
  if (*(int *)((long)__this + 0x28) == 1) {
    uVar5 = *(undefined8 *)((long)__this + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)((long)__this + 0x20);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar5 = 0;
      lVar6 = *(long *)(lVar3 + 0x48);
      lVar4 = lVar3;
      if (lVar6 != 0) {
        uVar7 = UnityEngine_Transform__get_position(lVar6,0);
        lVar4 = 0;
        uVar5 = extraout_x1;
        if (*(long *)(lVar3 + 0x48) != 0) {
          UnityEngine_Transform__get_position(*(long *)(lVar3 + 0x48),0);
          lVar4 = 0;
          uVar5 = extraout_x1_00;
          if (*(long *)(lVar3 + 0x58) != 0) {
            fVar8 = in_s1;
            UnityEngine_Transform__get_position(*(long *)(lVar3 + 0x58),0);
            lVar4 = 0;
            uVar5 = extraout_x1_01;
            if (*(long *)(lVar3 + 0x48) != 0) {
              UnityEngine_Transform__get_position(*(long *)(lVar3 + 0x48),0);
              UnityEngine_Transform__set_position(uVar7,(in_s1 + fVar8) / 2.5,lVar6,0);
              iVar1 = *(int *)(lVar3 + 0x3c);
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              *(int *)(lVar3 + 0x3c) = iVar1 >> 1;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50(lVar4,uVar5);
    }
  }
  return;
}



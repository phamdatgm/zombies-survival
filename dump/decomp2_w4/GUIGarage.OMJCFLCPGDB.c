// ==== private bool MoveNext() { }   @0xb187e4

/* WARNING: Removing unreachable block (ram,0x00c18948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_OMJCFLCPGDB__MoveNext(void *__this)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  float fVar8;
  
  if ((bRam0000000001916fd4 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd4 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
LAB_00c18900:
    fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    fVar8 = *(float *)((long)__this + 0x54);
    if (fVar8 <= fVar7) {
      uVar5 = *(undefined8 *)((long)__this + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        (**(code **)(*plVar3 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x40),*(undefined4 *)((long)__this + 0x44),
                   *(undefined4 *)((long)__this + 0x48),*(undefined4 *)((long)__this + 0x4c),plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
      }
      bVar1 = false;
      *(undefined8 *)((long)__this + 0x38) = 0;
      *(undefined8 *)((long)__this + 0x30) = 0;
      *(undefined8 *)((long)__this + 0x48) = 0;
      *(undefined8 *)((long)__this + 0x40) = 0;
    }
    else {
      fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
      fVar8 = (1.0 - (fVar8 - fVar7) / *(float *)((long)__this + 0x50)) * 2.5;
      fVar7 = fVar8 * 0.6 + 0.2;
      if (fVar8 < 0.0) {
        fVar7 = 0.2;
      }
      *(float *)((long)__this + 0x3c) = fVar7;
      uVar5 = *(undefined8 *)((long)__this + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) {
LAB_00c18a2c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        (**(code **)(*plVar3 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x30),*(undefined4 *)((long)__this + 0x34),
                   *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
      }
      bVar1 = true;
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
    }
  }
  else {
    if (*(int *)((long)__this + 0x10) == 0) {
      *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
      if (*(long *)((long)__this + 0x20) == 0) goto LAB_00c18a2c;
      uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x20) + 0x1c0);
      *(undefined8 *)((long)__this + 0x28) = uVar5;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(long **)((long)__this + 0x28);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        uVar6 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        *(undefined4 *)((long)__this + 0x30) = uVar6;
        *(undefined4 *)((long)__this + 0x34) = in_s1;
        *(undefined4 *)((long)__this + 0x38) = in_s2;
        *(undefined4 *)((long)__this + 0x3c) = in_s3;
        plVar3 = *(long **)((long)__this + 0x28);
        *(undefined4 *)((long)__this + 0x3c) = 0;
        *(undefined8 *)((long)__this + 0x48) = *(undefined8 *)((long)__this + 0x38);
        *(undefined8 *)((long)__this + 0x40) = *(undefined8 *)((long)__this + 0x30);
        if (plVar3 == (long *)0x0) goto LAB_00c18a2c;
        (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        if ((*(long *)((long)__this + 0x28) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x28),0),
           lVar4 == 0)) goto LAB_00c18a2c;
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        *(undefined4 *)((long)__this + 0x50) = 0x3f000000;
        fVar7 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
        *(float *)((long)__this + 0x54) = fVar7 + *(float *)((long)__this + 0x50);
        goto LAB_00c18900;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



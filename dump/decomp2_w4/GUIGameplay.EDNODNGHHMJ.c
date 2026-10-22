// ==== private bool MoveNext() { }   @0xb670ec

/* WARNING: Removing unreachable block (ram,0x00c67210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay_EDNODNGHHMJ__MoveNext(void *__this)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iStack_34;
  
  if ((bRam000000000191723f & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam000000000191723f = 1;
  }
  lVar5 = *(long *)((long)__this + 0x28);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x30) = 0;
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if ((*(long *)((long)__this + 0x20) == 0) ||
       (plVar2 = *(long **)(*(long *)((long)__this + 0x20) + 0x28), plVar2 == (long *)0x0))
    goto LAB_00c6731c;
    uVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0));
    uVar4 = System_Int32__TryParse(uVar3,(undefined4 *)((long)__this + 0x30),0);
    if ((uVar4 & 1) == 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x34) = 0x3f000000;
    iVar1 = *(int *)((long)__this + 0x30);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(int *)((long)__this + 0x38) = *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 8) + iVar1;
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    *(float *)((long)__this + 0x3c) = fVar6 + *(float *)((long)__this + 0x34);
  }
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar7 = *(float *)((long)__this + 0x3c);
  if (fVar6 < fVar7) {
    fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(long *)((long)__this + 0x20) != 0) {
      plVar2 = *(long **)(*(long *)((long)__this + 0x20) + 0x28);
      fVar6 = 1.0 - (fVar7 - fVar6) / *(float *)((long)__this + 0x34);
      if (fVar6 < 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = fVar6 * ((float)*(int *)((long)__this + 0x38) - (float)*(int *)((long)__this + 0x30))
              + (float)*(int *)((long)__this + 0x30);
      iStack_34 = -0x80000000;
      if (fVar6 != INFINITY) {
        iStack_34 = (int)fVar6;
      }
      uVar3 = System_Int32__ToString(&iStack_34,0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
        *(undefined8 *)((long)__this + 0x18) = 0;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
  }
  else if (((*(long *)((long)__this + 0x20) != 0) && (lVar5 != 0)) &&
          (plVar2 = *(long **)(*(long *)((long)__this + 0x20) + 0x28), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(lVar5 + 0x300),*(undefined4 *)(lVar5 + 0x304),
               *(undefined4 *)(lVar5 + 0x308),*(undefined4 *)(lVar5 + 0x30c),plVar2,
               *(undefined8 *)(*plVar2 + 0x2b0));
    if (*(long *)((long)__this + 0x20) != 0) {
      GUICoins__ICMOCEHIFOI(*(long *)((long)__this + 0x20),0);
      if (*(long *)((long)__this + 0x20) != 0) {
        plVar2 = *(long **)(*(long *)((long)__this + 0x20) + 0x28);
        uVar3 = System_Int32__ToString((long)__this + 0x38,0);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
          return false;
        }
      }
    }
  }
LAB_00c6731c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



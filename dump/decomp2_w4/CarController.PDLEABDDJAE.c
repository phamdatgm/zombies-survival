// ==== private bool MoveNext() { }   @0xb2e0d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController_PDLEABDDJAE__MoveNext(void *__this)

{
  undefined8 uVar1;
  void *__this_00;
  long lVar2;
  long lVar3;
  float fVar4;
  
  if ((bRam000000000191704e & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam000000000191704e = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar4 = (float)UnityEngine_Time__get_time(0);
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x508) = fVar4 + 6.0;
      if ((*(long *)(lVar3 + 0x30) != 0) &&
         (__this_00 = *(void **)(*(long *)(lVar3 + 0x30) + 0x90), __this_00 != (void *)0x0)) {
        GUIWindow__HEGIHOAJOKK(__this_00,false);
        if (*(char *)((long)__this + 0x28) != '\0') {
          if ((*(long *)(lVar3 + 0x30) == 0) ||
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x360), lVar3 == 0)) goto LAB_00c2e1fc;
          UnityEngine_GameObject__SetActive(lVar3,0,0);
        }
        return false;
      }
    }
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = *(long *)(_CarController_TypeInfo + 0xb8);
    *(undefined1 *)(lVar2 + 0x44) = 1;
    *(undefined4 *)(lVar2 + 0x10) = 0;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x218) = 0;
      uVar1 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(0x40400000,uVar1,0);
      *(undefined8 *)((long)__this + 0x18) = uVar1;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
  }
LAB_00c2e1fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



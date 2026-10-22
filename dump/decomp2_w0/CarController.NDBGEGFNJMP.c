// ==== private bool MoveNext() { }   @0xb2e274

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarController_NDBGEGFNJMP__MoveNext(void *__this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000191704f & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam000000000191704f = 1;
  }
  lVar3 = *(long *)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (((lVar3 == 0) || (*(long *)(lVar3 + 0x30) == 0)) ||
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x80), lVar3 == 0)) goto LAB_00c2e3e8;
    GUIWindow__HEGIHOAJOKK(lVar3,0,0);
  }
  else if (*(int *)((long)__this + 0x10) == 0) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x44) = 1;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar1 != 0) {
      DAFNMLEKHAD__JJAPPMFCNFA(lVar1,1,0);
      *(undefined4 *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x10) = 0;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x218) = 0;
        uVar2 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(0x40400000,uVar2,0);
        *(undefined8 *)((long)__this + 0x18) = uVar2;
        *(undefined4 *)((long)__this + 0x10) = 1;
        return true;
      }
    }
LAB_00c2e3e8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return false;
}



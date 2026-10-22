// ==== private bool MoveNext() { }   @0xb6736c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGameplay_GHHIIAGLDMN__MoveNext(void *__this)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  
  if ((bRam0000000001917240 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_WaitForSeconds_TypeInfo);
    bRam0000000001917240 = 1;
  }
  if (4 < *(uint *)((long)__this + 0x10)) {
    return false;
  }
  lVar7 = *(long *)((long)__this + 0x28);
  switch(*(uint *)((long)__this + 0x10)) {
  case 0:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3f000000,uVar4,0);
    *(undefined8 *)((long)__this + 0x18) = uVar4;
    *(undefined4 *)((long)__this + 0x10) = 1;
    return true;
  case 1:
    iVar6 = *(int *)((long)__this + 0x20);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (iVar6 < 1) goto code_r0x00c67578;
    uVar1 = 0;
    *(undefined4 *)((long)__this + 0x34) = 0;
    break;
  case 2:
    iVar6 = *(int *)((long)__this + 0x20);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    uVar1 = *(int *)((long)__this + 0x34) + 1;
    *(uint *)((long)__this + 0x34) = uVar1;
    break;
  case 3:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
code_r0x00c67578:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
    if (lVar3 == 0) {
      uVar1 = 1;
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
        if (lVar3 == 0) goto code_r0x00c676d0;
      }
      uVar1 = Level__get_IsEvent(lVar3,0);
      uVar1 = uVar1 ^ 1;
    }
    if (((lVar7 == 0) || (*(long *)(lVar7 + 0x2d0) == 0)) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x2d0),0), lVar3 == 0))
    goto code_r0x00c676d0;
    UnityEngine_GameObject__SetActive(lVar3,uVar1 & 1,0);
    if (*(long *)(lVar7 + 0x2d0) == 0) goto code_r0x00c676d0;
    GUICoins__ICMOCEHIFOI(*(long *)(lVar7 + 0x2d0),0);
    if (*(char *)((long)__this + 0x30) == '\0') {
      return false;
    }
    uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3ecccccd,uVar4,0);
    *(undefined8 *)((long)__this + 0x18) = uVar4;
    uVar5 = 4;
    goto code_r0x00c676b0;
  case 4:
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x2c8) != 0)) &&
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x2c8),0), lVar3 != 0)) {
      UnityEngine_GameObject__SetActive(lVar3,1,0);
      if (*(long *)(lVar7 + 0x2c8) != 0) {
        GUICoins__ICMOCEHIFOI(*(long *)(lVar7 + 0x2c8),0);
        return false;
      }
    }
    goto code_r0x00c676d0;
  }
  if ((int)uVar1 < iVar6) {
    if ((lVar7 == 0) || (lVar3 = *(long *)(lVar7 + 0x250), lVar3 == 0)) goto code_r0x00c676d0;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
code_r0x00c676d4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    uVar4 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(lVar7 + 600);
      if (lVar3 == 0) goto code_r0x00c676d0;
      if (*(uint *)(lVar3 + 0x18) <= *(uint *)((long)__this + 0x34)) goto code_r0x00c676d4;
      uVar4 = *(undefined8 *)(lVar3 + (long)(int)*(uint *)((long)__this + 0x34) * 8 + 0x20);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar7 + 0x250);
        if (lVar3 == 0) goto code_r0x00c676d0;
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)((long)__this + 0x34)) goto code_r0x00c676d4;
        lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)((long)__this + 0x34) * 8 + 0x20);
        if (lVar3 == 0) {
code_r0x00c676d0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        UnityEngine_UI_Image__set_sprite(lVar3,*(undefined8 *)(lVar7 + 0x260),0);
        lVar7 = *(long *)(lVar7 + 600);
        if (lVar7 == 0) goto code_r0x00c676d0;
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)((long)__this + 0x34)) goto code_r0x00c676d4;
        lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)((long)__this + 0x34) * 8 + 0x20);
        if (lVar7 == 0) goto code_r0x00c676d0;
        GUICoins__ICMOCEHIFOI(lVar7,0);
      }
    }
    uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3e4ccccd,uVar4,0);
    uVar5 = 2;
    *(undefined8 *)((long)__this + 0x18) = uVar4;
  }
  else {
    uVar4 = func_0x00a67b44(_UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(0x3e19999a,uVar4,0);
    *(undefined8 *)((long)__this + 0x18) = uVar4;
    uVar5 = 3;
  }
code_r0x00c676b0:
  *(undefined4 *)((long)__this + 0x10) = uVar5;
  return true;
}



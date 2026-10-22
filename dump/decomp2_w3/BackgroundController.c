// ==== public void HAMLCJJANAJ() { }   @0xb5787c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__HAMLCJJANAJ(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam00000000019171b8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b8 = 1;
  }
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
  if (*(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8) != 0) {
    lVar4 = *(long *)((long)__this + 0x28);
    if (lVar4 == 0) {
LAB_00c57a00:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar1 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((uVar1 & 1) != 0) {
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
          lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_00c57a00;
          GFXDisabler__DHEEBAEOLGF(lVar3,0 < *(int *)(lVar2 + 0x90),0);
        }
        uVar1 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return;
}


// ==== public void MLIIENHGIGK() { }   @0xb57f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__MLIIENHGIGK(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam00000000019171bd & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171bd = 1;
  }
  uVar3 = *(undefined8 *)((long)__this + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)((long)__this + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)((long)__this + 0x60);
      if (lVar2 != 0) {
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = *(undefined8 *)((long)__this + 0x48);
    uVar3 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    *(undefined8 *)((long)__this + 0x60) = uVar3;
  }
  return;
}



// ==== public void DIMGJKDADNE() { }   @0xb58104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__DIMGJKDADNE(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam00000000019171bb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171bb = 1;
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
    uVar4 = *(undefined8 *)((long)__this + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
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
      lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar3 == 0) {
LAB_00c582e4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar1 = *(int *)(lVar3 + 0x90);
      uVar4 = *(undefined8 *)((long)__this + 0x58);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)((long)__this + 0x58) == 0) goto LAB_00c582e4;
        uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x58),0);
        if (iVar1 < 1) {
          if ((uVar2 & 1) != 0) {
            lVar3 = *(long *)((long)__this + 0x58);
            if (lVar3 != 0) {
              uVar4 = 0;
              goto LAB_00c582c0;
            }
            goto LAB_00c582e4;
          }
        }
        else if ((uVar2 & 1) == 0) {
          lVar3 = *(long *)((long)__this + 0x58);
          if (lVar3 != 0) {
            uVar4 = 1;
LAB_00c582c0:
            if (pcRam000000000191c3f8 == (code *)0x0) {
              pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
            }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c3f8)(lVar3,uVar4);
            return;
          }
          goto LAB_00c582e4;
        }
      }
      else if (0 < iVar1) {
        uVar4 = *(undefined8 *)((long)__this + 0x50);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__Instantiate_object_
                          (uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
        *(undefined8 *)((long)__this + 0x58) = uVar4;
      }
    }
  }
  return;
}



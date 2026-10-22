// ==== public void .ctor(string DGGEHNEECCD) { }   @0xae6b0c

/* WARNING: Removing unreachable block (ram,0x00be6f6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DLOFHJEMLJG___ctor(void *__this,void *DGGEHNEECCD)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916e4b & 1) == 0) {
    func_0x00a67900(&System_Collections_ArrayList_TypeInfo);
    func_0x00a67900(&char___TypeInfo);
    func_0x00a67900(&System_Collections_Hashtable_TypeInfo);
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_IO_StringReader_TypeInfo);
    func_0x00a67900(&UnityEngine_TextAsset_var);
    func_0x00a67900(&UnityEngine_TextAsset_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_ROOT);
    func_0x00a67900(&Str_);
    bRam0000000001916e4b = 1;
  }
  uVar2 = func_0x00a67b44(_System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor(uVar2,0);
  *(undefined8 *)((long)__this + 0x10) = uVar2;
  uVar2 = func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(uVar2,0);
  *(undefined8 *)((long)__this + 0x18) = uVar2;
  System_Object___ctor(__this,0);
  uVar2 = _UnityEngine_TextAsset_var;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  plVar3 = (long *)UnityEngine_Resources__Load(DGGEHNEECCD,uVar2,0);
  if (plVar3 == (long *)0x0) {
LAB_00be6ca8:
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar3 != (long *)0x0) {
        uVar2 = UnityEngine_TextAsset__get_text(plVar3,0);
        plVar3 = (long *)func_0x00a67b44(_System_IO_StringReader_TypeInfo);
        System_IO_StringReader___ctor(plVar3,uVar2,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
        lVar8 = 0;
        do {
          if (lVar5 == 0) {
            (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
            return;
          }
          uVar4 = System_String__op_Inequality(lVar5,_Str_,0);
          lVar6 = lVar8;
          if ((uVar4 & 1) != 0) {
            iVar1 = System_String__IndexOf(lVar5,0x5b,0,0);
            if ((iVar1 == 0) && (iVar1 = System_String__IndexOf(lVar5,0x5d,0,0), 0 < iVar1)) {
              lVar8 = System_String__Substring(lVar5,1,*(int *)(lVar5 + 0x10) + -2,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar6 = System_String__ToUpper(lVar8,0);
              plVar9 = *(long **)((long)__this + 0x18);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              (**(code **)(*plVar9 + 0x308))(plVar9,lVar6,*(undefined8 *)(*plVar9 + 0x310));
            }
            else {
              lVar5 = System_String__Replace(lVar5,_Str____,_Str__,0);
              lVar6 = func_0x00a679a0(_char___TypeInfo,1);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              *(undefined2 *)(lVar6 + 0x20) = 0x3d;
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar5 = System_String__Split(lVar5,lVar6,2,0);
              lVar6 = _Str_ROOT;
              if (lVar8 != 0) {
                lVar6 = lVar8;
              }
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              if (*(int *)(lVar5 + 0x18) < 2) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(undefined8 *)(lVar5 + 0x28);
              }
              uStack_68 = *(undefined8 *)(lVar5 + 0x20);
              plVar9 = *(long **)((long)__this + 0x10);
              lStack_70 = lVar6;
              uVar7 = func_0x00a67a38(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo,&lStack_70);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50(uVar7,uVar7);
              }
              (**(code **)(*plVar9 + 0x298))(plVar9,uVar7,uVar2,*(undefined8 *)(*plVar9 + 0x2a0));
            }
          }
          lVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
          lVar8 = lVar6;
        } while( true );
      }
      goto LAB_00be6f68;
    }
    func_0x00a67914(&System_IO_FileNotFoundException_TypeInfo);
    plVar3 = (long *)func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_Unable_to_locate__translate);
    System_IO_FileNotFoundException___ctor(plVar3,uVar2,0);
    uVar2 = func_0x00a67914(&Method_DLOFHJEMLJG__ctor__);
    func_0x00a67a20(plVar3,uVar2);
  }
  else if ((*(byte *)(_UnityEngine_TextAsset_TypeInfo + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
          (*(long *)(*(long *)(*plVar3 + 200) +
                     (ulong)*(byte *)(_UnityEngine_TextAsset_TypeInfo + 0x130) * 8 + -8) ==
           _UnityEngine_TextAsset_TypeInfo)) goto LAB_00be6ca8;
  func_0x00a67eec(plVar3);
LAB_00be6f68:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



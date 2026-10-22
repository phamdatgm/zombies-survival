// ==== public static void CMOPLEDPKKH(bool PODMFKIIGJD) { }   @0xaed6ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__CMOPLEDPKKH(bool PODMFKIIGJD)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000001916ea5 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916ea5 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Application__get_isEditor(0);
  if ((uVar2 & 1) == 0) {
    JCHCJLKJJNF__HMHJLCKJCAN();
    JCHCJLKJJNF__AEPHMLOMPBG(0);
  }
  if (PODMFKIIGJD) {
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x20);
      if (0 < iVar1) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50(0,
                              _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                             );
        }
        System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
        *(undefined8 *)(lVar3 + 0x20) = 0xffffffff00000000;
        *(undefined4 *)(lVar3 + 0x28) = 0;
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x18),0,iVar1,0);
      }
      *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== public void .ctor() { }   @0xaedf48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager___ctor(void *__this)

{
  *(undefined4 *)((long)__this + 0x20) = 0x40a00000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private static void .cctor() { }   @0xaef3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916eae & 1) == 0) {
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLFNENAL__
                   );
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916eae = 1;
  }
  **(undefined2 **)(_NotificationsManager_TypeInfo + 0xb8) = 0;
  uVar1 = func_0x00a67b44(
                         _System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLFNENAL__
                         );
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
            );
  *(undefined8 *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8) = uVar1;
  return;
}



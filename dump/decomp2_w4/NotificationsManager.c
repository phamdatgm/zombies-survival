// ==== public static void LLFJNKAPDIM(string DJBBLEPCHOA, int HGOAMHBFBIH, bool EKONHEEHPBE) { }   @0xaed7b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__LLFJNKAPDIM(void *DJBBLEPCHOA,int HGOAMHBFBIH,bool EKONHEEHPBE)

{
  ulong uVar1;
  long lVar2;
  void *CIDKMFLFJEJ;
  byte *pbVar3;
  long lStack_38;
  
  if ((bRam0000000001916ea6 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_PushLocalDelete_with_key__);
    bRam0000000001916ea6 = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pbVar3 = *(byte **)(_NotificationsManager_TypeInfo + 0xb8);
  if ((EKONHEEHPBE & *pbVar3) != 0) {
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      pbVar3 = *(byte **)(_NotificationsManager_TypeInfo + 0xb8);
    }
    if (*(long *)(pbVar3 + 8) != 0) {
      uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                        (*(long *)(pbVar3 + 8),DJBBLEPCHOA,
                         _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                        );
      if ((uVar1 & 1) == 0) goto LAB_00bed8d4;
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
      if (lVar2 != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                  (lVar2,DJBBLEPCHOA,&lStack_38,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
        if (lStack_38 != 0) {
          *(undefined1 *)(lStack_38 + 0x10) = 0;
          goto LAB_00bed8d4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00bed8d4:
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_PushLocalDelete_with_key__,DJBBLEPCHOA,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isEditor(0);
  if ((uVar1 & 1) == 0) {
    JCHCJLKJJNF__JHEDFDCJBDE(HGOAMHBFBIH,0);
  }
  return;
}


// ==== public static void HLMKMIFKIBM() { }   @0xaedf58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HLMKMIFKIBM(void)

{
  void *FELHOKFDBBD;
  undefined8 uStack_28;
  
  if ((bRam0000000001916eaa & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_Bla_bla__test_notifications_);
    func_0x00a67900(&Str_test);
    bRam0000000001916eaa = 1;
  }
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_28 = System_DateTime__get_Now(0);
  FELHOKFDBBD = (void *)System_DateTime__AddSeconds(0x403e000000000000,&uStack_28,0);
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_NotificationsManager_TypeInfo);
  }
  NotificationsManager__KJLOEDMCBNA(FELHOKFDBBD,_Str_Bla_bla__test_notifications_,_Str_test,1);
  return;
}


// ==== public static void KJLOEDMCBNA(DateTime FELHOKFDBBD, string NGLPJEMCGCD, string DJBBLEPCHOA, int HGOAMHBFBIH) { }   @0xaee030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__KJLOEDMCBNA
               (void *FELHOKFDBBD,void *NGLPJEMCGCD,void *DJBBLEPCHOA,int HGOAMHBFBIH)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  void *pvStack_48;
  
  pvStack_48 = FELHOKFDBBD;
  if ((bRam0000000001916eaf & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BFECKMLPMOK_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&NotificationsManager_KNHJLFNENAL_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str___key__);
    func_0x00a67900(&Str_Zombie_Derby__Pixel_Survival);
    func_0x00a67900(&Str_app_icon);
    func_0x00a67900(&Str_PushLocalStart__);
    bRam0000000001916eaf = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pcVar5 = *(char **)(_NotificationsManager_TypeInfo + 0xb8);
  if (*pcVar5 == '\0') {
    return;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    pcVar5 = *(char **)(_NotificationsManager_TypeInfo + 0xb8);
  }
  if (*(long *)(pcVar5 + 8) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (*(long *)(pcVar5 + 8),DJBBLEPCHOA,
                       _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                      );
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_NotificationsManager_TypeInfo);
    }
    lVar6 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
    lVar2 = func_0x00a67b44(_NotificationsManager_KNHJLFNENAL_TypeInfo);
    *(undefined1 *)(lVar2 + 0x10) = 1;
    System_Object___ctor(lVar2,0);
    *(void **)(lVar2 + 0x18) = FELHOKFDBBD;
    *(int *)(lVar2 + 0x20) = HGOAMHBFBIH;
    if (lVar6 != 0) {
      if ((uVar1 & 1) == 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                  (lVar6,DJBBLEPCHOA,lVar2,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
      }
      else {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item
                  (lVar6,DJBBLEPCHOA,lVar2,
                   _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                  );
      }
      if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Application__get_isEditor(0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = System_DateTime__get_Now(0);
        uVar3 = System_DateTime__op_Subtraction(FELHOKFDBBD,uVar3,0);
        pvVar4 = (void *)func_0x00a67b44(_BFECKMLPMOK_TypeInfo);
        BFECKMLPMOK___ctor(pvVar4,0);
        if (pvVar4 == (void *)0x0) goto LAB_00bee344;
        *(int *)((long)pvVar4 + 0x10) = HGOAMHBFBIH;
        *(undefined8 *)((long)pvVar4 + 0x38) = uVar3;
        uVar3 = _Str_Zombie_Derby__Pixel_Survival;
        *(undefined1 *)((long)pvVar4 + 0x59) = 1;
        *(undefined4 *)((long)pvVar4 + 0x94) = 1;
        *(undefined8 *)((long)pvVar4 + 0x40) = uVar3;
        *(void **)((long)pvVar4 + 0x48) = NGLPJEMCGCD;
        *(undefined8 *)((long)pvVar4 + 0x50) = uVar3;
        *(undefined8 *)((long)pvVar4 + 0xa8) = _Str_app_icon;
        JCHCJLKJJNF__PKKNJHMEIKJ(pvVar4);
      }
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = System_DateTime__ToString(&pvStack_48,0);
      pvVar4 = (void *)System_String__Concat(_Str_PushLocalStart__,uVar3,_Str___key__,DJBBLEPCHOA,0)
      ;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(pvVar4,false);
      return;
    }
  }
LAB_00bee344:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



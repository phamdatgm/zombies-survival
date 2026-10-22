// ==== public static void NINLDPJFMPD() { }   @0xaedaa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__NINLDPJFMPD(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  if ((bRam0000000001916ea8 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                   );
    func_0x00a67900(&
                    Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                   );
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str_Delete_NOTIFICATION__);
    bRam0000000001916ea8 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_68 = 0;
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator
              (lVar2,&lStack_d8,
               _Method_System_Collections_Generic_Dictionary_string__NotificationsManager_KNHJLF);
    uStack_98 = uStack_d0;
    lStack_a0 = lStack_d8;
    uStack_88 = uStack_c0;
    uStack_90 = uStack_c8;
    uStack_80 = uStack_b8;
    while( true ) {
      uVar3 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext
                        (&lStack_a0,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                        );
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose
                  (&lStack_a0,
                   _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                  );
        return;
      }
      func_0x00b7fb78(&lStack_a0,&lStack_d8,
                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__NotificationsMan
                     );
      lStack_b0 = lStack_d8;
      uStack_a8 = uStack_d0;
      func_0x00b7fd54(&lStack_b0,&lStack_d8,
                      _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                     );
      if (lStack_d8 == 0) break;
      uVar5 = *(undefined8 *)(lStack_d8 + 0x18);
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = System_DateTime__get_Now(0);
      uStack_68 = System_DateTime__op_Subtraction(uVar5,uVar4,0);
      func_0x00b7fd54(&lStack_b0,&lStack_d8,
                      _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                     );
      if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(char *)(lStack_d8 + 0x10) != '\0') {
        if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        dVar6 = (double)System_TimeSpan__get_TotalSeconds(&uStack_68,0);
        if (dVar6 < 15.0) {
          func_0x00b7fc68(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          uVar5 = System_String__Concat(_Str_Delete_NOTIFICATION__,lStack_d8,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__GEMDEAMAGPG(uVar5,0,0);
          func_0x00b7fc68(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          lVar2 = lStack_d8;
          func_0x00b7fd54(&lStack_b0,&lStack_d8,
                          _Method_System_Collections_Generic_KeyValuePair_string__NotificationsManager_KNHJ
                         );
          if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(undefined4 *)(lStack_d8 + 0x20);
          if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          NotificationsManager__LLFJNKAPDIM(lVar2,uVar1,1);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KHDFDGMBOIJ() { }   @0xaee57c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__KHDFDGMBOIJ(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001916eac & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Str_Notifications_Manager__Init);
    bRam0000000001916eac = 1;
  }
  if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(char **)(_NotificationsManager_TypeInfo + 0xb8) != '\0') {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = Main__FAOGGIELDDF(0);
  if (iVar1 < 0x21) {
LAB_00bee75c:
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    **(undefined1 **)(_NotificationsManager_TypeInfo + 0xb8) = 1;
    UnityEngine_Behaviour__set_enabled(__this,1,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_Notifications_Manager__Init,0,0);
    NotificationsManager__CMOPLEDPKKH(1);
    if ((bRam0000000001916eab & 1) == 0) {
      func_0x00a67900(&System_DateTime_TypeInfo);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&NotificationsManager_TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str_3days);
      func_0x00a67900(&Str_NOTIF_1);
      func_0x00a67900(&Str_NOTIF_2);
      func_0x00a67900(&Str_7days);
      bRam0000000001916eab = 1;
    }
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(char **)(_NotificationsManager_TypeInfo + 0xb8) == '\0') {
      return;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x88) != 1) {
        return;
      }
      if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      System_DateTime__get_Now(0);
      uVar2 = System_DateTime__AddDays(0x4008000000000000,&stack0xffffffffffffffd8,0);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Translate_TypeInfo);
      }
      if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
        uVar3 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_NOTIF_1,0);
        if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_NotificationsManager_TypeInfo);
        }
        NotificationsManager__KJLOEDMCBNA(uVar2,uVar3,_Str_3days,1);
        System_DateTime__get_Now(0);
        uVar2 = System_DateTime__AddDays(0x401c000000000000,&stack0xffffffffffffffd8,0);
        if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
          uVar3 = Translate__JJJNIPAKLJF(**(long **)(_Translate_TypeInfo + 0xb8),_Str_NOTIF_2,0);
          NotificationsManager__KJLOEDMCBNA(uVar2,uVar3,_Str_7days,2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 != 0) {
    DAFNMLEKHAD__IEECMAPKMJI(lVar4,1);
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(undefined1 *)(*(long *)(_NotificationsManager_TypeInfo + 0xb8) + 1) = 1;
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 != 0) {
      lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0);
      if (lVar4 != 0) {
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
        lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if ((lVar4 == 0) || (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0), lVar4 == 0))
        goto LAB_00bee7cc;
        uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      NotificationsManager__MLGGDIOEMLH();
      goto LAB_00bee75c;
    }
  }
LAB_00bee7cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



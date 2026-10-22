// ==== public void HCLOPHBLMOI() { }   @0xaede4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HCLOPHBLMOI(void *__this)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((bRam0000000001916ea9 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    bRam0000000001916ea9 = 1;
  }
  fVar2 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (*(float *)((long)__this + 0x20) < fVar2 - *(float *)((long)__this + 0x24)) {
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
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar1 + 0x88) == 1) {
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      NotificationsManager__NINLDPJFMPD();
    }
    uVar3 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)((long)__this + 0x24) = uVar3;
  }
  return;
}


// ==== public static void HFGMIIHKBPC(EventContest FMJNFPDPLGM) { }   @0xaeea0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void NotificationsManager__HFGMIIHKBPC(void *FMJNFPDPLGM)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  void *CIDKMFLFJEJ;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  byte abStack_60 [4];
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if ((bRam0000000001916ead & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_NOTIFICATION_ENDING);
    func_0x00a67900(&Str___Att__);
    func_0x00a67900(&Str___lvl_id__);
    func_0x00a67900(&Str_ev_reward);
    func_0x00a67900(&Str_Error_in_StartEventNotifications__lvl__);
    func_0x00a67900(&Str___HaveResults__);
    func_0x00a67900(&Str_Ev_ID__);
    func_0x00a67900(&Str_EVENT_NOTIFICATON_START);
    func_0x00a67900(&Str_StartEventNotifications__);
    func_0x00a67900(&Str_EVENT_NOTIFICATON_REWARD);
    func_0x00a67900(&Str___playerLevel_EventId__);
    func_0x00a67900(&Str___playerLevel__);
    func_0x00a67900(&Str___TimeLeft__);
    func_0x00a67900(&Str_ev_ending);
    func_0x00a67900(&Str_ev_start);
    bRam0000000001916ead = 1;
  }
  uStack_58 = 0;
  uStack_5c = 0;
  abStack_60[0] = 0;
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
  lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar11 == 0) goto LAB_00bef304;
  if (*(int *)(lVar11 + 0x88) != 1) {
    return;
  }
  if (FMJNFPDPLGM == (void *)0x0) goto LAB_00bef304;
  if ((*(uint *)((long)FMJNFPDPLGM + 0x18) & 0xfffffffe) == 6) {
    return;
  }
  piVar2 = (int *)((long)FMJNFPDPLGM + 0x10);
  uVar4 = System_Int32__ToString(piVar2,0);
  uVar4 = System_String__Concat(_Str_StartEventNotifications__,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar4,0,0);
  iVar1 = *(int *)((long)FMJNFPDPLGM + 0x10) + 10;
  if (*(int *)((long)FMJNFPDPLGM + 0x1c) != 1) {
    if (*(int *)((long)FMJNFPDPLGM + 0x1c) != 0) {
      return;
    }
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)iVar3,&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bef304;
    uVar5 = Translate__JJJNIPAKLJF
                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_NOTIFICATON_START,0);
    uVar6 = System_Int32__ToString(piVar2,0);
    puVar12 = (undefined8 *)&Str_ev_start;
    goto LAB_00beecf4;
  }
  iVar3 = *(int *)((long)FMJNFPDPLGM + 0x14) + 100;
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar7 = (long *)Level__FHMGLDDPEDJ(iVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar11 == 0) goto LAB_00bef304;
  plVar8 = (long *)DAFNMLEKHAD__PJDAAMCNMHJ(lVar11,iVar3);
  uVar4 = _Str_Error_in_StartEventNotifications__lvl__;
  if ((plVar7 == (long *)0x0) || (plVar8 == (long *)0x0)) {
    if (plVar7 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    uVar6 = _Str___playerLevel__;
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    CIDKMFLFJEJ = (void *)System_String__Concat(uVar4,uVar5,uVar6,uVar9,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(CIDKMFLFJEJ);
    return;
  }
  lVar11 = func_0x00a679a0(_string___TypeInfo,0xc);
  if (lVar11 == 0) goto LAB_00bef304;
  if (*(int *)(lVar11 + 0x18) == 0) {
LAB_00bef308:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar11 + 0x20) = _Str_Ev_ID__;
  uVar4 = System_Int32__ToString(piVar2,0);
  if ((*(uint *)(lVar11 + 0x18) < 2) ||
     (*(undefined8 *)(lVar11 + 0x28) = uVar4, *(uint *)(lVar11 + 0x18) == 2)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x30) = _Str___lvl_id__;
  if (plVar7[10] == 0) goto LAB_00bef304;
  uVar4 = System_Int32__ToString(plVar7[10] + 0x10,0);
  if ((*(uint *)(lVar11 + 0x18) < 4) ||
     (*(undefined8 *)(lVar11 + 0x38) = uVar4, *(uint *)(lVar11 + 0x18) == 4)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x40) = _Str___playerLevel_EventId__;
  uStack_5c = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 6) ||
     (*(undefined8 *)(lVar11 + 0x48) = uVar4, *(uint *)(lVar11 + 0x18) == 6)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x50) = _Str___Att__;
  uStack_5c = *(undefined4 *)((long)plVar8 + 0x3c);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 8) ||
     (*(undefined8 *)(lVar11 + 0x58) = uVar4, *(uint *)(lVar11 + 0x18) == 8)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x60) = _Str___TimeLeft__;
  uStack_5c = EventContest__get_TimeLeft(FMJNFPDPLGM);
  uVar4 = System_Int32__ToString(&uStack_5c,0);
  if ((*(uint *)(lVar11 + 0x18) < 10) ||
     (*(undefined8 *)(lVar11 + 0x68) = uVar4, *(uint *)(lVar11 + 0x18) == 10)) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x70) = _Str___HaveResults__;
  abStack_60[0] = DJKGLJOCFCE__EDAGFIGCPAE(plVar8,0);
  abStack_60[0] = abStack_60[0] & 1;
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_bool_TypeInfo);
  }
  uVar4 = System_Boolean__ToString(abStack_60,0);
  if (*(uint *)(lVar11 + 0x18) < 0xc) goto LAB_00bef308;
  *(undefined8 *)(lVar11 + 0x78) = uVar4;
  uVar4 = System_String__Concat(lVar11,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar4,0,0);
  iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
  if (iVar3 < 0x1c21) {
LAB_00bef014:
    iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
    if ((iVar3 == *piVar2) && (0 < *(int *)((long)plVar8 + 0x3c))) {
      uVar4 = System_Int32__ToString(piVar2,0);
      uVar4 = System_String__Concat(_Str_ev_ending,uVar4,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__LLFJNKAPDIM(uVar4,iVar1,0);
    }
  }
  else {
    if (plVar7[10] == 0) goto LAB_00bef304;
    if ((((*(int *)(plVar7[10] + 0x10) != *piVar2) ||
         (iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0), iVar3 != *piVar2)) ||
        (*(int *)((long)plVar8 + 0x3c) != 0)) &&
       (iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0), iVar3 == *piVar2)) goto LAB_00bef014;
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)(iVar3 + -0x1c20),&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) == 0) goto LAB_00bef304;
    uVar5 = Translate__JJJNIPAKLJF
                      (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_NOTIFICATION_ENDING,0);
    uVar6 = System_Int32__ToString(piVar2,0);
    uVar6 = System_String__Concat(_Str_ev_ending,uVar6,0);
    if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_NotificationsManager_TypeInfo);
    }
    NotificationsManager__KJLOEDMCBNA(uVar4,uVar5,uVar6,iVar1);
  }
  if (plVar7[10] != 0) {
    if (*(int *)(plVar7[10] + 0x10) != *piVar2) {
      return;
    }
    iVar3 = DJKGLJOCFCE__EECPDELFCIL(plVar8,0);
    if (iVar3 != *piVar2) {
      return;
    }
    if (*(int *)((long)plVar8 + 0x3c) < 1) {
      return;
    }
    uVar10 = DJKGLJOCFCE__EDAGFIGCPAE(plVar8,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_58 = System_DateTime__get_Now(0);
    iVar3 = EventContest__get_TimeLeft(FMJNFPDPLGM);
    uVar4 = System_DateTime__AddSeconds((double)iVar3,&uStack_58,0);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Translate_TypeInfo);
    }
    if (**(long **)(_Translate_TypeInfo + 0xb8) != 0) {
      uVar5 = Translate__JJJNIPAKLJF
                        (**(long **)(_Translate_TypeInfo + 0xb8),_Str_EVENT_NOTIFICATON_REWARD,0);
      uVar6 = System_Int32__ToString(piVar2,0);
      puVar12 = (undefined8 *)&Str_ev_reward;
LAB_00beecf4:
      uVar6 = System_String__Concat(*puVar12,uVar6,0);
      if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_NotificationsManager_TypeInfo);
      }
      NotificationsManager__KJLOEDMCBNA(uVar4,uVar5,uVar6,iVar1);
      return;
    }
  }
LAB_00bef304:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



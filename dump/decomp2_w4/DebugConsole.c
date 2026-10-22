// ==== public string AFJJHCLKNPE() { }   @0xb4ccb4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Assets_SimpleAndroidNotifications_Helpers_DebugConsole__AFJJHCLKNPE(void *__this)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = *(long **)((long)__this + 0x68);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OnGUI() { }   @0xb4ce94

/* WARNING: Removing unreachable block (ram,0x014b1470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__OnGUI(void *__this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  byte bVar11;
  float *pfVar12;
  long lVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  if ((bRam0000000001917177 & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    func_0x00a67900(&Str_Console);
    bRam0000000001917177 = 1;
  }
  if (*(char *)((long)__this + 0x50) == '\0') {
    return;
  }
  uVar23 = *(undefined4 *)((long)__this + 0x20);
  uVar19 = *(undefined4 *)((long)__this + 0x24);
  uVar22 = *(undefined4 *)((long)__this + 0x28);
  uVar18 = *(undefined4 *)((long)__this + 0x2c);
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_GUI__Button(uVar23,uVar19,uVar22,uVar18,_Str_Console,0);
  bVar11 = *(byte *)((long)__this + 0x52);
  if ((uVar7 & 1) != 0) {
    bVar11 = bVar11 ^ 1;
    *(byte *)((long)__this + 0x52) = bVar11;
  }
  if (bVar11 == 0) {
    return;
  }
  uVar18 = *(undefined4 *)((long)__this + 0x30);
  uVar19 = *(undefined4 *)((long)__this + 0x34);
  uVar22 = *(undefined4 *)((long)__this + 0x38);
  uVar23 = *(undefined4 *)((long)__this + 0x3c);
  uVar25 = *(undefined4 *)((long)__this + 0x54);
  uVar24 = *(undefined4 *)((long)__this + 0x58);
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar18 = UnityEngine_GUI__BeginScrollView(uVar18,uVar19,uVar22,uVar23,uVar25,uVar24,0);
  plVar8 = *(long **)((long)__this + 0x60);
  *(undefined4 *)((long)__this + 0x54) = uVar18;
  *(undefined4 *)((long)__this + 0x58) = uVar19;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar15 = *(float *)((long)__this + 0x48);
  uVar18 = *(undefined4 *)((long)__this + 0x4c);
  uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  fVar21 = 0.0;
  UnityEngine_GUI__TextArea(0,0,fVar15 + -50.0,uVar18,uVar9,0);
  if ((bRam000000000191ce2c & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    bRam000000000191ce2c = 1;
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191ce2d & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUIUtility_TypeInfo);
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    func_0x00a67900(&UnityEngine_ScrollViewState_TypeInfo);
    bRam000000000191ce2d = 1;
  }
  if (*(int *)(_UnityEngine_GUIUtility_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_GUIUtility__CheckOnGUI();
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar8 = *(long **)(*(long *)(_UnityEngine_GUI_TypeInfo + 0xb8) + 0x50);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  iVar5 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar8 = *(long **)(*(long *)(_UnityEngine_GUI_TypeInfo + 0xb8) + 0x50);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(_UnityEngine_ScrollViewState_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) +
                  (ulong)*(byte *)(_UnityEngine_ScrollViewState_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_ScrollViewState_TypeInfo)) {
      func_0x00a67eec(plVar8);
      if (pcRam000000000191ce70 == (code *)0x0) {
        pcRam000000000191ce70 = (code *)func_0x00a678c4(&UNK_005a4c1a);
      }
                    /* WARNING: Could not recover jumptable at 0x014b1754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191ce70)();
      return;
    }
  }
  if (pcRam000000000191ce70 == (code *)0x0) {
    pcRam000000000191ce70 = (code *)func_0x00a678c4(&UNK_005a4c1a);
  }
  (*pcRam000000000191ce70)();
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar10 = *(long **)(*(long *)(_UnityEngine_GUI_TypeInfo + 0xb8) + 0x50);
  if (plVar10 == (long *)0x0) goto LAB_014b1724;
  (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
  fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  fVar20 = *(float *)((long)plVar8 + 100);
  uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)plVar8 + 100) = uVar18;
  if ((bRam000000000191cd88 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Event_TypeInfo);
    bRam000000000191cd88 = 1;
  }
  lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
  if (lVar13 == 0) goto LAB_014b1724;
  if (pcRam000000000191cd20 == (code *)0x0) {
    pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
  }
  fVar15 = fVar15 - fVar20;
  uVar7 = (ulong)(uint)fVar15;
  iVar5 = (*pcRam000000000191cd20)(lVar13);
  if (iVar5 == 7) {
    uVar9 = *(undefined8 *)((long)plVar8 + 0x5c);
    if (cRam0000000001916788 == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916788 = '\x01';
    }
    fVar20 = (float)uVar9 - (float)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
    fVar17 = (float)((ulong)uVar9 >> 0x20) -
             (float)((ulong)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8) >> 0x20);
    if (fVar20 * fVar20 + fVar17 * fVar17 < 9.9999994e-11) goto LAB_014b0e10;
    fVar20 = (float)func_0x016ded40(0x3dcccccd);
    bVar1 = false;
    fVar17 = 0.1 / fVar15;
    bVar4 = true;
    do {
      bVar2 = bVar4;
      fVar21 = (float)uVar7;
      if (bVar2) {
        fVar16 = fVar20 * *(float *)((long)plVar8 + 0x5c);
        *(float *)((long)plVar8 + 0x5c) = fVar16;
      }
      else {
        fVar16 = fVar20 * *(float *)(plVar8 + 0xc);
        *(float *)(plVar8 + 0xc) = fVar16;
      }
      if (fVar17 <= ABS(fVar16)) {
        if (bVar2) {
          fVar21 = fVar17;
          if (0.0 <= *(float *)((long)plVar8 + 0x5c)) {
            fVar21 = -fVar17;
          }
          fVar21 = *(float *)((long)plVar8 + 0x5c) + fVar21;
          *(float *)((long)plVar8 + 0x5c) = fVar21;
          pfVar12 = (float *)(plVar8 + 8);
        }
        else {
          fVar21 = fVar17;
          if (0.0 <= *(float *)(plVar8 + 0xc)) {
            fVar21 = -fVar17;
          }
          fVar21 = *(float *)(plVar8 + 0xc) + fVar21;
          *(float *)(plVar8 + 0xc) = fVar21;
          pfVar12 = (float *)((long)plVar8 + 0x44);
        }
        uVar7 = (ulong)(uint)*pfVar12;
        *pfVar12 = *pfVar12 + fVar15 * fVar21;
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        uVar18 = UnityEngine_Event__get_mousePosition();
        bVar1 = true;
        *(undefined4 *)((long)plVar8 + 0x4c) = uVar18;
        *(int *)(plVar8 + 10) = (int)uVar7;
        *(long *)((long)plVar8 + 0x54) = plVar8[8];
      }
      else {
        if (!bVar2) {
          *(undefined4 *)(plVar8 + 0xc) = 0;
          break;
        }
        *(undefined4 *)((long)plVar8 + 0x5c) = 0;
      }
      fVar21 = (float)uVar7;
      bVar4 = false;
    } while (bVar2);
    uVar9 = *(undefined8 *)((long)plVar8 + 0x5c);
    if (cRam0000000001916788 == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916788 = '\x01';
    }
    fVar20 = (float)uVar9 - (float)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
    fVar17 = (float)((ulong)uVar9 >> 0x20) -
             (float)((ulong)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8) >> 0x20);
    if (9.9999994e-11 <= fVar20 * fVar20 + fVar17 * fVar17) {
      if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (pcRam000000000191ce00 == (code *)0x0) {
        pcRam000000000191ce00 = (code *)func_0x00a678c4(&UNK_005b9747);
      }
      (*pcRam000000000191ce00)();
    }
  }
  else {
LAB_014b0e10:
    bVar1 = false;
  }
  if ((bRam000000000191cd88 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Event_TypeInfo);
    bRam000000000191cd88 = 1;
  }
  lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
  if (lVar13 == 0) goto LAB_014b1724;
  if (pcRam000000000191cd20 == (code *)0x0) {
    pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
  }
  iVar5 = (*pcRam000000000191cd20)(lVar13);
  if (iVar5 == 6) {
LAB_014b0f78:
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 6) {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
      fVar20 = (float)UnityEngine_Event__get_mousePosition();
      if ((((*(float *)(plVar8 + 2) <= fVar20) &&
           (fVar20 < *(float *)(plVar8 + 2) + *(float *)(plVar8 + 3))) &&
          (*(float *)((long)plVar8 + 0x14) <= fVar21)) &&
         (fVar21 < *(float *)((long)plVar8 + 0x14) + *(float *)((long)plVar8 + 0x1c))) {
        fVar15 = *(float *)(plVar8 + 8);
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        fVar21 = (float)UnityEngine_Event__get_delta();
        fVar15 = fVar15 + fVar21 * 20.0;
        fVar21 = *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5);
        if (fVar15 <= *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5)) {
          fVar21 = fVar15;
        }
        fVar20 = fVar21;
        if (fVar15 < 0.0) {
          fVar20 = 0.0;
        }
        *(float *)(plVar8 + 8) = fVar20;
        fVar15 = *(float *)((long)plVar8 + 0x44);
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        UnityEngine_Event__get_delta();
        fVar15 = fVar15 + fVar21 * 20.0;
        fVar21 = *(float *)((long)plVar8 + 0x3c) - *(float *)((long)plVar8 + 0x2c);
        if (fVar15 <= fVar21) {
          fVar21 = fVar15;
        }
        if (fVar15 < 0.0) {
          fVar21 = 0.0;
        }
        *(float *)((long)plVar8 + 0x44) = fVar21;
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        UnityEngine_Event__Use();
        goto LAB_014b11ac;
      }
    }
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1e) {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
      if (lVar13 == 0) goto LAB_014b1724;
      if (pcRam000000000191ccc0 == (code *)0x0) {
        pcRam000000000191ccc0 = (code *)func_0x00a678c4(&UNK_005a57b2);
      }
      uVar6 = (*pcRam000000000191ccc0)(lVar13);
      if ((uVar6 >> 2 & 1) != 0) {
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        fVar20 = (float)UnityEngine_Event__get_mousePosition();
        if (((*(float *)(plVar8 + 2) <= fVar20) &&
            (fVar20 < *(float *)(plVar8 + 2) + *(float *)(plVar8 + 3))) &&
           ((*(float *)((long)plVar8 + 0x14) <= fVar21 &&
            (fVar21 < *(float *)((long)plVar8 + 0x14) + *(float *)((long)plVar8 + 0x1c))))) {
          *(undefined1 *)((long)plVar8 + 0x49) = 1;
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          uVar18 = UnityEngine_Event__get_mousePosition();
          *(undefined4 *)((long)plVar8 + 0x4c) = uVar18;
          *(float *)(plVar8 + 10) = fVar21;
          *(long *)((long)plVar8 + 0x54) = plVar8[8];
          if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar13 = plVar8[2];
          uVar19 = *(undefined4 *)((long)plVar8 + 0x14);
          lVar3 = plVar8[3];
          uVar22 = *(undefined4 *)((long)plVar8 + 0x1c);
          uVar18 = *(undefined4 *)(*(long *)(_UnityEngine_GUI_TypeInfo + 0xb8) + 0x24);
          if (*(int *)(_UnityEngine_GUIUtility_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          UnityEngine_GUIUtility__GetControlID((int)lVar13,uVar19,(int)lVar3,uVar22,uVar18,2);
          UnityEngine_GUIUtility__set_hotControl();
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__Use();
          goto joined_r0x014b14a4;
        }
      }
    }
    pcVar14 = (char *)((long)plVar8 + 0x49);
    if (*pcVar14 != '\0') {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
      if (lVar13 == 0) goto LAB_014b1724;
      if (pcRam000000000191cd20 == (code *)0x0) {
        pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
      }
      iVar5 = (*pcRam000000000191cd20)(lVar13);
      if (iVar5 == 0x1f) {
        *pcVar14 = '\0';
      }
      else if (*pcVar14 != '\0') {
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
        if (lVar13 == 0) goto LAB_014b1724;
        if (pcRam000000000191cd20 == (code *)0x0) {
          pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
        }
        iVar5 = (*pcRam000000000191cd20)(lVar13);
        if (iVar5 == 0x20) {
          lVar13 = plVar8[8];
          fVar21 = *(float *)((long)plVar8 + 0x54);
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) {
LAB_014b1724:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          fVar20 = (float)UnityEngine_Event__get_mousePosition();
          fVar21 = fVar21 - (fVar20 - *(float *)((long)plVar8 + 0x4c));
          fVar20 = *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5);
          if (fVar21 <= *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5)) {
            fVar20 = fVar21;
          }
          fVar17 = fVar20;
          if (fVar21 < 0.0) {
            fVar17 = 0.0;
          }
          *(float *)(plVar8 + 8) = fVar17;
          fVar21 = *(float *)(plVar8 + 0xb);
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__get_mousePosition();
          fVar21 = fVar21 - (fVar20 - *(float *)(plVar8 + 10));
          fVar20 = *(float *)((long)plVar8 + 0x3c) - *(float *)((long)plVar8 + 0x2c);
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          if (fVar21 < 0.0) {
            fVar20 = 0.0;
          }
          *(float *)((long)plVar8 + 0x44) = fVar20;
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__Use();
          fVar21 = fVar15 * 10.0;
          if (fVar15 * 10.0 < 0.0) {
            fVar21 = 0.0;
          }
          fVar20 = (float)*(undefined8 *)((long)plVar8 + 0x5c);
          fVar17 = (float)((ulong)*(undefined8 *)((long)plVar8 + 0x5c) >> 0x20);
          *(ulong *)((long)plVar8 + 0x5c) =
               CONCAT44(fVar17 + (((float)((ulong)plVar8[8] >> 0x20) -
                                  (float)((ulong)lVar13 >> 0x20)) / fVar15 - fVar17) * fVar21,
                        fVar20 + (((float)plVar8[8] - (float)lVar13) / fVar15 - fVar20) * fVar21);
          goto LAB_014b11ac;
        }
      }
    }
  }
  else {
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1e) goto LAB_014b0f78;
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1f) goto LAB_014b0f78;
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x20) goto LAB_014b0f78;
  }
joined_r0x014b14a4:
  if (!bVar1) {
    return;
  }
LAB_014b11ac:
  if (*(float *)(plVar8 + 8) < 0.0) {
    *(undefined4 *)(plVar8 + 8) = 0;
  }
  if (*(float *)((long)plVar8 + 0x44) < 0.0) {
    *(undefined4 *)((long)plVar8 + 0x44) = 0;
  }
  *(undefined1 *)(plVar8 + 9) = 1;
  return;
}



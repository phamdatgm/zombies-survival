// ==== public static int PKKNJHMEIKJ(BFECKMLPMOK BPNNLKAFIGF) { }   @0xb5223c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int JCHCJLKJJNF__PKKNJHMEIKJ(void *BPNNLKAFIGF)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  double dVar14;
  long lStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined4 uStack_6c;
  long lStack_68;
  
  if ((bRam0000000001917198 & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&Method_System_Linq_Enumerable_Select_int__string___);
    func_0x00a67900(&Method_System_Linq_Enumerable_ToArray_string___);
    func_0x00a67900(&System_Func_int__string__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&long_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Method_JCHCJLKJJNF___c_DIECIEPEIHN__);
    func_0x00a67900(&JCHCJLKJJNF___c_TypeInfo);
    func_0x00a67900(&Str_SetNotification);
    func_0x00a67900(&Str_com_unity3d_player_UnityPlayerActivity);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam0000000001917198 = 1;
  }
  if (BPNNLKAFIGF == (void *)0x0) goto LAB_00c52bb0;
  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  dVar14 = (double)System_TimeSpan__get_TotalMilliseconds((long)BPNNLKAFIGF + 0x38,0);
  lVar9 = -0x8000000000000000;
  if (dVar14 != INFINITY) {
    lVar9 = (long)dVar14;
  }
  if (*(char *)((long)BPNNLKAFIGF + 0xc0) == '\0') {
    lStack_88 = 0;
  }
  else {
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    dVar14 = (double)System_TimeSpan__get_TotalMilliseconds((long)BPNNLKAFIGF + 200,0);
    lStack_88 = -0x8000000000000000;
    if (dVar14 != INFINITY) {
      lStack_88 = (long)dVar14;
    }
  }
  uVar10 = *(undefined8 *)((long)BPNNLKAFIGF + 0x70);
  if (*(int *)(_JCHCJLKJJNF___c_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = _Str__;
  lVar11 = *(long *)(*(long *)(_JCHCJLKJJNF___c_TypeInfo + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(_JCHCJLKJJNF___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = **(undefined8 **)(_JCHCJLKJJNF___c_TypeInfo + 0xb8);
    lVar11 = func_0x00a67b44(_System_Func_int__string__TypeInfo);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar11,uVar12,_Method_JCHCJLKJJNF___c_DIECIEPEIHN__,0);
    *(long *)(*(long *)(_JCHCJLKJJNF___c_TypeInfo + 0xb8) + 8) = lVar11;
  }
  uVar10 = System_Linq_Enumerable__Select___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
                     (uVar10,lVar11,_Method_System_Linq_Enumerable_Select_int__string___);
  uVar10 = System_Linq_Enumerable__ToArray___Il2CppFullySharedGenericType_
                     (uVar10,_Method_System_Linq_Enumerable_ToArray_string___);
  lVar11 = System_String__Join(uVar2,uVar10,0);
  lVar5 = JCHCJLKJJNF__AFJAAIMFNDF();
  plVar6 = (long *)func_0x00a679a0(_object___TypeInfo,0x1b);
  lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)((long)BPNNLKAFIGF + 0x10));
  lVar7 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
  if (plVar6 == (long *)0x0) goto LAB_00c52bb0;
  if ((lVar7 == 0) || (lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0))
  {
    puVar13 = (uint *)(plVar6 + 3);
    uVar4 = *puVar13;
    if (uVar4 == 0) goto LAB_00c52ba0;
    plVar6[4] = lVar7;
    uVar10 = _Str_SetNotification;
    lVar7 = _Str_;
    if (*(long *)((long)BPNNLKAFIGF + 0x18) != 0) {
      lVar7 = *(long *)((long)BPNNLKAFIGF + 0x18);
    }
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 2) goto LAB_00c52ba0;
    plVar6[5] = lVar7;
    lVar7 = _Str_;
    if (*(long *)((long)BPNNLKAFIGF + 0x20) != 0) {
      lVar7 = *(long *)((long)BPNNLKAFIGF + 0x20);
    }
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 3) goto LAB_00c52ba0;
    plVar6[6] = lVar7;
    lVar7 = *(long *)((long)BPNNLKAFIGF + 0x28);
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 4) goto LAB_00c52ba0;
    plVar6[7] = lVar7;
    lVar7 = *(long *)((long)BPNNLKAFIGF + 0x30);
    if (lVar7 != 0) {
      lVar8 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) goto LAB_00c52ba4;
      uVar4 = *puVar13;
    }
    if (uVar4 < 5) goto LAB_00c52ba0;
    plVar6[8] = lVar7;
    lStack_68 = lVar9;
    lVar9 = func_0x00a67a38(_long_TypeInfo,&lStack_68);
    if ((lVar9 == 0) || (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)
       ) {
      if (*puVar13 < 6) goto LAB_00c52ba0;
      plVar6[9] = lVar9;
      cVar1 = *(char *)((long)BPNNLKAFIGF + 0xc0);
      if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uStack_6c = System_Convert__ToInt32(cVar1 != '\0',0);
      lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
      if ((lVar9 == 0) ||
         (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
        if (*puVar13 < 7) goto LAB_00c52ba0;
        plVar6[10] = lVar9;
        lStack_78 = lStack_88;
        lVar9 = func_0x00a67a38(_long_TypeInfo,&lStack_78);
        if ((lVar9 == 0) ||
           (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
          uVar4 = *puVar13;
          if (uVar4 < 8) goto LAB_00c52ba0;
          plVar6[0xb] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x40);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 9) goto LAB_00c52ba0;
          plVar6[0xc] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x48);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 10) goto LAB_00c52ba0;
          plVar6[0xd] = lVar9;
          lVar9 = *(long *)((long)BPNNLKAFIGF + 0x50);
          if (lVar9 != 0) {
            lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_00c52ba4;
            uVar4 = *puVar13;
          }
          if (uVar4 < 0xb) goto LAB_00c52ba0;
          plVar6[0xe] = lVar9;
          uStack_7c = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x58),0);
          lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_7c);
          if ((lVar9 == 0) ||
             (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
            if (*puVar13 < 0xc) goto LAB_00c52ba0;
            plVar6[0xf] = lVar9;
            uStack_80 = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x59),0);
            lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_80);
            if ((lVar9 == 0) ||
               (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
              uVar4 = *puVar13;
              if (uVar4 < 0xd) goto LAB_00c52ba0;
              plVar6[0x10] = lVar9;
              lVar9 = _Str_;
              if (*(long *)((long)BPNNLKAFIGF + 0x60) != 0) {
                lVar9 = *(long *)((long)BPNNLKAFIGF + 0x60);
              }
              if (lVar9 != 0) {
                lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                if (lVar7 == 0) goto LAB_00c52ba4;
                uVar4 = *puVar13;
              }
              if (uVar4 < 0xe) goto LAB_00c52ba0;
              plVar6[0x11] = lVar9;
              cVar1 = *(char *)((long)BPNNLKAFIGF + 0x68);
              if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar3 = System_Convert__ToInt32(cVar1 != '\0',0);
              lStack_68 = CONCAT44(lStack_68._4_4_,uVar3);
              lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
              if ((lVar9 == 0) ||
                 (lVar7 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 != 0)) {
                uVar4 = *puVar13;
                if (uVar4 < 0xf) goto LAB_00c52ba0;
                plVar6[0x12] = lVar9;
                if (lVar11 != 0) {
                  lVar9 = func_0x00a67a34(lVar11,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar9 == 0) goto LAB_00c52ba4;
                  uVar4 = *puVar13;
                }
                if (uVar4 < 0x10) goto LAB_00c52ba0;
                plVar6[0x13] = lVar11;
                uVar3 = System_Convert__ToInt32(*(undefined1 *)((long)BPNNLKAFIGF + 0x78),0);
                lStack_78 = CONCAT44(lStack_78._4_4_,uVar3);
                lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_78);
                if ((lVar9 == 0) ||
                   (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0)) {
                  if (*puVar13 < 0x11) goto LAB_00c52ba0;
                  plVar6[0x14] = lVar9;
                  uStack_6c = *(undefined4 *)((long)BPNNLKAFIGF + 0x7c);
                  lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
                  if ((lVar9 == 0) ||
                     (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0))
                  {
                    if (*puVar13 < 0x12) goto LAB_00c52ba0;
                    plVar6[0x15] = lVar9;
                    uStack_7c = *(undefined4 *)((long)BPNNLKAFIGF + 0x80);
                    lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_7c);
                    if ((lVar9 == 0) ||
                       (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar11 != 0
                       )) {
                      if (*puVar13 < 0x13) goto LAB_00c52ba0;
                      plVar6[0x16] = lVar9;
                      uVar4 = func_0x00c5716c(*(undefined4 *)((long)BPNNLKAFIGF + 0x84),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x88),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x8c),
                                              *(undefined4 *)((long)BPNNLKAFIGF + 0x90),0);
                      uStack_80 = uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 | uVar4 >> 0x10 & 0xff;
                      lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_80);
                      if ((lVar9 == 0) ||
                         (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar11 != 0)) {
                        uVar4 = *puVar13;
                        if (uVar4 < 0x14) goto LAB_00c52ba0;
                        plVar6[0x17] = lVar9;
                        lVar9 = _Str_;
                        if (*(long *)((long)BPNNLKAFIGF + 0xa8) != 0) {
                          lVar9 = *(long *)((long)BPNNLKAFIGF + 0xa8);
                        }
                        if (lVar9 != 0) {
                          lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                          if (lVar11 == 0) goto LAB_00c52ba4;
                          uVar4 = *puVar13;
                        }
                        if (uVar4 < 0x15) goto LAB_00c52ba0;
                        plVar6[0x18] = lVar9;
                        lVar9 = JCHCJLKJJNF__LIOLOMKELPJ(*(undefined4 *)((long)BPNNLKAFIGF + 0x94));
                        if ((lVar9 == 0) ||
                           (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar11 != 0)) {
                          if (*puVar13 < 0x16) goto LAB_00c52ba0;
                          plVar6[0x19] = lVar9;
                          uVar4 = func_0x00c5716c(*(undefined4 *)((long)BPNNLKAFIGF + 0x98),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0x9c),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0xa0),
                                                  *(undefined4 *)((long)BPNNLKAFIGF + 0xa4),0);
                          lStack_68 = CONCAT44(lStack_68._4_4_,
                                               uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10 |
                                               uVar4 >> 0x10 & 0xff);
                          lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_68);
                          if ((lVar9 == 0) ||
                             (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar11 != 0)) {
                            if (*puVar13 < 0x17) goto LAB_00c52ba0;
                            plVar6[0x1a] = lVar9;
                            lStack_78 = CONCAT44(lStack_78._4_4_,
                                                 *(undefined4 *)((long)BPNNLKAFIGF + 0xb0));
                            lVar9 = func_0x00a67a38(_int_TypeInfo,&lStack_78);
                            if ((lVar9 == 0) ||
                               (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar11 != 0)) {
                              if (*puVar13 < 0x18) goto LAB_00c52ba0;
                              plVar6[0x1b] = lVar9;
                              uStack_6c = *(undefined4 *)((long)BPNNLKAFIGF + 0xb4);
                              lVar9 = func_0x00a67a38(_int_TypeInfo,&uStack_6c);
                              if ((lVar9 == 0) ||
                                 (lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar11 != 0)) {
                                uVar4 = *puVar13;
                                if (uVar4 < 0x19) goto LAB_00c52ba0;
                                plVar6[0x1c] = lVar9;
                                lVar9 = *(long *)((long)BPNNLKAFIGF + 0xb8);
                                if (lVar9 != 0) {
                                  lVar11 = func_0x00a67a34(lVar9,*(undefined8 *)(*plVar6 + 0x40));
                                  if (lVar11 == 0) goto LAB_00c52ba4;
                                  uVar4 = *puVar13;
                                }
                                if (uVar4 < 0x1a) goto LAB_00c52ba0;
                                plVar6[0x1d] = lVar9;
                                if (_Str_com_unity3d_player_UnityPlayerActivity != 0) {
                                  lVar9 = func_0x00a67a34(
                                                  _Str_com_unity3d_player_UnityPlayerActivity,
                                                  *(undefined8 *)(*plVar6 + 0x40));
                                  if (lVar9 == 0) goto LAB_00c52ba4;
                                  uVar4 = *puVar13;
                                }
                                if (uVar4 < 0x1b) {
LAB_00c52ba0:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b58();
                                }
                                plVar6[0x1e] = _Str_com_unity3d_player_UnityPlayerActivity;
                                if (lVar5 != 0) {
                                  UnityEngine_AndroidJavaObject__CallStatic(lVar5,uVar10,plVar6,0);
                                  KKDJDGPGFPN__HOALPEDGMOI
                                            (*(undefined4 *)((long)BPNNLKAFIGF + 0x10),0);
                                  return *(int *)((long)BPNNLKAFIGF + 0x10);
                                }
                                goto LAB_00c52bb0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c52ba4:
  uVar10 = func_0x00a67b74();
  func_0x00a67a20(uVar10,0);
LAB_00c52bb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



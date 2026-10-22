// ==== public void ButtonAchievementClaim() { }   @0xaed260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIAchievement__ButtonAchievementClaim(void *__this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__this_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916ea3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916ea3 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Main_TypeInfo + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40), lVar6 != 0)) {
    iVar1 = *(int *)(lVar6 + 0x18);
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        if (iVar1 == iVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar6 + (long)iVar2 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00bed318;
        if (*(int *)((long)__this + 0x20) == *(int *)(lVar3 + 0x10)) {
          if ((bRam0000000001916ed7 & 1) == 0) {
            func_0x00a67900(&Main_TypeInfo);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&SoundScript_TypeInfo);
            bRam0000000001916ed7 = 1;
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
          lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar6 != 0) {
            uVar4 = DAFNMLEKHAD__OFOJMCJAGFD(lVar6,*(undefined4 *)(lVar3 + 0x10));
            if ((uVar4 & 1) != 0) {
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
            lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
            if (lVar6 != 0) {
              DAFNMLEKHAD__EBANJKOABAL(lVar6,*(undefined4 *)(lVar3 + 0x10),2);
              iVar1 = *(int *)(lVar3 + 0x30);
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
              __this_00 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (__this_00 != (void *)0x0) {
                uStack_50 = *(undefined4 *)((long)__this_00 + 0x4c);
                uStack_58 = *(undefined8 *)((long)__this_00 + 0x44);
                uStack_60 = *(undefined8 *)((long)__this_00 + 0x3c);
                iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
                DAFNMLEKHAD__DIMKKHJDHFJ(__this_00,iVar1 + iVar2);
                if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                SoundScript__GIGBLEBBIEK(*(void **)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60))
                ;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
                  uVar5 = Menu__KLGOLHHGBKP(**(long **)(_Menu_TypeInfo + 0xb8),0);
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
                    AnalyticsController__ODLOKNOHMOB(uVar5,*(undefined4 *)(lVar3 + 0x10));
                    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                       (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0)) {
                      GUIGarage__MAKGMMFFGPG(lVar6,0);
                      return;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    return;
  }
LAB_00bed318:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



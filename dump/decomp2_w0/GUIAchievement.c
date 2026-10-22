// ==== public void ButtonAchievementRewarded() { }   @0xaed578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIAchievement__ButtonAchievementRewarded(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916ea4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ea4 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar2 != 0)) {
      uVar1 = AdvController__HNDMJBICLJF(lVar2,3,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = **(long **)(_Menu_TypeInfo + 0xb8);
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x38);
        *(undefined4 *)(lVar2 + 0x8c) = *(undefined4 *)((long)__this + 0x20);
        if (lVar3 != 0) {
          if ((bRam00000000019171df & 1) == 0) {
            func_0x00a67900(&Main_TypeInfo,3,0);
            func_0x00a67900(&MaxSdkAndroid_TypeInfo);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&NNPDABJADNE_TypeInfo);
            func_0x00a67900(&Str_ADV_REWARD__SHOW_);
            bRam00000000019171df = 1;
          }
          uVar1 = AdvController__HNDMJBICLJF(lVar3);
          if ((uVar1 & 1) == 0) {
            return;
          }
          *(undefined4 *)(lVar3 + 0x30) = 3;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
            lVar2 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
            uStack_48 = _NNPDABJADNE_TypeInfo;
            uStack_40 = 0xffffffffffffffff;
            uStack_38 = *(undefined4 *)(lVar3 + 0x30);
            uVar4 = System_Enum__ToString(&uStack_48,0);
            if (lVar2 != 0) {
              AnalyticsController__JCMFKBONIGF(lVar2,uVar4,0);
              uStack_60 = _NNPDABJADNE_TypeInfo;
              uVar5 = *(undefined8 *)(lVar3 + 0x40);
              uStack_58 = 0xffffffffffffffff;
              uStack_50 = *(undefined4 *)(lVar3 + 0x30);
              uVar4 = System_Enum__ToString(&uStack_60,0);
              if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
              }
              MaxSdkAndroid__ShowRewardedAd(uVar5,uVar4,0,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== public void EBAIMKLHIPA() { }   @0xaec10c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__EBAIMKLHIPA(void *__this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  if ((bRam0000000001916e9c & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916e9c = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(long *)((long)__this + 0x78) == 0) goto LAB_00bec2c0;
  cVar2 = *(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x29);
  uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x78),0);
  if (cVar2 == '\0') {
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)((long)__this + 0x78);
      if (lVar5 == 0) goto LAB_00bec2c0;
      uVar12 = 0;
      goto LAB_00bec250;
    }
  }
  else if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)((long)__this + 0x78);
    if (lVar5 == 0) goto LAB_00bec2c0;
    uVar12 = 1;
LAB_00bec250:
    UnityEngine_GameObject__SetActive(lVar5,uVar12,0);
  }
  else {
    uVar12 = *(undefined8 *)((long)__this + 0x8c);
    fVar13 = *(float *)((long)__this + 0x94);
    if (cRam0000000001916e65 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e65 = '\x01';
    }
    uVar7 = *(undefined8 *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x48);
    fVar8 = *(float *)(*(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8) + 0x50);
    fVar6 = (float)UnityEngine_Time__get_deltaTime(0);
    lVar5 = *(long *)((long)__this + 0x80);
    fVar9 = (float)uVar12 + (float)uVar7 * -50.0 * fVar6;
    fVar10 = (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * -50.0 * fVar6;
    fVar13 = fVar13 + fVar8 * -50.0 * fVar6;
    fVar6 = fVar10 * 0.017453292;
    *(ulong *)((long)__this + 0x8c) = CONCAT44(fVar10,fVar9);
    *(float *)((long)__this + 0x94) = fVar13;
    UnityEngine_Quaternion__Internal_FromEulerRad
              (CONCAT44(fVar6,fVar9 * 0.017453292),fVar6,fVar13 * 0.017453292,0);
    if (lVar5 == 0) goto LAB_00bec2c0;
    UnityEngine_Transform__set_rotation(lVar5,0);
  }
  if ((*(long *)((long)__this + 0x60) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x60),0), lVar5 != 0))
  {
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)((long)__this + 0x60) != 0) &&
       (lVar5 = *(long *)(*(long *)((long)__this + 0x60) + 0x180), lVar5 != 0)) {
      iVar1 = *(int *)(lVar5 + 0x10);
      if (*(long *)((long)__this + 0x38) != 0) {
        UnityEngine_UI_Selectable__set_interactable(*(long *)((long)__this + 0x38),2 < iVar1,0);
        plVar4 = *(long **)((long)__this + 0x40);
        if (plVar4 != (long *)0x0) {
          uVar11 = 0x3f800000;
          if (iVar1 < 3) {
            uVar11 = 0x3f000000;
          }
                    /* WARNING: Could not recover jumptable at 0x00bec320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,uVar11,plVar4,*(undefined8 *)(*plVar4 + 0x2b0)
                    );
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
LAB_00bec2c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KKDHMPMOJCB() { }   @0xaec86c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__KKDHMPMOJCB(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916ea0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
    bRam0000000001916ea0 = 1;
  }
  if (*(char *)((long)__this + 0x98) != '\0') {
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
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    DAFNMLEKHAD__DCLEGMOJBPN(lVar2,0xffffffff);
    if ((*(long *)((long)__this + 0x38) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 0x38),0), lVar2 != 0)
       ) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      if (*(long *)((long)__this + 0x58) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x58),0,0);
        if (*(long *)((long)__this + 0x48) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x48),1,0);
          plVar4 = *(long **)((long)__this + 0x30);
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Translate_TypeInfo + 0xb8) != 0) &&
             (uVar3 = Translate__JJJNIPAKLJF
                                (**(long **)(_Translate_TypeInfo + 0xb8),
                                 _Str_RATE_ME_REWARD_RECEIVED,0), plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
            if (*(long *)((long)__this + 0x50) != 0) {
              UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x50),0,0);
              if (*(long *)((long)__this + 0x20) != 0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                          (0x43a28000,*(long *)((long)__this + 0x20),1,0);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
                if (lVar2 != 0) {
                  uStack_40 = *(undefined4 *)(lVar2 + 0x4c);
                  uStack_48 = *(undefined8 *)(lVar2 + 0x44);
                  uStack_50 = *(undefined8 *)(lVar2 + 0x3c);
                  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
                  DAFNMLEKHAD__DIMKKHJDHFJ(lVar2,iVar1 + 0x14);
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  SoundScript__GIGBLEBBIEK
                            (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
                  *(undefined1 *)((long)__this + 0x98) = 1;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
                     (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
                    AnalyticsController__BHBKBILKNBE();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



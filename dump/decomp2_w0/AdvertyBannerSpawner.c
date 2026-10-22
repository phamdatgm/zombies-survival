// ==== protected void OnDestroy() { }   @0xb44d2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__OnDestroy(void *__this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_370;
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_270;
  undefined *puStack_268;
  
  if ((bRam0000000001917143 & 1) == 0) {
    func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
    func_0x00a67900(&Method_AdvertyBannerSpawner_AFKFNMHEADK__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IBDDLECMEJG__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IGEKEPIFBML__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IINGBMCEIBC__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_JOGAAIODFBK__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_OHOFKKHHKGD__);
    func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
    bRam0000000001917143 = 1;
  }
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_IBDDLECMEJG__,0);
  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Adverty_AdvertyEvents__remove_AdDelivered(uVar6,0);
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_OHOFKKHHKGD__,0);
  Adverty_AdvertyEvents__remove_UnitActivated(uVar6,0);
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_AFKFNMHEADK__,0);
  Adverty_AdvertyEvents__remove_UnitDeactivated(uVar6,0);
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_IGEKEPIFBML__,0);
  Adverty_AdvertyEvents__remove_UnitActivationFailed(uVar6,0);
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_JOGAAIODFBK__,0);
  Adverty_AdvertyEvents__remove_AdCompleted(uVar6,0);
  uVar6 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
  System_Action___Il2CppFullySharedGenericType____ctor
            (uVar6,__this,_Method_AdvertyBannerSpawner_IINGBMCEIBC__,0);
  if ((bRam00000000019167f4 & 1) == 0) {
    func_0x00a67900(&System_Action_BaseUnit__TypeInfo,0);
    func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
    bRam00000000019167f4 = 1;
  }
  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x30);
  do {
    lVar2 = System_Delegate__Remove(lVar7,uVar6,0);
    uVar8 = _System_Action_BaseUnit__TypeInfo;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x00a67a34(lVar2,_System_Action_BaseUnit__TypeInfo);
      if (lVar3 == 0) {
        uVar6 = func_0x00a67eec(lVar2,uVar8);
        if ((bRam00000000019167f5 & 1) == 0) {
          func_0x00a67900(&System_Action_TypeInfo);
          func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
          bRam00000000019167f5 = 1;
        }
        if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x38);
        do {
          plVar4 = (long *)System_Delegate__Combine(lVar7,uVar6,0);
          if (plVar4 != (long *)0x0) {
            if (*plVar4 != _System_Action_TypeInfo) {
              uVar6 = func_0x00a67eec(plVar4);
              if ((bRam00000000019167f6 & 1) == 0) {
                func_0x00a67900(&System_Action_TypeInfo);
                func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                bRam00000000019167f6 = 1;
              }
              if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x38);
              do {
                plVar4 = (long *)System_Delegate__Remove(lVar7,uVar6,0);
                if (plVar4 != (long *)0x0) {
                  if (*plVar4 != _System_Action_TypeInfo) {
                    uVar6 = func_0x00a67eec(plVar4);
                    if ((bRam00000000019167f7 & 1) == 0) {
                      func_0x00a67900(&System_Action_TypeInfo);
                      func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                      bRam00000000019167f7 = 1;
                    }
                    if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x40);
                    do {
                      plVar4 = (long *)System_Delegate__Combine(lVar7,uVar6,0);
                      if (plVar4 != (long *)0x0) {
                        if (*plVar4 != _System_Action_TypeInfo) {
                          uVar6 = func_0x00a67eec(plVar4);
                          if ((bRam00000000019167f8 & 1) == 0) {
                            func_0x00a67900(&System_Action_TypeInfo);
                            func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                            bRam00000000019167f8 = 1;
                          }
                          if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x40
                                           );
                          do {
                            plVar4 = (long *)System_Delegate__Remove(lVar7,uVar6,0);
                            if (plVar4 != (long *)0x0) {
                              if (*plVar4 != _System_Action_TypeInfo) {
                                uVar6 = func_0x00a67eec(plVar4);
                                if ((bRam00000000019167f9 & 1) == 0) {
                                  func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
                                  func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                  bRam00000000019167f9 = 1;
                                }
                                if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8)
                                                 + 0x48);
                                do {
                                  lVar2 = System_Delegate__Combine(lVar7,uVar6,0);
                                  uVar8 = _System_Action_BaseUnit__TypeInfo;
                                  if (lVar2 == 0) {
                                    lVar3 = 0;
                                  }
                                  else {
                                    lVar3 = func_0x00a67a34(lVar2,_System_Action_BaseUnit__TypeInfo)
                                    ;
                                    if (lVar3 == 0) {
                                      uVar6 = func_0x00a67eec(lVar2,uVar8);
                                      if ((bRam00000000019167fa & 1) == 0) {
                                        func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
                                        func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                        bRam00000000019167fa = 1;
                                      }
                                      if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                        func_0x00a67a30();
                                      }
                                      lVar7 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo +
                                                                 0xb8) + 0x48);
                                      do {
                                        lVar2 = System_Delegate__Remove(lVar7,uVar6,0);
                                        uVar8 = _System_Action_BaseUnit__TypeInfo;
                                        if (lVar2 == 0) {
                                          lVar3 = 0;
                                        }
                                        else {
                                          lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                          if (lVar3 == 0) {
                                            uVar6 = func_0x00a67eec(lVar2,uVar8);
                                            if ((bRam00000000019167fb & 1) == 0) {
                                              func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
                                              func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                              bRam00000000019167fb = 1;
                                            }
                                            if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) ==
                                                0) {
                                              func_0x00a67a30();
                                            }
                                            lVar7 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50);
                                            do {
                                              lVar2 = System_Delegate__Combine(lVar7,uVar6,0);
                                              uVar8 = _System_Action_BaseUnit__TypeInfo;
                                              if (lVar2 == 0) {
                                                lVar3 = 0;
                                              }
                                              else {
                                                lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                if (lVar3 == 0) {
                                                  uVar6 = func_0x00a67eec(lVar2,uVar8);
                                                  if ((bRam00000000019167fc & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                                  bRam00000000019167fc = 1;
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar7 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50);
                                                  do {
                                                    lVar2 = System_Delegate__Remove(lVar7,uVar6,0);
                                                    uVar8 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    func_0x00a67eec(lVar2,uVar8);
                                                    if ((bRam00000000019167fd & 1) == 0) {
                                                      func_0x00a67900(&System_Action_aCu__TypeInfo);
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&System_Action_TypeInfo);
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_oT__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_oU__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_oV__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_oW__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_oX__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_ot__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_ou__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_ov__
                                                                 );
                                                  func_0x00a67900(&Method_Adverty_AdvertyEvents_ow__
                                                                 );
                                                  func_0x00a67900(&Adverty_a_A_aAl_TypeInfo);
                                                  func_0x00a67900(&Adverty_a_C_aCt_TypeInfo);
                                                  bRam00000000019167fd = 1;
                                                  }
                                                  uVar6 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_oU__,0);
                                                  if (*(int *)(_Adverty_a_A_aAl_TypeInfo + 0xe0) ==
                                                      0) {
                                                    func_0x00a67a30();
                                                  }
                                                  Adverty_a_A_aAl__oc(uVar6);
                                                  uVar6 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_ot__,0);
                                                  Adverty_a_A_aAl__oe(uVar6);
                                                  uVar6 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_ou__,0);
                                                  Adverty_a_A_aAl__od(uVar6);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_oX__,0);
                                                  if (*(int *)(_Adverty_a_C_aCt_TypeInfo + 0xe0) ==
                                                      0) {
                                                    func_0x00a67a30();
                                                  }
                                                  Adverty_a_C_aCt__uj(uVar6,0);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_oV__,0);
                                                  Adverty_a_d_adb__xC(uVar6,0);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_ov__,0);
                                                  Adverty_a_d_adb__xD(uVar6,0);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_oW__,0);
                                                  Adverty_a_d_adb__xF(uVar6,0);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_ow__,0);
                                                  Adverty_a_d_adb__xG(uVar6,0);
                                                  uVar6 = func_0x00a67b44(
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar6,0,
                                                  _Method_Adverty_AdvertyEvents_oT__,0);
                                                  if ((bRam0000000001916b55 & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo,0);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b55 = 1;
                                                  }
                                                  lVar7 = **(long **)(_Adverty_a_d_ada_TypeInfo +
                                                                     0xb8);
                                                  do {
                                                    lVar2 = System_Delegate__Combine(lVar7,uVar6,0);
                                                    uVar8 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    uVar6 = func_0x00a67eec(lVar2,uVar8);
                                                    pcStack_280 = Adverty_a_d_ada__XU;
                                                    puStack_270 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_268 = &Adverty_a_d_ada_TypeInfo;
                                                    if ((bRam0000000001916b56 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b56 = 1;
                                                  }
                                                  lVar7 = **(long **)(_Adverty_a_d_ada_TypeInfo +
                                                                     0xb8);
                                                  do {
                                                    lVar2 = System_Delegate__Remove(lVar7,uVar6,0);
                                                    uVar8 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    uVar5 = func_0x00a67eec(lVar2,uVar8);
                                                    pcStack_2c0 = Adverty_a_d_ada__Xu;
                                                    puStack_2b0 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_2a8 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_2a0 = uVar8;
                                                    lStack_298 = lVar2;
                                                    lStack_290 = lVar7;
                                                    uStack_288 = uVar6;
                                                    if ((bRam0000000001916b57 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b57 = 1;
                                                  }
                                                  lVar7 = *(long *)(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8);
                                                  do {
                                                    lVar2 = System_Delegate__Combine(lVar7,uVar5,0);
                                                    uVar6 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    uVar8 = func_0x00a67eec(lVar2,uVar6);
                                                    pcStack_300 = Adverty_a_d_ada__XV;
                                                    puStack_2f0 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_2e8 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_2e0 = uVar6;
                                                    lStack_2d8 = lVar2;
                                                    lStack_2d0 = lVar7;
                                                    uStack_2c8 = uVar5;
                                                    if ((bRam0000000001916b58 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b58 = 1;
                                                  }
                                                  lVar7 = *(long *)(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8);
                                                  do {
                                                    lVar2 = System_Delegate__Remove(lVar7,uVar8,0);
                                                    uVar6 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    auVar9 = func_0x00a67eec(lVar2,uVar6);
                                                    uVar5 = auVar9._8_8_;
                                                    pcStack_340 = Adverty_a_d_ada__nk;
                                                    puStack_330 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_328 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_320 = uVar6;
                                                    lStack_318 = lVar2;
                                                    lStack_310 = lVar7;
                                                    uStack_308 = uVar8;
                                                    if ((bRam0000000001916b59 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Func_string__bool__TypeInfo);
                                                  bRam0000000001916b59 = 1;
                                                  }
                                                  plVar4 = (long *)(auVar9._0_8_ + 0x10);
                                                  lVar7 = *plVar4;
                                                  do {
                                                    lVar2 = System_Delegate__Combine(lVar7,uVar5,0);
                                                    uVar6 = _System_Func_string__bool__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Func_string__bool__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    auVar9 = func_0x00a67eec(lVar2,uVar6);
                                                    uVar8 = auVar9._8_8_;
                                                    pcStack_380 = Adverty_a_d_ada__nL;
                                                    puStack_370 = &
                                                  System_Func_string__bool__TypeInfo;
                                                  uStack_368 = uVar6;
                                                  lStack_360 = lVar2;
                                                  lStack_358 = lVar7;
                                                  plStack_350 = plVar4;
                                                  uStack_348 = uVar5;
                                                  if ((bRam0000000001916b5a & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Func_string__bool__TypeInfo);
                                                  bRam0000000001916b5a = 1;
                                                  }
                                                  plVar4 = (long *)(auVar9._0_8_ + 0x10);
                                                  lVar7 = *plVar4;
                                                  do {
                                                    lVar2 = System_Delegate__Remove(lVar7,uVar8,0);
                                                    uVar6 = _System_Func_string__bool__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Func_string__bool__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    auVar9 = func_0x00a67eec(lVar2,uVar6);
                                                    uVar5 = auVar9._8_8_;
                                                    pcStack_3c0 = Adverty_a_d_ada__nl;
                                                    puStack_3b0 = &
                                                  System_Func_string__bool__TypeInfo;
                                                  uStack_3a8 = uVar6;
                                                  lStack_3a0 = lVar2;
                                                  lStack_398 = lVar7;
                                                  plStack_390 = plVar4;
                                                  uStack_388 = uVar8;
                                                  if ((bRam0000000001916b5b & 1) == 0) {
                                                    func_0x00a67900(&System_Action_float__TypeInfo);
                                                    bRam0000000001916b5b = 1;
                                                  }
                                                  plVar4 = (long *)(auVar9._0_8_ + 0x18);
                                                  lVar7 = *plVar4;
                                                  do {
                                                    lVar2 = System_Delegate__Combine(lVar7,uVar5,0);
                                                    uVar6 = _System_Action_float__TypeInfo;
                                                    if (lVar2 == 0) {
                                                      lVar3 = 0;
                                                    }
                                                    else {
                                                      lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_float__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    auVar9 = func_0x00a67eec(lVar2,uVar6);
                                                    uVar8 = auVar9._8_8_;
                                                    pcStack_400 = Adverty_a_d_ada__nM;
                                                    puStack_3f0 = &System_Action_float__TypeInfo;
                                                    uStack_3e8 = uVar6;
                                                    lStack_3e0 = lVar2;
                                                    lStack_3d8 = lVar7;
                                                    plStack_3d0 = plVar4;
                                                    uStack_3c8 = uVar5;
                                                    if ((bRam0000000001916b5c & 1) == 0) {
                                                      func_0x00a67900(&System_Action_float__TypeInfo
                                                                     );
                                                      bRam0000000001916b5c = 1;
                                                    }
                                                    plVar4 = (long *)(auVar9._0_8_ + 0x18);
                                                    lVar7 = *plVar4;
                                                    do {
                                                      lVar2 = System_Delegate__Remove(lVar7,uVar8,0)
                                                      ;
                                                      uVar6 = _System_Action_float__TypeInfo;
                                                      if (lVar2 == 0) {
                                                        lVar3 = 0;
                                                      }
                                                      else {
                                                        lVar3 = func_0x00a67a34(lVar2,
                                                  _System_Action_float__TypeInfo);
                                                  if (lVar3 == 0) {
                                                    auVar9 = func_0x00a67eec(lVar2,uVar6);
                                                    lVar3 = auVar9._0_8_;
                                                    lStack_420 = lVar2;
                                                    lStack_418 = lVar7;
                                                    plStack_410 = plVar4;
                                                    uStack_408 = uVar8;
                                                    if ((bRam0000000001916b5d & 1) == 0) {
                                                      func_0x00a67900(&
                                                  Method_Adverty_a_a_aan_INativeRedirectionDialog__qg__
                                                  );
                                                  func_0x00a67900(&
                                                  Adverty_a_a_aan_INativeRedirectionDialog__TypeInfo
                                                  );
                                                  bRam0000000001916b5d = 1;
                                                  }
                                                  System_Object___ctor(lVar3,0);
                                                  *(long *)(lVar3 + 0x20) = auVar9._8_8_;
                                                  if (*(int *)(
                                                  _Adverty_a_a_aan_INativeRedirectionDialog__TypeInfo
                                                  + 0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  func_0x00b946d4(&uStack_428,
                                                                                                                                    
                                                  _Method_Adverty_a_a_aan_INativeRedirectionDialog__qg__
                                                  );
                                                  *(undefined8 *)(lVar3 + 0x28) = uStack_428;
                                                  return;
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(plVar4,lVar3,lVar7);
                                                  bVar1 = lVar7 != lVar2;
                                                  lVar7 = lVar2;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(plVar4,lVar3,lVar7);
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(plVar4,lVar3,lVar7);
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(plVar4,lVar3,lVar7);
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8,lVar3,lVar7)
                                                  ;
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8,lVar3,lVar7)
                                                  ;
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(*(undefined8 *)
                                                                           (
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8),lVar3,lVar7);
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  lVar2 = func_0x00a90840(*(undefined8 *)
                                                                           (
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8),lVar3,lVar7);
                                                  bVar1 = lVar7 == lVar2;
                                                  lVar7 = lVar2;
                                                  if (bVar1) {
                                                    return;
                                                  }
                                                  } while( true );
                                                  }
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar2 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50,
                                                  lVar3,lVar7);
                                                  bVar1 = lVar7 != lVar2;
                                                  lVar7 = lVar2;
                                                  } while (bVar1);
                                                  return;
                                                }
                                              }
                                              if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0)
                                                  == 0) {
                                                func_0x00a67a30();
                                              }
                                              lVar2 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50,
                                                  lVar3,lVar7);
                                              bVar1 = lVar7 != lVar2;
                                              lVar7 = lVar2;
                                            } while (bVar1);
                                            return;
                                          }
                                        }
                                        if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                          func_0x00a67a30();
                                        }
                                        lVar2 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x48,
                                                  lVar3,lVar7);
                                        bVar1 = lVar7 != lVar2;
                                        lVar7 = lVar2;
                                      } while (bVar1);
                                      return;
                                    }
                                  }
                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                  }
                                  lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo
                                                                   + 0xb8) + 0x48,lVar3,lVar7);
                                  bVar1 = lVar7 != lVar2;
                                  lVar7 = lVar2;
                                } while (bVar1);
                                return;
                              }
                            }
                            if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                              func_0x00a67a30();
                            }
                            lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8
                                                             ) + 0x40,plVar4,lVar7);
                            bVar1 = lVar7 != lVar2;
                            lVar7 = lVar2;
                          } while (bVar1);
                          return;
                        }
                      }
                      if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) +
                                              0x40,plVar4,lVar7);
                      bVar1 = lVar7 != lVar2;
                      lVar7 = lVar2;
                    } while (bVar1);
                    return;
                  }
                }
                if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x38,
                                        plVar4,lVar7);
                bVar1 = lVar7 != lVar2;
                lVar7 = lVar2;
              } while (bVar1);
              return;
            }
          }
          if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x38,plVar4,
                                  lVar7);
          bVar1 = lVar7 != lVar2;
          lVar7 = lVar2;
        } while (bVar1);
        return;
      }
    }
    if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x30,lVar3,lVar7);
    bVar1 = lVar7 != lVar2;
    lVar7 = lVar2;
  } while (bVar1);
  return;
}


// ==== private void IBDDLECMEJG(BaseUnit CDCHCKMOHPG) { }   @0xb45568

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__IBDDLECMEJG(void *__this,void *CDCHCKMOHPG)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001917148 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty__OnAdDelivered__);
    bRam0000000001917148 = 1;
  }
  uVar8 = _Str_Adverty__OnAdDelivered__;
  if (CDCHCKMOHPG == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(long *)CDCHCKMOHPG + 0x168))
                      (CDCHCKMOHPG,*(undefined8 *)(*(long *)CDCHCKMOHPG + 0x170));
  }
  plVar5 = (long *)System_String__Concat(uVar8,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917206 = 1;
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
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar5,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar5 = *(long **)(lVar6 + 0x1e8);
  if ((plVar5 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar3 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar5 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar5 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void JKLCJJADPLK() { }   @0xb46064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__JKLCJJADPLK(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float in_s2;
  float fVar11;
  float fVar12;
  
  if ((bRam000000000191714c & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191714c = 1;
  }
  lVar5 = *(long *)((long)__this + 0x28);
  if (lVar5 != 0) {
    fVar12 = 9999.0;
    iVar7 = 0;
    lVar8 = 7;
    do {
      uVar9 = lVar8 - 4;
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar9) {
        if ((iVar7 == 0) || (*(int *)((long)__this + 0x20) == iVar7)) {
          return;
        }
        *(int *)((long)__this + 0x20) = iVar7;
        if ((bRam0000000001917149 & 1) == 0) {
          func_0x00a67900(&bool_TypeInfo);
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&Str_landscape);
          func_0x00a67900(&Str_box);
          func_0x00a67900(&Str___isHideDefaultBoard__);
          func_0x00a67900(&Str_portrait);
          func_0x00a67900(&Str_SetAdvPosition__);
          bRam0000000001917149 = 1;
        }
        uVar1 = *(uint *)((long)__this + 0x20);
        lVar5 = *(long *)((long)__this + 0x28);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_00c4596c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          if (((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0))
             || (lVar5 = UnityEngine_Object__get_name(lVar5,0), lVar5 == 0)) goto LAB_00c45968;
          uVar9 = System_String__Contains(lVar5,_Str_landscape,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = System_String__Contains(lVar5,_Str_box,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = System_String__Contains(lVar5,_Str_portrait,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              uVar6 = *(undefined8 *)((long)__this + 0x48);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              if (*(long *)((long)__this + 0x48) == 0) goto LAB_00c45968;
              uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x48),0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              lVar5 = *(long *)((long)__this + 0x48);
            }
            else {
              uVar6 = *(undefined8 *)((long)__this + 0x40);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              if (*(long *)((long)__this + 0x40) == 0) goto LAB_00c45968;
              uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x40),0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              lVar5 = *(long *)((long)__this + 0x40);
            }
          }
          else {
            uVar6 = *(undefined8 *)((long)__this + 0x38);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar9 & 1) == 0) goto LAB_00c458c0;
            if (*(long *)((long)__this + 0x38) == 0) goto LAB_00c45968;
            uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x38),0);
            if ((uVar9 & 1) == 0) goto LAB_00c458c0;
            lVar5 = *(long *)((long)__this + 0x38);
          }
          if (lVar5 != 0) {
            lVar5 = UnityEngine_GameObject__get_transform(lVar5,0);
            lVar8 = *(long *)((long)__this + 0x28);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)__this + 0x20)) goto LAB_00c4596c;
              lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)((long)__this + 0x20) * 8 + 0x20);
              if ((lVar8 != 0) &&
                 (uVar6 = UnityEngine_Component__get_transform(lVar8,0), lVar5 != 0)) {
                UnityEngine_Transform__SetParent(lVar5,uVar6,0,0);
                lVar5 = *(long *)((long)__this + 0x28);
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)__this + 0x20)) goto LAB_00c4596c;
                  lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)((long)__this + 0x20) * 8 + 0x20);
                  if (((lVar5 != 0) &&
                      (lVar5 = UnityEngine_Transform__GetChild(lVar5,0,0), lVar5 != 0)) &&
                     (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 != 0)) {
                    UnityEngine_GameObject__SetActive(lVar5,0,0);
LAB_00c458c0:
                    uVar6 = System_Int32__ToString((uint *)((long)__this + 0x20),0);
                    if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_bool_TypeInfo);
                    }
                    uVar3 = System_Boolean__ToString(&stack0xffffffffffffffcc,0);
                    uVar6 = System_String__Concat
                                      (_Str_SetAdvPosition__,uVar6,_Str___isHideDefaultBoard__,uVar3
                                       ,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar6,0,0);
                    return;
                  }
                }
              }
            }
          }
        }
LAB_00c45968:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_00c46204:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      uVar6 = *(undefined8 *)(lVar5 + lVar8 * 8);
      fVar11 = in_s2;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        fVar11 = in_s2;
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      in_s2 = fVar11;
      fVar10 = fVar12;
      iVar2 = iVar7;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)((long)__this + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_00c46204;
        lVar5 = *(long *)(lVar5 + lVar8 * 8);
        if (lVar5 == 0) break;
        UnityEngine_Transform__get_position(lVar5,0);
        in_s2 = fVar11;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
        break;
        UnityEngine_Transform__get_position(lVar5,0);
        fVar10 = fVar11 - in_s2;
        iVar2 = (int)lVar8 + -4;
        if (fVar12 <= fVar10 || (fVar10 <= 0.0 || 140.0 <= fVar10)) {
          fVar10 = fVar12;
          iVar2 = iVar7;
        }
      }
      iVar7 = iVar2;
      fVar12 = fVar10;
      lVar5 = *(long *)((long)__this + 0x28);
      lVar8 = lVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



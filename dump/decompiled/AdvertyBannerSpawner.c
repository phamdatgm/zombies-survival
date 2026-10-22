/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class AdvertyBannerSpawner : MonoBehaviour // TypeDefIndex: 5221
{
	// Fields
	private int DHKGCPOGJMD; // 0x20
	public Transform[] AHGCJMDJGHD; // 0x28
	private float NILEPPJIPGB; // 0x30
	private GameObject DMOPMKDEOMI; // 0x38
	private GameObject OPAEIJBOJMK; // 0x40
	private GameObject LHMAHANAOAH; // 0x48

	// Methods

	protected void OnDestroy() { }

	private void AFKFNMHEADK(BaseUnit CDCHCKMOHPG) { }

	private void IGEKEPIFBML(BaseUnit CDCHCKMOHPG) { }

	private void OHOFKKHHKGD(BaseUnit CDCHCKMOHPG) { }

	private void JOGAAIODFBK(BaseUnit CDCHCKMOHPG) { }

	private void IBDDLECMEJG(BaseUnit CDCHCKMOHPG) { }

	private void HDGLOIGEFOL() { }

	private void Start() { }

	public void .ctor() { }

	private void Update() { }

	private void JKLCJJADPLK() { }

	private void IINGBMCEIBC(BaseUnit CDCHCKMOHPG) { }
}
*/

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
  lVar7 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x30);
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
        lVar7 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x38);
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
              lVar7 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x38);
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
                    lVar7 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x40);
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
                          lVar7 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x40
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
                                lVar7 = *(long *)(Adverty_AdvertyEvents.<statics>
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
                      lVar2 = func_0x00a90840(Adverty_AdvertyEvents.<statics> +
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
                lVar2 = func_0x00a90840(Adverty_AdvertyEvents.<statics> + 0x38,
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
          lVar2 = func_0x00a90840(Adverty_AdvertyEvents.<statics> + 0x38,plVar4,
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
    lVar2 = func_0x00a90840(Adverty_AdvertyEvents.<statics> + 0x30,lVar3,lVar7);
    bVar1 = lVar7 != lVar2;
    lVar7 = lVar2;
  } while (bVar1);
  return;
}


// ==== private void AFKFNMHEADK(BaseUnit CDCHCKMOHPG) { }   @0xb44f0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__AFKFNMHEADK(void *__this,void *CDCHCKMOHPG)

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
  
  if ((bRam0000000001917144 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty_OnUnitDeactivated__);
    bRam0000000001917144 = 1;
  }
  uVar8 = _Str_Adverty_OnUnitDeactivated__;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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


// ==== private void IGEKEPIFBML(BaseUnit CDCHCKMOHPG) { }   @0xb44fb4

/* WARNING: Removing unreachable block (ram,0x00c45330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__IGEKEPIFBML(void *__this,void *CDCHCKMOHPG)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  
  if ((bRam0000000001917145 & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_Adverty_OnUnitActivationFailed__);
    func_0x00a67900(&Str_default_texture);
    bRam0000000001917145 = 1;
  }
  uVar2 = _Str_Adverty_OnUnitActivationFailed__;
  if (CDCHCKMOHPG == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)CDCHCKMOHPG + 0x168))
                      (CDCHCKMOHPG,*(undefined8 *)(*(long *)CDCHCKMOHPG + 0x170));
  }
  uVar2 = System_String__Concat(uVar2,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar2,0,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(CDCHCKMOHPG,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (CDCHCKMOHPG != (void *)0x0) {
    uVar2 = UnityEngine_Component__get_gameObject(CDCHCKMOHPG,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = UnityEngine_Component__get_transform(CDCHCKMOHPG,0);
    if ((lVar4 != 0) && (lVar4 = UnityEngine_Transform__get_parent(lVar4,0), lVar4 != 0)) {
      plVar5 = (long *)UnityEngine_Transform__GetEnumerator(lVar4,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar4 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_00c4518c;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c4518c:
        uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar3 & 1) == 0) {
          plVar5 = (long *)func_0x00a67a34(plVar5,_System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_00c452d8;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_00c452c0;
        }
        lVar4 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_00c451ec;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c451ec:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
LAB_00c4531c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo)) {
          func_0x00a67eec(plVar7);
          goto LAB_00c4531c;
        }
        uVar2 = UnityEngine_Object__get_name(plVar7,0);
        uVar3 = System_String__op_Equality(uVar2,_Str_default_texture,0);
        if ((uVar3 & 1) == 0) {
          lVar4 = UnityEngine_Component__get_gameObject(plVar7,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_GameObject__SetActive(lVar4,0,0);
        }
        else {
          lVar4 = UnityEngine_Component__get_gameObject(plVar7,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_GameObject__SetActive(lVar4,1,0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_00c452c0:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00c452f4;
    }
  }
LAB_00c452d8:
  puVar6 = (undefined8 *)func_0x00a9e6c4(plVar5,_System_IDisposable_TypeInfo,0);
LAB_00c452f4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ==== private void OHOFKKHHKGD(BaseUnit CDCHCKMOHPG) { }   @0xb45418

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__OHOFKKHHKGD(void *__this,void *CDCHCKMOHPG)

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
  
  if ((bRam0000000001917146 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty_OnUnitActivated__);
    bRam0000000001917146 = 1;
  }
  uVar8 = _Str_Adverty_OnUnitActivated__;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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


// ==== private void JOGAAIODFBK(BaseUnit CDCHCKMOHPG) { }   @0xb454c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__JOGAAIODFBK(void *__this,void *CDCHCKMOHPG)

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
  
  if ((bRam0000000001917147 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty_OnAdCompleted__);
    bRam0000000001917147 = 1;
  }
  uVar8 = _Str_Adverty_OnAdCompleted__;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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


// ==== private void HDGLOIGEFOL() { }   @0xb45610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__HDGLOIGEFOL(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_34 [4];
  
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
  auStack_34[0] = 0;
  uVar1 = this.DHKGCPOGJMD;
  lVar5 = this.AHGCJMDJGHD;
  if (lVar5 != 0) {
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_00c4596c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    if (((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Object__get_name(lVar5,0), lVar5 == 0)) goto LAB_00c45968;
    uVar2 = System_String__Contains(lVar5,_Str_landscape,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_String__Contains(lVar5,_Str_box,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__Contains(lVar5,_Str_portrait,0);
        if ((uVar2 & 1) == 0) goto LAB_00c458c0;
        uVar6 = this.LHMAHANAOAH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar2 & 1) == 0) goto LAB_00c458c0;
        if (this.LHMAHANAOAH == 0) goto LAB_00c45968;
        uVar2 = UnityEngine_GameObject__get_activeSelf(this.LHMAHANAOAH,0);
        if ((uVar2 & 1) == 0) goto LAB_00c458c0;
        lVar5 = this.LHMAHANAOAH;
      }
      else {
        uVar6 = this.OPAEIJBOJMK;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar2 & 1) == 0) goto LAB_00c458c0;
        if (this.OPAEIJBOJMK == 0) goto LAB_00c45968;
        uVar2 = UnityEngine_GameObject__get_activeSelf(this.OPAEIJBOJMK,0);
        if ((uVar2 & 1) == 0) goto LAB_00c458c0;
        lVar5 = this.OPAEIJBOJMK;
      }
    }
    else {
      uVar6 = this.DMOPMKDEOMI;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar2 & 1) == 0) goto LAB_00c458c0;
      if (this.DMOPMKDEOMI == 0) goto LAB_00c45968;
      uVar2 = UnityEngine_GameObject__get_activeSelf(this.DMOPMKDEOMI,0);
      if ((uVar2 & 1) == 0) goto LAB_00c458c0;
      lVar5 = this.DMOPMKDEOMI;
    }
    if (lVar5 != 0) {
      lVar5 = UnityEngine_GameObject__get_transform(lVar5,0);
      lVar4 = this.AHGCJMDJGHD;
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= this.DHKGCPOGJMD) goto LAB_00c4596c;
        lVar4 = *(long *)(lVar4 + (long)(int)this.DHKGCPOGJMD * 8 + 0x20);
        if ((lVar4 != 0) && (uVar6 = UnityEngine_Component__get_transform(lVar4,0), lVar5 != 0)) {
          UnityEngine_Transform__SetParent(lVar5,uVar6,0,0);
          auStack_34[0] = 1;
          lVar5 = this.AHGCJMDJGHD;
          if (lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x18) <= this.DHKGCPOGJMD) goto LAB_00c4596c;
            lVar5 = *(long *)(lVar5 + (long)(int)this.DHKGCPOGJMD * 8 + 0x20);
            if (((lVar5 != 0) && (lVar5 = UnityEngine_Transform__GetChild(lVar5,0,0), lVar5 != 0))
               && (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 != 0)) {
              UnityEngine_GameObject__SetActive(lVar5,0,0);
LAB_00c458c0:
              uVar6 = System_Int32__ToString((uint *)(&this.DHKGCPOGJMD),0);
              if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_bool_TypeInfo);
              }
              uVar3 = System_Boolean__ToString(auStack_34,0);
              uVar6 = System_String__Concat
                                (_Str_SetAdvPosition__,uVar6,_Str___isHideDefaultBoard__,uVar3,0);
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


// ==== private void Start() { }   @0xb45970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__Start(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  void *__this_00;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  code *pcStack_440;
  undefined *puStack_430;
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
  undefined *puStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
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
  code *pcStack_298;
  long lStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long *plStack_158;
  long lStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  
  if ((bRam000000000191714a & 1) == 0) {
    func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
    func_0x00a67900(&Method_AdvertyBannerSpawner_AFKFNMHEADK__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IBDDLECMEJG__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IGEKEPIFBML__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_IINGBMCEIBC__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_JOGAAIODFBK__);
    func_0x00a67900(&Method_AdvertyBannerSpawner_OHOFKKHHKGD__);
    func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_landscape);
    func_0x00a67900(&Str_box);
    func_0x00a67900(&Str_portrait);
    bRam000000000191714a = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00c45b88:
    if (pcRam000000000191c328 == (code *)0x0) {
      pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
    }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c328)(__this,0);
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar7 = Menu.KECGFPHIEHF.ANIMNONMFFH;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) == 0) goto LAB_00c45b88;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x6c) == '\0') goto LAB_00c45b88;
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
      __this_00 = Main.FBDDKIOEKDM;
      if (__this_00 != (void *)0x0) {
        bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(__this_00);
        if (bVar1) goto LAB_00c45b88;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF != 0) {
          lVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH;
          uVar7 = UnityEngine_Camera__get_main(0);
          if (lVar5 != 0) {
            AdvController__DIHNEEIFHAG(lVar5,uVar7,0);
            lVar5 = this.AHGCJMDJGHD;
            if (lVar5 != 0) {
              puStack_68 = (undefined8 *)(&this.LHMAHANAOAH);
              lVar11 = 4;
              do {
                uVar8 = (int)lVar11 - 4;
                if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar8) goto LAB_00c45e24;
                if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_00c45f80:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                lVar5 = *(long *)(lVar5 + lVar11 * 8);
                if (((lVar5 == 0) ||
                    (lVar5 = UnityEngine_Transform__GetChild(lVar5,0,0), lVar5 == 0)) ||
                   (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) break;
                UnityEngine_GameObject__SetActive(lVar5,0,0);
                lVar5 = this.AHGCJMDJGHD;
                if (lVar5 == 0) break;
                if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_00c45f80;
                lVar5 = *(long *)(lVar5 + lVar11 * 8);
                if (((lVar5 == 0) ||
                    (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0)) ||
                   (lVar5 = UnityEngine_Object__get_name(lVar5,0), lVar5 == 0)) break;
                uVar4 = System_String__Contains(lVar5,_Str_landscape,0);
                if ((uVar4 & 1) == 0) {
                  uVar4 = System_String__Contains(lVar5,_Str_box,0);
                  if ((uVar4 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((Menu.KECGFPHIEHF != 0) &&
                        (lVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar5 != 0))
                       && (lVar6 = this.AHGCJMDJGHD, lVar6 != 0)) {
                      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c45f80;
                      uVar7 = *(undefined8 *)(lVar5 + 0x78);
                      uVar9 = *(undefined8 *)(lVar6 + lVar11 * 8);
                      puVar10 = (undefined8 *)(&this.OPAEIJBOJMK);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      goto LAB_00c45df8;
                    }
                    break;
                  }
                  uVar4 = System_String__Contains(lVar5,_Str_portrait,0);
                  if ((uVar4 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((Menu.KECGFPHIEHF != 0) &&
                        (lVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar5 != 0))
                       && (lVar6 = this.AHGCJMDJGHD, lVar6 != 0)) {
                      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c45f80;
                      uVar7 = *(undefined8 *)(lVar5 + 0x80);
                      uVar9 = *(undefined8 *)(lVar6 + lVar11 * 8);
                      puVar10 = puStack_68;
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                        puVar10 = puStack_68;
                      }
                      goto LAB_00c45df8;
                    }
                    break;
                  }
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar5 == 0)) ||
                     (lVar6 = this.AHGCJMDJGHD, lVar6 == 0)) break;
                  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_00c45f80;
                  uVar7 = *(undefined8 *)(lVar5 + 0x70);
                  uVar9 = *(undefined8 *)(lVar6 + lVar11 * 8);
                  puVar10 = (undefined8 *)(&this.DMOPMKDEOMI);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
LAB_00c45df8:
                  uVar7 = UnityEngine_Object__Instantiate_object_
                                    (uVar7,uVar9,
                                     _Method_UnityEngine_Object_Instantiate_GameObject___);
                  *puVar10 = uVar7;
                }
                if ((int)lVar11 == 6) {
LAB_00c45e24:
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_OHOFKKHHKGD__,0);
                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  Adverty_AdvertyEvents__add_UnitActivated(uVar7,0);
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_AFKFNMHEADK__,0);
                  Adverty_AdvertyEvents__add_UnitDeactivated(uVar7,0);
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_IBDDLECMEJG__,0);
                  Adverty_AdvertyEvents__add_AdDelivered(uVar7,0);
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_IGEKEPIFBML__,0);
                  Adverty_AdvertyEvents__add_UnitActivationFailed(uVar7,0);
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_JOGAAIODFBK__,0);
                  Adverty_AdvertyEvents__add_AdCompleted(uVar7,0);
                  uVar7 = func_0x00a67b44(_System_Action_BaseUnit__TypeInfo);
                  System_Action___Il2CppFullySharedGenericType____ctor
                            (uVar7,__this,_Method_AdvertyBannerSpawner_IINGBMCEIBC__,0);
                  if ((bRam00000000019167f3 & 1) == 0) {
                    func_0x00a67900(&System_Action_BaseUnit__TypeInfo,0);
                    func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                    bRam00000000019167f3 = 1;
                  }
                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar5 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x30);
                  do {
                    lVar11 = System_Delegate__Combine(lVar5,uVar7,0);
                    uVar9 = _System_Action_BaseUnit__TypeInfo;
                    if (lVar11 == 0) {
                      lVar6 = 0;
                    }
                    else {
                      lVar6 = func_0x00a67a34(lVar11,_System_Action_BaseUnit__TypeInfo);
                      if (lVar6 == 0) {
                        uVar7 = func_0x00a67eec(lVar11,uVar9);
                        pcStack_80 = Adverty_AdvertyEvents__remove_UnitViewed;
                        puStack_78 = &System_Action_BaseUnit__TypeInfo;
                        puStack_70 = &Adverty_AdvertyEvents_TypeInfo;
                        puStack_68 = (undefined8 *)uVar9;
                        if ((bRam00000000019167f4 & 1) == 0) {
                          func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
                          func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                          bRam00000000019167f4 = 1;
                        }
                        if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        lVar5 = *(long *)(Adverty_AdvertyEvents.<statics> + 0x30);
                        do {
                          lVar11 = System_Delegate__Remove(lVar5,uVar7,0);
                          uVar9 = _System_Action_BaseUnit__TypeInfo;
                          if (lVar11 == 0) {
                            lVar6 = 0;
                          }
                          else {
                            lVar6 = func_0x00a67a34(lVar11,_System_Action_BaseUnit__TypeInfo);
                            if (lVar6 == 0) {
                              uVar2 = func_0x00a67eec(lVar11,uVar9);
                              pcStack_b0 = Adverty_AdvertyEvents__add_WebViewOpened;
                              uStack_a8 = uVar9;
                              lStack_a0 = lVar11;
                              lStack_98 = lVar6;
                              lStack_90 = lVar5;
                              uStack_88 = uVar7;
                              if ((bRam00000000019167f5 & 1) == 0) {
                                func_0x00a67900(&System_Action_TypeInfo);
                                func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                bRam00000000019167f5 = 1;
                              }
                              if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              lVar5 = *(long *)(Adverty_AdvertyEvents.<statics> +
                                               0x38);
                              do {
                                plVar3 = (long *)System_Delegate__Combine(lVar5,uVar2,0);
                                if ((plVar3 != (long *)0x0) && (*plVar3 != _System_Action_TypeInfo))
                                {
                                  uVar7 = func_0x00a67eec(plVar3);
                                  pcStack_e0 = Adverty_AdvertyEvents__remove_WebViewOpened;
                                  puStack_d8 = &System_Action_TypeInfo;
                                  puStack_d0 = &Adverty_AdvertyEvents_TypeInfo;
                                  plStack_c8 = plVar3;
                                  lStack_c0 = lVar5;
                                  uStack_b8 = uVar2;
                                  if ((bRam00000000019167f6 & 1) == 0) {
                                    func_0x00a67900(&System_Action_TypeInfo);
                                    func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                    bRam00000000019167f6 = 1;
                                  }
                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                    func_0x00a67a30();
                                  }
                                  lVar5 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo + 0xb8
                                                             ) + 0x38);
                                  do {
                                    plVar3 = (long *)System_Delegate__Remove(lVar5,uVar7,0);
                                    if ((plVar3 != (long *)0x0) &&
                                       (*plVar3 != _System_Action_TypeInfo)) {
                                      uVar9 = func_0x00a67eec(plVar3);
                                      pcStack_110 = Adverty_AdvertyEvents__add_WebViewClosed;
                                      puStack_108 = &System_Action_TypeInfo;
                                      puStack_100 = &Adverty_AdvertyEvents_TypeInfo;
                                      plStack_f8 = plVar3;
                                      lStack_f0 = lVar5;
                                      uStack_e8 = uVar7;
                                      if ((bRam00000000019167f7 & 1) == 0) {
                                        func_0x00a67900(&System_Action_TypeInfo);
                                        func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                        bRam00000000019167f7 = 1;
                                      }
                                      if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                        func_0x00a67a30();
                                      }
                                      lVar5 = *(long *)(*(long *)(_Adverty_AdvertyEvents_TypeInfo +
                                                                 0xb8) + 0x40);
                                      do {
                                        plVar3 = (long *)System_Delegate__Combine(lVar5,uVar9,0);
                                        if ((plVar3 != (long *)0x0) &&
                                           (*plVar3 != _System_Action_TypeInfo)) {
                                          uVar7 = func_0x00a67eec(plVar3);
                                          pcStack_140 = Adverty_AdvertyEvents__remove_WebViewClosed;
                                          puStack_138 = &System_Action_TypeInfo;
                                          puStack_130 = &Adverty_AdvertyEvents_TypeInfo;
                                          plStack_128 = plVar3;
                                          lStack_120 = lVar5;
                                          uStack_118 = uVar9;
                                          if ((bRam00000000019167f8 & 1) == 0) {
                                            func_0x00a67900(&System_Action_TypeInfo);
                                            func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                            bRam00000000019167f8 = 1;
                                          }
                                          if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0)
                                          {
                                            func_0x00a67a30();
                                          }
                                          lVar5 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x40);
                                          do {
                                            plVar3 = (long *)System_Delegate__Remove(lVar5,uVar7,0);
                                            if ((plVar3 != (long *)0x0) &&
                                               (*plVar3 != _System_Action_TypeInfo)) {
                                              uVar9 = func_0x00a67eec(plVar3);
                                              pcStack_180 = Adverty_AdvertyEvents__add_AdDelivered;
                                              puStack_178 = &System_Action_BaseUnit__TypeInfo;
                                              puStack_170 = &Adverty_AdvertyEvents_TypeInfo;
                                              puStack_168 = &System_Action_TypeInfo;
                                              puStack_160 = &Adverty_AdvertyEvents_TypeInfo;
                                              plStack_158 = plVar3;
                                              lStack_150 = lVar5;
                                              uStack_148 = uVar7;
                                              if ((bRam00000000019167f9 & 1) == 0) {
                                                func_0x00a67900(&System_Action_BaseUnit__TypeInfo);
                                                func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                                bRam00000000019167f9 = 1;
                                              }
                                              if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0)
                                                  == 0) {
                                                func_0x00a67a30();
                                              }
                                              lVar5 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x48);
                                              do {
                                                lVar11 = System_Delegate__Combine(lVar5,uVar9,0);
                                                uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                if (lVar11 == 0) {
                                                  lVar6 = 0;
                                                }
                                                else {
                                                  lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar2 = func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_1c0 = 
                                                  Adverty_AdvertyEvents__remove_AdDelivered;
                                                  puStack_1b8 = &System_Action_BaseUnit__TypeInfo;
                                                  puStack_1b0 = &Adverty_AdvertyEvents_TypeInfo;
                                                  uStack_1a8 = uVar7;
                                                  lStack_1a0 = lVar11;
                                                  lStack_198 = lVar6;
                                                  lStack_190 = lVar5;
                                                  uStack_188 = uVar9;
                                                  if ((bRam00000000019167fa & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                                  bRam00000000019167fa = 1;
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar5 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x48);
                                                  do {
                                                    lVar11 = System_Delegate__Remove(lVar5,uVar2,0);
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar9 = func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_200 = 
                                                  Adverty_AdvertyEvents__add_AdCompleted;
                                                  puStack_1f8 = &System_Action_BaseUnit__TypeInfo;
                                                  puStack_1f0 = &Adverty_AdvertyEvents_TypeInfo;
                                                  uStack_1e8 = uVar7;
                                                  lStack_1e0 = lVar11;
                                                  lStack_1d8 = lVar6;
                                                  lStack_1d0 = lVar5;
                                                  uStack_1c8 = uVar2;
                                                  if ((bRam00000000019167fb & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_AdvertyEvents_TypeInfo);
                                                  bRam00000000019167fb = 1;
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar5 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50);
                                                  do {
                                                    lVar11 = System_Delegate__Combine(lVar5,uVar9,0)
                                                    ;
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar2 = func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_240 = 
                                                  Adverty_AdvertyEvents__remove_AdCompleted;
                                                  puStack_238 = &System_Action_BaseUnit__TypeInfo;
                                                  puStack_230 = &Adverty_AdvertyEvents_TypeInfo;
                                                  uStack_228 = uVar7;
                                                  lStack_220 = lVar11;
                                                  lStack_218 = lVar6;
                                                  lStack_210 = lVar5;
                                                  uStack_208 = uVar9;
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
                                                  lVar5 = *(long *)(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50);
                                                  do {
                                                    lVar11 = System_Delegate__Remove(lVar5,uVar2,0);
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_298 = Adverty_AdvertyEvents___cctor;
                                                    puStack_278 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_270 = &Adverty_AdvertyEvents_TypeInfo;
                                                    uStack_268 = uVar7;
                                                    lStack_260 = lVar11;
                                                    lStack_258 = lVar6;
                                                    lStack_250 = lVar5;
                                                    uStack_248 = uVar2;
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
                                                  uVar7 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_oU__,0);
                                                  if (*(int *)(_Adverty_a_A_aAl_TypeInfo + 0xe0) ==
                                                      0) {
                                                    func_0x00a67a30();
                                                  }
                                                  Adverty_a_A_aAl__oc(uVar7);
                                                  uVar7 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_ot__,0);
                                                  Adverty_a_A_aAl__oe(uVar7);
                                                  uVar7 = func_0x00a67b44(_System_Action_TypeInfo);
                                                  System_Action___ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_ou__,0);
                                                  Adverty_a_A_aAl__od(uVar7);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_oX__,0);
                                                  if (*(int *)(_Adverty_a_C_aCt_TypeInfo + 0xe0) ==
                                                      0) {
                                                    func_0x00a67a30();
                                                  }
                                                  Adverty_a_C_aCt__uj(uVar7,0);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_oV__,0);
                                                  Adverty_a_d_adb__xC(uVar7,0);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_ov__,0);
                                                  Adverty_a_d_adb__xD(uVar7,0);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_oW__,0);
                                                  Adverty_a_d_adb__xF(uVar7,0);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_aCu__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_ow__,0);
                                                  Adverty_a_d_adb__xG(uVar7,0);
                                                  uVar7 = func_0x00a67b44(
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  System_Action___Il2CppFullySharedGenericType____ctor
                                                            (uVar7,0,
                                                  _Method_Adverty_AdvertyEvents_oT__,0);
                                                  pcStack_280 = pcStack_298;
                                                  if ((bRam0000000001916b55 & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo,0);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b55 = 1;
                                                  }
                                                  lVar5 = **(long **)(_Adverty_a_d_ada_TypeInfo +
                                                                     0xb8);
                                                  do {
                                                    lVar11 = System_Delegate__Combine(lVar5,uVar7,0)
                                                    ;
                                                    uVar9 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar2 = func_0x00a67eec(lVar11,uVar9);
                                                    pcStack_2c0 = Adverty_a_d_ada__XU;
                                                    puStack_2b0 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_2a8 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_2a0 = uVar9;
                                                    pcStack_298 = (code *)lVar11;
                                                    lStack_290 = lVar5;
                                                    uStack_288 = uVar7;
                                                    if ((bRam0000000001916b56 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b56 = 1;
                                                  }
                                                  lVar5 = **(long **)(_Adverty_a_d_ada_TypeInfo +
                                                                     0xb8);
                                                  do {
                                                    lVar11 = System_Delegate__Remove(lVar5,uVar2,0);
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar9 = func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_300 = Adverty_a_d_ada__Xu;
                                                    puStack_2f0 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_2e8 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_2e0 = uVar7;
                                                    lStack_2d8 = lVar11;
                                                    lStack_2d0 = lVar5;
                                                    uStack_2c8 = uVar2;
                                                    if ((bRam0000000001916b57 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b57 = 1;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8);
                                                  do {
                                                    lVar11 = System_Delegate__Combine(lVar5,uVar9,0)
                                                    ;
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    uVar2 = func_0x00a67eec(lVar11,uVar7);
                                                    pcStack_340 = Adverty_a_d_ada__XV;
                                                    puStack_330 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_328 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_320 = uVar7;
                                                    lStack_318 = lVar11;
                                                    lStack_310 = lVar5;
                                                    uStack_308 = uVar9;
                                                    if ((bRam0000000001916b58 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Action_BaseUnit__TypeInfo);
                                                  func_0x00a67900(&Adverty_a_d_ada_TypeInfo);
                                                  bRam0000000001916b58 = 1;
                                                  }
                                                  lVar5 = *(long *)(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8);
                                                  do {
                                                    lVar11 = System_Delegate__Remove(lVar5,uVar2,0);
                                                    uVar7 = _System_Action_BaseUnit__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_BaseUnit__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    auVar12 = func_0x00a67eec(lVar11,uVar7);
                                                    uVar9 = auVar12._8_8_;
                                                    pcStack_380 = Adverty_a_d_ada__nk;
                                                    puStack_370 = &System_Action_BaseUnit__TypeInfo;
                                                    puStack_368 = &Adverty_a_d_ada_TypeInfo;
                                                    uStack_360 = uVar7;
                                                    lStack_358 = lVar11;
                                                    lStack_350 = lVar5;
                                                    uStack_348 = uVar2;
                                                    if ((bRam0000000001916b59 & 1) == 0) {
                                                      func_0x00a67900(&
                                                  System_Func_string__bool__TypeInfo);
                                                  bRam0000000001916b59 = 1;
                                                  }
                                                  plVar3 = (long *)(auVar12._0_8_ + 0x10);
                                                  lVar5 = *plVar3;
                                                  do {
                                                    lVar11 = System_Delegate__Combine(lVar5,uVar9,0)
                                                    ;
                                                    uVar7 = _System_Func_string__bool__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Func_string__bool__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    auVar12 = func_0x00a67eec(lVar11,uVar7);
                                                    uVar2 = auVar12._8_8_;
                                                    pcStack_3c0 = Adverty_a_d_ada__nL;
                                                    puStack_3b0 = &
                                                  System_Func_string__bool__TypeInfo;
                                                  uStack_3a8 = uVar7;
                                                  lStack_3a0 = lVar11;
                                                  lStack_398 = lVar5;
                                                  plStack_390 = plVar3;
                                                  uStack_388 = uVar9;
                                                  if ((bRam0000000001916b5a & 1) == 0) {
                                                    func_0x00a67900(&
                                                  System_Func_string__bool__TypeInfo);
                                                  bRam0000000001916b5a = 1;
                                                  }
                                                  plVar3 = (long *)(auVar12._0_8_ + 0x10);
                                                  lVar5 = *plVar3;
                                                  do {
                                                    lVar11 = System_Delegate__Remove(lVar5,uVar2,0);
                                                    uVar7 = _System_Func_string__bool__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Func_string__bool__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    auVar12 = func_0x00a67eec(lVar11,uVar7);
                                                    uVar9 = auVar12._8_8_;
                                                    pcStack_400 = Adverty_a_d_ada__nl;
                                                    puStack_3f0 = &
                                                  System_Func_string__bool__TypeInfo;
                                                  uStack_3e8 = uVar7;
                                                  lStack_3e0 = lVar11;
                                                  lStack_3d8 = lVar5;
                                                  plStack_3d0 = plVar3;
                                                  uStack_3c8 = uVar2;
                                                  if ((bRam0000000001916b5b & 1) == 0) {
                                                    func_0x00a67900(&System_Action_float__TypeInfo);
                                                    bRam0000000001916b5b = 1;
                                                  }
                                                  plVar3 = (long *)(auVar12._0_8_ + 0x18);
                                                  lVar5 = *plVar3;
                                                  do {
                                                    lVar11 = System_Delegate__Combine(lVar5,uVar9,0)
                                                    ;
                                                    uVar7 = _System_Action_float__TypeInfo;
                                                    if (lVar11 == 0) {
                                                      lVar6 = 0;
                                                    }
                                                    else {
                                                      lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_float__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    auVar12 = func_0x00a67eec(lVar11,uVar7);
                                                    uVar2 = auVar12._8_8_;
                                                    pcStack_440 = Adverty_a_d_ada__nM;
                                                    puStack_430 = &System_Action_float__TypeInfo;
                                                    uStack_428 = uVar7;
                                                    lStack_420 = lVar11;
                                                    lStack_418 = lVar5;
                                                    plStack_410 = plVar3;
                                                    uStack_408 = uVar9;
                                                    if ((bRam0000000001916b5c & 1) == 0) {
                                                      func_0x00a67900(&System_Action_float__TypeInfo
                                                                     );
                                                      bRam0000000001916b5c = 1;
                                                    }
                                                    plVar3 = (long *)(auVar12._0_8_ + 0x18);
                                                    lVar5 = *plVar3;
                                                    do {
                                                      lVar11 = System_Delegate__Remove
                                                                         (lVar5,uVar2,0);
                                                      uVar7 = _System_Action_float__TypeInfo;
                                                      if (lVar11 == 0) {
                                                        lVar6 = 0;
                                                      }
                                                      else {
                                                        lVar6 = func_0x00a67a34(lVar11,
                                                  _System_Action_float__TypeInfo);
                                                  if (lVar6 == 0) {
                                                    auVar12 = func_0x00a67eec(lVar11,uVar7);
                                                    lVar6 = auVar12._0_8_;
                                                    lStack_460 = lVar11;
                                                    lStack_458 = lVar5;
                                                    plStack_450 = plVar3;
                                                    uStack_448 = uVar2;
                                                    if ((bRam0000000001916b5d & 1) == 0) {
                                                      func_0x00a67900(&
                                                  Method_Adverty_a_a_aan_INativeRedirectionDialog__qg__
                                                  );
                                                  func_0x00a67900(&
                                                  Adverty_a_a_aan_INativeRedirectionDialog__TypeInfo
                                                  );
                                                  bRam0000000001916b5d = 1;
                                                  }
                                                  System_Object___ctor(lVar6,0);
                                                  *(long *)(lVar6 + 0x20) = auVar12._8_8_;
                                                  if (*(int *)(
                                                  _Adverty_a_a_aan_INativeRedirectionDialog__TypeInfo
                                                  + 0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  func_0x00b946d4(&uStack_468,
                                                                                                                                    
                                                  _Method_Adverty_a_a_aan_INativeRedirectionDialog__qg__
                                                  );
                                                  *(undefined8 *)(lVar6 + 0x28) = uStack_468;
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(plVar3,lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(plVar3,lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(plVar3,lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(plVar3,lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8,lVar6,lVar5)
                                                  ;
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8) + 8,lVar6,lVar5)
                                                  ;
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(*(undefined8 *)
                                                                            (
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8),lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  lVar11 = func_0x00a90840(*(undefined8 *)
                                                                            (
                                                  _Adverty_a_d_ada_TypeInfo + 0xb8),lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50,
                                                  lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x50,
                                                  lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                  }
                                                  if (*(int *)(_Adverty_AdvertyEvents_TypeInfo +
                                                              0xe0) == 0) {
                                                    func_0x00a67a30();
                                                  }
                                                  lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x48,
                                                  lVar6,lVar5);
                                                  bVar1 = lVar5 != lVar11;
                                                  lVar5 = lVar11;
                                                  } while (bVar1);
                                                  return;
                                                  }
                                                }
                                                if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0)
                                                    == 0) {
                                                  func_0x00a67a30();
                                                }
                                                lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x48,
                                                  lVar6,lVar5);
                                                bVar1 = lVar5 != lVar11;
                                                lVar5 = lVar11;
                                              } while (bVar1);
                                              return;
                                            }
                                            if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) ==
                                                0) {
                                              func_0x00a67a30();
                                            }
                                            lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x40,
                                                  plVar3,lVar5);
                                            bVar1 = lVar5 != lVar11;
                                            lVar5 = lVar11;
                                          } while (bVar1);
                                          return;
                                        }
                                        if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                          func_0x00a67a30();
                                        }
                                        lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x40,
                                                  plVar3,lVar5);
                                        bVar1 = lVar5 != lVar11;
                                        lVar5 = lVar11;
                                      } while (bVar1);
                                      return;
                                    }
                                    if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                      func_0x00a67a30();
                                    }
                                    lVar11 = func_0x00a90840(*(long *)(
                                                  _Adverty_AdvertyEvents_TypeInfo + 0xb8) + 0x38,
                                                  plVar3,lVar5);
                                    bVar1 = lVar5 != lVar11;
                                    lVar5 = lVar11;
                                  } while (bVar1);
                                  return;
                                }
                                if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                                  func_0x00a67a30();
                                }
                                lVar11 = func_0x00a90840(*(long *)(_Adverty_AdvertyEvents_TypeInfo +
                                                                  0xb8) + 0x38,plVar3,lVar5);
                                bVar1 = lVar5 != lVar11;
                                lVar5 = lVar11;
                              } while (bVar1);
                              return;
                            }
                          }
                          if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          lVar11 = func_0x00a90840(Adverty_AdvertyEvents.<statics>
                                                   + 0x30,lVar6,lVar5);
                          bVar1 = lVar5 != lVar11;
                          lVar5 = lVar11;
                        } while (bVar1);
                        return;
                      }
                    }
                    if (*(int *)(_Adverty_AdvertyEvents_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar11 = func_0x00a90840(Adverty_AdvertyEvents.<statics> +
                                             0x30,lVar6,lVar5);
                    bVar1 = lVar5 != lVar11;
                    lVar5 = lVar11;
                  } while (bVar1);
                  return;
                }
                lVar5 = this.AHGCJMDJGHD;
                lVar11 = lVar11 + 1;
                if (lVar5 == 0) break;
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb45f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner___ctor(void *__this)

{
  this.DHKGCPOGJMD = 0xffffffff;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void Update() { }   @0xb45f94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__Update(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((bRam000000000191714b & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191714b = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar2 = Menu.KECGFPHIEHF.ANIMNONMFFH;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if (((uVar1 & 1) != 0) &&
       (fVar3 = (float)UnityEngine_Time__get_time(0), this.NILEPPJIPGB < fVar3)) {
      AdvertyBannerSpawner__JKLCJJADPLK(__this);
      fVar3 = (float)UnityEngine_Time__get_time(0);
      this.NILEPPJIPGB = fVar3 + 0.5;
    }
    return;
  }
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
  lVar5 = this.AHGCJMDJGHD;
  if (lVar5 != 0) {
    fVar12 = 9999.0;
    iVar7 = 0;
    lVar8 = 7;
    do {
      uVar9 = lVar8 - 4;
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar9) {
        if ((iVar7 == 0) || (this.DHKGCPOGJMD == iVar7)) {
          return;
        }
        this.DHKGCPOGJMD = iVar7;
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
        uVar1 = this.DHKGCPOGJMD;
        lVar5 = this.AHGCJMDJGHD;
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
              uVar6 = this.LHMAHANAOAH;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              if (this.LHMAHANAOAH == 0) goto LAB_00c45968;
              uVar9 = UnityEngine_GameObject__get_activeSelf(this.LHMAHANAOAH,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              lVar5 = this.LHMAHANAOAH;
            }
            else {
              uVar6 = this.OPAEIJBOJMK;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              if (this.OPAEIJBOJMK == 0) goto LAB_00c45968;
              uVar9 = UnityEngine_GameObject__get_activeSelf(this.OPAEIJBOJMK,0);
              if ((uVar9 & 1) == 0) goto LAB_00c458c0;
              lVar5 = this.OPAEIJBOJMK;
            }
          }
          else {
            uVar6 = this.DMOPMKDEOMI;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar9 & 1) == 0) goto LAB_00c458c0;
            if (this.DMOPMKDEOMI == 0) goto LAB_00c45968;
            uVar9 = UnityEngine_GameObject__get_activeSelf(this.DMOPMKDEOMI,0);
            if ((uVar9 & 1) == 0) goto LAB_00c458c0;
            lVar5 = this.DMOPMKDEOMI;
          }
          if (lVar5 != 0) {
            lVar5 = UnityEngine_GameObject__get_transform(lVar5,0);
            lVar8 = this.AHGCJMDJGHD;
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) <= this.DHKGCPOGJMD) goto LAB_00c4596c;
              lVar8 = *(long *)(lVar8 + (long)(int)this.DHKGCPOGJMD * 8 + 0x20);
              if ((lVar8 != 0) &&
                 (uVar6 = UnityEngine_Component__get_transform(lVar8,0), lVar5 != 0)) {
                UnityEngine_Transform__SetParent(lVar5,uVar6,0,0);
                lVar5 = this.AHGCJMDJGHD;
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) <= this.DHKGCPOGJMD) goto LAB_00c4596c;
                  lVar5 = *(long *)(lVar5 + (long)(int)this.DHKGCPOGJMD * 8 + 0x20);
                  if (((lVar5 != 0) &&
                      (lVar5 = UnityEngine_Transform__GetChild(lVar5,0,0), lVar5 != 0)) &&
                     (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 != 0)) {
                    UnityEngine_GameObject__SetActive(lVar5,0,0);
LAB_00c458c0:
                    uVar6 = System_Int32__ToString((uint *)(&this.DHKGCPOGJMD),0);
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
        lVar5 = this.AHGCJMDJGHD;
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_00c46204;
        lVar5 = *(long *)(lVar5 + lVar8 * 8);
        if (lVar5 == 0) break;
        UnityEngine_Transform__get_position(lVar5,0);
        in_s2 = fVar11;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar5 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar5 == 0))
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
      lVar5 = this.AHGCJMDJGHD;
      lVar8 = lVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void IINGBMCEIBC(BaseUnit CDCHCKMOHPG) { }   @0xb46208

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AdvertyBannerSpawner__IINGBMCEIBC(void *__this,void *CDCHCKMOHPG)

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
  
  if ((bRam000000000191714d & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Adverty_OnUnitViewed__);
    bRam000000000191714d = 1;
  }
  uVar8 = _Str_Adverty_OnUnitViewed__;
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
  lVar6 = Main.FBDDKIOEKDM;
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
  uVar8 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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



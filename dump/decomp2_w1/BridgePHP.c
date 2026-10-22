// ==== public Sprite GetCountryTextureFromID(int id) { }   @0xada1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__GetCountryTextureFromID(void *__this,int id)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  pvVar2 = __this;
  if ((bRam0000000001916e0f & 1) == 0) {
    pvVar2 = (void *)func_0x00a67900(&Str_);
    bRam0000000001916e0f = 1;
  }
  uVar3 = BridgePHP__GetCountryNameFromID(pvVar2,id);
  uVar4 = System_String__op_Inequality(uVar3,_Str_,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)((long)__this + 0x20);
    if (lVar6 == 0) {
LAB_00bda270:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        pvVar2 = *(void **)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (pvVar2 == (void *)0x0) goto LAB_00bda270;
        uVar5 = UnityEngine_Object__get_name(pvVar2,0);
        uVar4 = System_String__op_Equality(uVar5,uVar3,0);
        if ((uVar4 & 1) != 0) {
          return pvVar2;
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return (void *)0x0;
}


// ==== public bool GooglePlayIsAuthenticated() { }   @0xadb0b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__GooglePlayIsAuthenticated(void *__this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
    return false;
  }
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917564 & 1) == 0) {
    func_0x00a67900(&GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo,0);
    bRam0000000001917564 = 1;
  }
  plVar6 = *(long **)(lVar2 + 0x18);
  if (plVar6 == (long *)0x0) {
    return false;
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_00dc169c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           func_0x00a9e6c4(plVar6,_GooglePlayGames_BasicApi_IPlayGamesClient_TypeInfo,2);
LAB_00dc169c:
                    /* WARNING: Could not recover jumptable at 0x00dc16ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  return (bool)uVar1;
}


// ==== public IEnumerator SendRateMe(int stars, string comment) { }   @0xadb270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__SendRateMe(void *__this,int stars,void *comment)

{
  void *pvVar1;
  
  if ((bRam0000000001916e18 & 1) == 0) {
    func_0x00a67900(&BridgePHP__SendRateMe_d__60_TypeInfo);
    bRam0000000001916e18 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_BridgePHP__SendRateMe_d__60_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(int *)((long)pvVar1 + 0x20) = stars;
  *(void **)((long)pvVar1 + 0x28) = comment;
  *(void **)((long)pvVar1 + 0x30) = __this;
  return pvVar1;
}


// ==== public static string Md5Sum(string strToEncrypt) { }   @0xadbd4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * BridgePHP__Md5Sum(void *strToEncrypt)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  if ((bRam0000000001916e1d & 1) == 0) {
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    bRam0000000001916e1d = 1;
  }
  uVar1 = KNIEPIEJMDD__COCCMCDDMBM(strToEncrypt,0);
  lVar2 = System_BitConverter__ToString(uVar1,0);
  if ((lVar2 != 0) && (lVar2 = System_String__Replace(lVar2,_Str__,_Str_,0), lVar2 != 0)) {
    if ((bRam00000000019178f1 & 1) == 0) {
      func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo,0);
      bRam00000000019178f1 = 1;
    }
    if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e2aedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pvVar4 = (void *)(**(code **)(*plVar3 + 0x1b8))
                                   (plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
        return pvVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool IsSponsorParentUrl(string[] domains) { }   @0xadc794

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__IsSponsorParentUrl(void *__this,void *domains)

{
  return false;
}



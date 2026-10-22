// ==== private bool MoveNext() { }   @0xadf594

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool BridgePHP__GetServerConfig_d__57__MoveNext(void *__this)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000001916e27 & 1) == 0) {
    func_0x00a67900(&AnalyticsController_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_GetServerConfig__);
    func_0x00a67900(&Str_Fail_with_parse__0___);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_conf_php);
    func_0x00a67900(&Str_GetServerConfig__Ooops__something_went_w);
    func_0x00a67900(&Str_1);
    bRam0000000001916e27 = 1;
  }
  if (*(int *)((long)__this + 0x10) == 1) {
    lVar3 = *(long *)((long)__this + 0x20);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(long *)((long)__this + 0x28) == 0) goto LAB_00bdfa94;
    uVar4 = UnityEngine_Networking_UnityWebRequest__get_isHttpError
                      (*(long *)((long)__this + 0x28),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)((long)__this + 0x28) == 0) goto LAB_00bdfa94;
      uVar4 = UnityEngine_Networking_UnityWebRequest__get_isNetworkError
                        (*(long *)((long)__this + 0x28),0);
      if ((uVar4 & 1) == 0) {
        if ((*(long *)((long)__this + 0x28) != 0) &&
           (lVar5 = UnityEngine_Networking_UnityWebRequest__get_downloadHandler
                              (*(long *)((long)__this + 0x28),0), lVar5 != 0)) {
          lVar5 = UnityEngine_Networking_DownloadHandler__get_text(lVar5,0);
          uVar2 = System_String__Concat(_Str_GetServerConfig__,lVar5,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(uVar2,0,0);
          if ((lVar3 == 0) || (*(undefined1 *)(lVar3 + 0xa4) = 1, lVar5 == 0)) goto LAB_00bdfa94;
          if (*(int *)(lVar5 + 0x10) < 2) {
            return false;
          }
          uVar4 = System_String__Contains(lVar5,_Str__,0);
          if ((uVar4 & 1) == 0) {
            return false;
          }
          lVar3 = System_String__Split(lVar5,0x7c,0,0);
          uStack_24 = 0;
          if (lVar3 == 0) goto LAB_00bdfa94;
          if (*(long *)(lVar3 + 0x18) != 0) {
            if ((int)*(long *)(lVar3 + 0x18) == 0) goto LAB_00bdfa98;
            uVar4 = System_Int32__TryParse(*(undefined8 *)(lVar3 + 0x20),&uStack_24,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00bdfa98;
              uVar2 = System_String__Concat
                                (_Str_Fail_with_parse__0___,*(undefined8 *)(lVar3 + 0x20),0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__EEKNCFLMGDP(uVar2,0);
            }
            else {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                 (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
              goto LAB_00bdfa94;
              AdvController__OBNLPJNOLJP(lVar5,uStack_24,0);
            }
          }
          if ((1 < *(int *)(lVar3 + 0x18)) &&
             (uVar4 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x28),_Str_1,0),
             (uVar4 & 1) != 0)) {
            **(undefined1 **)(_AnalyticsController_TypeInfo + 0xb8) = 1;
          }
          if ((2 < *(int *)(lVar3 + 0x18)) &&
             (uVar4 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x30),_Str_1,0),
             (uVar4 & 1) != 0)) {
            *(undefined1 *)(*(long *)(_AnalyticsController_TypeInfo + 0xb8) + 1) = 1;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bdfa94;
            uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if (((uVar4 & 1) != 0) && (5 < *(int *)(lVar3 + 0x18))) {
              bVar1 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x40),_Str_1,0);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Menu_TypeInfo);
              }
              *(byte *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x1a) = bVar1 & 1;
              if (*(uint *)(lVar3 + 0x18) < 6) {
LAB_00bdfa98:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              uVar4 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x48),_Str_1,0);
              if ((uVar4 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x38), lVar5 == 0))
                goto LAB_00bdfa94;
                AdvController__NNFMKIDINAO(lVar5,0);
              }
            }
          }
          if (*(int *)(lVar3 + 0x18) < 7) {
            return false;
          }
          bVar1 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x50),_Str_1,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          *(byte *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0x19) = bVar1 & 1;
          return false;
        }
LAB_00bdfa94:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__GEMDEAMAGPG(_Str_GetServerConfig__Ooops__something_went_w,0,0);
  }
  else if (*(int *)((long)__this + 0x10) == 0) {
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = System_String__Concat
                      (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x20),_Str_conf_php,0
                      );
    lVar3 = UnityEngine_Networking_UnityWebRequest__Get(uVar2,0);
    *(long *)((long)__this + 0x28) = lVar3;
    if (lVar3 != 0) {
      uVar2 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(lVar3,0);
      *(undefined8 *)((long)__this + 0x18) = uVar2;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
    goto LAB_00bdfa94;
  }
  return false;
}



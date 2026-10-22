// ==== public static void JHEDFDCJBDE(int HKGEOJPHLAN) { }   @0xb5200c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void JCHCJLKJJNF__JHEDFDCJBDE(int HKGEOJPHLAN)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_24;
  
  if ((bRam0000000001917196 & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_CancelNotification);
    bRam0000000001917196 = 1;
  }
  lVar1 = JCHCJLKJJNF__AFJAAIMFNDF();
  plVar2 = (long *)func_0x00a679a0(_object___TypeInfo,1);
  iStack_24 = HKGEOJPHLAN;
  lVar3 = func_0x00a67a38(_int_TypeInfo,&iStack_24);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) && (lVar4 = func_0x00a67a34(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
       ) {
      uVar5 = func_0x00a67b74();
      func_0x00a67a20(uVar5,0);
      if ((bRam000000000191719b & 1) == 0) {
        func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
        func_0x00a67900(&Str_com_hippogames_simpleandroidnotification);
        bRam000000000191719b = 1;
      }
      uVar5 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor(uVar5,_Str_com_hippogames_simpleandroidnotification,0);
      return;
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar2[4] = lVar3;
    if (lVar1 != 0) {
      UnityEngine_AndroidJavaObject__CallStatic(lVar1,_Str_CancelNotification,plVar2,0);
      KKDJDGPGFPN__PCPJMOGFDCH(HKGEOJPHLAN,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static string LIOLOMKELPJ(FPKBDOPAFGP DJAGPKMAACN) { }   @0xb52bd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * JCHCJLKJJNF__LIOLOMKELPJ(int DJAGPKMAACN)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  if ((bRam000000000191719a & 1) == 0) {
    func_0x00a67900(&FPKBDOPAFGP_TypeInfo);
    func_0x00a67900(&Str_anp_);
    bRam000000000191719a = 1;
  }
  uStack_38 = _FPKBDOPAFGP_TypeInfo;
  uStack_30 = 0xffffffffffffffff;
  iStack_28 = DJAGPKMAACN;
  lVar1 = System_Enum__ToString(&uStack_38,0);
  if (lVar1 != 0) {
    uVar2 = System_String__ToLower(lVar1,0);
    pvVar3 = (void *)System_String__Concat(_Str_anp_,uVar2,0);
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



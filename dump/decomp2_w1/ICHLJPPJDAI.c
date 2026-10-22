// ==== private static void .cctor() { }   @0xaebcec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ICHLJPPJDAI___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001916e98 & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&ICHLJPPJDAI_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__572FB9AFE2DE58D0BA7CF1D33E71747894489B119DD
                   );
    func_0x00a67900(&Str_X_lqwjlUlq5ft8cCn8Oa6HemCpuFtir6_fo_9ZOI);
    bRam0000000001916e98 = 1;
  }
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Convert__FromBase64String(_Str_X_lqwjlUlq5ft8cCn8Oa6HemCpuFtir6_fo_9ZOI,0);
  **(undefined8 **)(_ICHLJPPJDAI_TypeInfo + 0xb8) = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0x2d);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (uVar1,_Field__PrivateImplementationDetails__572FB9AFE2DE58D0BA7CF1D33E71747894489B119DD
             ,0);
  lVar2 = *(long *)(_ICHLJPPJDAI_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined4 *)(lVar2 + 0x10) = 0x52;
  *(undefined1 *)(lVar2 + 0x14) = 1;
  return;
}



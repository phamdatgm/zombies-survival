// ==== private static void .cctor() { }   @0xae445c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CGFJBBIFAFO___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001916e2b & 1) == 0) {
    func_0x00a67900(&CGFJBBIFAFO_TypeInfo);
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__4D53044145047A33D8042CB7B38B17649066B9D6255
                   );
    func_0x00a67900(&Str_sBnVoXQVWbxzrKExAu6MuvphoFECzXeJUg7Xgboq);
    bRam0000000001916e2b = 1;
  }
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Convert__FromBase64String(_Str_sBnVoXQVWbxzrKExAu6MuvphoFECzXeJUg7Xgboq,0);
  **(undefined8 **)(_CGFJBBIFAFO_TypeInfo + 0xb8) = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0xf);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (uVar1,_Field__PrivateImplementationDetails__4D53044145047A33D8042CB7B38B17649066B9D6255
             ,0);
  lVar2 = *(long *)(_CGFJBBIFAFO_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined4 *)(lVar2 + 0x10) = 0xd2;
  *(undefined1 *)(lVar2 + 0x14) = 1;
  return;
}



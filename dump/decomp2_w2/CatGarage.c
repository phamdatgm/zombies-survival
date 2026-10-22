// ==== public void DPMNCABIAJA() { }   @0xae7794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__DPMNCABIAJA(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001916e4e & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_wash);
    bRam0000000001916e4e = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_time(0);
  if (*(float *)((long)__this + 0x28) < fVar6) {
    fVar6 = (float)UnityEngine_Time__get_time(0);
    iVar1 = UnityEngine_Random__Range(5,0x14,0);
    *(float *)((long)__this + 0x28) = fVar6 + (float)iVar1;
    uVar5 = *(undefined8 *)((long)__this + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    uVar5 = _Str_wash;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)((long)__this + 0x20);
      if (lVar4 != 0) {
        if (pcRam000000000191b598 == (code *)0x0) {
          pcRam000000000191b598 = (code *)func_0x00a678c4(&UNK_005a13ae,_Str_wash,0xffffffff);
        }
        uVar2 = (*pcRam000000000191b598)(uVar5);
        if (pcRam000000000191b588 == (code *)0x0) {
          pcRam000000000191b588 = (code *)func_0x00a678c4(&UNK_005a80d8);
        }
                    /* WARNING: Could not recover jumptable at 0x01462c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191b588)(0xff800000,lVar4,uVar2,0xffffffff);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}



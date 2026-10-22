// ==== private void BJOLPLBELIA() { }   @0xae774c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CatGarage__BJOLPLBELIA(void *__this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)UnityEngine_Time__get_time(0);
  iVar1 = UnityEngine_Random__Range(5,0x14,0);
  *(float *)((long)__this + 0x28) = fVar2 + (float)iVar1;
  return;
}



// ==== private void Update() { }   @0xb4d474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__Update(void *__this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000001917179 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Accelerometer_checked__OK);
    func_0x00a67900(&Str_by_time);
    bRam0000000001917179 = 1;
  }
  if (*(char *)((long)__this + 0x20) != '\0') {
    if (3.0 <= *(float *)((long)__this + 0x28)) {
      *(undefined1 *)((long)__this + 0x20) = 0;
      uVar1 = UnityEngine_Behaviour__set_enabled(__this,0,0);
      AccelerometerFix__CKGMJNMBGJN(uVar1,_Str_by_time);
    }
    else {
      fVar2 = (float)UnityEngine_Input__get_acceleration(0);
      if (fVar2 != *(float *)((long)__this + 0x24)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_Accelerometer_checked__OK,0,0);
        *(undefined1 *)((long)__this + 0x20) = 0;
        UnityEngine_Behaviour__set_enabled(__this,0,0);
      }
    }
    fVar3 = *(float *)((long)__this + 0x28);
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    *(float *)((long)__this + 0x28) = fVar3 + fVar2;
  }
  if (*(char *)((long)__this + 0x2c) != '\0') {
    fVar2 = *(float *)((long)__this + 0x30);
    if (0.7 < fVar2) {
      *(undefined1 *)((long)__this + 0x2c) = 0;
      AccelerometerFix__EIOGCAFFGKO(__this);
      fVar2 = *(float *)((long)__this + 0x30);
    }
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    *(float *)((long)__this + 0x30) = fVar2 + fVar3;
  }
  return;
}



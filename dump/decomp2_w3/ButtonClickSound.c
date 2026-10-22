// ==== public void EAFFPOKJHCK() { }   @0xb49ae4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound__EAFFPOKJHCK(void *__this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  if ((bRam0000000001917159 & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917159 = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = 0;
  lVar1 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x40);
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
    uVar4 = extraout_x1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    uVar4 = extraout_x1_00;
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo,uVar4);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar1 != 0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(lVar1,0);
          return;
        }
        goto LAB_00c5d08c;
      }
    }
    return;
  }
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



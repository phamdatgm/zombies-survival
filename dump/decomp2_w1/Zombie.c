// ==== private void Start() { }   @0xad6d5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__Start(void *__this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916e03 & 1) == 0) {
    func_0x00a67900(&Str_Run);
    func_0x00a67900(&Str_WalkBarrel);
    func_0x00a67900(&Str_TankIdle);
    func_0x00a67900(&Str_Crawl);
    func_0x00a67900(&Str_Idle);
    func_0x00a67900(&Str_Zombie_Walk);
    bRam0000000001916e03 = 1;
  }
  switch(*(int *)((long)__this + 0x30)) {
  case 1:
    lVar4 = *(long *)((long)__this + 0x88);
    if (lVar4 == 0) {
LAB_00bd6eb4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    puVar3 = (undefined8 *)&Str_WalkBarrel;
    goto code_r0x00bd6e54;
  case 2:
    lVar4 = *(long *)((long)__this + 0x88);
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Crawl;
    break;
  case 3:
  case 4:
    lVar4 = *(long *)((long)__this + 0x88);
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Run;
    break;
  default:
    lVar4 = *(long *)((long)__this + 0x88);
    if (*(int *)((long)__this + 0x30) != 6) {
      uVar5 = UnityEngine_Random__get_value(0);
      if (lVar4 == 0) goto LAB_00bd6eb4;
      puVar3 = (undefined8 *)&Str_Zombie_Walk;
      break;
    }
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_TankIdle;
code_r0x00bd6e54:
    uVar2 = *puVar3;
    uVar5 = 0xff800000;
    goto UnityEngine_Animator__Play;
  case 9:
    lVar4 = *(long *)((long)__this + 0x88);
    uVar5 = UnityEngine_Random__get_value(0);
    if (lVar4 == 0) goto LAB_00bd6eb4;
    puVar3 = (undefined8 *)&Str_Idle;
  }
  uVar2 = *puVar3;
UnityEngine_Animator__Play:
  if (pcRam000000000191b598 == (code *)0x0) {
    pcRam000000000191b598 = (code *)func_0x00a678c4(&UNK_005a13ae,uVar2,0xffffffff);
  }
  uVar1 = (*pcRam000000000191b598)(uVar2);
  if (pcRam000000000191b588 == (code *)0x0) {
    pcRam000000000191b588 = (code *)func_0x00a678c4(&UNK_005a80d8);
  }
                    /* WARNING: Could not recover jumptable at 0x01462c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191b588)(uVar5,lVar4,uVar1,0xffffffff);
  return;
}



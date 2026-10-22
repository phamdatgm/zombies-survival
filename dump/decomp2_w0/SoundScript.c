// ==== public void .ctor() { }   @0xb679c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public static void ONLLENOAJLH() { }   @0xb68214

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript__ONLLENOAJLH(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000001917247 & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917247 = 1;
  }
  iVar1 = UnityEngine_Random__Range(0,1000,0);
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_SoundScript_TypeInfo);
  }
  lVar4 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(uint *)(lVar4 + 0x18) <= (uint)(500 < iVar1)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar4 = *(long *)(lVar4 + (ulong)(500 < iVar1) * 8 + 0x20);
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
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
      uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 != 0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(lVar4,0);
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


// ==== private static void .cctor() { }   @0xb685fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SoundScript___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000191724c & 1) == 0) {
    func_0x00a67900(&UnityEngine_AudioSource___TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191724c = 1;
  }
  lVar2 = *(long *)(_SoundScript_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x78) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  uVar1 = func_0x00a679a0(_UnityEngine_AudioSource___TypeInfo,3);
  lVar2 = *(long *)(_SoundScript_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = uVar1;
  *(undefined4 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined8 *)(lVar2 + 0x108) = 0;
  return;
}



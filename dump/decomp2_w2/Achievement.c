// ==== public void MAMIHJCBDBD() { }   @0xaf3c64

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__MAMIHJCBDBD(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = Achievement__ABKANHONENG();
  if ((uVar1 & 1) != 0) {
    switch(*(undefined4 *)((long)__this + 0x10)) {
    case 1:
      uVar2 = 1;
      break;
    case 2:
    case 3:
      uVar2 = 3;
      break;
    case 4:
      uVar2 = 6;
      break;
    case 5:
      uVar2 = 2;
      break;
    default:
      goto LAB_00bf3ccc;
    case 8:
      uVar2 = 1000;
      break;
    case 9:
      uVar2 = 0x9c4;
    }
    *(undefined4 *)((long)__this + 0x2c) = uVar2;
  }
LAB_00bf3ccc:
  return;
}


// ==== public void GFAPHIEIMFM(bool NNILIIJJPAK) { }   @0xaed320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__GFAPHIEIMFM(void *__this,bool NNILIIJJPAK)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916ed7 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001916ed7 = 1;
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
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar5 = DAFNMLEKHAD__OFOJMCJAGFD(lVar4,*(undefined4 *)((long)__this + 0x10));
    if ((uVar5 & 1) != 0) {
      return;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar4 != 0) {
      DAFNMLEKHAD__EBANJKOABAL(lVar4,*(undefined4 *)((long)__this + 0x10),2);
      iVar2 = *(int *)((long)__this + 0x30);
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 1;
      }
      iVar1 = iVar1 >> 1;
      if (!NNILIIJJPAK) {
        iVar1 = 0;
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
      lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (lVar4 != 0) {
        uStack_50 = *(undefined4 *)(lVar4 + 0x4c);
        uStack_58 = *(undefined8 *)(lVar4 + 0x44);
        uStack_60 = *(undefined8 *)(lVar4 + 0x3c);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
        DAFNMLEKHAD__DIMKKHJDHFJ(lVar4,iVar1 + iVar2 + iVar3);
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x60),0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8) != (void *)0x0) {
          Menu__KLGOLHHGBKP((void *)**(undefined8 **)(_Menu_TypeInfo + 0xb8));
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
            AnalyticsController__ODLOKNOHMOB();
            if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
               (lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar4 != 0)) {
              GUIGarage__MAKGMMFFGPG(lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



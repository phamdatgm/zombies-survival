// ==== private void FMAKEBLBOPB() { }   @0xb5d91c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__FMAKEBLBOPB(void *__this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = *(long *)((long)__this + 0x28);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        if (iVar1 == iVar3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar2 + (long)iVar3 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_00c5d968;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(lVar4 + 0x20) = 0;
      } while (iVar1 != iVar3);
    }
    return;
  }
LAB_00c5d968:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static bool KCHOEBEIOCE() { }   @0xb5df08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Main__KCHOEBEIOCE(void)

{
  return false;
}


// ==== private void Awake() { }   @0xb5e108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__Awake(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000001917208 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917208 = 1;
  }
  uVar3 = UnityEngine_Component__get_gameObject(__this,0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  **(undefined8 **)(_Main_TypeInfo + 0xb8) = __this;
  UnityEngine_Screen__set_sleepTimeout(0xffffffff,0);
  *(undefined1 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x11) = 1;
  Main__FMAKEBLBOPB(__this);
  Main__DFMNNPNGNKO();
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__NDFIFEGNEGA();
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar4 == 0) {
LAB_00c5e250:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__BJHLLKHDOJP(lVar4,0);
  lVar4 = *(long *)((long)__this + 0x20);
  if (lVar4 == 0) goto LAB_00c5e250;
  if ((bRam0000000001917119 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_SystemLanguage_TypeInfo);
    func_0x00a67900(&Str_Language__);
    bRam0000000001917119 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_48 = UnityEngine_Application__get_systemLanguage(0);
  uStack_58 = _UnityEngine_SystemLanguage_TypeInfo;
  uStack_50 = 0xffffffffffffffff;
  uVar3 = System_Enum__ToString(&uStack_58,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar5 + 0x94) < 0) {
    lVar5 = *(long *)(lVar4 + 0x40);
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)uVar7) goto LAB_00c3dedc;
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar7) goto LAB_00c3e0a0;
        lVar5 = *(long *)(lVar5 + uVar7 * 8 + 0x20);
        if (lVar5 == 0) break;
        uVar2 = System_String__op_Equality(*(undefined8 *)(lVar5 + 0x10),uVar3,0);
        if ((uVar2 & 1) != 0) {
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
          lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar5 == 0) break;
          DAFNMLEKHAD__DGAGHJIDJEM(lVar5,uVar7 & 0xffffffff,0);
        }
        lVar5 = *(long *)(lVar4 + 0x40);
        uVar7 = uVar7 + 1;
      } while (lVar5 != 0);
    }
    goto LAB_00c3ded4;
  }
LAB_00c3dedc:
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar5 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar5 + 0x94) < 0) {
LAB_00c3df8c:
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00c3ded4;
    DAFNMLEKHAD__DGAGHJIDJEM(lVar5,0,0);
    lVar6 = *(long *)(lVar4 + 0x40);
  }
  else {
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
    lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if ((lVar5 == 0) || (lVar6 = *(long *)(lVar4 + 0x40), lVar6 == 0)) goto LAB_00c3ded4;
    if (*(int *)(lVar6 + 0x18) <= *(int *)(lVar5 + 0x94)) goto LAB_00c3df8c;
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
  lVar5 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if ((lVar5 != 0) && (lVar6 != 0)) {
    uVar1 = *(uint *)(lVar5 + 0x94);
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_00c3e0a0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar5 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      Translate__PPPHBJFOJDK(_Main_TypeInfo,uVar3);
      Translate__BDEKKODPMCA(lVar4);
      uVar3 = System_String__Concat(_Str_Language__,uVar3,0);
      Main__GEMDEAMAGPG(uVar3,0,0);
      return;
    }
  }
LAB_00c3ded4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static int KHGMGLJEOMC() { }   @0xb5d62c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Main__KHGMGLJEOMC(void)

{
  return 0x24;
}


// ==== private static void .cctor() { }   @0xb5e980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191720e & 1) == 0) {
    func_0x00a67900(&DAFNMLEKHAD_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_);
    bRam000000000191720e = 1;
  }
  uVar1 = func_0x00a67b44(_DAFNMLEKHAD_TypeInfo);
  DAFNMLEKHAD___ctor(uVar1,0);
  uVar3 = NEON_fmov(0x3f800000,4);
  lVar2 = *(long *)(_Main_TypeInfo + 0xb8);
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x12) = 0;
  uVar1 = _Str_;
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x24) = uVar3;
  *(undefined4 *)(lVar2 + 0x2c) = 1;
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined4 *)(lVar2 + 0x4c) = 3;
  return;
}



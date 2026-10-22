/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class Encyclopedia // TypeDefIndex: 5248
{
	// Fields
	public CPFPFGOIDDO encyclopediaItem; // 0x10
	public int damage; // 0x14
	public int money; // 0x18
	public string title; // 0x20
	public string desc; // 0x28
	public Sprite icon; // 0x30
	public bool is_open_by_default; // 0x38
	public ECNOJHCNLAL status; // 0x3C

	// Methods

	public static Encyclopedia EILIOBHFJNB(CPFPFGOIDDO BAMPGHJACCL) { }

	public static int DFJMLAIHNDC(bool NKCNPLEGPAJ) { }

	public void .ctor() { }
}
*/

// ==== public static Encyclopedia EILIOBHFJNB(CPFPFGOIDDO BAMPGHJACCL) { }   @0xb4ca38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Encyclopedia__EILIOBHFJNB(int BAMPGHJACCL)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  
  if ((bRam0000000001917173 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917173 = 1;
  }
  uVar4 = 0;
  pvVar3 = (void *)0x0;
  lVar1 = _Main_TypeInfo;
  while( true ) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar4) {
      return pvVar3;
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_00c4cb50:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x10) == BAMPGHJACCL) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = _Main_TypeInfo;
      }
      if ((**(long **)(lVar1 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_00c4cb50;
      pvVar3 = *(void **)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static int DFJMLAIHNDC(bool NKCNPLEGPAJ) { }   @0xb4cb54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Encyclopedia__DFJMLAIHNDC(bool NKCNPLEGPAJ)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001917174 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917174 = 1;
  }
  iVar3 = 0;
  lVar4 = 4;
  lVar1 = _Main_TypeInfo;
  while( true ) {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = _Main_TypeInfo;
    }
    if ((**(long **)(lVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
    uVar5 = lVar4 - 4;
    if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar5) {
      return iVar3;
    }
    if (NKCNPLEGPAJ) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = _Main_TypeInfo;
      }
      if ((**(long **)(lVar1 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_00c4cc7c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar2 = *(long *)(lVar2 + lVar4 * 8);
      if (lVar2 == 0) break;
      if (0 < *(int *)(lVar2 + 0x3c)) {
LAB_00c4cc14:
        iVar3 = iVar3 + 1;
      }
    }
    else {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar1 = _Main_TypeInfo;
      }
      if ((**(long **)(lVar1 + 0xb8) == 0) ||
         (lVar2 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x48), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_00c4cc7c;
      lVar2 = *(long *)(lVar2 + lVar4 * 8);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x3c) == 1) goto LAB_00c4cc14;
    }
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb4cc80

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Encyclopedia___ctor(void *__this)

{
  return;
}



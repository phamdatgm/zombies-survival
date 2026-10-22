/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public sealed class DJKGLJOCFCE // TypeDefIndex: 5171
{
	// Fields
	private const string ACFBFMABHIH = "t";
	private const string OHBCLFMMAEB = "a";
	private const string JMGELAEGBNK = "cc";
	private const string KGFDFPMGNMG = "e";
	private const string FKIAJEEAFJC = "er";
	private int AKLCKKPELBF; // 0x10
	private ObscuredInt ONBPMGJNDOC; // 0x14
	private ObscuredInt OKKCFECENJB; // 0x28
	private int ALIHDAANEPI; // 0x3C
	private int JOAGKFCNAEO; // 0x40
	private LevelTasks[] CDKNLJKPANL; // 0x48

	// Properties
	public int BLOECJHMGGC { get; }
	public int PHCEHEHDGMF { get; set; }
	public int KNAKAPCGMJJ { get; set; }
	public int LPPEFCLBDOO { get; set; }
	public int GAHGIJPDOKB { get; set; }
	public int IAGAPMAKMMP { get; set; }
	public bool KFIJAMOMGKO { get; set; }
	public bool MCNDBJOKOLI { get; }

	// Methods

	public int DLEPICFCEEG() { }

	public string OEOONPINEJA() { }

	public int NIDLADCDMOH() { }

	public void .ctor(Level GDJDPNDHBNN) { }

	public int HPCKHLLBFPL(EDALCEKLAEJ FHOFNGHGNGF) { }

	public void PHPLFEHCLJH(int ALLBGCHDGNC) { }

	public bool EDAGFIGCPAE() { }

	public string POOODOJHMMJ() { }

	public int BENNLMFLFMH() { }

	public void PIGJGOGBEPF(EDALCEKLAEJ FHOFNGHGNGF, int BEPBGMKPPJK) { }

	public int EECPDELFCIL() { }

	private string BKFGIBHDOPJ() { }

	public void OKJBPIKMAPJ(int ALLBGCHDGNC) { }

	public bool MCDLFBJCNNA() { }

	private string NJNIFJANINE() { }

	public string DLOKHEPHLGI() { }

	public void GEBLPKOKIDF(bool ALLBGCHDGNC) { }

	public void JLPGAJDGPGG(int ALLBGCHDGNC) { }

	private void LAAAPNLMDIE(Level GDJDPNDHBNN) { }

	public void FCGMALHHOJK(int ALLBGCHDGNC) { }

	public string KACBPKKHMLH() { }

	public string CNLCNMMMOFD(EDALCEKLAEJ GMDNJGNAAFG) { }

	public int HLMOBDGNAKK() { }

	public int IHNJILKCLEL() { }

	public void MHHDNMHEMKH(int ALLBGCHDGNC) { }
}
*/

// ==== public int DLEPICFCEEG() { }   @0xb1a130

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__DLEPICFCEEG(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x38);
  uStack_28 = *(undefined8 *)((long)__this + 0x30);
  uStack_30 = this.OKKCFECENJB;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public string OEOONPINEJA() { }   @0xb1a160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__OEOONPINEJA(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fdd & 1) == 0) {
    func_0x00a67900(&Str_t);
    bRam0000000001916fdd = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_t;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_t,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public string POOODOJHMMJ() { }   @0xb1a1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__POOODOJHMMJ(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe0 & 1) == 0) {
    func_0x00a67900(&Str_l);
    bRam0000000001916fe0 = 1;
  }
  uStack_24 = this.AKLCKKPELBF;
  uVar1 = System_Int32__ToString(&uStack_24,0);
  pvVar2 = (void *)System_String__Concat(_Str_l,uVar1,0);
  return pvVar2;
}


// ==== public int NIDLADCDMOH() { }   @0xb1a220

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__NIDLADCDMOH(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x24);
  uStack_28 = *(undefined8 *)((long)__this + 0x1c);
  uStack_30 = this.ONBPMGJNDOC;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public void .ctor(Level GDJDPNDHBNN) { }   @0xb1a250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE___ctor(void *__this,void *GDJDPNDHBNN)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  System_Object___ctor(__this,0);
  if (GDJDPNDHBNN == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  this.AKLCKKPELBF = *(undefined4 *)((long)GDJDPNDHBNN + 0x10);
  if ((bRam0000000001916fe9 & 1) == 0) {
    func_0x00a67900(&LevelTasks___TypeInfo);
    func_0x00a67900(&LevelTasks_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe9 = 1;
  }
  uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,uVar3,0);
    uStack_60 = uStack_80;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    *(undefined4 *)((long)__this + 0x24) = uStack_80;
    *(undefined8 *)((long)__this + 0x1c) = uStack_88;
    this.ONBPMGJNDOC = uStack_90;
    uVar3 = DJKGLJOCFCE__OEOONPINEJA(__this);
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a8,uVar3,0);
    uStack_80 = uStack_98;
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    *(undefined4 *)((long)__this + 0x38) = uStack_98;
    *(undefined8 *)((long)__this + 0x30) = uStack_a0;
    this.OKKCFECENJB = uStack_a8;
    uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
    uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      this.JOAGKFCNAEO = uVar1;
    }
  }
  uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    this.ALIHDAANEPI = uVar1;
  }
  if ((GDJDPNDHBNN != (void *)0x0) && (*(long *)((long)GDJDPNDHBNN + 0x28) != 0)) {
    uVar3 = func_0x00a679a0(_LevelTasks___TypeInfo,
                            *(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x28) + 0x18));
    this.CDKNLJKPANL = uVar3;
    lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
    if (lVar7 != 0) {
      lVar9 = 4;
      do {
        uVar10 = (int)lVar9 - 4;
        if (*(int *)(lVar7 + 0x18) <= (int)uVar10) {
          uVar4 = Level__get_IsTutorial(GDJDPNDHBNN,0);
          if ((uVar4 & 1) != 0) {
            uStack_60 = *(undefined4 *)((long)__this + 0x24);
            uStack_68 = *(undefined8 *)((long)__this + 0x1c);
            uStack_70 = this.ONBPMGJNDOC;
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
            if (0 < iVar2) {
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
              pvVar6 = Main.FBDDKIOEKDM;
              if (pvVar6 == (void *)0x0) break;
              pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,0,true);
              if (pvVar6 != (void *)0x0) {
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,3,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,3,5,0);
                }
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,4,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,4,5,0);
                }
              }
            }
          }
          return;
        }
        plVar11 = this.CDKNLJKPANL;
        lVar7 = func_0x00a67b44(_LevelTasks_TypeInfo);
        LevelTasks___ctor(lVar7,0);
        if (plVar11 == (long *)0x0) break;
        if ((lVar7 != 0) &&
           (lVar5 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
          uVar3 = func_0x00a67b74();
          auVar12 = func_0x00a67a20(uVar3,0);
          lVar7 = *(long *)(auVar12._0_8_ + 0x48);
          if (lVar7 == 0) goto LAB_00c1a748;
          iVar2 = *(int *)(lVar7 + 0x18);
          if (0 < iVar2) {
            iVar8 = 0;
            uVar1 = 0;
            do {
              if (iVar2 == iVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58(uVar1);
              }
              lVar9 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
              if (lVar9 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar9 + 0x10) == auVar12._8_4_) {
                uVar1 = *(undefined4 *)(lVar9 + 0x14);
              }
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
          return;
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_00c1a6d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar11[lVar9] = lVar7;
        lVar7 = this.CDKNLJKPANL;
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)((long)GDJDPNDHBNN + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)(lVar5 + lVar9 * 8);
        if ((lVar5 == 0) || (lVar7 = *(long *)(lVar7 + lVar9 * 8), lVar7 == 0)) break;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = this.CDKNLJKPANL;
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
          lVar7 = *(long *)(lVar7 + lVar9 * 8);
          if (lVar7 == 0) break;
          uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this,*(undefined4 *)(lVar7 + 0x10));
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          *(undefined4 *)(lVar7 + 0x14) = uVar1;
        }
        lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
        lVar9 = lVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void LAAAPNLMDIE(Level GDJDPNDHBNN) { }   @0xb1a28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__LAAAPNLMDIE(void *__this,void *GDJDPNDHBNN)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if ((bRam0000000001916fe9 & 1) == 0) {
    func_0x00a67900(&LevelTasks___TypeInfo);
    func_0x00a67900(&LevelTasks_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe9 = 1;
  }
  uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__POOODOJHMMJ(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,uVar3,0);
    uStack_60 = uStack_80;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    *(undefined4 *)((long)__this + 0x24) = uStack_80;
    *(undefined8 *)((long)__this + 0x1c) = uStack_88;
    this.ONBPMGJNDOC = uStack_90;
    uVar3 = DJKGLJOCFCE__OEOONPINEJA(__this);
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_a8,uVar3,0);
    uStack_80 = uStack_98;
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    *(undefined4 *)((long)__this + 0x38) = uStack_98;
    *(undefined8 *)((long)__this + 0x30) = uStack_a0;
    this.OKKCFECENJB = uStack_a8;
    uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
    uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      this.JOAGKFCNAEO = uVar1;
    }
  }
  uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    this.ALIHDAANEPI = uVar1;
  }
  if ((GDJDPNDHBNN != (void *)0x0) && (*(long *)((long)GDJDPNDHBNN + 0x28) != 0)) {
    uVar3 = func_0x00a679a0(_LevelTasks___TypeInfo,
                            *(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x28) + 0x18));
    this.CDKNLJKPANL = uVar3;
    lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
    if (lVar7 != 0) {
      lVar9 = 4;
      do {
        uVar10 = (int)lVar9 - 4;
        if (*(int *)(lVar7 + 0x18) <= (int)uVar10) {
          uVar4 = Level__get_IsTutorial(GDJDPNDHBNN,0);
          if ((uVar4 & 1) != 0) {
            uStack_60 = *(undefined4 *)((long)__this + 0x24);
            uStack_68 = *(undefined8 *)((long)__this + 0x1c);
            uStack_70 = this.ONBPMGJNDOC;
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
            if (0 < iVar2) {
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
              pvVar6 = Main.FBDDKIOEKDM;
              if (pvVar6 == (void *)0x0) break;
              pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,0,true);
              if (pvVar6 != (void *)0x0) {
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,3,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,3,5,0);
                }
                iVar2 = MKCBGHDANLA__IDOHKCCDGDG(pvVar6,4,0);
                if (iVar2 < 5) {
                  MKCBGHDANLA__CMFJICHIMAH(pvVar6,4,5,0);
                }
              }
            }
          }
          return;
        }
        plVar11 = this.CDKNLJKPANL;
        lVar7 = func_0x00a67b44(_LevelTasks_TypeInfo);
        LevelTasks___ctor(lVar7,0);
        if (plVar11 == (long *)0x0) break;
        if ((lVar7 != 0) &&
           (lVar5 = func_0x00a67a34(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
          uVar3 = func_0x00a67b74();
          auVar12 = func_0x00a67a20(uVar3,0);
          lVar7 = *(long *)(auVar12._0_8_ + 0x48);
          if (lVar7 == 0) goto LAB_00c1a748;
          iVar2 = *(int *)(lVar7 + 0x18);
          if (0 < iVar2) {
            iVar8 = 0;
            uVar1 = 0;
            do {
              if (iVar2 == iVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58(uVar1);
              }
              lVar9 = *(long *)(lVar7 + (long)iVar8 * 8 + 0x20);
              if (lVar9 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar9 + 0x10) == auVar12._8_4_) {
                uVar1 = *(undefined4 *)(lVar9 + 0x14);
              }
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
          return;
        }
        if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_00c1a6d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar11[lVar9] = lVar7;
        lVar7 = this.CDKNLJKPANL;
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)((long)GDJDPNDHBNN + 0x28);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_00c1a6d4;
        lVar5 = *(long *)(lVar5 + lVar9 * 8);
        if ((lVar5 == 0) || (lVar7 = *(long *)(lVar7 + lVar9 * 8), lVar7 == 0)) break;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
        uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar4 & 1) != 0) {
          lVar7 = this.CDKNLJKPANL;
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_00c1a6d4;
          lVar7 = *(long *)(lVar7 + lVar9 * 8);
          if (lVar7 == 0) break;
          uVar3 = DJKGLJOCFCE__CNLCNMMMOFD(__this,*(undefined4 *)(lVar7 + 0x10));
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          *(undefined4 *)(lVar7 + 0x14) = uVar1;
        }
        lVar7 = *(long *)((long)GDJDPNDHBNN + 0x28);
        lVar9 = lVar9 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int HPCKHLLBFPL(EDALCEKLAEJ FHOFNGHGNGF) { }   @0xb1a6e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__HPCKHLLBFPL(void *__this,int FHOFNGHGNGF)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = this.CDKNLJKPANL;
  if (lVar3 == 0) {
LAB_00c1a748:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = lVar3.Length;
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      if (iVar1 == iVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar5 = *(long *)(lVar3 + (long)iVar4 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_00c1a748;
      if (*(int *)(lVar5 + 0x10) == FHOFNGHGNGF) {
        iVar2 = *(int *)(lVar5 + 0x14);
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return iVar2;
}


// ==== public void PHPLFEHCLJH(int ALLBGCHDGNC) { }   @0xb1a74c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__PHPLFEHCLJH(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fde & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fde = 1;
  }
  this.ALIHDAANEPI = ALLBGCHDGNC;
  pvVar4 = DJKGLJOCFCE__DLOKHEPHLGI(__this);
  uVar1 = this.ALIHDAANEPI;
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,uVar1,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(pvVar4);
  uStack_24 = uVar1;
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (pvVar4,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar2,uVar3,0);
  return;
}


// ==== public string DLOKHEPHLGI() { }   @0xb1a7cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__DLOKHEPHLGI(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe6 & 1) == 0) {
    func_0x00a67900(&Str_a);
    bRam0000000001916fe6 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_a;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_a,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public bool EDAGFIGCPAE() { }   @0xb1a81c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DJKGLJOCFCE__EDAGFIGCPAE(void *__this)

{
  int iVar1;
  void *pvVar2;
  
  if ((bRam0000000001916fdf & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fdf = 1;
  }
  pvVar2 = DJKGLJOCFCE__BKFGIBHDOPJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  iVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(pvVar2,0,0);
  return iVar1 == 1;
}


// ==== private string BKFGIBHDOPJ() { }   @0xb1a894

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__BKFGIBHDOPJ(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe3 & 1) == 0) {
    func_0x00a67900(&Str_er);
    bRam0000000001916fe3 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_er;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_er,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public int BENNLMFLFMH() { }   @0xb1a8e4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__BENNLMFLFMH(void *__this)

{
  return this.ALIHDAANEPI;
}


// ==== public void PIGJGOGBEPF(EDALCEKLAEJ FHOFNGHGNGF, int BEPBGMKPPJK) { }   @0xb1a8ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__PIGJGOGBEPF(void *__this,int FHOFNGHGNGF,int BEPBGMKPPJK)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe1 & 1) == 0) {
    func_0x00a67900(&EDALCEKLAEJ_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str_SetTaskValue_error__);
    bRam0000000001916fe1 = 1;
  }
  if (0 < BEPBGMKPPJK) {
    iVar2 = DJKGLJOCFCE__HPCKHLLBFPL(__this,FHOFNGHGNGF);
    if (iVar2 < BEPBGMKPPJK) {
      lVar5 = this.CDKNLJKPANL;
      if (lVar5 == 0) {
LAB_00c1aa84:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = lVar5.Length;
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          if (iVar2 == iVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar7 = *(long *)(lVar5 + (long)iVar6 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_00c1aa84;
          if (*(int *)(lVar7 + 0x10) == FHOFNGHGNGF) {
            *(int *)(lVar7 + 0x14) = BEPBGMKPPJK;
            uVar4 = DJKGLJOCFCE__CNLCNMMMOFD(__this,FHOFNGHGNGF);
            uVar1 = *(undefined4 *)(lVar7 + 0x14);
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
            }
            if ((bRam000000000191673e & 1) == 0) {
              func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                              uVar1,0);
              func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
              bRam000000000191673e = 1;
            }
            if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar4);
            uStack_24 = uVar1;
            uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                              (uVar4,&uStack_24,
                               _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___
                              );
            UnityEngine_PlayerPrefs__SetString(uVar3,uVar4,0);
            return;
          }
          iVar6 = iVar6 + 1;
        } while (iVar2 != iVar6);
      }
      uStack_48 = _EDALCEKLAEJ_TypeInfo;
      uStack_40 = 0xffffffffffffffff;
      iStack_38 = FHOFNGHGNGF;
      uVar4 = System_Enum__ToString(&uStack_48,0);
      uVar4 = System_String__Concat(_Str_SetTaskValue_error__,uVar4,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__EEKNCFLMGDP(uVar4,0);
    }
  }
  return;
}


// ==== public string CNLCNMMMOFD(EDALCEKLAEJ GMDNJGNAAFG) { }   @0xb1aa88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__CNLCNMMMOFD(void *__this,int GMDNJGNAAFG)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  if ((bRam0000000001916fec & 1) == 0) {
    func_0x00a67900(&Str_t);
    bRam0000000001916fec = 1;
  }
  uVar1 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  iStack_24 = GMDNJGNAAFG;
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(uVar1,_Str_t,uVar2,0);
  return pvVar3;
}


// ==== public int EECPDELFCIL() { }   @0xb1ab04

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__EECPDELFCIL(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int aiStack_28 [2];
  
  if ((bRam0000000001916fe2 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe2 = 1;
  }
  uVar4 = DJKGLJOCFCE__NJNIFJANINE(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673f & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_int___,0,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673f = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar4);
  uVar3 = UnityEngine_PlayerPrefs__HasKey(uVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = UnityEngine_PlayerPrefs__HasKey(uVar4,0);
    if ((uVar3 & 1) != 0) {
      iVar1 = UnityEngine_PlayerPrefs__GetInt(uVar4,0,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      if (*(char *)(CodeStage_AntiCheat_Storage_ObscuredPrefs.<statics> + 0x38) !=
          '\0') {
        return iVar1;
      }
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar4,iVar1);
      UnityEngine_PlayerPrefs__DeleteKey(uVar4,0);
      return iVar1;
    }
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    CodeStage_AntiCheat_Storage_ObscuredPrefs__MigrateFromACTkV1Internal
              (uVar4,*(undefined8 *)
                      (CodeStage_AntiCheat_Storage_ObscuredPrefs.<statics> + 0x10)
              );
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  aiStack_28[1] = 0;
  CodeStage_AntiCheat_Storage_ObscuredPrefs__DecryptValue___Il2CppFullySharedGenericType_
            (uVar4,uVar2,aiStack_28 + 1,0,aiStack_28,
             _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_DecryptValue_int___);
  return aiStack_28[0];
}


// ==== private string NJNIFJANINE() { }   @0xb1ab70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__NJNIFJANINE(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916fe5 & 1) == 0) {
    func_0x00a67900(&Str_e);
    bRam0000000001916fe5 = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_e;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_e,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public void OKJBPIKMAPJ(int ALLBGCHDGNC) { }   @0xb1abc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__OKJBPIKMAPJ(void *__this,int ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iStack_24;
  
  if ((bRam0000000001916fe4 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe4 = 1;
  }
  uVar2 = DJKGLJOCFCE__NJNIFJANINE(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                    ALLBGCHDGNC,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar2);
  iStack_24 = ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (uVar2,&iStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
  return;
}


// ==== public bool MCDLFBJCNNA() { }   @0xb1ac38

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool DJKGLJOCFCE__MCDLFBJCNNA(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x24);
  uStack_28 = *(undefined8 *)((long)__this + 0x1c);
  uStack_30 = this.ONBPMGJNDOC;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return 0 < iVar1;
}


// ==== public void GEBLPKOKIDF(bool ALLBGCHDGNC) { }   @0xb1ac70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__GEBLPKOKIDF(void *__this,bool ALLBGCHDGNC)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uStack_24;
  
  if ((bRam0000000001916fe7 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe7 = 1;
  }
  pvVar3 = DJKGLJOCFCE__BKFGIBHDOPJ(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,
                    ALLBGCHDGNC,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(pvVar3);
  uStack_24 = (uint)ALLBGCHDGNC;
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (pvVar3,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar1,uVar2,0);
  return;
}


// ==== public void JLPGAJDGPGG(int ALLBGCHDGNC) { }   @0xb1ace8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__JLPGAJDGPGG(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001916fe8 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fe8 = 1;
  }
  this.JOAGKFCNAEO = ALLBGCHDGNC;
  uVar3 = DJKGLJOCFCE__KACBPKKHMLH(__this);
  uVar1 = this.JOAGKFCNAEO;
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  if ((bRam000000000191673e & 1) == 0) {
    func_0x00a67900(&Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___,uVar1,0);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam000000000191673e = 1;
  }
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptKey(uVar3);
  uStack_24 = uVar1;
  uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__EncryptValue___Il2CppFullySharedGenericType_
                    (uVar3,&uStack_24,
                     _Method_CodeStage_AntiCheat_Storage_ObscuredPrefs_EncryptValue_int___);
  UnityEngine_PlayerPrefs__SetString(uVar2,uVar3,0);
  return;
}


// ==== public string KACBPKKHMLH() { }   @0xb1ad68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DJKGLJOCFCE__KACBPKKHMLH(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  void *pvVar5;
  
  if ((bRam0000000001916feb & 1) == 0) {
    func_0x00a67900(&Str_cc);
    bRam0000000001916feb = 1;
  }
  pvVar2 = (void *)DJKGLJOCFCE__POOODOJHMMJ(__this);
  pvVar5 = _Str_cc;
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,_Str_cc,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar2 == (void *)0x0) || (*(int *)((long)pvVar2 + 0x10) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar2;
    if (bVar4) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar4) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar2 + 0x10);
    pvVar3 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar3,0,pvVar2);
    System_String__FillStringChecked(pvVar3,iVar1,pvVar5);
    pvVar5 = pvVar3;
  }
  return pvVar5;
}


// ==== public void FCGMALHHOJK(int ALLBGCHDGNC) { }   @0xb1adb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__FCGMALHHOJK(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916fea & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fea = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x38) = uStack_58;
  *(undefined8 *)((long)__this + 0x30) = uStack_60;
  this.OKKCFECENJB = uStack_68;
  uVar2 = DJKGLJOCFCE__OEOONPINEJA(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x30);
  uStack_80 = this.OKKCFECENJB;
  uStack_70 = *(undefined4 *)((long)__this + 0x38);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}


// ==== public int HLMOBDGNAKK() { }   @0xb1ae84

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__HLMOBDGNAKK(void *__this)

{
  return this.AKLCKKPELBF;
}


// ==== public int IHNJILKCLEL() { }   @0xb1ae8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int DJKGLJOCFCE__IHNJILKCLEL(void *__this)

{
  return this.JOAGKFCNAEO;
}


// ==== public void MHHDNMHEMKH(int ALLBGCHDGNC) { }   @0xb1ae94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DJKGLJOCFCE__MHHDNMHEMKH(void *__this,int ALLBGCHDGNC)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916fed & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001916fed = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x24) = uStack_58;
  *(undefined8 *)((long)__this + 0x1c) = uStack_60;
  this.ONBPMGJNDOC = uStack_68;
  uVar2 = DJKGLJOCFCE__POOODOJHMMJ(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x1c);
  uStack_80 = this.ONBPMGJNDOC;
  uStack_70 = *(undefined4 *)((long)__this + 0x24);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public sealed class MKCBGHDANLA // TypeDefIndex: 5239
{
	// Fields
	private const string PENKFDDIBGP = "hp";
	private const string HKIEPHMCBEI = "col";
	private const string AHJDJNPKDIN = "cb";
	private int NDLELHGPFKO; // 0x10
	private ObscuredInt LPJNKBODDNF; // 0x14
	private ObscuredInt MHBIDDBOEJD; // 0x28
	private ObscuredInt[] KOEIPIDCBJE; // 0x40
	private ObscuredInt[] CDFBHLPFLJF; // 0x48

	// Properties
	public int JEMEKCMDCND { get; }
	public int PLGHBAAPKBM { get; set; }
	public int EEJGEOOMOCM { get; set; }

	// Methods

	public void CMFJICHIMAH(MGACAOGOMPM FHOFNGHGNGF, int BFGICMFMMIE) { }

	private string KNJMKLLCKEK() { }

	public int IDOHKCCDGDG(MGACAOGOMPM FHOFNGHGNGF) { }

	private void FLFBPCJNJHP(int HKGEOJPHLAN) { }

	public string NDCGHMCJLPF(int EIGKFINFICB) { }

	public string MIKFNEELEFE() { }

	public int BGFAMABFPHC() { }

	private void LAAAPNLMDIE() { }

	public bool JOEMNOABHDF(int OKADKPBGELG = -1) { }

	public void ACDFKIBBJGP(MGACAOGOMPM FHOFNGHGNGF) { }

	public void CFMKDKAGFMA(int EIGKFINFICB) { }

	public void EJLALLODBKM(int ALLBGCHDGNC) { }

	public int EAEAJMKGDPD() { }

	public string FKDNILOCFBC(int HFPLBIFMBPH) { }

	public void DDPLLMLFICC(int ALLBGCHDGNC) { }

	public void IFGGBDCPJDF(MGACAOGOMPM FHOFNGHGNGF) { }

	public void KFALLEFKLJL() { }

	public int KLAHDEDHJOD(int EIGKFINFICB) { }

	public void LPHCCLPECIA(int EIGKFINFICB) { }

	public void .ctor(int HCBODNKILEA) { }

	public int IIGHKMHDJNH() { }
}
*/

// ==== public void CMFJICHIMAH(MGACAOGOMPM FHOFNGHGNGF, int BFGICMFMMIE) { }   @0xb49f78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__CMFJICHIMAH(void *__this,int FHOFNGHGNGF,int BFGICMFMMIE)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam000000000191715d & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam000000000191715d = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar4 = this.KOEIPIDCBJE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,BFGICMFMMIE,0);
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  iStack_70 = iStack_c8;
  if (lVar4 != 0) {
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    iStack_90 = iStack_c8;
    if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
      lVar5 = (long)FHOFNGHGNGF;
      lVar4 = lVar4 + lVar5 * 0x14;
      *(int *)(lVar4 + 0x30) = iStack_c8;
      *(undefined8 *)(lVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_d8;
      uVar2 = MKCBGHDANLA__FKDNILOCFBC(__this,FHOFNGHGNGF);
      lVar4 = this.KOEIPIDCBJE;
      if (lVar4 == 0) goto LAB_00c4a224;
      if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + lVar5 * 0x14;
        uStack_b0 = *(undefined4 *)(lVar4 + 0x30);
        uStack_b8 = *(undefined8 *)(lVar4 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar4 + 0x20);
        uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c0,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        lVar4 = func_0x00a679a0(_string___TypeInfo,5);
        if (lVar4 == 0) goto LAB_00c4a224;
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = _Str_BuyUpgrade__;
          uStack_d8 = _MGACAOGOMPM_TypeInfo;
          uStack_d0 = 0xffffffffffffffff;
          iStack_c8 = FHOFNGHGNGF;
          uVar2 = System_Enum__ToString(&uStack_d8,0);
          if ((1 < *(uint *)(lVar4 + 0x18)) &&
             (*(undefined8 *)(lVar4 + 0x28) = uVar2, *(uint *)(lVar4 + 0x18) != 2)) {
            *(undefined8 *)(lVar4 + 0x30) = _Str____;
            lVar3 = this.KOEIPIDCBJE;
            if (lVar3 == 0) goto LAB_00c4a224;
            if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + lVar5 * 0x14;
              uStack_50 = *(undefined4 *)(lVar3 + 0x30);
              uStack_58 = *(undefined8 *)(lVar3 + 0x28);
              uStack_60 = *(undefined8 *)(lVar3 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
              if ((3 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x38) = uVar2, *(uint *)(lVar4 + 0x18) != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str__and_refresh_HP_;
                uVar2 = System_String__Concat(lVar4,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar2,0,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4a224:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string FKDNILOCFBC(int HFPLBIFMBPH) { }   @0xb4a228

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__FKDNILOCFBC(void *__this,int HFPLBIFMBPH)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  iStack_24 = HFPLBIFMBPH;
  if ((bRam0000000001917167 & 1) == 0) {
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_c);
    bRam0000000001917167 = 1;
  }
  uVar1 = System_Int32__ToString(&this.NDLELHGPFKO,0);
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(_Str_c,uVar1,_Str__,uVar2,0);
  return pvVar3;
}


// ==== public void DDPLLMLFICC(int ALLBGCHDGNC) { }   @0xb4a2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__DDPLLMLFICC(void *__this,int ALLBGCHDGNC)

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
  
  if ((bRam0000000001917168 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917168 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x24) = uStack_58;
  *(undefined8 *)((long)__this + 0x1c) = uStack_60;
  this.LPJNKBODDNF = uStack_68;
  uVar2 = MKCBGHDANLA__KNJMKLLCKEK(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x1c);
  uStack_80 = this.LPJNKBODDNF;
  uStack_70 = *(undefined4 *)((long)__this + 0x24);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}


// ==== private string KNJMKLLCKEK() { }   @0xb4a38c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__KNJMKLLCKEK(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  bool bVar7;
  
  if ((bRam000000000191715e & 1) == 0) {
    func_0x00a67900(&Str_c);
    func_0x00a67900(&Str__hp);
    bRam000000000191715e = 1;
  }
  pvVar3 = (void *)System_Int32__ToString(&this.NDLELHGPFKO,0);
  pvVar2 = _Str_c;
  pvVar4 = _Str__hp;
  pvVar6 = pvVar3;
  pvVar5 = _Str__hp;
  if (((((_Str_c != (void *)0x0) && (*(int *)((long)_Str_c + 0x10) != 0)) &&
       (pvVar6 = _Str_c, pvVar3 != (void *)0x0)) &&
      ((*(int *)((long)pvVar3 + 0x10) != 0 && (pvVar5 = pvVar3, _Str__hp != (void *)0x0)))) &&
     (*(int *)((long)_Str__hp + 0x10) != 0)) {
    pvVar5 = (void *)func_0x00ad4750(*(int *)((long)pvVar3 + 0x10) + *(int *)((long)_Str_c + 0x10) +
                                     *(int *)((long)_Str__hp + 0x10));
    System_String__FillStringChecked(pvVar5,0,pvVar2);
    System_String__FillStringChecked(pvVar5,*(undefined4 *)((long)pvVar2 + 0x10),pvVar3);
    System_String__FillStringChecked
              (pvVar5,*(int *)((long)pvVar3 + 0x10) + *(int *)((long)pvVar2 + 0x10),pvVar4);
    return pvVar5;
  }
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,pvVar5,_Str__hp,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar6 == (void *)0x0) || (*(int *)((long)pvVar6 + 0x10) == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar6;
    if (bVar7) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar7) {
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar6 + 0x10);
    pvVar4 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar4,0,pvVar6);
    System_String__FillStringChecked(pvVar4,iVar1,pvVar5);
    pvVar5 = pvVar4;
  }
  return pvVar5;
}


// ==== public int IDOHKCCDGDG(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4a408

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__IDOHKCCDGDG(void *__this,int FHOFNGHGNGF)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  lVar2 = this.KOEIPIDCBJE;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((uint)FHOFNGHGNGF < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)FHOFNGHGNGF * 0x14;
    uStack_20 = *(undefined4 *)(lVar2 + 0x30);
    uStack_28 = *(undefined8 *)(lVar2 + 0x28);
    uStack_30 = *(undefined8 *)(lVar2 + 0x20);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void FLFBPCJNJHP(int HKGEOJPHLAN) { }   @0xb4a45c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__FLFBPCJNJHP(void *__this,int HKGEOJPHLAN)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam000000000191715f & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191715f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF != 0) &&
      (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x560), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
LAB_00c4a59c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c4a598;
        if ((*(char *)(lVar2 + 0x70) == '\0') && (*(int *)(lVar2 + 0x28) == HKGEOJPHLAN)) {
          lVar6 = this.KOEIPIDCBJE;
          uVar3 = ShopItem__EKBFKEBGGOP(lVar2,0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,uVar3,0);
          uStack_58 = uStack_70;
          uStack_60 = uStack_78;
          uStack_50 = uStack_68;
          if (lVar6 == 0) goto LAB_00c4a598;
          if (*(uint *)(lVar6 + 0x18) <= (uint)HKGEOJPHLAN) goto LAB_00c4a59c;
          lVar6 = lVar6 + (long)HKGEOJPHLAN * 0x14;
          *(undefined4 *)(lVar6 + 0x30) = uStack_68;
          *(undefined8 *)(lVar6 + 0x28) = uStack_70;
          *(undefined8 *)(lVar6 + 0x20) = uStack_78;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c4a598:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string NDCGHMCJLPF(int EIGKFINFICB) { }   @0xb4a5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__NDCGHMCJLPF(void *__this,int EIGKFINFICB)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_24;
  
  iStack_24 = EIGKFINFICB;
  if ((bRam0000000001917160 & 1) == 0) {
    func_0x00a67900(&Str_c);
    func_0x00a67900(&Str__cb);
    bRam0000000001917160 = 1;
  }
  uVar1 = System_Int32__ToString(&this.NDLELHGPFKO,0);
  uVar2 = System_Int32__ToString(&iStack_24,0);
  pvVar3 = (void *)System_String__Concat(_Str_c,uVar1,_Str__cb,uVar2,0);
  return pvVar3;
}


// ==== public string MIKFNEELEFE() { }   @0xb4a638

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * MKCBGHDANLA__MIKFNEELEFE(void *__this)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  bool bVar7;
  
  if ((bRam0000000001917161 & 1) == 0) {
    func_0x00a67900(&Str__col);
    func_0x00a67900(&Str_c);
    bRam0000000001917161 = 1;
  }
  pvVar3 = (void *)System_Int32__ToString(&this.NDLELHGPFKO,0);
  pvVar2 = _Str_c;
  pvVar4 = _Str__col;
  pvVar6 = pvVar3;
  pvVar5 = _Str__col;
  if (((((_Str_c != (void *)0x0) && (*(int *)((long)_Str_c + 0x10) != 0)) &&
       (pvVar6 = _Str_c, pvVar3 != (void *)0x0)) &&
      ((*(int *)((long)pvVar3 + 0x10) != 0 && (pvVar5 = pvVar3, _Str__col != (void *)0x0)))) &&
     (*(int *)((long)_Str__col + 0x10) != 0)) {
    pvVar5 = (void *)func_0x00ad4750(*(int *)((long)pvVar3 + 0x10) + *(int *)((long)_Str_c + 0x10) +
                                     *(int *)((long)_Str__col + 0x10));
    System_String__FillStringChecked(pvVar5,0,pvVar2);
    System_String__FillStringChecked(pvVar5,*(undefined4 *)((long)pvVar2 + 0x10),pvVar3);
    System_String__FillStringChecked
              (pvVar5,*(int *)((long)pvVar3 + 0x10) + *(int *)((long)pvVar2 + 0x10),pvVar4);
    return pvVar5;
  }
  if ((bRam00000000019178db & 1) == 0) {
    func_0x00a67900(&string_TypeInfo,pvVar5,_Str__col,0);
    bRam00000000019178db = 1;
  }
  if ((pvVar6 == (void *)0x0) || (*(int *)((long)pvVar6 + 0x10) == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((pvVar5 == (void *)0x0) || (*(int *)((long)pvVar5 + 0x10) == 0)) {
    pvVar5 = pvVar6;
    if (bVar7) {
      pvVar5 = (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
    }
  }
  else if (!bVar7) {
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar1 = *(int *)((long)pvVar6 + 0x10);
    pvVar4 = (void *)func_0x00ad4750(*(int *)((long)pvVar5 + 0x10) + iVar1);
    System_String__FillStringChecked(pvVar4,0,pvVar6);
    System_String__FillStringChecked(pvVar4,iVar1,pvVar5);
    pvVar5 = pvVar4;
  }
  return pvVar5;
}


// ==== public int BGFAMABFPHC() { }   @0xb4a6b4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__BGFAMABFPHC(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x38);
  uStack_28 = *(undefined8 *)((long)__this + 0x30);
  uStack_30 = this.MHBIDDBOEJD;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== private void LAAAPNLMDIE() { }   @0xb4a6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__LAAAPNLMDIE(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam0000000001917162 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917162 = 1;
  }
  uVar3 = MKCBGHDANLA__KNJMKLLCKEK(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = MKCBGHDANLA__KNJMKLLCKEK(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x24) = uStack_88;
    *(undefined8 *)((long)__this + 0x1c) = uStack_90;
    this.LPJNKBODDNF = uStack_98;
  }
  uVar3 = MKCBGHDANLA__MIKFNEELEFE(__this);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  uVar4 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = MKCBGHDANLA__MIKFNEELEFE(__this);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    *(undefined4 *)((long)__this + 0x38) = uStack_88;
    *(undefined8 *)((long)__this + 0x30) = uStack_90;
    this.MHBIDDBOEJD = uStack_98;
  }
  lVar6 = this.CDFBHLPFLJF;
  if (lVar6 != 0) {
    uVar4 = 1;
    lVar8 = 0x34;
    do {
      if ((long)lVar6.Length <= (long)uVar4) {
        lVar6 = this.KOEIPIDCBJE;
        if (lVar6 != 0) {
          uVar4 = 0;
          lVar8 = 0x20;
          goto LAB_00c4a95c;
        }
        break;
      }
      uVar3 = MKCBGHDANLA__NDCGHMCJLPF(__this,uVar4 & 0xffffffff);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = this.CDFBHLPFLJF;
        uVar3 = MKCBGHDANLA__NDCGHMCJLPF(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        if (lVar6.Length <= uVar4) goto LAB_00c4ace0;
        puVar7 = (undefined8 *)(lVar6 + lVar8);
        *(undefined4 *)(puVar7 + 2) = uStack_88;
        puVar7[1] = uStack_90;
        *puVar7 = uStack_98;
      }
      lVar6 = this.CDFBHLPFLJF;
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 0x14;
    } while (lVar6 != 0);
  }
  goto LAB_00c4acbc;
LAB_00c4a95c:
  do {
    if ((long)lVar6.Length <= (long)uVar4) {
      return;
    }
    iVar2 = this.NDLELHGPFKO;
    if (((uVar4 != 3 && iVar2 == 0xc) || (iVar2 == 0xb)) || (uVar4 != 3 && iVar2 == 0)) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) break;
        uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar5 & 1) != 0) {
          MKCBGHDANLA__FLFBPCJNJHP(__this,uVar4 & 0xffffffff);
        }
      }
    }
    iVar2 = this.NDLELHGPFKO;
    if ((uVar4 == 4) && (iVar2 == 0)) {
      lVar6 = this.KOEIPIDCBJE;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,4,0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      if (lVar6 == 0) break;
      if (lVar6.Length < 5) {
LAB_00c4ace0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      *(undefined4 *)(lVar6 + 0x80) = uStack_88;
      *(undefined8 *)(lVar6 + 0x78) = uStack_90;
      *(undefined8 *)(lVar6 + 0x70) = uStack_98;
      iVar2 = this.NDLELHGPFKO;
    }
    uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
    if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    }
    uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
    if (iVar2 == 1) {
      if ((uVar5 & 1) == 0) {
LAB_00c4ac54:
        lVar6 = this.KOEIPIDCBJE;
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,1,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        uVar1 = lVar6.Length;
      }
      else {
        uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar5 = CodeStage_AntiCheat_Storage_ObscuredPrefs__HasKey(uVar3,0);
        if ((uVar5 & 1) != 0) {
          uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
          if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
          }
          iVar2 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
          if (iVar2 < 2) goto LAB_00c4ac54;
        }
        lVar6 = this.KOEIPIDCBJE;
        uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        if (lVar6 == 0) break;
        uVar1 = lVar6.Length;
      }
      if (uVar1 <= uVar4) goto LAB_00c4ace0;
LAB_00c4aca4:
      puVar7 = (undefined8 *)(lVar6 + lVar8);
      *(undefined4 *)(puVar7 + 2) = uStack_70;
      puVar7[1] = uStack_78;
      *puVar7 = uStack_80;
      uStack_98 = uStack_80;
      uStack_90 = uStack_78;
      uStack_88 = uStack_70;
    }
    else if ((uVar5 & 1) != 0) {
      lVar6 = this.KOEIPIDCBJE;
      uVar3 = MKCBGHDANLA__FKDNILOCFBC(__this,uVar4 & 0xffffffff);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      uVar3 = CodeStage_AntiCheat_Storage_ObscuredPrefs__GetInt(uVar3,0,0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_98,uVar3,0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      if (lVar6 != 0) {
        if (uVar4 < lVar6.Length) goto LAB_00c4aca4;
        goto LAB_00c4ace0;
      }
      break;
    }
    lVar6 = this.KOEIPIDCBJE;
    uVar4 = uVar4 + 1;
    lVar8 = lVar8 + 0x14;
  } while (lVar6 != 0);
LAB_00c4acbc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool JOEMNOABHDF(int OKADKPBGELG = -1) { }   @0xb4ace4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool MKCBGHDANLA__JOEMNOABHDF(void *__this,int OKADKPBGELG)

{
  long lVar1;
  
  if ((bRam0000000001917163 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917163 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((OKADKPBGELG == -1) &&
     (lVar1 = Main.NMDEEOMHAGP, lVar1 != 0)) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar1 = Main.NMDEEOMHAGP;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    OKADKPBGELG = *(int *)(lVar1 + 0x10);
  }
  return this.NDLELHGPFKO == OKADKPBGELG ||
         OKADKPBGELG == 0 && this.NDLELHGPFKO == 1;
}


// ==== public void ACDFKIBBJGP(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4ada4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__ACDFKIBBJGP(void *__this,int FHOFNGHGNGF)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001917164 & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_RemoveUpgrade__);
    bRam0000000001917164 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar4 = this.KOEIPIDCBJE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_d8,0,0);
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  iStack_70 = iStack_c8;
  if (lVar4 != 0) {
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    iStack_90 = iStack_c8;
    if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
      lVar5 = (long)FHOFNGHGNGF;
      lVar4 = lVar4 + lVar5 * 0x14;
      *(int *)(lVar4 + 0x30) = iStack_c8;
      *(undefined8 *)(lVar4 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar4 + 0x20) = uStack_d8;
      uVar2 = MKCBGHDANLA__FKDNILOCFBC(__this,FHOFNGHGNGF);
      lVar4 = this.KOEIPIDCBJE;
      if (lVar4 == 0) goto LAB_00c4afc4;
      if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + lVar5 * 0x14;
        uStack_b0 = *(undefined4 *)(lVar4 + 0x30);
        uStack_b8 = *(undefined8 *)(lVar4 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar4 + 0x20);
        uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c0,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
        uStack_d8 = _MGACAOGOMPM_TypeInfo;
        uStack_d0 = 0xffffffffffffffff;
        iStack_c8 = FHOFNGHGNGF;
        uVar2 = System_Enum__ToString(&uStack_d8,0);
        lVar4 = this.KOEIPIDCBJE;
        if (lVar4 == 0) goto LAB_00c4afc4;
        if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + lVar5 * 0x14;
          uStack_50 = *(undefined4 *)(lVar4 + 0x30);
          uStack_58 = *(undefined8 *)(lVar4 + 0x28);
          uStack_60 = *(undefined8 *)(lVar4 + 0x20);
          uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
          uVar2 = System_String__Concat(_Str_RemoveUpgrade__,uVar2,_Str____,uVar3,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
          Main__GEMDEAMAGPG(uVar2,0,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4afc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CFMKDKAGFMA(int EIGKFINFICB) { }   @0xb4afcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__CFMKDKAGFMA(void *__this,int EIGKFINFICB)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_34;
  
  iStack_34 = EIGKFINFICB;
  if ((bRam0000000001917165 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____and_refresh_HP_);
    func_0x00a67900(&Str_RemoveColor__);
    bRam0000000001917165 = 1;
  }
  if (EIGKFINFICB == 0) {
    return;
  }
  lVar3 = this.CDFBHLPFLJF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,0,0);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  if (lVar3 == 0) {
LAB_00c4b188:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
    *(undefined4 *)(lVar3 + 0x30) = uStack_68;
    *(undefined8 *)(lVar3 + 0x28) = uStack_70;
    *(undefined8 *)(lVar3 + 0x20) = uStack_78;
    uVar2 = MKCBGHDANLA__NDCGHMCJLPF(__this,EIGKFINFICB);
    lVar3 = this.CDFBHLPFLJF;
    if (lVar3 == 0) goto LAB_00c4b188;
    if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar3 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x20);
      uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
      uVar2 = System_Int32__ToString(&iStack_34,0);
      uVar2 = System_String__Concat(_Str_RemoveColor__,uVar2,_Str____and_refresh_HP_,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void EJLALLODBKM(int ALLBGCHDGNC) { }   @0xb4b190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__EJLALLODBKM(void *__this,int ALLBGCHDGNC)

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
  
  if ((bRam0000000001917166 & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    bRam0000000001917166 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_68,ALLBGCHDGNC,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  *(undefined4 *)((long)__this + 0x38) = uStack_58;
  *(undefined8 *)((long)__this + 0x30) = uStack_60;
  this.MHBIDDBOEJD = uStack_68;
  uVar2 = MKCBGHDANLA__MIKFNEELEFE(__this);
  uStack_78 = *(undefined8 *)((long)__this + 0x30);
  uStack_80 = this.MHBIDDBOEJD;
  uStack_70 = *(undefined4 *)((long)__this + 0x38);
  uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
  }
  CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
  return;
}


// ==== public int EAEAJMKGDPD() { }   @0xb4b25c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__EAEAJMKGDPD(void *__this)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = *(undefined4 *)((long)__this + 0x24);
  uStack_28 = *(undefined8 *)((long)__this + 0x1c);
  uStack_30 = this.LPJNKBODDNF;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
  return iVar1;
}


// ==== public void IFGGBDCPJDF(MGACAOGOMPM FHOFNGHGNGF) { }   @0xb4b28c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__IFGGBDCPJDF(void *__this,int FHOFNGHGNGF)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001917169 & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam0000000001917169 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lVar3 = this.KOEIPIDCBJE;
  if (lVar3 != 0) {
    if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
      lVar5 = (long)FHOFNGHGNGF;
      lVar3 = lVar3 + lVar5 * 0x14;
      uStack_90 = *(undefined4 *)(lVar3 + 0x30);
      uStack_98 = *(undefined8 *)(lVar3 + 0x28);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x20);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&uStack_d8,&uStack_a0,0);
      iStack_70 = iStack_c8;
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      *(int *)(lVar3 + 0x30) = iStack_c8;
      *(undefined8 *)(lVar3 + 0x28) = uStack_d0;
      *(undefined8 *)(lVar3 + 0x20) = uStack_d8;
      uVar2 = MKCBGHDANLA__FKDNILOCFBC(__this,FHOFNGHGNGF);
      lVar3 = this.KOEIPIDCBJE;
      if (lVar3 == 0) goto LAB_00c4b52c;
      if ((uint)FHOFNGHGNGF < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + lVar5 * 0x14;
        uStack_b0 = *(undefined4 *)(lVar3 + 0x30);
        uStack_b8 = *(undefined8 *)(lVar3 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar3 + 0x20);
        uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c0,0);
        if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
        }
        CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        lVar3 = func_0x00a679a0(_string___TypeInfo,5);
        if (lVar3 == 0) goto LAB_00c4b52c;
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = _Str_BuyUpgrade__;
          uStack_d8 = _MGACAOGOMPM_TypeInfo;
          uStack_d0 = 0xffffffffffffffff;
          iStack_c8 = FHOFNGHGNGF;
          uVar2 = System_Enum__ToString(&uStack_d8,0);
          if ((1 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x28) = uVar2, *(uint *)(lVar3 + 0x18) != 2)) {
            *(undefined8 *)(lVar3 + 0x30) = _Str____;
            lVar4 = this.KOEIPIDCBJE;
            if (lVar4 == 0) goto LAB_00c4b52c;
            if ((uint)FHOFNGHGNGF < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + lVar5 * 0x14;
              uStack_50 = *(undefined4 *)(lVar4 + 0x30);
              uStack_58 = *(undefined8 *)(lVar4 + 0x28);
              uStack_60 = *(undefined8 *)(lVar4 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_60,0);
              if ((3 < *(uint *)(lVar3 + 0x18)) &&
                 (*(undefined8 *)(lVar3 + 0x38) = uVar2, *(uint *)(lVar3 + 0x18) != 4)) {
                *(undefined8 *)(lVar3 + 0x40) = _Str__and_refresh_HP_;
                uVar2 = System_String__Concat(lVar3,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar2,0,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c4b52c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KFALLEFKLJL() { }   @0xb4b530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__KFALLEFKLJL(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  void *__this_00;
  long lVar8;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_64;
  
  if ((bRam000000000191716a & 1) == 0) {
    func_0x00a67900(&MGACAOGOMPM_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_BuyUpgrade__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_Error_in_FullUpgrade__Car__);
    func_0x00a67900(&Str_FullUpgrade_car__);
    func_0x00a67900(&Str__and_refresh_HP_);
    bRam000000000191716a = 1;
  }
  uStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c4b974:
    uVar7 = System_Int32__ToString(&this.NDLELHGPFKO,0);
    uVar7 = System_String__Concat(_Str_Error_in_FullUpgrade__Car__,uVar7,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar7,0);
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c4b974;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x560);
      uStack_64 = 0;
      if (lVar4 != 0) {
        uVar6 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar6) {
          do {
            if (uVar6 <= uStack_64) goto LAB_00c4b9e0;
            __this_00 = *(void **)(lVar4 + (long)(int)uStack_64 * 8 + 0x20);
            if (__this_00 == (void *)0x0) goto LAB_00c4b9e4;
            if (*(char *)((long)__this_00 + 0x70) == '\0') {
              lVar8 = this.KOEIPIDCBJE;
              uVar6 = *(uint *)((long)__this_00 + 0x28);
              iVar1 = ShopItem__EKBFKEBGGOP(__this_00);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f8,iVar1,0);
              uStack_98 = uStack_f0;
              uStack_a0 = uStack_f8;
              uStack_90 = uStack_e8;
              if (lVar8 == 0) goto LAB_00c4b9e4;
              uStack_b8 = uStack_f0;
              uStack_c0 = uStack_f8;
              uStack_b0 = uStack_e8;
              if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_00c4b9e0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar8 = lVar8 + (long)(int)uVar6 * 0x14;
              *(undefined4 *)(lVar8 + 0x30) = uStack_e8;
              *(undefined8 *)(lVar8 + 0x28) = uStack_f0;
              *(undefined8 *)(lVar8 + 0x20) = uStack_f8;
              uVar7 = MKCBGHDANLA__FKDNILOCFBC(__this,*(undefined4 *)((long)__this_00 + 0x28));
              lVar8 = this.KOEIPIDCBJE;
              if (lVar8 == 0) goto LAB_00c4b9e4;
              if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)__this_00 + 0x28)) goto LAB_00c4b9e0;
              lVar8 = lVar8 + (long)(int)*(uint *)((long)__this_00 + 0x28) * 0x14;
              uStack_d0 = *(undefined4 *)(lVar8 + 0x30);
              uStack_d8 = *(undefined8 *)(lVar8 + 0x28);
              uStack_e0 = *(undefined8 *)(lVar8 + 0x20);
              uVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_e0,0);
              if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
              }
              CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar7,uVar2,0);
              lVar8 = func_0x00a679a0(_string___TypeInfo,5);
              if (lVar8 == 0) goto LAB_00c4b9e4;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x20) = _Str_BuyUpgrade__;
              uStack_f8 = _MGACAOGOMPM_TypeInfo;
              uStack_f0 = 0xffffffffffffffff;
              uStack_e8 = *(undefined4 *)((long)__this_00 + 0x28);
              uVar7 = System_Enum__ToString(&uStack_f8,0);
              if ((*(uint *)(lVar8 + 0x18) < 2) ||
                 (*(undefined8 *)(lVar8 + 0x28) = uVar7, *(uint *)(lVar8 + 0x18) == 2))
              goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x30) = _Str____;
              lVar5 = this.KOEIPIDCBJE;
              if (lVar5 == 0) goto LAB_00c4b9e4;
              if (*(uint *)(lVar5 + 0x18) <= *(uint *)((long)__this_00 + 0x28)) goto LAB_00c4b9e0;
              lVar5 = lVar5 + (long)(int)*(uint *)((long)__this_00 + 0x28) * 0x14;
              uStack_70 = *(undefined4 *)(lVar5 + 0x30);
              uStack_78 = *(undefined8 *)(lVar5 + 0x28);
              uStack_80 = *(undefined8 *)(lVar5 + 0x20);
              uVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_80,0);
              if ((*(uint *)(lVar8 + 0x18) < 4) ||
                 (*(undefined8 *)(lVar8 + 0x38) = uVar7, *(uint *)(lVar8 + 0x18) == 4))
              goto LAB_00c4b9e0;
              *(undefined8 *)(lVar8 + 0x40) = _Str__and_refresh_HP_;
              uVar7 = System_String__Concat(lVar8,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Main_TypeInfo);
              }
              Main__GEMDEAMAGPG(uVar7,0,0);
            }
            uStack_64 = uStack_64 + 1;
            uVar6 = *(uint *)(lVar4 + 0x18);
          } while ((int)uStack_64 < (int)uVar6);
        }
        MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
        uStack_64 = this.NDLELHGPFKO;
        uVar7 = System_Int32__ToString(&uStack_64,0);
        uVar7 = System_String__Concat(_Str_FullUpgrade_car__,uVar7,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar7,0,0);
        return;
      }
    }
  }
LAB_00c4b9e4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int KLAHDEDHJOD(int EIGKFINFICB) { }   @0xb4b9e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__KLAHDEDHJOD(void *__this,int EIGKFINFICB)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  lVar2 = this.CDFBHLPFLJF;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((uint)EIGKFINFICB < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)EIGKFINFICB * 0x14;
    uStack_20 = *(undefined4 *)(lVar2 + 0x30);
    uStack_28 = *(undefined8 *)(lVar2 + 0x28);
    uStack_30 = *(undefined8 *)(lVar2 + 0x20);
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_30,0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void LPHCCLPECIA(int EIGKFINFICB) { }   @0xb4ba3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA__LPHCCLPECIA(void *__this,int EIGKFINFICB)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_44;
  
  iStack_44 = EIGKFINFICB;
  if ((bRam000000000191716b & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
    func_0x00a67900(&Str____and_refresh_HP_);
    func_0x00a67900(&Str_BuyColor__);
    bRam000000000191716b = 1;
  }
  if (EIGKFINFICB == 0) {
    return;
  }
  lVar3 = this.CDFBHLPFLJF;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_78,1,0);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  if (lVar3 == 0) {
LAB_00c4bc04:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uStack_88 = uStack_70;
  uStack_90 = uStack_78;
  uStack_80 = uStack_68;
  if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
    *(undefined4 *)(lVar3 + 0x30) = uStack_68;
    *(undefined8 *)(lVar3 + 0x28) = uStack_70;
    *(undefined8 *)(lVar3 + 0x20) = uStack_78;
    uVar2 = MKCBGHDANLA__NDCGHMCJLPF(__this,EIGKFINFICB);
    lVar3 = this.CDFBHLPFLJF;
    if (lVar3 == 0) goto LAB_00c4bc04;
    if ((uint)EIGKFINFICB < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)EIGKFINFICB * 0x14;
      uStack_a0 = *(undefined4 *)(lVar3 + 0x30);
      uStack_a8 = *(undefined8 *)(lVar3 + 0x28);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x20);
      uVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_b0,0);
      if (*(int *)(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_CodeStage_AntiCheat_Storage_ObscuredPrefs_TypeInfo);
      }
      CodeStage_AntiCheat_Storage_ObscuredPrefs__SetInt(uVar2,uVar1,0);
      MKCBGHDANLA__DDPLLMLFICC(__this,0xffffffff);
      uVar2 = System_Int32__ToString(&iStack_44,0);
      uVar2 = System_String__Concat(_Str_BuyColor__,uVar2,_Str____and_refresh_HP_,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void .ctor(int HCBODNKILEA) { }   @0xb4bc0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MKCBGHDANLA___ctor(void *__this,int HCBODNKILEA)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191716c & 1) == 0) {
    func_0x00a67900(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo);
    bRam000000000191716c = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0xffffffff,0);
  uStack_40 = uStack_60;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  *(undefined4 *)((long)__this + 0x24) = uStack_60;
  *(undefined8 *)((long)__this + 0x1c) = uStack_68;
  this.LPJNKBODDNF = uStack_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,0,0);
  uStack_60 = uStack_78;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  *(undefined4 *)((long)__this + 0x38) = uStack_78;
  *(undefined8 *)((long)__this + 0x30) = uStack_80;
  this.MHBIDDBOEJD = uStack_88;
  uVar1 = func_0x00a679a0(_CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo,5);
  this.KOEIPIDCBJE = uVar1;
  uVar1 = func_0x00a679a0(_CodeStage_AntiCheat_ObscuredTypes_ObscuredInt___TypeInfo,5);
  this.CDFBHLPFLJF = uVar1;
  System_Object___ctor(__this,0);
  this.NDLELHGPFKO = HCBODNKILEA;
  MKCBGHDANLA__LAAAPNLMDIE(__this);
  return;
}


// ==== public int IIGHKMHDJNH() { }   @0xb4bce8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int MKCBGHDANLA__IIGHKMHDJNH(void *__this)

{
  return this.NDLELHGPFKO;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class Achievement // TypeDefIndex: 5104
{
	// Fields
	public KKMHKJEGDLA id; // 0x10
	public string GPGSID; // 0x18
	public string GCID; // 0x20
	private int current_count; // 0x28
	public int count; // 0x2C
	public int reward; // 0x30
	private GUIAchievement _gui; // 0x38

	// Properties
	public GUIAchievement gui { get; }

	// Methods

	private void PAJCJMENMMI(bool FJJAPMGNMKC) { }

	public void MAMIHJCBDBD() { }

	private bool ABKANHONENG() { }

	public GUIAchievement get_gui() { }

	public void PPHJGAMIKLM() { }

	private void PCJAFFALGCM() { }

	public void GFAPHIEIMFM(bool NNILIIJJPAK) { }

	public void .ctor() { }
}
*/

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
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 != 0) {
    uVar5 = DAFNMLEKHAD__OFOJMCJAGFD(lVar4,this.id);
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
    lVar4 = Main.FBDDKIOEKDM;
    if (lVar4 != 0) {
      DAFNMLEKHAD__EBANJKOABAL(lVar4,this.id,2);
      iVar2 = this.reward;
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
      lVar4 = Main.FBDDKIOEKDM;
      if (lVar4 != 0) {
        uStack_50 = *(undefined4 *)(lVar4 + 0x4c);
        uStack_58 = *(undefined8 *)(lVar4 + 0x44);
        uStack_60 = *(undefined8 *)(lVar4 + 0x3c);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
        DAFNMLEKHAD__DIMKKHJDHFJ(lVar4,iVar1 + iVar2 + iVar3);
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        SoundScript__GIGBLEBBIEK(SoundScript.CIMAPDEBGGG,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)Menu.KECGFPHIEHF != (void *)0x0) {
          Menu__KLGOLHHGBKP((void *)Menu.KECGFPHIEHF);
          if ((Menu.KECGFPHIEHF != 0) &&
             (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
            AnalyticsController__ODLOKNOHMOB();
            if ((Menu.KECGFPHIEHF != 0) &&
               (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
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


// ==== private void PAJCJMENMMI(bool FJJAPMGNMKC) { }   @0xaf3598

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PAJCJMENMMI(void *__this,bool FJJAPMGNMKC)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *__this_00;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iStack_34;
  
  if ((bRam0000000001916ed2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    bRam0000000001916ed2 = 1;
  }
  iStack_34 = 0;
  uVar2 = Achievement__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (FJJAPMGNMKC) {
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
    __this_00 = Main.FBDDKIOEKDM;
    if (__this_00 == (void *)0x0) goto LAB_00bf3a14;
    bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(__this_00,this.id);
  }
  else {
    bVar1 = false;
  }
  lVar4 = Achievement__get_gui(__this);
  if (lVar4 == 0) goto LAB_00bf3a14;
  plVar7 = *(long **)(lVar4 + 0x48);
  uVar2 = System_Int32__ToString((int *)(&this.reward),0);
  if (plVar7 == (long *)0x0) goto LAB_00bf3a14;
  (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x58),bVar1 & FJJAPMGNMKC,0);
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x38),~bVar1 & 1,0);
  if (bVar1 == false && ((FJJAPMGNMKC ^ 0xffU) & 1) == 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
LAB_00bf38d8:
      uVar6 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00bf3a14;
      uVar2 = Menu.KECGFPHIEHF.ANIMNONMFFH;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf38d8;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar4 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar4 == 0))
      goto LAB_00bf3a14;
      uVar3 = AdvController__HNDMJBICLJF(lVar4,3,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf38d8;
      lVar4 = Achievement__get_gui(__this);
      if (lVar4 == 0) goto LAB_00bf3a14;
      iStack_34 = this.reward;
      plVar7 = *(long **)(lVar4 + 0x88);
      if (iStack_34 < 0) {
        iStack_34 = iStack_34 + 1;
      }
      iStack_34 = iStack_34 >> 1;
      uVar2 = System_Int32__ToString(&iStack_34,0);
      uVar2 = System_String__Concat(_Str__,uVar2,0);
      if (plVar7 == (long *)0x0) goto LAB_00bf3a14;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
      uVar6 = 1;
    }
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x78),uVar6 ^ 1,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x80),uVar6,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_00bf3a14;
    uVar2 = 0;
  }
  else {
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x78),0,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0x80),0,0);
    lVar4 = Achievement__get_gui(__this);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_00bf3a14;
    uVar2 = 1;
  }
  UnityEngine_GameObject__SetActive(lVar4,uVar2,0);
  iVar11 = this.current_count;
  iVar10 = this.count;
  lVar4 = Achievement__get_gui(__this);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x68) != 0)) {
    fVar8 = (float)iVar11 / (float)iVar10;
    fVar9 = fVar8;
    if (1.0 < fVar8) {
      fVar9 = 1.0;
    }
    fVar9 = fVar9 * 689.0;
    if (fVar8 < 0.0) {
      fVar9 = 0.0;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar9,*(long *)(lVar4 + 0x68),0,0);
    lVar4 = Achievement__get_gui(__this);
    if (lVar4 != 0) {
      plVar7 = *(long **)(lVar4 + 0x70);
      uVar2 = System_Int32__ToString((int *)(&this.current_count),0);
      uVar5 = System_Int32__ToString((int *)(&this.count),0);
      uVar2 = System_String__Concat(uVar2,_Str__,uVar5,0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x5b0));
        return;
      }
    }
  }
LAB_00bf3a14:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public GUIAchievement get_gui() { }   @0xaf3a18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Achievement__get_gui(void *__this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ed4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ed4 = 1;
  }
  uVar5 = this._gui;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = Menu.KECGFPHIEHF;
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
LAB_00bf3bac:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*(long *)(lVar2 + 0x20) + 0x210) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar2 = Menu.KECGFPHIEHF;
        if (lVar2 == 0) goto LAB_00bf3bac;
      }
      if ((*(long *)(lVar2 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar2 + 0x20) + 0x210), lVar4 == 0)) goto LAB_00bf3bac;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = Menu.KECGFPHIEHF;
          if (lVar2 == 0) goto LAB_00bf3bac;
        }
        if ((*(long *)(lVar2 + 0x20) == 0) ||
           (lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x210), lVar2 == 0)) goto LAB_00bf3bac;
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar1 = 0;
          uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar2 + 0x20 + uVar1 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
            if ((uVar3 & 1) != 0) {
              if (lVar4 == 0) goto LAB_00bf3bac;
              if (*(int *)(lVar4 + 0x20) == this.id) {
                this._gui = lVar4;
                break;
              }
            }
            uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar1 = uVar1 + 1;
          } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
      }
    }
  }
  return this._gui;
}


// ==== public void MAMIHJCBDBD() { }   @0xaf3c64

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__MAMIHJCBDBD(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = Achievement__ABKANHONENG();
  if ((uVar1 & 1) != 0) {
    switch(this.id) {
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
    this.count = uVar2;
  }
LAB_00bf3ccc:
  return;
}


// ==== private bool ABKANHONENG() { }   @0xaf3cd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Achievement__ABKANHONENG(void *__this)

{
  int iVar1;
  
  if ((bRam0000000001916ed3 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916ed3 = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = BridgePHP.sn;
  if (iVar1 != 8) {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar1 = BridgePHP.sn;
    }
    if (iVar1 != 9) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar1 = BridgePHP.sn;
      }
      if (iVar1 != 0xc) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = BridgePHP.sn;
        }
        return iVar1 == 0xd;
      }
    }
  }
  return true;
}


// ==== public void PPHJGAMIKLM() { }   @0xaf3d9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PPHJGAMIKLM(void *__this)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((bRam0000000001916ed5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_REWARD);
    func_0x00a67900(&Str__x_);
    bRam0000000001916ed5 = 1;
  }
  Achievement__MAMIHJCBDBD(__this);
  this.current_count = 0;
  switch(this.id) {
  case 0:
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
    lVar8 = Main.FBDDKIOEKDM;
    if (lVar8 == 0) goto LAB_00bf46c4;
    lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,0);
    if (lVar8 != 0) {
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
      lVar8 = Main.FBDDKIOEKDM;
      if ((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,0), lVar8 == 0))
      goto LAB_00bf46c4;
      iVar5 = DJKGLJOCFCE__NIDLADCDMOH(lVar8,0);
      if (0 < iVar5) goto code_r0x00bf44a8;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    uVar7 = Achievement__ABKANHONENG();
    if (((uVar7 & 1) != 0) && (this.id == 1)) {
      this.current_count = 0;
      iVar5 = 0;
      bVar2 = false;
      while( true ) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Main.KECGFPHIEHF == 0) ||
           (lVar8 = Main.KECGFPHIEHF.GDPCMIGAPOM, lVar8 == 0)) break;
        if (*(int *)(lVar8 + 0x18) <= iVar5) {
          if (!bVar2) goto LAB_00bf441c;
          goto code_r0x00bf44b0;
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
        lVar8 = Main.FBDDKIOEKDM;
        if (lVar8 == 0) break;
        lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,iVar5,1);
        if (lVar8 != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF == 0) ||
              (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0)) ||
             (lVar8 = *(long *)(lVar8 + 0x560), lVar8 == 0)) break;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            uVar12 = 0;
            do {
              if (uVar1 <= uVar12) goto code_r0x00bf46c8;
              lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_00bf46c4;
              if (((*(char *)(lVar9 + 0x70) != '\0') && (0 < *(int *)(lVar9 + 0x74))) &&
                 (iVar3 = ShopItem__HJICMDCENKN(lVar9,iVar5,0), iVar3 != 0)) {
                bVar2 = true;
                this.current_count = 1;
                break;
              }
              uVar1 = *(uint *)(lVar8 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar1);
          }
        }
        iVar5 = iVar5 + 1;
      }
      goto LAB_00bf46c4;
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
    lVar8 = Main.FBDDKIOEKDM;
    if (lVar8 == 0) goto LAB_00bf46c4;
    iVar5 = DAFNMLEKHAD__BHMFJBCOKOA(lVar8,this.id);
    goto code_r0x00bf440c;
  case 6:
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Main.KECGFPHIEHF == 0) ||
       (lVar8 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar8 == 0))
    goto LAB_00bf46c4;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
code_r0x00bf46c8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
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
        if ((lVar9 == 0) || (lVar6 = Main.FBDDKIOEKDM, lVar6 == 0))
        goto LAB_00bf46c4;
        lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,*(undefined4 *)(lVar9 + 0x10));
        if (lVar6 != 0) {
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
          lVar6 = Main.FBDDKIOEKDM;
          if ((lVar6 == 0) ||
             (lVar6 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar6,*(undefined4 *)(lVar9 + 0x10)), lVar6 == 0))
          goto LAB_00bf46c4;
          iVar5 = DJKGLJOCFCE__NIDLADCDMOH(lVar6,0);
          if ((0 < iVar5) && (iVar5 = Level__MNPHCGOJNCN(lVar9,0), iVar5 == 3))
          goto code_r0x00bf44a8;
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
    break;
  case 7:
    iVar5 = 1;
    while( true ) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Main.KECGFPHIEHF == 0) ||
         (lVar8 = Main.KECGFPHIEHF.GDPCMIGAPOM, lVar8 == 0))
      goto LAB_00bf46c4;
      if (*(int *)(lVar8 + 0x18) <= iVar5) goto LAB_00bf441c;
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
      lVar8 = Main.FBDDKIOEKDM;
      if (lVar8 == 0) goto LAB_00bf46c4;
      lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,iVar5,1);
      if (lVar8 != 0) break;
code_r0x00bf4350:
      iVar5 = iVar5 + 1;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x560), lVar8 != 0)) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) goto code_r0x00bf46c8;
          lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00bf46c4;
          if (*(char *)(lVar9 + 0x70) == '\0') {
            iVar3 = ShopItem__HJICMDCENKN(lVar9,iVar5,0);
            iVar4 = ShopItem__EKBFKEBGGOP(lVar9,0);
            if (iVar3 < iVar4) goto code_r0x00bf4350;
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar12 = uVar12 + 1;
          if ((int)uVar1 <= (int)uVar12) break;
        } while( true );
      }
      goto code_r0x00bf44a8;
    }
    goto LAB_00bf46c4;
  case 8:
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
code_r0x00bf43fc:
    if (Main.FBDDKIOEKDM == 0) goto LAB_00bf46c4;
    iVar5 = DAFNMLEKHAD__ADDNPHMAFBA();
code_r0x00bf440c:
    this.current_count = iVar5;
    if (iVar5 < this.count) break;
code_r0x00bf44b0:
    Achievement__PCJAFFALGCM(__this);
    goto LAB_00bf44b8;
  case 9:
    uVar7 = Achievement__ABKANHONENG();
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    if ((uVar7 & 1) != 0) {
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      goto code_r0x00bf43fc;
    }
    if ((Main.KECGFPHIEHF == 0) ||
       (lVar8 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar8 == 0))
    goto LAB_00bf46c4;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) goto code_r0x00bf46c8;
        lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00bf46c4;
        uVar7 = Level__get_IsEvent(lVar9,0);
        if (((uVar7 & 1) == 0) && (iVar5 = Level__MNPHCGOJNCN(lVar9,0), iVar5 != 3))
        goto LAB_00bf441c;
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
code_r0x00bf44a8:
    this.current_count = 1;
    goto code_r0x00bf44b0;
  }
LAB_00bf441c:
  Achievement__PAJCJMENMMI(__this,0);
LAB_00bf44b8:
  uVar10 = this._gui;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = Translate.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (this._gui == 0) goto LAB_00bf46c4;
  uVar10 = this._gui.OIGEBFODLLH;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = this._gui;
    if (lVar8 == 0) goto LAB_00bf46c4;
    plVar11 = *(long **)(lVar8 + 0x28);
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar8 = this._gui;
      if (lVar8 == 0) goto LAB_00bf46c4;
    }
    if (Translate.KECGFPHIEHF == 0) goto LAB_00bf46c4;
    lVar8 = Translate__JJJNIPAKLJF
                      (Translate.KECGFPHIEHF,*(undefined8 *)(lVar8 + 0x30),0);
    uVar10 = System_Int32__ToString(&this.count,0);
    if ((lVar8 == 0) ||
       (uVar10 = System_String__Replace(lVar8,_Str__x_,uVar10,0), plVar11 == (long *)0x0))
    goto LAB_00bf46c4;
    (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5b0));
  }
  if (this._gui != 0) {
    uVar10 = this._gui.JDCEFHEPHNK;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (this._gui != 0) {
      plVar11 = this._gui.JDCEFHEPHNK;
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF != 0) {
        uVar10 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_REWARD,0);
        uVar10 = System_String__Concat(uVar10,_Str__,0);
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bf46a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x5b0));
          return;
        }
      }
    }
  }
LAB_00bf46c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PCJAFFALGCM() { }   @0xaf48f0

/* WARNING: Removing unreachable block (ram,0x00bf36b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement__PCJAFFALGCM(void *__this)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iStack_34;
  
  if ((bRam0000000001916ed6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916ed6 = 1;
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
  lVar3 = Main.FBDDKIOEKDM;
  if (lVar3 == 0) {
LAB_00bf4b5c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar4 = DAFNMLEKHAD__HIFFBAOPBGD(lVar3,this.id);
  if ((uVar4 & 1) == 0) {
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
    pvVar5 = Main.FBDDKIOEKDM;
    if (pvVar5 == (void *)0x0) goto LAB_00bf4b5c;
    bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(pvVar5,this.id);
    if (!bVar1) {
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
      lVar3 = Main.FBDDKIOEKDM;
      if (lVar3 == 0) goto LAB_00bf4b5c;
      DAFNMLEKHAD__EBANJKOABAL(lVar3,this.id,1);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00bf4b5c;
        uVar7 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = System_String__op_Inequality(this.GPGSID,_Str_,0),
           (uVar4 & 1) != 0)) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar3 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar3 == 0))
          goto LAB_00bf4b5c;
          BridgePHP__UnlockAchievement(lVar3,this.GPGSID,0);
        }
      }
    }
  }
  if ((bRam0000000001916ed2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    bRam0000000001916ed2 = 1;
  }
  iStack_34 = 0;
  uVar7 = Achievement__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
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
  pvVar5 = Main.FBDDKIOEKDM;
  if (pvVar5 == (void *)0x0) goto LAB_00bf3a14;
  bVar1 = DAFNMLEKHAD__OFOJMCJAGFD(pvVar5,this.id);
  lVar3 = Achievement__get_gui(__this);
  if (lVar3 == 0) goto LAB_00bf3a14;
  plVar8 = *(long **)(lVar3 + 0x48);
  uVar7 = System_Int32__ToString((int *)(&this.reward),0);
  if (plVar8 == (long *)0x0) goto LAB_00bf3a14;
  (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x58),bVar1,0);
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_00bf3a14;
  UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x38),~bVar1 & 1,0);
  if (bVar1) {
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x78),0,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x80),0,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_00bf3a14;
    uVar7 = 1;
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
LAB_00bf38d8:
      uVar6 = 0;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00bf3a14;
      uVar7 = Menu.KECGFPHIEHF.ANIMNONMFFH;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00bf38d8;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar3 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar3 == 0))
      goto LAB_00bf3a14;
      uVar4 = AdvController__HNDMJBICLJF(lVar3,3,0);
      if ((uVar4 & 1) == 0) goto LAB_00bf38d8;
      lVar3 = Achievement__get_gui(__this);
      if (lVar3 == 0) goto LAB_00bf3a14;
      iStack_34 = this.reward;
      plVar8 = *(long **)(lVar3 + 0x88);
      if (iStack_34 < 0) {
        iStack_34 = iStack_34 + 1;
      }
      iStack_34 = iStack_34 >> 1;
      uVar7 = System_Int32__ToString(&iStack_34,0);
      uVar7 = System_String__Concat(_Str__,uVar7,0);
      if (plVar8 == (long *)0x0) goto LAB_00bf3a14;
      (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
      uVar6 = 1;
    }
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x78),uVar6 ^ 1,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) goto LAB_00bf3a14;
    UnityEngine_GameObject__SetActive(*(long *)(lVar3 + 0x80),uVar6,0);
    lVar3 = Achievement__get_gui(__this);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_00bf3a14;
    uVar7 = 0;
  }
  UnityEngine_GameObject__SetActive(lVar3,uVar7,0);
  iVar12 = this.current_count;
  iVar11 = this.count;
  lVar3 = Achievement__get_gui(__this);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    fVar9 = (float)iVar12 / (float)iVar11;
    fVar10 = fVar9;
    if (1.0 < fVar9) {
      fVar10 = 1.0;
    }
    fVar10 = fVar10 * 689.0;
    if (fVar9 < 0.0) {
      fVar10 = 0.0;
    }
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar10,*(long *)(lVar3 + 0x68),0,0);
    lVar3 = Achievement__get_gui(__this);
    if (lVar3 != 0) {
      plVar8 = *(long **)(lVar3 + 0x70);
      uVar7 = System_Int32__ToString((int *)(&this.current_count),0);
      uVar2 = System_Int32__ToString((int *)(&this.count),0);
      uVar7 = System_String__Concat(uVar7,_Str__,uVar2,0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x5a8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x5b0));
        return;
      }
    }
  }
LAB_00bf3a14:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf4e04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Achievement___ctor(void *__this)

{
  return;
}



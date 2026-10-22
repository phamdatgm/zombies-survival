/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ShopItem : MonoBehaviour // TypeDefIndex: 5061
{
	// Fields
	public string KGDFADICFPE; // 0x20
	public MGACAOGOMPM FHOFNGHGNGF; // 0x28
	public int[] BDHDNGGBOFK; // 0x30
	public Text BAEJPAILMIH; // 0x38
	public Image POLBJBHIJFG; // 0x40
	public RectTransform AGKKFNJDHJL; // 0x48
	public GameObject EGFPPEFNCKK; // 0x50
	private bool HPGCCPHOJDC; // 0x58
	public Image HEGBLDJJONJ; // 0x60
	public bool OJHMOHAHKDB; // 0x68
	public bool AGGALPOCLFE; // 0x69
	public EHKCLJKMBLO DNHICKODMLE; // 0x6C
	public bool ELHBFIHEDOL; // 0x70
	public int EIGKFINFICB; // 0x74
	public GameObject LFCGCCKHFJM; // 0x78
	private readonly float PBIHJLDFIFP; // 0x80
	private readonly float JPPFFPBMMDB; // 0x84
	private readonly float IMOLLLMPIMB; // 0x88

	// Properties
	public int EMAFLEKNKBB { get; }

	// Methods

	public bool MLHKDEGPJGI(int LGAALFBLPLP) { }

	public int OKADMIPJHCA(int LGAALFBLPLP) { }

	public void .ctor() { }

	public int HJICMDCENKN(int HCBODNKILEA = -1) { }

	public void BGNPJIHMIMI(bool FJDCALHGHCI) { }

	public int EKBFKEBGGOP() { }

	public void KGOOJPBMMBK() { }
}
*/

// ==== public bool MLHKDEGPJGI(int LGAALFBLPLP) { }   @0xad5b10

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool ShopItem__MLHKDEGPJGI(void *__this,int LGAALFBLPLP)

{
  if ((this.ELHBFIHEDOL == '\0') && (this.FHOFNGHGNGF == 4)) {
    if (this.BDHDNGGBOFK == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (this.BDHDNGGBOFK.Length + -1 == LGAALFBLPLP) {
      return true;
    }
  }
  return this.ELHBFIHEDOL != '\0';
}


// ==== public int EKBFKEBGGOP() { }   @0xad5b5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__EKBFKEBGGOP(void *__this)

{
  if (this.BDHDNGGBOFK != 0) {
    return this.BDHDNGGBOFK.Length;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int OKADMIPJHCA(int LGAALFBLPLP) { }   @0xad5b78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__OKADMIPJHCA(void *__this,int LGAALFBLPLP)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dStack_28;
  
  if (this.BDHDNGGBOFK == 0) {
LAB_00bd5cf8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (this.BDHDNGGBOFK.Length <= LGAALFBLPLP) {
    return 0;
  }
  uVar2 = ShopItem__MLHKDEGPJGI(__this,LGAALFBLPLP);
  if ((uVar2 & 1) == 0) {
    lVar3 = this.BDHDNGGBOFK;
    if (lVar3 == 0) goto LAB_00bd5cf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)LGAALFBLPLP) {
LAB_00bd5cfc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    iVar1 = *(int *)(lVar3 + (long)LGAALFBLPLP * 4 + 0x20);
    lVar3 = Car__get_Current(0);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    fVar6 = *(float *)(lVar3 + 0x28) * (float)iVar1;
    iVar1 = -0x80000000;
    if (fVar6 != INFINITY) {
      iVar1 = (int)fVar6;
    }
  }
  else if (this.ELHBFIHEDOL == '\0') {
    lVar3 = Car__get_Current(0);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    iVar1 = *(int *)(lVar3 + 0x34);
  }
  else {
    lVar3 = this.BDHDNGGBOFK;
    if (lVar3 == 0) goto LAB_00bd5cf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)LGAALFBLPLP) goto LAB_00bd5cfc;
    iVar1 = *(int *)(lVar3 + (long)LGAALFBLPLP * 4 + 0x20);
  }
  fVar6 = (float)iVar1 * 0.1;
  dVar5 = (double)func_0x016dece0((double)fVar6,&dStack_28);
  if (0.0 <= fVar6) {
    if (dVar5 != 0.5) {
      fVar4 = (float)(int)(fVar6 + 0.5);
      goto LAB_00bd5cc4;
    }
    fVar6 = 1.0;
  }
  else {
    if (dVar5 != -0.5) {
      fVar4 = (float)(int)(fVar6 + -0.5);
      goto LAB_00bd5cc4;
    }
    fVar6 = -1.0;
  }
  fVar4 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar4 = (float)dStack_28 + fVar6;
  }
LAB_00bd5cc4:
  iVar1 = -0x80000000;
  if (fVar4 * 10.0 != INFINITY) {
    iVar1 = (int)(fVar4 * 10.0);
  }
  return iVar1;
}


// ==== public void .ctor() { }   @0xad5d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem___ctor(void *__this)

{
  this.IMOLLLMPIMB = 0x42880000;
  this.PBIHJLDFIFP = 0x41700000430c0000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public int HJICMDCENKN(int HCBODNKILEA = -1) { }   @0xad5d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__HJICMDCENKN(void *__this,int HCBODNKILEA)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001916e00 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e00 = 1;
  }
  if (HCBODNKILEA == -1) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    HCBODNKILEA = Main.LCFFGBBHMPH;
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
  if (lVar3 != 0) {
    lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1,0);
    if (lVar3 == 0) {
      return 0;
    }
    cVar1 = this.ELHBFIHEDOL;
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
    if (lVar3 != 0) {
      lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1,0);
      if (cVar1 == '\0') {
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50(lVar3,this.FHOFNGHGNGF,0);
          }
          if (this.FHOFNGHGNGF < *(uint *)(*(long *)(lVar3 + 0x40) + 0x18)) {
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                              (&stack0xffffffffffffffd0,0);
            return iVar2;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
      else if (lVar3 != 0) {
        if (*(long *)(lVar3 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50(lVar3,this.EIGKFINFICB,0);
        }
        if (this.EIGKFINFICB < *(uint *)(*(long *)(lVar3 + 0x48) + 0x18)) {
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                            (&stack0xffffffffffffffd0,0);
          return iVar2;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BGNPJIHMIMI(bool FJDCALHGHCI) { }   @0xad5e8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem__BGNPJIHMIMI(void *__this,bool FJDCALHGHCI)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001916e01 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e01 = 1;
  }
  if (FJDCALHGHCI) {
    lVar2 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) && (lVar2 != 0))
    {
      UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(lVar5 + 0x20),0);
      uVar6 = this.EGFPPEFNCKK;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar2 = this.EGFPPEFNCKK;
      if (lVar2 != 0) {
        uVar6 = 1;
LAB_00bd6140:
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar2,uVar6);
        return;
      }
    }
  }
  else {
    cVar1 = this.ELHBFIHEDOL;
    lVar2 = UnityEngine_Component__get_transform(__this,0);
    if (lVar2 != 0) {
      uVar6 = UnityEngine_Transform__get_parent(lVar2,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) {
        if (cVar1 == '\0') {
          if (*(long *)(lVar2 + 0x640) != 0) {
            uVar4 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x640),0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar4,0);
            if ((uVar3 & 1) != 0) {
              lVar2 = UnityEngine_Component__get_transform(__this,0);
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_Menu_TypeInfo);
              }
              if ((((Menu.KECGFPHIEHF == 0) ||
                   (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
                  (lVar5 = *(long *)(lVar5 + 0x640), lVar5 == 0)) ||
                 (uVar6 = UnityEngine_Component__get_transform(lVar5,0), lVar2 == 0))
              goto LAB_00bd6164;
              UnityEngine_Transform__SetParent(lVar2,uVar6,0);
            }
            uVar6 = this.EGFPPEFNCKK;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            lVar2 = this.EGFPPEFNCKK;
            if (lVar2 != 0) {
              uVar6 = 0;
              goto LAB_00bd6140;
            }
          }
        }
        else if (*(long *)(lVar2 + 0x648) != 0) {
          uVar4 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x648),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar4,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar2 = UnityEngine_Component__get_transform(__this,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          if (((Menu.KECGFPHIEHF != 0) &&
              (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) &&
             ((lVar5 = *(long *)(lVar5 + 0x648), lVar5 != 0 &&
              (uVar6 = UnityEngine_Component__get_transform(lVar5,0), lVar2 != 0)))) {
            if (pcRam000000000191c838 == (code *)0x0) {
              pcRam000000000191c838 = (code *)func_0x00a678c4(&UNK_005b208a,uVar6,0);
            }
                    /* WARNING: Could not recover jumptable at 0x0149458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c838)(lVar2,uVar6,1);
            return;
          }
        }
      }
    }
  }
LAB_00bd6164:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KGOOJPBMMBK() { }   @0xad6168

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem__KGOOJPBMMBK(void *__this)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  int iVar18;
  int iStack_84;
  
  if ((bRam0000000001916e02 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_FREE_SHORT);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_MAX);
    bRam0000000001916e02 = 1;
  }
  iStack_84 = 0;
  uVar10 = this.AGKKFNJDHJL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    lVar11 = this.AGKKFNJDHJL;
    fVar17 = this.PBIHJLDFIFP;
    iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
    if ((this.BDHDNGGBOFK == 0) || (lVar11 == 0)) goto LAB_00bd6d28;
    uVar7 = (ulong)this.JPPFFPBMMDB;
    uVar16 = (ulong)(uint)(float)iVar5;
    UnityEngine_RectTransform__set_sizeDelta
              (fVar17 * ((float)iVar5 / (float)this.BDHDNGGBOFK.Length),
               uVar7,lVar11,0);
    if (this.HPGCCPHOJDC == '\0') {
      if (this.BDHDNGGBOFK == 0) goto LAB_00bd6d28;
      iVar5 = (int)this.BDHDNGGBOFK.Length;
      if (1 < iVar5) {
        if (0 < iVar5 + -1) {
          iVar5 = 0;
          do {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 == 0))
            goto LAB_00bd6d28;
            uVar12 = *(undefined8 *)(lVar11 + 0x570);
            uVar10 = UnityEngine_Component__get_transform(__this,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            lVar11 = UnityEngine_Object__Instantiate_object_
                               (uVar12,uVar10,_Method_UnityEngine_Object_Instantiate_GameObject___);
            if ((lVar11 == 0) ||
               (lVar8 = UnityEngine_GameObject__get_transform(lVar11,0), lVar8 == 0))
            goto LAB_00bd6d28;
            UnityEngine_Transform__get_localPosition(lVar8,0);
            if (this.BDHDNGGBOFK == 0) goto LAB_00bd6d28;
            fVar17 = this.IMOLLLMPIMB;
            iVar18 = this.BDHDNGGBOFK.Length;
            lVar11 = UnityEngine_GameObject__get_transform(lVar11,0);
            if (lVar11 == 0) goto LAB_00bd6d28;
            iVar5 = iVar5 + 1;
            fVar14 = (float)iVar5 / (float)iVar18;
            fVar15 = fVar14;
            if (1.0 < fVar14) {
              fVar15 = 1.0;
            }
            if (fVar14 < 0.0) {
              fVar15 = 0.0;
            }
            UnityEngine_Transform__set_localPosition
                      ((fVar17 + fVar17) * fVar15 - fVar17,uVar7,uVar16,lVar11,0);
            if (this.BDHDNGGBOFK == 0) goto LAB_00bd6d28;
          } while (iVar5 < this.BDHDNGGBOFK.Length + -1);
        }
        this.HPGCCPHOJDC = 1;
      }
    }
  }
  if (this.ELHBFIHEDOL != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      iVar5 = this.EIGKFINFICB;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = CarController.KECGFPHIEHF;
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x470) == 0)) goto LAB_00bd6d28;
      if (iVar5 < *(int *)(*(long *)(lVar11 + 0x470) + 0x18)) {
        plVar13 = this.HEGBLDJJONJ;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar11 = CarController.KECGFPHIEHF;
          if (lVar11 == 0) goto LAB_00bd6d28;
        }
        lVar11 = *(long *)(lVar11 + 0x470);
        if (lVar11 == 0) goto LAB_00bd6d28;
        if (*(uint *)(lVar11 + 0x18) <= this.EIGKFINFICB) goto LAB_00bd6d2c;
        lVar11 = *(long *)(lVar11 + (long)(int)this.EIGKFINFICB * 8 + 0x20);
        if ((lVar11 == 0) || (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
        (**(code **)(*plVar13 + 0x2a8))
                  (*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                   *(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),plVar13,
                   *(undefined8 *)(*plVar13 + 0x2b0));
      }
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
    lVar11 = Main.FBDDKIOEKDM;
    if (lVar11 == 0) goto LAB_00bd6d28;
    lVar11 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,0xffffffff,1,0);
    if (lVar11 != 0) {
      lVar11 = this.LFCGCCKHFJM;
      iVar5 = this.EIGKFINFICB;
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
      if (((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0), lVar8 == 0)) ||
         (iVar18 = MKCBGHDANLA__BGFAMABFPHC(lVar8,0), lVar11 == 0)) goto LAB_00bd6d28;
      UnityEngine_GameObject__SetActive(lVar11,iVar5 == iVar18,0);
    }
    if ((this.ELHBFIHEDOL != '\0') && (this.EIGKFINFICB < 1))
    goto LAB_00bd68e4;
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
  lVar11 = Main.FBDDKIOEKDM;
  if (lVar11 == 0) goto LAB_00bd6d28;
  lVar11 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,0xffffffff,1,0);
  if (lVar11 == 0) {
    this.OJHMOHAHKDB = 0;
    if (this.ELHBFIHEDOL == '\0') {
      plVar13 = this.HEGBLDJJONJ;
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
      if (this.ELHBFIHEDOL != '\0') goto LAB_00bd67b0;
    }
    else {
LAB_00bd67b0:
      if (this.LFCGCCKHFJM == 0) goto LAB_00bd6d28;
      UnityEngine_GameObject__SetActive(this.LFCGCCKHFJM,0,0);
    }
    plVar13 = this.BAEJPAILMIH;
    if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
    (**(code **)(*plVar13 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)
              );
    plVar13 = this.BAEJPAILMIH;
    if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
    (**(code **)(*plVar13 + 0x5a8))(plVar13,_Str__,*(undefined8 *)(*plVar13 + 0x5b0));
  }
  else {
    if (this.ELHBFIHEDOL != '\0') {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar10 = CarController.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((uVar7 & 1) != 0) {
        iVar5 = this.EIGKFINFICB;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = CarController.KECGFPHIEHF;
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x470) == 0)) goto LAB_00bd6d28;
        if (iVar5 < *(int *)(*(long *)(lVar11 + 0x470) + 0x18)) {
          plVar13 = this.HEGBLDJJONJ;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar11 = CarController.KECGFPHIEHF;
            if (lVar11 == 0) goto LAB_00bd6d28;
          }
          lVar11 = *(long *)(lVar11 + 0x470);
          if (lVar11 == 0) goto LAB_00bd6d28;
          if (*(uint *)(lVar11 + 0x18) <= this.EIGKFINFICB) {
LAB_00bd6d2c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar11 = *(long *)(lVar11 + (long)(int)this.EIGKFINFICB * 8 + 0x20);
          if ((lVar11 == 0) || (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
          (**(code **)(*plVar13 + 0x2a8))
                    (*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                     *(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),plVar13,
                     *(undefined8 *)(*plVar13 + 0x2b0));
        }
      }
    }
    iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
    if (this.BDHDNGGBOFK == 0) goto LAB_00bd6d28;
    if (iVar5 < this.BDHDNGGBOFK.Length) {
      cVar3 = this.ELHBFIHEDOL;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = Menu.KECGFPHIEHF;
      if (cVar3 == '\0') {
        if (lVar11 == 0) goto LAB_00bd6d28;
        bVar4 = Menu__LDBOEHFLNFA(lVar11,__this,0);
      }
      else {
        if (lVar11 == 0) goto LAB_00bd6d28;
        bVar4 = Menu__POLNAJBPECM(lVar11,this.EIGKFINFICB,0);
      }
      lVar11 = this.POLBJBHIJFG;
      if (lVar11 != 0) {
        if ((bVar4 & 1) == 0) {
          UnityEngine_Behaviour__set_enabled(lVar11,1,0);
          plVar13 = this.BAEJPAILMIH;
          iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
          iStack_84 = ShopItem__OKADMIPJHCA(__this,iVar5);
          uVar10 = System_Int32__ToString(&iStack_84,0);
        }
        else {
          UnityEngine_Behaviour__set_enabled(lVar11,0,0);
          plVar13 = this.BAEJPAILMIH;
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((void *)Translate.KECGFPHIEHF == (void *)0x0) ||
             (pvVar9 = Translate__JJJNIPAKLJF
                                 ((void *)Translate.KECGFPHIEHF,
                                  _Str_FREE_SHORT), pvVar9 == (void *)0x0)) goto LAB_00bd6d28;
          uVar10 = System_String__ToUpper(pvVar9,0);
        }
        if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
        (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x5b0));
        lVar11 = this.POLBJBHIJFG;
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Menu_TypeInfo);
        }
        if (((Menu.KECGFPHIEHF == 0) ||
            (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0)) ||
           (lVar11 == 0)) goto LAB_00bd6d28;
        lVar2 = 0x388;
        if ((uVar7 & 1) == 0) {
          lVar2 = 0x378;
        }
        UnityEngine_UI_Image__set_sprite(lVar11,*(undefined8 *)(lVar8 + lVar2),0);
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
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
        lVar11 = Main.FBDDKIOEKDM;
        if (lVar11 == 0) goto LAB_00bd6d28;
        if ((uVar7 & 1) == 0) {
          iVar5 = DAFNMLEKHAD__LOCFCFJIAIH(lVar11,0);
        }
        else {
          iVar5 = DAFNMLEKHAD__HPDEBBJNCIK();
        }
        iVar18 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        iVar18 = ShopItem__OKADMIPJHCA(__this,iVar18);
        if ((iVar5 < iVar18 & (bVar4 ^ 0xff)) == 0) {
          if (this.ELHBFIHEDOL == '\0') {
            if (this.OJHMOHAHKDB == '\0') {
              plVar13 = this.HEGBLDJJONJ;
              if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
              (**(code **)(*plVar13 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                         *(undefined8 *)(*plVar13 + 0x2b0));
            }
            this.OJHMOHAHKDB = 1;
          }
          uVar10 = this.BAEJPAILMIH;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if ((uVar7 & 1) != 0) {
            plVar13 = this.BAEJPAILMIH;
            if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
        }
        else {
          if (this.ELHBFIHEDOL == '\0') {
            plVar13 = this.HEGBLDJJONJ;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF == 0) ||
                (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 == 0)) ||
               (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (*(undefined4 *)(lVar11 + 0x598),*(undefined4 *)(lVar11 + 0x59c),
                       *(undefined4 *)(lVar11 + 0x5a0),*(undefined4 *)(lVar11 + 0x5a4),plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
          uVar10 = this.BAEJPAILMIH;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if ((uVar7 & 1) != 0) {
            plVar13 = this.BAEJPAILMIH;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF == 0) ||
                (lVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar11 == 0)) ||
               (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (*(undefined4 *)(lVar11 + 0x598),*(undefined4 *)(lVar11 + 0x59c),
                       *(undefined4 *)(lVar11 + 0x5a0),*(undefined4 *)(lVar11 + 0x5a4),plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
          this.OJHMOHAHKDB = 0;
        }
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          iVar5 = CarController.GLBOHAGOBFH;
          if (iVar5 != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar5 = CarController.GLBOHAGOBFH;
            }
            iVar18 = ShopItem__HJICMDCENKN(__this,0xffffffff);
            iVar18 = ShopItem__OKADMIPJHCA(__this,iVar18);
            if (iVar5 <= iVar18) goto LAB_00bd68e4;
          }
          iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
          iVar5 = ShopItem__OKADMIPJHCA(__this,iVar5);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CarController_TypeInfo);
          }
          CarController.GLBOHAGOBFH = iVar5;
        }
        goto LAB_00bd68e4;
      }
      goto LAB_00bd6d28;
    }
    this.OJHMOHAHKDB = 0;
    if (this.ELHBFIHEDOL == '\0') {
      plVar13 = this.HEGBLDJJONJ;
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
    }
    uVar10 = this.BAEJPAILMIH;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      plVar13 = this.BAEJPAILMIH;
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
      plVar13 = this.BAEJPAILMIH;
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      puVar1 = (undefined8 *)&Str_MAX;
      if (this.ELHBFIHEDOL != '\0') {
        puVar1 = (undefined8 *)&Str_;
      }
      (**(code **)(*plVar13 + 0x5a8))(plVar13,*puVar1,*(undefined8 *)(*plVar13 + 0x5b0));
    }
  }
  if (this.POLBJBHIJFG != 0) {
    UnityEngine_Behaviour__set_enabled(this.POLBJBHIJFG,0,0);
LAB_00bd68e4:
    ShopItem__BGNPJIHMIMI(__this,0);
    return;
  }
LAB_00bd6d28:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



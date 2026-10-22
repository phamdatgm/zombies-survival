/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUIWindow : MonoBehaviour // TypeDefIndex: 5227
{
	// Fields
	public static GUIWindow OFEJBBPBBFG; // 0x0
	public static GUIWindow DNEPGKHAOBF; // 0x8
	public static GUIWindow PADNIFKFMPL; // 0x10
	public bool HBFOLOGFOCH; // 0x20
	public bool GNNIDAAJHAB; // 0x21
	public bool ABEAIKDPHKN; // 0x22
	public bool HLFGAHJIOGK; // 0x23
	public GUIWindow ICHGEFECNAA; // 0x28
	public GameObject PIABNBOLPFI; // 0x30
	public GameObject DIOAEABLGJH; // 0x38
	public bool NFKOLENCPBC; // 0x40
	private static bool JMMLANIHIHJ; // 0x18
	private float GJLAJGCPBEF; // 0x44
	private bool KJAPMFPAMLO; // 0x48
	private float BIIBMMCNOJH; // 0x4C
	private float BBFMJAGLAMH; // 0x50

	// Methods

	private void IPELKJAHFGL() { }

	private void EPGDFDEPGCB(RectTransform KIMPLIODKPG, float NIGCBLFGFKO, float APPEAGGPNAB) { }

	public void HEGIHOAJOKK(bool LIMOELDKJHO = False) { }

	public void .ctor() { }

	public IEnumerator FAAELIPKLCB() { }

	public void JGDCBENNDFO(bool OIAHOGEKCHK = False) { }

	private GameObject FEHHGIGJIKL() { }
}
*/

// ==== private void IPELKJAHFGL() { }   @0xb4639c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__IPELKJAHFGL(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  if ((bRam000000000191714f & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_isWindowChangedByAds__Rect__null___);
    bRam000000000191714f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF != 0) &&
     (lVar1 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar1 != 0)) {
    AdvController__JJDJIEJLCFM(lVar1,0);
    if (this.KJAPMFPAMLO != '\0') {
      lVar1 = UnityEngine_Component__get_gameObject(__this,0);
      if (lVar1 == 0) goto LAB_00c464e8;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar1,&uStack_28,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uStack_28,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_isWindowChangedByAds__Rect__null___,0,0);
      }
      else {
        GUIWindow__EPGDFDEPGCB
                  (this.BIIBMMCNOJH,this.BBFMJAGLAMH,__this,
                   uStack_28);
        this.KJAPMFPAMLO = 0;
      }
    }
    return;
  }
LAB_00c464e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void EPGDFDEPGCB(RectTransform KIMPLIODKPG, float NIGCBLFGFKO, float APPEAGGPNAB) { }   @0xb464ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__EPGDFDEPGCB(void *__this,void *KIMPLIODKPG,float NIGCBLFGFKO,float APPEAGGPNAB)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_register_00005004;
  
  fVar3 = APPEAGGPNAB;
  if ((bRam0000000001917150 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917150 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(KIMPLIODKPG,0,0);
  if ((uVar1 & 1) != 0) {
    if (this.KJAPMFPAMLO == '\0') {
      this.KJAPMFPAMLO = 1;
      if (KIMPLIODKPG == (void *)0x0) goto LAB_00c46608;
      UnityEngine_RectTransform__get_anchoredPosition(KIMPLIODKPG,0);
      this.BIIBMMCNOJH = fVar3;
      uVar2 = UnityEngine_Transform__get_localScale(KIMPLIODKPG,0);
      this.BBFMJAGLAMH = uVar2;
      this.GJLAJGCPBEF = NIGCBLFGFKO;
    }
    else {
      this.GJLAJGCPBEF = NIGCBLFGFKO;
      if (KIMPLIODKPG == (void *)0x0) {
LAB_00c46608:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (0,CONCAT44(in_register_00005004,NIGCBLFGFKO),KIMPLIODKPG,0);
    if ((0.0 < APPEAGGPNAB) &&
       (fVar3 = (float)UnityEngine_Transform__get_localScale(KIMPLIODKPG,0), fVar3 != APPEAGGPNAB))
    {
      if (pcRam000000000191c8c0 == (code *)0x0) {
        pcRam000000000191c8c0 = (code *)func_0x00a678c4(&UNK_005b50fa,0);
      }
      (*pcRam000000000191c8c0)(KIMPLIODKPG,&stack0xffffffffffffffd0);
      return;
    }
  }
  return;
}


// ==== public void HEGIHOAJOKK(bool LIMOELDKJHO = False) { }   @0xb4660c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__HEGIHOAJOKK(void *__this,bool LIMOELDKJHO)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DonateItem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Try_to_Show__);
    func_0x00a67900(&Str_Window__Show__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str____Child__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str___current__);
    bRam0000000001917151 = 1;
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x20) = _Str_Try_to_Show__;
  lVar7 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar8 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar8 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar8, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar8 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = GUIWindow.PADNIFKFMPL;
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar8, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar10 = GUIWindow.DNEPGKHAOBF;
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
  uVar8 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,__this,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  uVar8 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Equality(uVar8,__this,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar8 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar9 & 1) != 0) {
    lVar6 = GUIWindow.DNEPGKHAOBF;
    if (lVar6 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar6,0);
    lVar6 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar8 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if (((uVar9 & 1) != 0) && (!LIMOELDKJHO)) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(GUIWindow.OFEJBBPBBFG,0);
  }
  lVar6 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (this.HBFOLOGFOCH == '\0') {
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = 0;
      Menu.GCDHNMAHOEP = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if (((uVar9 & 1) != 0) && (this.GNNIDAAJHAB != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(Menu.KECGFPHIEHF,lVar6,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar8 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar6,uVar8,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (this.NFKOLENCPBC != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar3 / (float)iVar4;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
            goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
              if ((uVar9 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f51eb85;
                    uVar15 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x70);
                    uVar16 = 0x3f5eb852;
                    uVar15 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x70);
                  uVar16 = 0x3f733333;
                  uVar15 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar14) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar9 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar9 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f51eb85;
                  uVar15 = 0x41a00000;
                }
                else {
                  uVar8 = *(undefined8 *)(lVar6 + 0x60);
                  uVar16 = 0x3f5eb852;
                  uVar15 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0x60);
                uVar15 = 0xc0a00000;
                uVar16 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar15,uVar16,__this,uVar8);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar6,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(__this);
      }
    }
  }
LAB_00c46f70:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (this.NFKOLENCPBC == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(__this);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
          goto LAB_00c485b8;
          uVar9 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar9 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
            goto LAB_00c485b8;
            uVar8 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
              goto LAB_00c485b8;
              uVar8 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
                if ((uVar9 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar9 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(__this,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar9 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            uVar16 = 0x3f59999a;
                            uVar15 = 0x42700000;
                          }
                          else {
                            uVar15 = 0x428c0000;
                            uVar16 = 0;
                          }
                        }
                        else {
                          uVar15 = 0x41a00000;
                          uVar16 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar14) {
                  if (fVar14 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
                    uVar16 = 0x3f733333;
                    uVar15 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xe8);
                uVar15 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar16 = 0x3f6e147b;
                  uVar15 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
                uVar15 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar16 = 0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar15 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
              if (1.8 <= fVar14) {
                uVar16 = 0x3f51eb85;
                uVar15 = 0x42180000;
              }
              else {
                uVar16 = 0x3f733333;
                uVar15 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar15,uVar16,__this,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar6,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = Menu.<statics>;
  if (*(char *)(lVar6 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar6 = Menu.<statics>;
    }
    if (*(char *)(lVar6 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar8 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar6 + 0x6c) != '\0') {
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
              if (lVar6 == 0) goto LAB_00c485b8;
              uVar9 = DAFNMLEKHAD__MHBEPDHNNFH(lVar6,0);
              if ((uVar9 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
                goto LAB_00c485b8;
                uVar8 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
                if ((uVar9 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar8 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar9 = UnityEngine_Object__op_Equality(__this,uVar8,0);
                  if ((uVar9 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar8 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar8 = UnityEngine_Object__Instantiate_object_
                                      (uVar8,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  lVar6 = 8;
  if (!LIMOELDKJHO) {
    lVar6 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(void **)((long)puVar12 + lVar6) = __this;
  if (this.HLFGAHJIOGK != '\0') {
    uVar8 = GUIWindow__FAAELIPKLCB(__this);
    UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar8,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar8 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar8, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar8 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  uVar8 = _Str_null;
  if ((uVar9 & 1) != 0) {
    lVar7 = GUIWindow.PADNIFKFMPL;
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar8 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar8, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar10 = GUIWindow.DNEPGKHAOBF;
  uVar8 = 0;
  if (plVar10 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar8;
  pvVar11 = (void *)System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar11,false);
  uVar9 = Main__KCHOEBEIOCE(0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (Menu.KECGFPHIEHF.ONNBLPAKJHK == 0)) goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
LAB_00c47a5c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) == 0) {
        uVar8 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
        if ((uVar9 & 1) == 0) {
          uVar8 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar6,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar6,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
        goto LAB_00c485b8;
        lVar6 = *(long *)(lVar6 + 0x178);
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
        lVar7 = Main.FBDDKIOEKDM;
        if ((lVar7 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if ((uVar9 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (pvVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar11 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar11);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar9 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x1d0), lVar6 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar6,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      lVar6 = *(long *)(lVar6 + 0x3e0);
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
      lVar7 = Main.FBDDKIOEKDM;
      if ((lVar7 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar9 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar9 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar1 = Menu.NDMIIEOKFGB != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x68), lVar6 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar6,this.ABEAIKDPHKN,0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar6 + 0x78);
    uVar13 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar13,uVar8,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
        uVar8 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar9 & 1) != 0) {
          uVar8 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH(Menu.KECGFPHIEHF,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = Menu.KECGFPHIEHF;
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x4e0), lVar6 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar6,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar15;
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)Menu.KECGFPHIEHF);
      }
    }
    uVar8 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) == 0) {
      uVar8 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar6,0);
      }
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
      pvVar11 = Main.FBDDKIOEKDM;
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar11);
      if (bVar2) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar9 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = SoundScript.FPOJDHNIFPP;
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar9 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (SoundScript.FPOJDHNIFPP,0,0);
            }
          }
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
      lVar6 = Main.FBDDKIOEKDM;
      if (lVar6 == 0) goto LAB_00c485b8;
      lVar6 = DAFNMLEKHAD__DKJLCJPBPPN(lVar6,0xffffffff,1,0);
      if (lVar6 == 0) {
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
        if (lVar6 == 0) goto LAB_00c485b8;
        Main.LCFFGBBHMPH = *(undefined4 *)(lVar6 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC(Menu.KECGFPHIEHF,0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar6,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar6,0);
    }
    uVar8 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar8,uVar13,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar9 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.NMDEEOMHAGP == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar6,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = Menu.KECGFPHIEHF;
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((Menu.KECGFPHIEHF == 0) ||
           (pvVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar11 == (void *)0x0)
           ) goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar11);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    Menu__GDEFDCOIDNM(Menu.KECGFPHIEHF,0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JGDCBENNDFO(bool OIAHOGEKCHK = False) { }   @0xb485bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow__JGDCBENNDFO(void *__this,bool OIAHOGEKCHK)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001917153 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917153 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c488ac;
    uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 == 0))
      goto LAB_00c488ac;
      uVar3 = *(undefined8 *)(lVar2 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 == 0))
        goto LAB_00c488ac;
        uVar3 = *(undefined8 *)(lVar2 + 0x88);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 == 0))
          goto LAB_00c488ac;
          uVar3 = *(undefined8 *)(lVar2 + 0x90);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Equality(__this,uVar3,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c488ac;
            Menu__FPPIKAMLPDC(Menu.KECGFPHIEHF,0);
          }
          goto LAB_00c4876c;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c488ac;
      Menu__AFBPIADEOPC(Menu.KECGFPHIEHF,0);
    }
  }
LAB_00c4876c:
  if (OIAHOGEKCHK) {
    uVar3 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      GUIWindow.DNEPGKHAOBF = 0;
      lVar2 = GUIWindow__FEHHGIGJIKL();
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (lVar2 == 0) goto LAB_00c488ac;
        uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
        if ((uVar1 & 1) != 0) {
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
      }
    }
  }
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar2,0);
    return;
  }
LAB_00c488ac:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private GameObject FEHHGIGJIKL() { }   @0xb488b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIWindow__FEHHGIGJIKL(void *__this)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001917154 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917154 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c48b5c;
      uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0))
        goto LAB_00c48b5c;
        uVar4 = *(undefined8 *)(lVar3 + 0x1b0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar1 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) {
            return *(void **)(lVar3 + 0x1b0);
          }
          goto LAB_00c48b5c;
        }
      }
    }
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  pvVar2 = (void *)0x0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) {
LAB_00c48b5c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    pvVar2 = (void *)0x0;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar3 == 0))
      goto LAB_00c48b5c;
      uVar4 = *(undefined8 *)(lVar3 + 0x98);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      pvVar2 = (void *)0x0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar3 == 0))
        goto LAB_00c48b5c;
        pvVar2 = *(void **)(lVar3 + 0x98);
      }
    }
  }
  return pvVar2;
}


// ==== public IEnumerator FAAELIPKLCB() { }   @0xb48b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GUIWindow__FAAELIPKLCB(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917152 & 1) == 0) {
    func_0x00a67900(&GUIWindow_AIMKOIDBKLH_TypeInfo);
    bRam0000000001917152 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_GUIWindow_AIMKOIDBKLH_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void .ctor() { }   @0xb4943c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIWindow___ctor(void *__this)

{
  this.GJLAJGCPBEF = 0xbf800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



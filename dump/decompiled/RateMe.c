/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class RateMe : MonoBehaviour // TypeDefIndex: 5093
{
	// Fields
	public RectTransform IJGFNCNNONO; // 0x20
	public Image[] JCLKHEGAHHL; // 0x28
	public Text MLDIDMHIKHN; // 0x30
	public Button GEKNEJPNMLM; // 0x38
	public Text EIDJJMCGHFL; // 0x40
	public GameObject OLHPBDEAFJB; // 0x48
	public GameObject AEAGDHJDOAM; // 0x50
	public GameObject EGMAFOMMJEH; // 0x58
	public InputField BKCGDHHKOOP; // 0x60
	public RectTransform PIDMHJGFLAG; // 0x68
	public Text EMFBCIAJKPG; // 0x70
	public GameObject JEDFMBFLAMI; // 0x78
	public RectTransform CFMDNLKCPIC; // 0x80
	private int DPBGGACGEBL; // 0x88
	private Vector3 IHHONMPFDCD; // 0x8C
	private bool LMFPKPOMMPE; // 0x98

	// Methods

	public void MDLHHGNHEOP(string AKEODMCLILB) { }

	public void ButtonRateMeNever() { }

	public void .ctor() { }

	public void EBAIMKLHIPA() { }

	public void ButtonRateMeSelectStars(int stars_count) { }

	public void ACPIOHNDIID() { }

	public void ButtonRateMeLater() { }

	private void LACBJDFDOLF(bool FJDCALHGHCI) { }

	public void KKDHMPMOJCB() { }

	public void ButtonRateMeNow() { }
}
*/

// ==== public void MDLHHGNHEOP(string AKEODMCLILB) { }   @0xaebde8

/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__MDLHHGNHEOP(void *__this,void *AKEODMCLILB)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float in_s1;
  
  if ((bRam0000000001916e99 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e99 = 1;
  }
  uVar1 = System_String__op_Inequality(AKEODMCLILB,_Str_,0);
  if ((this.EMFBCIAJKPG != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject(this.EMFBCIAJKPG,0), lVar2 != 0))
  {
    if ((uVar1 & 1) == 0) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
    }
    else {
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      plVar3 = this.EMFBCIAJKPG;
      if (plVar3 == (long *)0x0) goto LAB_00bebf58;
      (**(code **)(*plVar3 + 0x5a8))(plVar3,AKEODMCLILB,*(undefined8 *)(*plVar3 + 0x5b0));
    }
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (BridgePHP.is_loading_rate_me != '\0') {
      if ((*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) &&
         (func_0x00a67a30(), BridgePHP.is_loading_rate_me == '\0')) {
        return;
      }
      if (this.PIDMHJGFLAG == 0) goto LAB_00bebf58;
      UnityEngine_RectTransform__get_sizeDelta(this.PIDMHJGFLAG,0);
      if (in_s1 <= 300.0) {
        return;
      }
    }
    lVar2 = this.PIDMHJGFLAG;
    System_String__op_Inequality(AKEODMCLILB,_Str_,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_sizeDelta(lVar2,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar2);
      UnityEngine_RectTransform__get_anchorMax(lVar2);
      UnityEngine_RectTransform__get_anchorMin(lVar2);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar2,&stack0xffffffffffffffe8);
      return;
    }
  }
LAB_00bebf58:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRateMeNever() { }   @0xaebf5c

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeNever(void *__this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lStack_68;
  
  if ((bRam0000000001916e9a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916e9a = 1;
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
  if (lVar6 == 0) {
LAB_00bec030:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (Menu.KECGFPHIEHF.ALPCPBBNEBA == 0)) goto LAB_00bec030;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = Menu.KECGFPHIEHF;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e3 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  plVar16 = (long *)(lVar6 + 0x20);
  lVar13 = *plVar16;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x30), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x140), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x138), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x150), lVar13 == 0)) ||
     (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar17 = (float)UnityEngine_Time__get_time(0);
  if (fVar17 - GUIGarage.LOICFFJDFGG <= 1.0) {
    return;
  }
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar14 = *(undefined8 *)(*plVar16 + 0x70);
  uVar15 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Main.NMDEEOMHAGP == 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0xa8), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar13 = *(long *)(*plVar16 + 0x178), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x170), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar16;
    if ((uVar7 & 1) == 0) {
      if (lVar6 != 0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(lVar6,1);
        if (*(long *)(lVar6 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x310),0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar6 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)(lVar6 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(lVar6,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = Main.NMDEEOMHAGP;
        if (lVar13 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar13 = Main.NMDEEOMHAGP;
            if (lVar13 == 0) goto LAB_00c0b6e0;
          }
          uVar14 = System_Int32__ToString(lVar13 + 0x10,0);
          pvVar10 = (void *)System_String__Concat(_Str_Hide_lvl__,uVar14,0);
          Main__GEMDEAMAGPG(pvVar10,false);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar13 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar13 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar13,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main.NMDEEOMHAGP = 0;
          GUIGarage__AGFKGLDJDLE(lVar6);
        }
        *(undefined1 *)(lVar6 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (lVar6 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar8 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar16 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar16,1,0);
joined_r0x00c37634:
    if ((uVar7 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar6 = GUIWindow.OFEJBBPBBFG;
    lVar13 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
    if ((uVar7 & 1) != 0) {
      lVar6 = GUIWindow.DNEPGKHAOBF;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar6,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (lVar6 != 0) {
      uVar14 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar14 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) == 0) {
        pvVar10 = GUIWindow.PADNIFKFMPL;
      }
      else {
        pvVar10 = *(void **)(lVar6 + 0x28);
      }
      if (pvVar10 != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(pvVar10,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar16 == 0) goto LAB_00c37710;
  uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
  uVar15 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
    uVar15 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar16 == 0) goto LAB_00c37710;
    uVar14 = *(undefined8 *)(*plVar16 + 0xd0);
    uVar15 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar16 == 0) ||
         ((lVar6 = *(long *)(*plVar16 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x70), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *plVar16;
        if (lVar6 == 0) goto LAB_00c37710;
LAB_00c37690:
        lVar6 = *(long *)(lVar6 + 0xa8);
        if (lVar6 == 0) goto LAB_00c37710;
        iVar11 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar16 == 0) goto LAB_00c37710;
      uVar14 = *(undefined8 *)(*plVar16 + 0xa8);
      uVar15 = GUIWindow.PADNIFKFMPL;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
      lVar6 = *plVar16;
      if (lVar6 == 0) goto LAB_00c37710;
      if ((uVar7 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar13 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x78) = 1;
    if (lVar13 == 0) goto LAB_00c37710;
    if ((bRam0000000001916f93 & 1) == 0) {
      func_0x00a67900(&CarController_TypeInfo,0);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str__);
      func_0x00a67900(&Str_HP);
      func_0x00a67900(&Str_SECOND);
      func_0x00a67900(&Str____1_);
      bRam0000000001916f93 = 1;
    }
    plVar16 = *(long **)(lVar13 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar14 = System_Int32__ToString(CarController.<statics> + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar14, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)Translate.KECGFPHIEHF == (void *)0x0) goto LAB_00c10f6c;
    pvVar10 = Translate__JJJNIPAKLJF
                        ((void *)Translate.KECGFPHIEHF,_Str_SECOND);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(void **)(lVar6 + 0x30) = pvVar10, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if ((void *)Translate.KECGFPHIEHF == (void *)0x0) goto LAB_00c10f6c;
    pvVar10 = Translate__JJJNIPAKLJF((void *)Translate.KECGFPHIEHF,_Str_HP);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(void **)(lVar6 + 0x40) = pvVar10;
    uVar14 = System_String__Concat(lVar6,0);
    if (plVar16 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar16 + 0x5a8))(plVar16,uVar14,*(undefined8 *)(*plVar16 + 0x5b0));
    lVar6 = *(long *)(lVar13 + 200);
    if (lVar6 == 0) goto LAB_00c10f6c;
    iVar11 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar16 == 0) || (lVar6 = *(long *)(*plVar16 + 0x70), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar16;
    if (lVar6 == 0) goto LAB_00c37710;
    if ((uVar7 & 1) == 0) {
LAB_00c376a0:
      lVar6 = *(long *)(lVar6 + 0x78);
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x70);
    }
    if (lVar6 == 0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar11 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar11,0);
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
  lVar13 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x20) = _Str_Try_to_Show__;
  lVar9 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar9 == 0) goto LAB_00c485b8;
  uVar14 = UnityEngine_Object__get_name(lVar9,0);
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar14, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___current__;
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 4) ||
     (*(undefined8 *)(lVar13 + 0x38) = uVar14, *(uint *)(lVar13 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str___last__;
  uVar14 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar9 = GUIWindow.PADNIFKFMPL;
    if (lVar9 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar9,0);
  }
  uVar5 = *(uint *)(lVar13 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar13 + 0x48) = uVar14, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x50) = _Str____Child__;
  plVar16 = GUIWindow.DNEPGKHAOBF;
  uVar14 = 0;
  if (plVar16 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x58) = uVar14;
  pvVar10 = (void *)System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar10,false);
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,lVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar14 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar14 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar14,lVar6,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar14 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  lVar13 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar13 = GUIWindow.DNEPGKHAOBF;
    if (lVar13 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar13,0);
    lVar13 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar14 = **(undefined8 **)(lVar13 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if (((uVar7 & 1) != 0) && (iVar11 == 0)) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(GUIWindow.OFEJBBPBBFG,0);
  }
  lVar13 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      if (lVar13 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar18 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = 0;
      Menu.GCDHNMAHOEP = uVar18;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)(lVar6 + 0x21) != '\0')) {
        fVar17 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar17) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(Menu.KECGFPHIEHF,lVar13,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar13 == 0) goto LAB_00c485b8;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar13,uVar14,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar14 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar17 = (float)iVar3 / (float)iVar4;
            if (fVar17 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar13 == 0)
               ) goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar13 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                 lVar13 == 0)) goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar13 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar17) {
                  if ((fVar17 <= 1.61) || (1.8 <= fVar17)) {
                    if (fVar17 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar13 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x70);
                    uVar19 = 0x3f51eb85;
                    uVar18 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar13 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x70);
                    uVar19 = 0x3f5eb852;
                    uVar18 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar13 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x70);
                  uVar19 = 0x3f733333;
                  uVar18 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar17) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar13 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar17) {
                  if (*(long *)(lVar13 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar13 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar13 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x60);
                  uVar19 = 0x3f51eb85;
                  uVar18 = 0x41a00000;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar13 + 0x60);
                  uVar19 = 0x3f5eb852;
                  uVar18 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar13 == 0)) goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0x60);
                uVar18 = 0xc0a00000;
                uVar19 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar18,uVar19,lVar6,uVar14);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar13,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar6);
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
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar13,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar17 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar17) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
            goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar13 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
              goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar13 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
                if ((uVar7 & 1) == 0) {
                  lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
                  if (lVar13 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar13,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar13 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar13,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar13 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar13 + 0x2c) == 3) {
                      lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
                      if (lVar13 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar13,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar17) {
                          if (1.8 <= fVar17) {
                            uVar19 = 0x3f59999a;
                            uVar18 = 0x42700000;
                          }
                          else {
                            uVar18 = 0x428c0000;
                            uVar19 = 0;
                          }
                        }
                        else {
                          uVar18 = 0x41a00000;
                          uVar19 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar17) {
                  if (fVar17 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar13 + 0xe8);
                    uVar19 = 0x3f733333;
                    uVar18 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0xe8);
                uVar18 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar17) {
                  if (1.8 <= fVar17) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar13 + 0xb0);
                  uVar19 = 0x3f6e147b;
                  uVar18 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0xb0);
                uVar18 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar19 = 0;
            }
            else {
              if (fVar17 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar13 + 0x188);
                uVar18 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar13 + 0x188);
              if (1.8 <= fVar17) {
                uVar19 = 0x3f51eb85;
                uVar18 = 0x42180000;
              }
              else {
                uVar19 = 0x3f733333;
                uVar18 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar18,uVar19,lVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar13,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = Menu.<statics>;
  if (*(char *)(lVar13 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar13 = Menu.<statics>;
    }
    if (*(char *)(lVar13 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar14 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar13 + 0x6c) != '\0') {
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
              lVar13 = Main.FBDDKIOEKDM;
              if (lVar13 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar13,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar13 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
                  goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar13 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar6,uVar14,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar13 == 0))
                    goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar13 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar14 = UnityEngine_Object__Instantiate_object_
                                       (uVar14,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar13 + 0x90) = uVar14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar13 = UnityEngine_Component__get_gameObject(lVar6,0);
  if (lVar13 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar13,1,0);
  lVar13 = 8;
  if (iVar11 == 0) {
    lVar13 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(long *)((long)puVar12 + lVar13) = lVar6;
  if (*(char *)(lVar6 + 0x23) != '\0') {
    uVar14 = GUIWindow__FAAELIPKLCB(lVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar14,0);
  }
  lVar13 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar13 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar13 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar13 + 0x20) = _Str_Window__Show__;
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar13 + 0x18) < 2) ||
     (*(undefined8 *)(lVar13 + 0x28) = uVar14, *(uint *)(lVar13 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x30) = _Str___last__;
  uVar14 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar9 = GUIWindow.PADNIFKFMPL;
    if (lVar9 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar9,0);
  }
  uVar5 = *(uint *)(lVar13 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar13 + 0x38) = uVar14, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x40) = _Str____Child__;
  plVar16 = GUIWindow.DNEPGKHAOBF;
  uVar14 = 0;
  if (plVar16 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
    uVar5 = *(uint *)(lVar13 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar13 + 0x48) = uVar14;
  pvVar10 = (void *)System_String__Concat(lVar13,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar10,false);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
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
    uVar14 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
      if ((uVar7 & 1) == 0) {
        uVar14 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
        goto LAB_00c485b8;
        uVar15 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
        if ((uVar7 & 1) == 0) {
          uVar14 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
          goto LAB_00c485b8;
          uVar15 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
          if ((uVar7 & 1) != 0) {
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
        lVar13 = Main.FBDDKIOEKDM;
        if ((lVar13 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar13,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (pvVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar10 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar10);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
        (lVar13 = *(long *)(lVar13 + 0x78), lVar13 == 0)) ||
       (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
         ((lVar13 = *(long *)(lVar13 + 0x70), lVar13 == 0 ||
          (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)) goto LAB_00c485b8;
      uVar18 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x1d0), lVar13 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar13,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0))
      goto LAB_00c485b8;
      lVar13 = *(long *)(lVar13 + 0x3e0);
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
      lVar9 = Main.FBDDKIOEKDM;
      if ((lVar9 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar9,0), lVar13 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar13,uVar5 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0 ||
          (lVar13 = *(long *)(lVar13 + 0x1b8), lVar13 == 0)))) goto LAB_00c485b8;
      uVar18 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar18,lVar13,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
       ((lVar13 = *(long *)(lVar13 + 0x60), lVar13 == 0 ||
        (lVar13 = UnityEngine_Component__get_gameObject(lVar13,0), lVar13 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
    if ((uVar7 & 1) == 0) {
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
        (lVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x68), lVar13 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar13,*(undefined1 *)(lVar6 + 0x22),0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar6 + 0x78);
    uVar15 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar15,uVar14,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar14,uVar15,0);
      if ((uVar7 & 1) != 0) {
        uVar14 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar7 & 1) != 0) {
          uVar14 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
          goto LAB_00c485b8;
          uVar15 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
          if ((uVar7 & 1) != 0) {
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
        uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar18;
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)Menu.KECGFPHIEHF);
      }
    }
    uVar14 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar15 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
    if ((uVar7 & 1) == 0) {
      uVar14 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar15 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
      if ((uVar7 & 1) != 0) {
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
      pvVar10 = Main.FBDDKIOEKDM;
      if (pvVar10 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar10);
      if (bVar2) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar14 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = SoundScript.FPOJDHNIFPP;
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar7 & 1) == 0) {
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
    uVar14 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar15 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar14,uVar15,0);
    if ((uVar7 & 1) != 0) {
      uVar14 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar14,0,0);
      if ((uVar7 & 1) != 0) {
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
           (pvVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar10 == (void *)0x0)
           ) goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar10);
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


// ==== public void .ctor() { }   @0xaec0b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916e9b & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_Image___TypeInfo);
    bRam0000000001916e9b = 1;
  }
  uVar1 = func_0x00a679a0(_UnityEngine_UI_Image___TypeInfo,6);
  this.JCLKHEGAHHL = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void EBAIMKLHIPA() { }   @0xaec10c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__EBAIMKLHIPA(void *__this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  
  if ((bRam0000000001916e9c & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916e9c = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (this.JEDFMBFLAMI == 0) goto LAB_00bec2c0;
  cVar2 = BridgePHP.is_loading_rate_me;
  uVar3 = UnityEngine_GameObject__get_activeSelf(this.JEDFMBFLAMI,0);
  if (cVar2 == '\0') {
    if ((uVar3 & 1) != 0) {
      lVar5 = this.JEDFMBFLAMI;
      if (lVar5 == 0) goto LAB_00bec2c0;
      uVar12 = 0;
      goto LAB_00bec250;
    }
  }
  else if ((uVar3 & 1) == 0) {
    lVar5 = this.JEDFMBFLAMI;
    if (lVar5 == 0) goto LAB_00bec2c0;
    uVar12 = 1;
LAB_00bec250:
    UnityEngine_GameObject__SetActive(lVar5,uVar12,0);
  }
  else {
    uVar12 = this.IHHONMPFDCD;
    fVar13 = *(float *)((long)__this + 0x94);
    if (cRam0000000001916e65 == '\0') {
      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
      cRam0000000001916e65 = '\x01';
    }
    uVar7 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x48);
    fVar8 = *(float *)(UnityEngine_Vector3.<statics> + 0x50);
    fVar6 = (float)UnityEngine_Time__get_deltaTime(0);
    lVar5 = this.CFMDNLKCPIC;
    fVar9 = (float)uVar12 + (float)uVar7 * -50.0 * fVar6;
    fVar10 = (float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * -50.0 * fVar6;
    fVar13 = fVar13 + fVar8 * -50.0 * fVar6;
    fVar6 = fVar10 * 0.017453292;
    this.IHHONMPFDCD = CONCAT44(fVar10,fVar9);
    *(float *)((long)__this + 0x94) = fVar13;
    UnityEngine_Quaternion__Internal_FromEulerRad
              (CONCAT44(fVar6,fVar9 * 0.017453292),fVar6,fVar13 * 0.017453292,0);
    if (lVar5 == 0) goto LAB_00bec2c0;
    UnityEngine_Transform__set_rotation(lVar5,0);
  }
  if ((this.BKCGDHHKOOP != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(this.BKCGDHHKOOP,0), lVar5 != 0))
  {
    uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((this.BKCGDHHKOOP != 0) &&
       (lVar5 = *(long *)(this.BKCGDHHKOOP + 0x180), lVar5 != 0)) {
      iVar1 = *(int *)(lVar5 + 0x10);
      if (this.GEKNEJPNMLM != 0) {
        UnityEngine_UI_Selectable__set_interactable(this.GEKNEJPNMLM,2 < iVar1,0);
        plVar4 = this.EIDJJMCGHFL;
        if (plVar4 != (long *)0x0) {
          uVar11 = 0x3f800000;
          if (iVar1 < 3) {
            uVar11 = 0x3f000000;
          }
                    /* WARNING: Could not recover jumptable at 0x00bec320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,uVar11,plVar4,*(undefined8 *)(*plVar4 + 0x2b0)
                    );
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
LAB_00bec2c0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void LACBJDFDOLF(bool FJDCALHGHCI) { }   @0xaec2c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__LACBJDFDOLF(void *__this,bool FJDCALHGHCI)

{
  long *plVar1;
  undefined4 uVar2;
  
  if (this.GEKNEJPNMLM != 0) {
    UnityEngine_UI_Selectable__set_interactable(this.GEKNEJPNMLM,FJDCALHGHCI,0);
    plVar1 = this.EIDJJMCGHFL;
    if (plVar1 != (long *)0x0) {
      uVar2 = 0x3f800000;
      if (!FJDCALHGHCI) {
        uVar2 = 0x3f000000;
      }
                    /* WARNING: Could not recover jumptable at 0x00bec320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,uVar2,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRateMeSelectStars(int stars_count) { }   @0xaec328

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeSelectStars(void *__this,int stars_count)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((bRam0000000001916e9d & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001916e9d = 1;
  }
  this.DPBGGACGEBL = stars_count;
  RateMe__LACBJDFDOLF(__this,1);
  lVar2 = this.JCLKHEGAHHL;
  if (lVar2 != 0) {
    lVar4 = 5;
    do {
      uVar5 = (int)lVar4 - 4;
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar2 = *(long *)(lVar2 + lVar4 * 8);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0)) ||
         (lVar2 == 0)) break;
      lVar1 = 0x2b8;
      if ((int)uVar5 <= stars_count) {
        lVar1 = 0x2b0;
      }
      UnityEngine_UI_Image__set_sprite(lVar2,*(undefined8 *)(lVar3 + lVar1),0);
      lVar2 = this.JCLKHEGAHHL;
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ACPIOHNDIID() { }   @0xaec41c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ACPIOHNDIID(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  void *pvStack_68;
  
  if ((bRam0000000001916e9e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_RATE_ME_NOW);
    func_0x00a67900(&Str_RATE_ME_NEW);
    bRam0000000001916e9e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.FDPCJJJDGNH != '\0') {
    this.LMFPKPOMMPE = 0;
    this.DPBGGACGEBL = 0;
    RateMe__ButtonRateMeSelectStars(__this,0);
    if (this.IJGFNCNNONO != 0) {
      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                (0x44110000,this.IJGFNCNNONO,1,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF != 0) &&
          (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 != 0)) &&
         (lVar10 = *(long *)(lVar10 + 0xb8), lVar10 != 0)) {
        GUIWindow__HEGIHOAJOKK(lVar10,0,0);
        RateMe__LACBJDFDOLF(__this,0);
        if (this.EGMAFOMMJEH != 0) {
          UnityEngine_GameObject__SetActive(this.EGMAFOMMJEH,0,0);
          if (this.OLHPBDEAFJB != 0) {
            UnityEngine_GameObject__SetActive(this.OLHPBDEAFJB,1,0);
            if (this.AEAGDHJDOAM != 0) {
              UnityEngine_GameObject__SetActive(this.AEAGDHJDOAM,1,0);
              if ((this.GEKNEJPNMLM != 0) &&
                 (lVar10 = UnityEngine_Component__get_gameObject(this.GEKNEJPNMLM,0),
                 lVar10 != 0)) {
                UnityEngine_GameObject__SetActive(lVar10,1,0);
                plVar12 = this.EIDJJMCGHFL;
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Translate.KECGFPHIEHF != 0) &&
                   (uVar5 = Translate__JJJNIPAKLJF
                                      (Translate.KECGFPHIEHF,_Str_RATE_ME_NOW,0),
                   plVar12 != (long *)0x0)) {
                  (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                  if (Translate.KECGFPHIEHF != 0) {
                    plVar12 = this.MLDIDMHIKHN;
                    uVar5 = Translate__JJJNIPAKLJF
                                      (Translate.KECGFPHIEHF,_Str_RATE_ME_NEW,0);
                    if (plVar12 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bec60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar12 + 0x5a8))
                                (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x5b0));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00bec650:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF == 0) ||
      (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
     (pvVar6 = *(void **)(lVar10 + 0xc0), pvVar6 == (void *)0x0)) goto LAB_00bec650;
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
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
  lVar10 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar10 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x20) = _Str_Try_to_Show__;
  lVar7 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar7 == 0) goto LAB_00c485b8;
  uVar5 = UnityEngine_Object__get_name(lVar7,0);
  if ((*(uint *)(lVar10 + 0x18) < 2) ||
     (*(undefined8 *)(lVar10 + 0x28) = uVar5, *(uint *)(lVar10 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x30) = _Str___current__;
  uVar5 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar10 + 0x18) < 4) ||
     (*(undefined8 *)(lVar10 + 0x38) = uVar5, *(uint *)(lVar10 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x40) = _Str___last__;
  uVar5 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar7 = GUIWindow.PADNIFKFMPL;
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar10 + 0x18);
  if ((uVar4 < 6) || (*(undefined8 *)(lVar10 + 0x48) = uVar5, uVar4 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x50) = _Str____Child__;
  plVar12 = GUIWindow.DNEPGKHAOBF;
  uVar5 = 0;
  if (plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar10 + 0x18);
  }
  if (uVar4 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x58) = uVar5;
  uVar5 = System_String__Concat(lVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar5 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar5,pvVar6,0);
  if ((uVar8 & 1) != 0) {
    uVar5 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar5 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar5,pvVar6,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar5 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  lVar10 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    lVar10 = GUIWindow.DNEPGKHAOBF;
    if (lVar10 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar10,0);
    lVar10 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar5 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  pvVar9 = (void *)UnityEngine_Object__op_Inequality(uVar5,0,0);
  if (((ulong)pvVar9 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    pvVar9 = (void *)GUIWindow__JGDCBENNDFO(GUIWindow.OFEJBBPBBFG,0);
  }
  pvVar9 = GUIWindow__FEHHGIGJIKL(pvVar9);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(pvVar9,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar15 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = 0;
      Menu.GCDHNMAHOEP = uVar15;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar14 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar14) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(Menu.KECGFPHIEHF,pvVar9,0);
          goto LAB_00c46b74;
        }
      }
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      uVar5 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar9,uVar5,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar5 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar10,0);
          if ((uVar8 & 1) != 0) {
            iVar2 = UnityEngine_Screen__get_width(0);
            iVar3 = UnityEngine_Screen__get_height(0);
            fVar14 = (float)iVar2 / (float)iVar3;
            if (fVar14 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0)
               ) goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar10 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                 lVar10 == 0)) goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar10 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar14) {
                  if ((fVar14 <= 1.61) || (1.8 <= fVar14)) {
                    if (fVar14 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar10 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar10 + 0x70);
                    fVar16 = 0.82;
                    fVar14 = 70.0;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar10 == 0)) goto LAB_00c485b8;
                    pvVar9 = *(void **)(lVar10 + 0x70);
                    fVar16 = 0.87;
                    fVar14 = 66.0;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar10 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar10 + 0x70);
                  fVar16 = 0.95;
                  fVar14 = 55.0;
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
                   (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar10 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar14) {
                  if (*(long *)(lVar10 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar10 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar10 == 0)) goto LAB_00c485b8;
                  pvVar9 = *(void **)(lVar10 + 0x60);
                  fVar16 = 0.82;
                  fVar14 = 20.0;
                }
                else {
                  pvVar9 = *(void **)(lVar10 + 0x60);
                  fVar16 = 0.87;
                  fVar14 = 5.0;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar10 == 0)) goto LAB_00c485b8;
                pvVar9 = *(void **)(lVar10 + 0x60);
                fVar14 = -5.0;
                fVar16 = 0.0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(pvVar6,pvVar9,fVar14,fVar16);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar10,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar6);
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
    uVar5 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar10,0);
          if ((uVar8 & 1) == 0) goto LAB_00c47120;
          iVar2 = UnityEngine_Screen__get_width(0);
          iVar3 = UnityEngine_Screen__get_height(0);
          fVar14 = (float)iVar2 / (float)iVar3;
          if (1.51 < fVar14) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
            goto LAB_00c485b8;
            uVar5 = *(undefined8 *)(lVar10 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
              goto LAB_00c485b8;
              uVar5 = *(undefined8 *)(lVar10 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar10 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
                if ((uVar8 & 1) == 0) {
                  lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar10 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar10,&pvStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  pvVar9 = pvStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(pvVar9,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
                    if (*(int *)((long)pvVar9 + 0x2c) == 3) {
                      lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar10 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar10,&pvStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(pvStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar14) {
                          if (1.8 <= fVar14) {
                            fVar16 = 0.85;
                            fVar14 = 60.0;
                          }
                          else {
                            fVar14 = 70.0;
                            fVar16 = 0.0;
                          }
                        }
                        else {
                          fVar14 = 20.0;
                          fVar16 = 0.0;
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
                       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                    goto LAB_00c485b8;
                    pvStack_68 = *(void **)(lVar10 + 0xe8);
                    fVar16 = 0.95;
                    fVar14 = 70.0;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0xe8);
                fVar14 = 30.0;
              }
              else {
                if (1.61 <= fVar14) {
                  if (1.8 <= fVar14) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                  goto LAB_00c485b8;
                  pvStack_68 = *(void **)(lVar10 + 0xb0);
                  fVar16 = 0.93;
                  fVar14 = 0.0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0xb0);
                fVar14 = -25.0;
              }
LAB_00c4729c:
              fVar16 = 0.0;
            }
            else {
              if (fVar14 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                goto LAB_00c485b8;
                pvStack_68 = *(void **)(lVar10 + 0x188);
                fVar14 = 10.0;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
              goto LAB_00c485b8;
              pvStack_68 = *(void **)(lVar10 + 0x188);
              if (1.8 <= fVar14) {
                fVar16 = 0.82;
                fVar14 = 38.0;
              }
              else {
                fVar16 = 0.95;
                fVar14 = 35.0;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(pvVar6,pvStack_68,fVar14,fVar16);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar10,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = Menu.<statics>;
  if (*(char *)(lVar10 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar10 = Menu.<statics>;
    }
    if (*(char *)(lVar10 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar5 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar10 + 0x6c) != '\0') {
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
              lVar10 = Main.FBDDKIOEKDM;
              if (lVar10 == 0) goto LAB_00c485b8;
              uVar8 = DAFNMLEKHAD__MHBEPDHNNFH(lVar10,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
                goto LAB_00c485b8;
                uVar5 = *(undefined8 *)(lVar10 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
                  goto LAB_00c485b8;
                  uVar5 = *(undefined8 *)(lVar10 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(pvVar6,uVar5,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar10 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar10 == 0))
                    goto LAB_00c485b8;
                    uVar5 = *(undefined8 *)(lVar10 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar5 = UnityEngine_Object__Instantiate_object_
                                      (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar10 + 0x90) = uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar10 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar10,1,0);
  puVar11 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar11[2] = *puVar11;
  *puVar11 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    uVar5 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,uVar5,0);
  }
  lVar10 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar10 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar10 + 0x20) = _Str_Window__Show__;
  uVar5 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar10 + 0x18) < 2) ||
     (*(undefined8 *)(lVar10 + 0x28) = uVar5, *(uint *)(lVar10 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x30) = _Str___last__;
  uVar5 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  uVar5 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar7 = GUIWindow.PADNIFKFMPL;
    if (lVar7 == 0) goto LAB_00c485b8;
    uVar5 = UnityEngine_Object__get_name(lVar7,0);
  }
  uVar4 = *(uint *)(lVar10 + 0x18);
  if ((uVar4 < 4) || (*(undefined8 *)(lVar10 + 0x38) = uVar5, uVar4 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x40) = _Str____Child__;
  plVar12 = GUIWindow.DNEPGKHAOBF;
  uVar5 = 0;
  if (plVar12 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar4 = *(uint *)(lVar10 + 0x18);
  }
  if (uVar4 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar10 + 0x48) = uVar5;
  uVar5 = System_String__Concat(lVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar5,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
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
    uVar5 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
      if ((uVar8 & 1) == 0) {
        uVar5 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0))
        goto LAB_00c485b8;
        uVar13 = *(undefined8 *)(lVar10 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
        if ((uVar8 & 1) == 0) {
          uVar5 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar10 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0)
               ) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar10,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar10,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar10 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar10 == 0))
        goto LAB_00c485b8;
        lVar10 = *(long *)(lVar10 + 0x178);
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
        if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar10 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar10,uVar4 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar10,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
        (lVar10 = *(long *)(lVar10 + 0x78), lVar10 == 0)) ||
       (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
         ((lVar10 = *(long *)(lVar10 + 0x70), lVar10 == 0 ||
          (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0))))
      goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1d0), lVar10 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1b8), lVar10 == 0)) goto LAB_00c485b8;
      uVar15 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x1d0), lVar10 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar10,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
      goto LAB_00c485b8;
      lVar10 = *(long *)(lVar10 + 0x3e0);
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
      if ((lVar7 == 0) || (uVar4 = DAFNMLEKHAD__EFDKHACIIEC(lVar7,0), lVar10 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar10,uVar4 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0 ||
          (lVar10 = *(long *)(lVar10 + 0x1b8), lVar10 == 0)))) goto LAB_00c485b8;
      uVar15 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar15,lVar10,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
       ((lVar10 = *(long *)(lVar10 + 0x60), lVar10 == 0 ||
        (lVar10 = UnityEngine_Component__get_gameObject(lVar10,0), lVar10 == 0))))
    goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar10,0);
    if ((uVar8 & 1) == 0) {
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
        (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0)) ||
       (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar10,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
    goto LAB_00c485b8;
    uVar5 = *(undefined8 *)(lVar10 + 0x78);
    uVar13 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar13,uVar5,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar5,uVar13,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar8 & 1) != 0) {
          uVar5 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
          goto LAB_00c485b8;
          uVar13 = *(undefined8 *)(lVar10 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH((void *)Menu.KECGFPHIEHF);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = Menu.KECGFPHIEHF;
        if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) ||
           (lVar10 = *(long *)(lVar10 + 0x4e0), lVar10 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar10,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar15 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar15;
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
      }
    }
    uVar5 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar10 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
    if ((uVar8 & 1) == 0) {
      uVar5 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
      goto LAB_00c485b8;
      uVar13 = *(undefined8 *)(lVar10 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar10,0);
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
      lVar10 = Main.FBDDKIOEKDM;
      if (lVar10 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar10,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar10 = SoundScript.FPOJDHNIFPP;
            if (lVar10 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar10,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (SoundScript.FPOJDHNIFPP,false);
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
      pvVar6 = Main.FBDDKIOEKDM;
      if (pvVar6 == (void *)0x0) goto LAB_00c485b8;
      pvVar6 = DAFNMLEKHAD__DKJLCJPBPPN(pvVar6,-1,true);
      if (pvVar6 == (void *)0x0) {
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
        lVar10 = Main.FBDDKIOEKDM;
        if (lVar10 == 0) goto LAB_00c485b8;
        Main.LCFFGBBHMPH = *(undefined4 *)(lVar10 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC((void *)Menu.KECGFPHIEHF);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (pvVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(pvVar6);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar10,0);
    }
    uVar5 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar10 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar5,uVar13,0);
    if ((uVar8 & 1) != 0) {
      uVar5 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.NMDEEOMHAGP == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar10,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar10 = Menu.KECGFPHIEHF;
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar10 == 0) || (pvVar6 = *(void **)(lVar10 + 0x20), pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(pvVar6);
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar10,0);
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


// ==== public void ButtonRateMeLater() { }   @0xaec654

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeLater(void *__this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  long lStack_68;
  
  if ((bRam0000000001916e9f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e9f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.FDPCJJJDGNH != '\0') &&
     (this.DPBGGACGEBL != 0)) {
    if (this.EGMAFOMMJEH == 0) goto LAB_00bec868;
    uVar7 = UnityEngine_GameObject__get_activeSelf(this.EGMAFOMMJEH,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF != 0) {
        uVar13 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF == 0) || (this.BKCGDHHKOOP == 0))
             || (lVar8 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar8 == 0))
          goto LAB_00bec868;
          uVar13 = BridgePHP__SendRateMe
                             (lVar8,this.DPBGGACGEBL,
                              *(undefined8 *)(this.BKCGDHHKOOP + 0x180),0);
          UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar13,0);
        }
        if ((bRam0000000001916ea0 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          func_0x00a67900(&Translate_TypeInfo);
          func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
          bRam0000000001916ea0 = 1;
        }
        if (this.LMFPKPOMMPE != '\0') {
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
        lVar8 = Main.FBDDKIOEKDM;
        if (lVar8 != 0) {
          DAFNMLEKHAD__DCLEGMOJBPN(lVar8,0xffffffff);
          if ((this.GEKNEJPNMLM != 0) &&
             (lVar8 = UnityEngine_Component__get_gameObject(this.GEKNEJPNMLM,0),
             lVar8 != 0)) {
            UnityEngine_GameObject__SetActive(lVar8,0,0);
            if (this.EGMAFOMMJEH != 0) {
              UnityEngine_GameObject__SetActive(this.EGMAFOMMJEH,0,0);
              if (this.OLHPBDEAFJB != 0) {
                UnityEngine_GameObject__SetActive(this.OLHPBDEAFJB,1,0);
                plVar14 = this.MLDIDMHIKHN;
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((void *)Translate.KECGFPHIEHF != (void *)0x0) &&
                   (pvVar9 = Translate__JJJNIPAKLJF
                                       ((void *)Translate.KECGFPHIEHF,
                                        _Str_RATE_ME_REWARD_RECEIVED), plVar14 != (long *)0x0)) {
                  (**(code **)(*plVar14 + 0x5a8))(plVar14,pvVar9,*(undefined8 *)(*plVar14 + 0x5b0));
                  if (this.AEAGDHJDOAM != 0) {
                    UnityEngine_GameObject__SetActive(this.AEAGDHJDOAM,0,0);
                    if (this.IJGFNCNNONO != 0) {
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                (0x43a28000,this.IJGFNCNNONO,1,0);
                      if (cRam0000000001916e67 == '\0') {
                        func_0x00a67900(&Main_TypeInfo);
                        cRam0000000001916e67 = '\x01';
                      }
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      pvVar9 = Main.FBDDKIOEKDM;
                      if (pvVar9 != (void *)0x0) {
                        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                          (&stack0xffffffffffffffb0,0);
                        DAFNMLEKHAD__DIMKKHJDHFJ(pvVar9,iVar3 + 0x14);
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        SoundScript__GIGBLEBBIEK
                                  (SoundScript.CIMAPDEBGGG);
                        this.LMFPKPOMMPE = 1;
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((Menu.KECGFPHIEHF != 0) &&
                           (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
                          AnalyticsController__BHBKBILKNBE();
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      goto LAB_00bec868;
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
  lVar8 = Main.FBDDKIOEKDM;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if (Menu.FDPCJJJDGNH == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = -(this.LMFPKPOMMPE & 1);
  }
  if (lVar8 == 0) {
LAB_00bec868:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  DAFNMLEKHAD__DCLEGMOJBPN(lVar8,iVar3);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (Menu.KECGFPHIEHF.ALPCPBBNEBA == 0)) goto LAB_00bec868;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = Menu.KECGFPHIEHF;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e3 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  plVar14 = (long *)(lVar8 + 0x20);
  lVar15 = *plVar14;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x30), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x140), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x138), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x150), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  fVar17 = (float)UnityEngine_Time__get_time(0);
  if (fVar17 - GUIGarage.LOICFFJDFGG <= 1.0) {
    return;
  }
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar14 + 0x70);
  uVar16 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Main.NMDEEOMHAGP == 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0xa8), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x178), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x170), lVar8 == 0)) ||
       (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    lVar8 = *plVar14;
    if ((uVar7 & 1) == 0) {
      if (lVar8 != 0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(lVar8,1);
        if (*(long *)(lVar8 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar8 + 0x310),0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar8 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)(lVar8 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(lVar8,0);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar15 = Main.NMDEEOMHAGP;
        if (lVar15 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar15 = Main.NMDEEOMHAGP;
            if (lVar15 == 0) goto LAB_00c0b6e0;
          }
          uVar13 = System_Int32__ToString(lVar15 + 0x10,0);
          pvVar9 = (void *)System_String__Concat(_Str_Hide_lvl__,uVar13,0);
          Main__GEMDEAMAGPG(pvVar9,false);
          uVar7 = Main__KCHOEBEIOCE(0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar15 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar15 == 0))
            goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(lVar15,0);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main.NMDEEOMHAGP = 0;
          GUIGarage__AGFKGLDJDLE(lVar8);
        }
        *(undefined1 *)(lVar8 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (lVar8 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(lVar8 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar10 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x48), lVar8 == 0)) ||
       (lVar8 = *(long *)(lVar8 + 0xb8), lVar8 == 0)) goto LAB_00c37710;
    uVar10 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    if ((uVar10 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if (*plVar14 == 0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel(*plVar14,1,0);
joined_r0x00c37634:
    if ((uVar7 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar8 = GUIWindow.OFEJBBPBBFG;
    lVar15 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = GUIWindow.DNEPGKHAOBF;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (lVar8 != 0) {
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
      }
      uVar13 = *(undefined8 *)(lVar8 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) == 0) {
        pvVar9 = GUIWindow.PADNIFKFMPL;
      }
      else {
        pvVar9 = *(void **)(lVar8 + 0x28);
      }
      if (pvVar9 != (void *)0x0) {
        GUIWindow__HEGIHOAJOKK(pvVar9,false);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
  uVar16 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
    uVar16 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if ((uVar7 & 1) != 0) goto LAB_00c37480;
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar13 = *(undefined8 *)(*plVar14 + 0xd0);
    uVar16 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if (((uVar7 & 1) == 0) || (*(char *)(lVar8 + 0x78) != '\0')) {
      if ((*plVar14 == 0) ||
         ((lVar8 = *(long *)(*plVar14 + 0xa0), lVar8 == 0 ||
          (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)))) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x70), lVar8 == 0)) ||
         (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = *plVar14;
        if (lVar8 == 0) goto LAB_00c37710;
LAB_00c37690:
        lVar8 = *(long *)(lVar8 + 0xa8);
        if (lVar8 == 0) goto LAB_00c37710;
        iVar3 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar14 == 0) goto LAB_00c37710;
      uVar13 = *(undefined8 *)(*plVar14 + 0xa8);
      uVar16 = GUIWindow.PADNIFKFMPL;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
      lVar8 = *plVar14;
      if (lVar8 == 0) goto LAB_00c37710;
      if ((uVar7 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar15 = *(long *)(lVar8 + 0x20);
    *(undefined1 *)(lVar8 + 0x78) = 1;
    if (lVar15 == 0) goto LAB_00c37710;
    if ((bRam0000000001916f93 & 1) == 0) {
      func_0x00a67900(&CarController_TypeInfo,0);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str__);
      func_0x00a67900(&Str_HP);
      func_0x00a67900(&Str_SECOND);
      func_0x00a67900(&Str____1_);
      bRam0000000001916f93 = 1;
    }
    plVar14 = *(long **)(lVar15 + 0x4e8);
    lVar8 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar13 = System_Int32__ToString(CarController.<statics> + 0xc,0);
    if (lVar8 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar8 + 0x18) == 0) ||
       (*(undefined8 *)(lVar8 + 0x20) = uVar13, *(int *)(lVar8 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar8 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)Translate.KECGFPHIEHF == (void *)0x0) goto LAB_00c10f6c;
    pvVar9 = Translate__JJJNIPAKLJF
                       ((void *)Translate.KECGFPHIEHF,_Str_SECOND);
    if ((*(uint *)(lVar8 + 0x18) < 3) ||
       (*(void **)(lVar8 + 0x30) = pvVar9, *(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar8 + 0x38) = _Str____1_;
    if ((void *)Translate.KECGFPHIEHF == (void *)0x0) goto LAB_00c10f6c;
    pvVar9 = Translate__JJJNIPAKLJF((void *)Translate.KECGFPHIEHF,_Str_HP);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_00c10f68;
    *(void **)(lVar8 + 0x40) = pvVar9;
    uVar13 = System_String__Concat(lVar8,0);
    if (plVar14 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x5b0));
    lVar8 = *(long *)(lVar15 + 200);
    if (lVar8 == 0) goto LAB_00c10f6c;
    iVar3 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar14 == 0) || (lVar8 = *(long *)(*plVar14 + 0x70), lVar8 == 0)) ||
       (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0)) goto LAB_00c37710;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_00c37710;
    if ((uVar7 & 1) == 0) {
LAB_00c376a0:
      lVar8 = *(long *)(lVar8 + 0x78);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x70);
    }
    if (lVar8 == 0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar3 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar3,0);
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
  lVar15 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x20) = _Str_Try_to_Show__;
  lVar11 = UnityEngine_Component__get_gameObject(lVar8,0);
  if (lVar11 == 0) goto LAB_00c485b8;
  uVar13 = UnityEngine_Object__get_name(lVar11,0);
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar13, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___current__;
  uVar13 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar15 + 0x18) < 4) ||
     (*(undefined8 *)(lVar15 + 0x38) = uVar13, *(uint *)(lVar15 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str___last__;
  uVar13 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar11 = GUIWindow.PADNIFKFMPL;
    if (lVar11 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar11,0);
  }
  uVar6 = *(uint *)(lVar15 + 0x18);
  if ((uVar6 < 6) || (*(undefined8 *)(lVar15 + 0x48) = uVar13, uVar6 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x50) = _Str____Child__;
  plVar14 = GUIWindow.DNEPGKHAOBF;
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar6 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar6 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x58) = uVar13;
  pvVar9 = (void *)System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar9,false);
  uVar13 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar13,lVar8,0);
  if ((uVar7 & 1) != 0) {
    uVar13 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar13 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar13,lVar8,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  uVar13 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  lVar15 = _GUIWindow_TypeInfo;
  if ((uVar7 & 1) != 0) {
    lVar15 = GUIWindow.DNEPGKHAOBF;
    if (lVar15 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar15,0);
    lVar15 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar13 = **(undefined8 **)(lVar15 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if (((uVar7 & 1) != 0) && (iVar3 == 0)) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(GUIWindow.OFEJBBPBBFG,0);
  }
  lVar15 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x20) == '\0') {
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
      if ((uVar7 & 1) == 0) goto LAB_00c46b74;
      uVar18 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = 0;
      Menu.GCDHNMAHOEP = uVar18;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if (((uVar7 & 1) != 0) && (*(char *)(lVar8 + 0x21) != '\0')) {
        fVar17 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar17) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(Menu.KECGFPHIEHF,lVar15,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar15 == 0) goto LAB_00c485b8;
      uVar13 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar15,uVar13,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar8 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar15,0);
          if ((uVar7 & 1) != 0) {
            iVar4 = UnityEngine_Screen__get_width(0);
            iVar5 = UnityEngine_Screen__get_height(0);
            fVar17 = (float)iVar4 / (float)iVar5;
            if (fVar17 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar15 == 0)
               ) goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar15 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                 lVar15 == 0)) goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar15 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
              if ((uVar7 & 1) != 0) {
                if (1.61 <= fVar17) {
                  if ((fVar17 <= 1.61) || (1.8 <= fVar17)) {
                    if (fVar17 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x70);
                    uVar18 = 0x3f51eb85;
                    uVar16 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar15 == 0)) goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x70);
                    uVar18 = 0x3f5eb852;
                    uVar16 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x70);
                  uVar18 = 0x3f733333;
                  uVar16 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar17) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar15 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar17) {
                  if (*(long *)(lVar15 + 0x240) == 0) goto LAB_00c485b8;
                  uVar7 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar15 + 0x240),0);
                  if ((uVar7 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar15 == 0)) goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x60);
                  uVar18 = 0x3f51eb85;
                  uVar16 = 0x41a00000;
                }
                else {
                  uVar13 = *(undefined8 *)(lVar15 + 0x60);
                  uVar18 = 0x3f5eb852;
                  uVar16 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar15 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar15 == 0)) goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0x60);
                uVar16 = 0xc0a00000;
                uVar18 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar16,uVar18,lVar8,uVar13);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar15,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(lVar8);
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
    uVar13 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar8 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(lVar8);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
          goto LAB_00c485b8;
          uVar7 = AdvController__EDNAEPDDBPJ(lVar15,0);
          if ((uVar7 & 1) == 0) goto LAB_00c47120;
          iVar4 = UnityEngine_Screen__get_width(0);
          iVar5 = UnityEngine_Screen__get_height(0);
          fVar17 = (float)iVar4 / (float)iVar5;
          if (1.51 < fVar17) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
            goto LAB_00c485b8;
            uVar13 = *(undefined8 *)(lVar15 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
              goto LAB_00c485b8;
              uVar13 = *(undefined8 *)(lVar15 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
                if ((uVar7 & 1) == 0) {
                  lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
                  if (lVar15 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar15,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar15 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Inequality(lVar15,0,0);
                  if ((uVar7 & 1) != 0) {
                    if (lVar15 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar15 + 0x2c) == 3) {
                      lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
                      if (lVar15 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar15,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar7 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar7 & 1) != 0) {
                        if (1.61 <= fVar17) {
                          if (1.8 <= fVar17) {
                            uVar18 = 0x3f59999a;
                            uVar13 = 0x42700000;
                          }
                          else {
                            uVar13 = 0x428c0000;
                            uVar18 = 0;
                          }
                        }
                        else {
                          uVar13 = 0x41a00000;
                          uVar18 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar17) {
                  if (fVar17 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar15 + 0xe8);
                    uVar18 = 0x3f733333;
                    uVar13 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0xe8);
                uVar13 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar17) {
                  if (1.8 <= fVar17) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar15 + 0xb0);
                  uVar18 = 0x3f6e147b;
                  uVar13 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0xb0);
                uVar13 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar18 = 0;
            }
            else {
              if (fVar17 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar15 + 0x188);
                uVar13 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar15 + 0x188);
              if (1.8 <= fVar17) {
                uVar18 = 0x3f51eb85;
                uVar13 = 0x42180000;
              }
              else {
                uVar18 = 0x3f733333;
                uVar13 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar13,uVar18,lVar8,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar15,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar15 = Menu.<statics>;
  if (*(char *)(lVar15 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar15 = Menu.<statics>;
    }
    if (*(char *)(lVar15 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar13 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar13 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar15 + 0x6c) != '\0') {
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
              lVar15 = Main.FBDDKIOEKDM;
              if (lVar15 == 0) goto LAB_00c485b8;
              uVar7 = DAFNMLEKHAD__MHBEPDHNNFH(lVar15,0);
              if ((uVar7 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
                goto LAB_00c485b8;
                uVar13 = *(undefined8 *)(lVar15 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
                  goto LAB_00c485b8;
                  uVar13 = *(undefined8 *)(lVar15 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar7 = UnityEngine_Object__op_Equality(lVar8,uVar13,0);
                  if ((uVar7 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar15 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar15 == 0))
                    goto LAB_00c485b8;
                    uVar13 = *(undefined8 *)(lVar15 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__Instantiate_object_
                                       (uVar13,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar15 + 0x90) = uVar13;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar15 = UnityEngine_Component__get_gameObject(lVar8,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar15,1,0);
  lVar15 = 8;
  if (iVar3 == 0) {
    lVar15 = 0;
  }
  puVar12 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar12[2] = *puVar12;
  *(long *)((long)puVar12 + lVar15) = lVar8;
  if (*(char *)(lVar8 + 0x23) != '\0') {
    uVar13 = GUIWindow__FAAELIPKLCB(lVar8);
    UnityEngine_MonoBehaviour__StartCoroutine(lVar8,uVar13,0);
  }
  lVar15 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar15 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar15 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar15 + 0x20) = _Str_Window__Show__;
  uVar13 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar15 + 0x18) < 2) ||
     (*(undefined8 *)(lVar15 + 0x28) = uVar13, *(uint *)(lVar15 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x30) = _Str___last__;
  uVar13 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  uVar13 = _Str_null;
  if ((uVar7 & 1) != 0) {
    lVar11 = GUIWindow.PADNIFKFMPL;
    if (lVar11 == 0) goto LAB_00c485b8;
    uVar13 = UnityEngine_Object__get_name(lVar11,0);
  }
  uVar6 = *(uint *)(lVar15 + 0x18);
  if ((uVar6 < 4) || (*(undefined8 *)(lVar15 + 0x38) = uVar13, uVar6 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x40) = _Str____Child__;
  plVar14 = GUIWindow.DNEPGKHAOBF;
  uVar13 = 0;
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar6 = *(uint *)(lVar15 + 0x18);
  }
  if (uVar6 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar15 + 0x48) = uVar13;
  pvVar9 = (void *)System_String__Concat(lVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(pvVar9,false);
  uVar7 = Main__KCHOEBEIOCE(0);
  if ((uVar7 & 1) != 0) {
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
    uVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
      if ((uVar7 & 1) == 0) {
        uVar13 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
        goto LAB_00c485b8;
        uVar16 = *(undefined8 *)(lVar8 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
        if ((uVar7 & 1) == 0) {
          uVar13 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
          goto LAB_00c485b8;
          uVar16 = *(undefined8 *)(lVar8 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
            goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(lVar8,0);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar8,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar8 == 0))
        goto LAB_00c485b8;
        lVar8 = *(long *)(lVar8 + 0x178);
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
        lVar15 = Main.FBDDKIOEKDM;
        if ((lVar15 == 0) || (uVar6 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar8 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar8,uVar6 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar13 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (pvVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar9 == (void *)0x0))
    goto LAB_00c485b8;
    bVar1 = GUIGarage__ABAHNKCPCFA(pvVar9);
    if (bVar1) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
        (lVar15 = *(long *)(lVar15 + 0x78), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
         ((lVar15 = *(long *)(lVar15 + 0x70), lVar15 == 0 ||
          (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
      goto LAB_00c485b8;
      uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
      if ((uVar7 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1d0), lVar15 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1b8), lVar15 == 0)) goto LAB_00c485b8;
      uVar18 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
         (lVar15 = *(long *)(lVar15 + 0x1d0), lVar15 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(lVar15,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0))
      goto LAB_00c485b8;
      lVar15 = *(long *)(lVar15 + 0x3e0);
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
      if ((lVar11 == 0) || (uVar6 = DAFNMLEKHAD__EFDKHACIIEC(lVar11,0), lVar15 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar15,uVar6 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0 ||
          (lVar15 = *(long *)(lVar15 + 0x1b8), lVar15 == 0)))) goto LAB_00c485b8;
      uVar18 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar18,lVar15,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
       ((lVar15 = *(long *)(lVar15 + 0x60), lVar15 == 0 ||
        (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0))))
    goto LAB_00c485b8;
    uVar7 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar7 & 1) == 0) {
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
        (lVar15 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar15 == 0)) ||
       (lVar15 = *(long *)(lVar15 + 0x68), lVar15 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar15,*(undefined1 *)(lVar8 + 0x22),0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
    goto LAB_00c485b8;
    uVar13 = *(undefined8 *)(lVar8 + 0x78);
    uVar16 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar16,uVar13,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar13,uVar16,0);
      if ((uVar7 & 1) != 0) {
        uVar13 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar7 & 1) != 0) {
          uVar13 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
          goto LAB_00c485b8;
          uVar16 = *(undefined8 *)(lVar8 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
          if ((uVar7 & 1) != 0) {
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
        lVar8 = Menu.KECGFPHIEHF;
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
           (lVar8 = *(long *)(lVar8 + 0x4e0), lVar8 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar8,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar18;
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL((void *)Menu.KECGFPHIEHF);
      }
    }
    uVar13 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
    goto LAB_00c485b8;
    uVar16 = *(undefined8 *)(lVar8 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
      goto LAB_00c485b8;
      uVar16 = *(undefined8 *)(lVar8 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(lVar8,0);
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
      pvVar9 = Main.FBDDKIOEKDM;
      if (pvVar9 == (void *)0x0) goto LAB_00c485b8;
      bVar2 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar9);
      if (bVar2) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar13 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar8 = SoundScript.FPOJDHNIFPP;
            if (lVar8 == 0) goto LAB_00c485b8;
            uVar7 = UnityEngine_AudioSource__get_isPlaying(lVar8,0);
            if ((uVar7 & 1) == 0) {
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
      lVar8 = Main.FBDDKIOEKDM;
      if (lVar8 == 0) goto LAB_00c485b8;
      lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0);
      if (lVar8 == 0) {
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
        if (lVar8 == 0) goto LAB_00c485b8;
        Main.LCFFGBBHMPH = *(undefined4 *)(lVar8 + 0x104);
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
         (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar8,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(lVar8,0);
    }
    uVar13 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
    goto LAB_00c485b8;
    uVar16 = *(undefined8 *)(lVar8 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Equality(uVar13,uVar16,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.NMDEEOMHAGP == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar8,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = Menu.KECGFPHIEHF;
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar8,0);
        if ((Menu.KECGFPHIEHF == 0) ||
           (pvVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar9 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(pvVar9);
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


// ==== public void KKDHMPMOJCB() { }   @0xaec86c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__KKDHMPMOJCB(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000001916ea0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
    bRam0000000001916ea0 = 1;
  }
  if (this.LMFPKPOMMPE != '\0') {
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
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 != 0) {
    DAFNMLEKHAD__DCLEGMOJBPN(lVar2,0xffffffff);
    if ((this.GEKNEJPNMLM != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject(this.GEKNEJPNMLM,0), lVar2 != 0)
       ) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      if (this.EGMAFOMMJEH != 0) {
        UnityEngine_GameObject__SetActive(this.EGMAFOMMJEH,0,0);
        if (this.OLHPBDEAFJB != 0) {
          UnityEngine_GameObject__SetActive(this.OLHPBDEAFJB,1,0);
          plVar4 = this.MLDIDMHIKHN;
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Translate.KECGFPHIEHF != 0) &&
             (uVar3 = Translate__JJJNIPAKLJF
                                (Translate.KECGFPHIEHF,
                                 _Str_RATE_ME_REWARD_RECEIVED,0), plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
            if (this.AEAGDHJDOAM != 0) {
              UnityEngine_GameObject__SetActive(this.AEAGDHJDOAM,0,0);
              if (this.IJGFNCNNONO != 0) {
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                          (0x43a28000,this.IJGFNCNNONO,1,0);
                if (cRam0000000001916e67 == '\0') {
                  func_0x00a67900(&Main_TypeInfo);
                  cRam0000000001916e67 = '\x01';
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar2 = Main.FBDDKIOEKDM;
                if (lVar2 != 0) {
                  uStack_40 = *(undefined4 *)(lVar2 + 0x4c);
                  uStack_48 = *(undefined8 *)(lVar2 + 0x44);
                  uStack_50 = *(undefined8 *)(lVar2 + 0x3c);
                  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_50,0);
                  DAFNMLEKHAD__DIMKKHJDHFJ(lVar2,iVar1 + 0x14);
                  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  SoundScript__GIGBLEBBIEK
                            (SoundScript.CIMAPDEBGGG,0);
                  this.LMFPKPOMMPE = 1;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF != 0) &&
                     (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
                    AnalyticsController__BHBKBILKNBE();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonRateMeNow() { }   @0xaece2c

/* WARNING: Removing unreachable block (ram,0x00c0b570) */
/* WARNING: Removing unreachable block (ram,0x00c0b578) */
/* WARNING: Removing unreachable block (ram,0x00c0b5a0) */
/* WARNING: Removing unreachable block (ram,0x00c0b5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RateMe__ButtonRateMeNow(void *__this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  long lStack_68;
  
  if ((bRam0000000001916ea1 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_SEND);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_market___details_id_);
    bRam0000000001916ea1 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Application__get_identifier(0);
  uVar7 = System_String__Concat(_Str_market___details_id_,uVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if (Menu.FDPCJJJDGNH != '\0') {
    if (this.DPBGGACGEBL == 5) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
        AnalyticsController__BHBKBILKNBE();
        if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Application__OpenURL(uVar7,0);
        if ((bRam0000000001916ea0 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&SoundScript_TypeInfo);
          func_0x00a67900(&Translate_TypeInfo);
          func_0x00a67900(&Str_RATE_ME_REWARD_RECEIVED);
          bRam0000000001916ea0 = 1;
        }
        if (this.LMFPKPOMMPE == '\0') {
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
          if (lVar6 != 0) {
            DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
            if ((this.GEKNEJPNMLM != 0) &&
               (lVar6 = UnityEngine_Component__get_gameObject(this.GEKNEJPNMLM,0),
               lVar6 != 0)) {
              UnityEngine_GameObject__SetActive(lVar6,0,0);
              if (this.EGMAFOMMJEH != 0) {
                UnityEngine_GameObject__SetActive(this.EGMAFOMMJEH,0,0);
                if (this.OLHPBDEAFJB != 0) {
                  UnityEngine_GameObject__SetActive(this.OLHPBDEAFJB,1,0);
                  plVar14 = this.MLDIDMHIKHN;
                  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Translate.KECGFPHIEHF != 0) &&
                     (uVar7 = Translate__JJJNIPAKLJF
                                        (Translate.KECGFPHIEHF,
                                         _Str_RATE_ME_REWARD_RECEIVED,0), plVar14 != (long *)0x0)) {
                    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0))
                    ;
                    if (this.AEAGDHJDOAM != 0) {
                      UnityEngine_GameObject__SetActive(this.AEAGDHJDOAM,0,0);
                      if (this.IJGFNCNNONO != 0) {
                        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                  (0x43a28000,this.IJGFNCNNONO,1,0);
                        if (cRam0000000001916e67 == '\0') {
                          func_0x00a67900(&Main_TypeInfo);
                          cRam0000000001916e67 = '\x01';
                        }
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        lVar6 = Main.FBDDKIOEKDM;
                        if (lVar6 != 0) {
                          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit
                                            (&stack0xffffffffffffffb0,0);
                          DAFNMLEKHAD__DIMKKHJDHFJ(lVar6,iVar2 + 0x14);
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          SoundScript__GIGBLEBBIEK
                                    (SoundScript.CIMAPDEBGGG
                                     ,0);
                          this.LMFPKPOMMPE = 1;
                          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          if ((Menu.KECGFPHIEHF != 0) &&
                             (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
                            AnalyticsController__BHBKBILKNBE();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        return;
      }
    }
    else if (this.OLHPBDEAFJB != 0) {
      uVar8 = UnityEngine_GameObject__get_activeSelf(this.OLHPBDEAFJB,0);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF != 0) {
          uVar7 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF != 0) && (this.BKCGDHHKOOP != 0))
             && (lVar6 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar6 != 0)) {
            lVar6 = BridgePHP__SendRateMe
                              (lVar6,this.DPBGGACGEBL,
                               *(undefined8 *)(this.BKCGDHHKOOP + 0x180),0);
            if (lVar6 == 0) {
              func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
              uVar12 = func_0x00a67b44();
              uVar7 = func_0x00a67914(&Str_routine_is_null);
              System_NullReferenceException___ctor(uVar12,uVar7,0);
            }
            else {
              if (pcRam000000000191c478 == (code *)0x0) {
                pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
              }
              uVar8 = (*pcRam000000000191c478)(__this);
              if ((uVar8 & 1) != 0) {
                if (pcRam000000000191c488 == (code *)0x0) {
                  pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191c488)(__this,lVar6);
                return;
              }
              func_0x00a67914(&System_ArgumentException_TypeInfo);
              uVar12 = func_0x00a67b44();
              uVar7 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
              System_ArgumentException___ctor(uVar12,uVar7,0);
            }
            uVar7 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
            auVar18 = func_0x00a67a20(uVar12,uVar7);
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(auVar18._0_8_,auVar18._8_8_);
            return;
          }
        }
      }
      else {
        RateMe__MDLHHGNHEOP(__this,_Str_);
        if (this.BKCGDHHKOOP != 0) {
          UnityEngine_UI_Selectable__set_interactable(this.BKCGDHHKOOP,1,0);
          if (this.BKCGDHHKOOP != 0) {
            UnityEngine_UI_InputField__set_text(this.BKCGDHHKOOP,_Str_,0);
            if (this.EGMAFOMMJEH != 0) {
              UnityEngine_GameObject__SetActive(this.EGMAFOMMJEH,1,0);
              if (this.OLHPBDEAFJB != 0) {
                UnityEngine_GameObject__SetActive(this.OLHPBDEAFJB,0,0);
                plVar14 = this.EIDJJMCGHFL;
                if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Translate.KECGFPHIEHF != 0) &&
                   (uVar7 = Translate__JJJNIPAKLJF
                                      (Translate.KECGFPHIEHF,_Str_SEND,0),
                   plVar14 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00bed134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0));
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_00bed1f4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (Menu.KECGFPHIEHF.OJJAEEGGHJM == 0)) goto LAB_00bed1f4;
  AnalyticsController__BHBKBILKNBE();
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Application__OpenURL(uVar7,0);
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
  if (lVar6 == 0) goto LAB_00bed1f4;
  DAFNMLEKHAD__DCLEGMOJBPN(lVar6,0xffffffff);
  if ((Menu.KECGFPHIEHF == 0) ||
     (Menu.KECGFPHIEHF.ALPCPBBNEBA == 0)) goto LAB_00bed1f4;
  if ((bRam0000000001916f61 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo,0);
    bRam0000000001916f61 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = Menu.KECGFPHIEHF;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam00000000019170e3 & 1) == 0) {
    func_0x00a67900(&GUIGarage_TypeInfo,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170e3 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  plVar14 = (long *)(lVar6 + 0x20);
  lVar15 = *plVar14;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(lVar15,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x30), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x140), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x138), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x150), lVar15 == 0)) ||
     (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
  uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  fVar16 = (float)UnityEngine_Time__get_time(0);
  if (fVar16 - GUIGarage.LOICFFJDFGG <= 1.0) {
    return;
  }
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar7 = *(undefined8 *)(*plVar14 + 0x70);
  uVar12 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Main.NMDEEOMHAGP == 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0xa8), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar15 = *(long *)(*plVar14 + 0x178), lVar15 == 0)) ||
       (lVar15 = UnityEngine_Component__get_gameObject(lVar15,0), lVar15 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar15,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37408;
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x170), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    pvVar9 = (void *)*plVar14;
    if ((uVar8 & 1) == 0) {
      if (pvVar9 != (void *)0x0) {
        if ((bRam0000000001916f6d & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo,1,0);
          func_0x00a67900(&Menu_TypeInfo);
          func_0x00a67900(&Str_Hide_lvl__);
          bRam0000000001916f6d = 1;
        }
        GUIGarage__PIHABGKNPDI(pvVar9,1);
        if (*(long *)((long)pvVar9 + 0x310) == 0) {
LAB_00c0b6e0:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)pvVar9 + 0x310),0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)((long)pvVar9 + 0x310) == 0) goto LAB_00c0b6e0;
          UnityEngine_GameObject__SetActive(*(long *)((long)pvVar9 + 0x310),0,0);
          GUIGarage__ADMNOIMMGGA(pvVar9,false);
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = Main.NMDEEOMHAGP;
        if (lVar6 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar6 = Main.NMDEEOMHAGP;
            if (lVar6 == 0) goto LAB_00c0b6e0;
          }
          uVar7 = System_Int32__ToString(lVar6 + 0x10,0);
          uVar7 = System_String__Concat(_Str_Hide_lvl__,uVar7,0);
          Main__GEMDEAMAGPG(uVar7,0,0);
          uVar8 = Main__KCHOEBEIOCE(0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (pvVar11 = Menu.KECGFPHIEHF.ONNBLPAKJHK,
               pvVar11 == (void *)0x0)) goto LAB_00c0b6e0;
            GamePadController__KCAHLEAKNNK(pvVar11);
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main.NMDEEOMHAGP = 0;
          GUIGarage__AGFKGLDJDLE(pvVar9);
        }
        *(undefined1 *)((long)pvVar9 + 0x250) = 0;
        return;
      }
      goto LAB_00c37710;
    }
    if (pvVar9 == (void *)0x0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)((long)pvVar9 + 0x48);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar10 & 1) == 0) goto Menu__CEFAHBMMKCD;
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x48), lVar6 == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0xb8), lVar6 == 0)) goto LAB_00c37710;
    uVar10 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar10 & 1) != 0) goto Menu__CEFAHBMMKCD;
    if ((void *)*plVar14 == (void *)0x0) goto LAB_00c37710;
    GUIGarage__ButtonMapHidePanel((void *)*plVar14,true);
joined_r0x00c37634:
    if ((uVar8 & 1) == 0) {
      return;
    }
Menu__CEFAHBMMKCD:
    if ((bRam00000000019170e1 & 1) == 0) {
      func_0x00a67900(&GUIWindow_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam00000000019170e1 = 1;
    }
    lVar6 = GUIWindow.OFEJBBPBBFG;
    lVar15 = (*(long **)(_GUIWindow_TypeInfo + 0xb8))[1];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(lVar15,0,0);
    if ((uVar8 & 1) != 0) {
      lVar6 = GUIWindow.DNEPGKHAOBF;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(lVar6,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) == 0) {
        lVar6 = GUIWindow.PADNIFKFMPL;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x28);
      }
      if (lVar6 != 0) {
        GUIWindow__HEGIHOAJOKK(lVar6,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
LAB_00c37408:
  if (*plVar14 == 0) goto LAB_00c37710;
  uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
  uVar12 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
  if ((uVar8 & 1) == 0) {
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
    uVar12 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) goto LAB_00c37480;
    if (*plVar14 == 0) goto LAB_00c37710;
    uVar7 = *(undefined8 *)(*plVar14 + 0xd0);
    uVar12 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if (((uVar8 & 1) == 0) || (*(char *)(lVar6 + 0x78) != '\0')) {
      if ((*plVar14 == 0) ||
         ((lVar6 = *(long *)(*plVar14 + 0xa0), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c37710;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        goto joined_r0x00c37634;
      }
      if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x70), lVar6 == 0)) ||
         (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) != 0) {
        lVar6 = *plVar14;
        if (lVar6 == 0) goto LAB_00c37710;
LAB_00c37690:
        pvVar9 = *(void **)(lVar6 + 0xa8);
        if (pvVar9 == (void *)0x0) goto LAB_00c37710;
        iVar2 = 1;
        goto code_r0x00c4660c;
      }
      if (*plVar14 == 0) goto LAB_00c37710;
      uVar7 = *(undefined8 *)(*plVar14 + 0xa8);
      uVar12 = GUIWindow.PADNIFKFMPL;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
      lVar6 = *plVar14;
      if (lVar6 == 0) goto LAB_00c37710;
      if ((uVar8 & 1) != 0) goto LAB_00c37690;
      goto LAB_00c376a0;
    }
    lVar15 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar6 + 0x78) = 1;
    if (lVar15 == 0) goto LAB_00c37710;
    if ((bRam0000000001916f93 & 1) == 0) {
      func_0x00a67900(&CarController_TypeInfo,0);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str__);
      func_0x00a67900(&Str_HP);
      func_0x00a67900(&Str_SECOND);
      func_0x00a67900(&Str____1_);
      bRam0000000001916f93 = 1;
    }
    plVar14 = *(long **)(lVar15 + 0x4e8);
    lVar6 = func_0x00a679a0(_string___TypeInfo,5);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarController_TypeInfo);
    }
    uVar7 = System_Int32__ToString(CarController.<statics> + 0xc,0);
    if (lVar6 == 0) goto LAB_00c10f6c;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined8 *)(lVar6 + 0x20) = uVar7, *(int *)(lVar6 + 0x18) == 1)) {
LAB_00c10f68:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    *(undefined8 *)(lVar6 + 0x28) = _Str__;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Translate.KECGFPHIEHF == 0) goto LAB_00c10f6c;
    uVar7 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_SECOND,0);
    if ((*(uint *)(lVar6 + 0x18) < 3) ||
       (*(undefined8 *)(lVar6 + 0x30) = uVar7, *(uint *)(lVar6 + 0x18) == 3)) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x38) = _Str____1_;
    if (Translate.KECGFPHIEHF == 0) goto LAB_00c10f6c;
    uVar7 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,_Str_HP,0);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_00c10f68;
    *(undefined8 *)(lVar6 + 0x40) = uVar7;
    uVar7 = System_String__Concat(lVar6,0);
    if (plVar14 == (long *)0x0) {
LAB_00c10f6c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x5b0));
    pvVar9 = *(void **)(lVar15 + 200);
    if (pvVar9 == (void *)0x0) goto LAB_00c10f6c;
    iVar2 = 1;
  }
  else {
LAB_00c37480:
    if (((*plVar14 == 0) || (lVar6 = *(long *)(*plVar14 + 0x70), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c37710;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    lVar6 = *plVar14;
    if (lVar6 == 0) goto LAB_00c37710;
    if ((uVar8 & 1) == 0) {
LAB_00c376a0:
      pvVar9 = *(void **)(lVar6 + 0x78);
    }
    else {
      pvVar9 = *(void **)(lVar6 + 0x70);
    }
    if (pvVar9 == (void *)0x0) {
LAB_00c37710:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    iVar2 = 0;
  }
code_r0x00c4660c:
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,iVar2,0);
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
  lVar15 = UnityEngine_Component__get_gameObject(pvVar9,0);
  if (lVar15 == 0) goto LAB_00c485b8;
  uVar7 = UnityEngine_Object__get_name(lVar15,0);
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar7, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___current__;
  uVar7 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 4) ||
     (*(undefined8 *)(lVar6 + 0x38) = uVar7, *(uint *)(lVar6 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str___last__;
  uVar7 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar15 = GUIWindow.PADNIFKFMPL;
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 6) || (*(undefined8 *)(lVar6 + 0x48) = uVar7, uVar5 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x50) = _Str____Child__;
  plVar14 = GUIWindow.DNEPGKHAOBF;
  uVar7 = 0;
  if (plVar14 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x58) = uVar7;
  uVar7 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar7 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,pvVar9,0);
  if ((uVar8 & 1) != 0) {
    uVar7 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar7 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,pvVar9,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar7 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  lVar6 = _GUIWindow_TypeInfo;
  if ((uVar8 & 1) != 0) {
    pvVar11 = GUIWindow.DNEPGKHAOBF;
    if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(pvVar11,false);
    lVar6 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar7 = **(undefined8 **)(lVar6 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (((uVar8 & 1) != 0) && (iVar2 == 0)) {
    if ((void *)GUIWindow.OFEJBBPBBFG == (void *)0x0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO((void *)GUIWindow.OFEJBBPBBFG,false);
  }
  pvVar11 = (void *)GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(pvVar11,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)((long)pvVar9 + 0x20) == '\0') {
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(pvVar11,0);
      if ((uVar8 & 1) == 0) goto LAB_00c46b74;
      uVar17 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = 0;
      Menu.GCDHNMAHOEP = uVar17;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (((uVar8 & 1) != 0) && (*(char *)((long)pvVar9 + 0x21) != '\0')) {
        fVar16 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar16) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB((void *)Menu.KECGFPHIEHF,pvVar11);
          goto LAB_00c46b74;
        }
      }
      if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
      uVar7 = 1;
    }
    UnityEngine_GameObject__SetActive(pvVar11,uVar7,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar7 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar7 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar9 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar8 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar16 = (float)iVar3 / (float)iVar4;
            if (fVar16 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar6 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0)
                 ) goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar6 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
              if ((uVar8 & 1) != 0) {
                if (1.61 <= fVar16) {
                  if ((fVar16 <= 1.61) || (1.8 <= fVar16)) {
                    if (fVar16 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x70);
                    uVar17 = 0x3f51eb85;
                    uVar12 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar6 == 0)) goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x70);
                    uVar17 = 0x3f5eb852;
                    uVar12 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x70);
                  uVar17 = 0x3f733333;
                  uVar12 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar16) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar6 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar16) {
                  if (*(long *)(lVar6 + 0x240) == 0) goto LAB_00c485b8;
                  uVar8 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar6 + 0x240),0);
                  if ((uVar8 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar6 == 0)) goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x60);
                  uVar17 = 0x3f51eb85;
                  uVar12 = 0x41a00000;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar6 + 0x60);
                  uVar17 = 0x3f5eb852;
                  uVar12 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar6 == 0)) goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0x60);
                uVar12 = 0xc0a00000;
                uVar17 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar12,uVar17,pvVar9,uVar7);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (pvVar11 = Menu.KECGFPHIEHF.ANIMNONMFFH,
               pvVar11 == (void *)0x0)) goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(pvVar11);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar9);
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
    uVar7 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(char *)((long)pvVar9 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar9);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
          goto LAB_00c485b8;
          uVar8 = AdvController__EDNAEPDDBPJ(lVar6,0);
          if ((uVar8 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar16 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar16) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
            goto LAB_00c485b8;
            uVar7 = *(undefined8 *)(lVar6 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
            if ((uVar8 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
              goto LAB_00c485b8;
              uVar7 = *(undefined8 *)(lVar6 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
                if ((uVar8 & 1) == 0) {
                  lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
                  if (lVar6 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar6,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar6 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Inequality(lVar6,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar6 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar6 + 0x2c) == 3) {
                      lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
                      if (lVar6 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar6,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar8 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar8 & 1) != 0) {
                        if (1.61 <= fVar16) {
                          if (1.8 <= fVar16) {
                            uVar17 = 0x3f59999a;
                            uVar7 = 0x42700000;
                          }
                          else {
                            uVar7 = 0x428c0000;
                            uVar17 = 0;
                          }
                        }
                        else {
                          uVar7 = 0x41a00000;
                          uVar17 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar16) {
                  if (fVar16 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar6 + 0xe8);
                    uVar17 = 0x3f733333;
                    uVar7 = 0x428c0000;
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
                uVar7 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar16) {
                  if (1.8 <= fVar16) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar6 + 0xb0);
                  uVar17 = 0x3f6e147b;
                  uVar7 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0xb0);
                uVar7 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar17 = 0;
            }
            else {
              if (fVar16 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar6 + 0x188);
                uVar7 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar6 + 0x188);
              if (1.8 <= fVar16) {
                uVar17 = 0x3f51eb85;
                uVar7 = 0x42180000;
              }
              else {
                uVar17 = 0x3f733333;
                uVar7 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar7,uVar17,pvVar9,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (pvVar11 = Menu.KECGFPHIEHF.ANIMNONMFFH,
             pvVar11 == (void *)0x0)) goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(pvVar11);
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
      uVar7 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar7 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
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
              pvVar11 = Main.FBDDKIOEKDM;
              if (pvVar11 == (void *)0x0) goto LAB_00c485b8;
              bVar1 = DAFNMLEKHAD__MHBEPDHNNFH(pvVar11);
              if (!bVar1) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
                goto LAB_00c485b8;
                uVar7 = *(undefined8 *)(lVar6 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
                  goto LAB_00c485b8;
                  uVar7 = *(undefined8 *)(lVar6 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar8 = UnityEngine_Object__op_Equality(pvVar9,uVar7,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar6 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar6 == 0))
                    goto LAB_00c485b8;
                    uVar7 = *(undefined8 *)(lVar6 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar7 = UnityEngine_Object__Instantiate_object_
                                      (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
                    *(undefined8 *)(lVar6 + 0x90) = uVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar6 = UnityEngine_Component__get_gameObject(pvVar9,0);
  if (lVar6 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar6,1,0);
  lVar6 = 8;
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  puVar13 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar13[2] = *puVar13;
  *(void **)((long)puVar13 + lVar6) = pvVar9;
  if (*(char *)((long)pvVar9 + 0x23) != '\0') {
    uVar7 = GUIWindow__FAAELIPKLCB(pvVar9);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar9,uVar7,0);
  }
  lVar6 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar6 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar6 + 0x20) = _Str_Window__Show__;
  uVar7 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar6 + 0x18) < 2) ||
     (*(undefined8 *)(lVar6 + 0x28) = uVar7, *(uint *)(lVar6 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x30) = _Str___last__;
  uVar7 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  uVar7 = _Str_null;
  if ((uVar8 & 1) != 0) {
    lVar15 = GUIWindow.PADNIFKFMPL;
    if (lVar15 == 0) goto LAB_00c485b8;
    uVar7 = UnityEngine_Object__get_name(lVar15,0);
  }
  uVar5 = *(uint *)(lVar6 + 0x18);
  if ((uVar5 < 4) || (*(undefined8 *)(lVar6 + 0x38) = uVar7, uVar5 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x40) = _Str____Child__;
  plVar14 = GUIWindow.DNEPGKHAOBF;
  uVar7 = 0;
  if (plVar14 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar5 = *(uint *)(lVar6 + 0x18);
  }
  if (uVar5 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar6 + 0x48) = uVar7;
  uVar7 = System_String__Concat(lVar6,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar7,0,0);
  uVar8 = Main__KCHOEBEIOCE(0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (pvVar11 = Menu.KECGFPHIEHF.ONNBLPAKJHK, pvVar11 == (void *)0x0))
    goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK(pvVar11);
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
    uVar7 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
        goto LAB_00c485b8;
        uVar12 = *(undefined8 *)(lVar6 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
        if ((uVar8 & 1) == 0) {
          uVar7 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar6 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar6 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
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
             (pvVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
             pvVar9 == (void *)0x0)) goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(pvVar9);
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
        lVar15 = Main.FBDDKIOEKDM;
        if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar6 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar8 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar8 = GUIGarage__ABAHNKCPCFA(lVar6,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x78), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
         ((lVar6 = *(long *)(lVar6 + 0x70), lVar6 == 0 ||
          (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
      uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if ((uVar8 & 1) != 0) goto LAB_00c47948;
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
      uVar17 = 0;
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
      lVar15 = Main.FBDDKIOEKDM;
      if ((lVar15 == 0) || (uVar5 = DAFNMLEKHAD__EFDKHACIIEC(lVar15,0), lVar6 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar6,uVar5 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0 ||
          (lVar6 = *(long *)(lVar6 + 0x1b8), lVar6 == 0)))) goto LAB_00c485b8;
      uVar17 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar17,lVar6,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
       ((lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0 ||
        (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)))) goto LAB_00c485b8;
    uVar8 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar8 & 1) == 0) {
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
    UnityEngine_GameObject__SetActive(lVar6,*(undefined1 *)((long)pvVar9 + 0x22),0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar7 = *(undefined8 *)(lVar6 + 0x78);
    uVar12 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar12,uVar7,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Inequality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
        uVar7 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
          goto LAB_00c485b8;
          uVar12 = *(undefined8 *)(lVar6 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
          if ((uVar8 & 1) != 0) {
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
        uVar17 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar17;
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
      }
    }
    uVar7 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar7 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00c485b8;
      uVar12 = *(undefined8 *)(lVar6 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
      if ((uVar8 & 1) != 0) {
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
      lVar6 = Main.FBDDKIOEKDM;
      if (lVar6 == 0) goto LAB_00c485b8;
      uVar8 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar6,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = SoundScript.FPOJDHNIFPP;
            if (lVar6 == 0) goto LAB_00c485b8;
            uVar8 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar8 & 1) == 0) {
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
    uVar7 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c485b8;
    uVar12 = *(undefined8 *)(lVar6 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Equality(uVar7,uVar12,0);
    if ((uVar8 & 1) != 0) {
      uVar7 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.NMDEEOMHAGP == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (pvVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar9 == (void *)0x0)
             ) goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(pvVar9,false);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = Menu.KECGFPHIEHF;
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar6,0);
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar6,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((void *)Menu.KECGFPHIEHF != (void *)0x0) {
    Menu__GDEFDCOIDNM((void *)Menu.KECGFPHIEHF);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



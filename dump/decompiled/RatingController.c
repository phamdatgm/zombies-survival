/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class RatingController : MonoBehaviour // TypeDefIndex: 5115
{
	// Fields
	public GameObject PIGLJNICEDO; // 0x20
	public RectTransform BLBKMHDKFMD; // 0x28
	public bool HKGHDDMDBFB; // 0x30
	private Vector3 LEFJDPLCJAP; // 0x34
	public ScrollRect LAJILLAKKIB; // 0x40
	private RatingController.DBDHJONGNMF JCCEIMEKCAF; // 0x48
	public Toggle[] BAOOLCOELKG; // 0x50
	public GameObject EIBBOOMANFB; // 0x58
	private RatingController.OCCMNGMHGHP HPNJNACEFCF; // 0x60
	public Toggle[] LLINMDNNPNH; // 0x68
	public Image AEDPLPECPFB; // 0x70
	public RectTransform ELDBJHKKDLO; // 0x78
	public GameObject[] NOEHEKOMHAJ; // 0x80
	public Transform GFJIPFFBPLJ; // 0x88
	public GameObject JAOGBDHEDJO; // 0x90
	public Color AJIIIPHJOGH; // 0x98
	public RatingController.RatingWrapperData PHJOHEFGKBK; // 0xA8
	public Rating[][,] PCFHJOFJFFJ; // 0xB0
	private float[,] PFGOKOLBIOO; // 0xB8
	public Text PFDNIPGDOLB; // 0xC0
	public Text ACACAIHBMIP; // 0xC8
	private UnityWebRequest DJCILMGNFHC; // 0xD0
	private IEnumerator PLFMLGHIKAK; // 0xD8

	// Methods

	public void EKGEIOGPKIJ() { }

	private void HIPELCKHJCI() { }

	public void BPPPAAMEJAF() { }

	public void BKGEGFOEGEO() { }

	private void PLCDDDDLCBB() { }

	public void .ctor() { }

	public void MEDLEEIBALB() { }

	public void RatingOnChangeToggle(int type) { }

	public void JIGMJDHGBCJ() { }

	public IEnumerator LDGNMLFKAKM() { }

	public void PAHDFNGJABH(RatingController.DBDHJONGNMF GIHDNMOMBIG) { }

	public void BEGHPCPPIBK(int JEIDCHDLOGG, int LIJCAJCAIMC, Rating[] LAHMEIEJLEN) { }

	public void KFHMEBCIBOA() { }

	private void GGOIKHNAIJB(bool MDIDBDKGGJI) { }

	public void SegmentOnChangeToggle(int type) { }

	public void OJBAJGILIJN(int PCFMDDLGOIK, int LIJCAJCAIMC) { }

	private void HPAFDOMPACP() { }

	private void ALNNLEHPENN() { }

	public void LDNINGMNDLE() { }

	public void IELAOINFAPI() { }

	private string EDCLKAIGBGF(bool PGFNFDFOJKL) { }

	public void PGHILJEKJEJ() { }
}
*/

// ==== public void EKGEIOGPKIJ() { }   @0xaf6174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__EKGEIOGPKIJ(void *__this)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001916ee0 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ERROR_SOCIAL_APP_STORE);
    func_0x00a67900(&Str_ERROR_SOCIAL_GOOGLE_PLAY);
    bRam0000000001916ee0 = 1;
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
  if (Main.FBDDKIOEKDM == 0) {
LAB_00bf63d0:
    if (this.EIBBOOMANFB == 0) goto LAB_00bf6504;
    UnityEngine_GameObject__SetActive(this.EIBBOOMANFB,0,0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar4 = BridgePHP.sn;
    if (iVar4 == 1) {
      plVar2 = this.PFDNIPGDOLB;
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar3 = (void *)Translate.KECGFPHIEHF;
      if (pvVar3 == (void *)0x0) goto LAB_00bf6504;
      puVar7 = (undefined8 *)&Str_ERROR_SOCIAL_GOOGLE_PLAY;
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        iVar4 = BridgePHP.sn;
      }
      plVar2 = this.PFDNIPGDOLB;
      if (iVar4 != 2) goto joined_r0x00bf64d8;
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      pvVar3 = (void *)Translate.KECGFPHIEHF;
      if (pvVar3 == (void *)0x0) goto LAB_00bf6504;
      puVar7 = (undefined8 *)&Str_ERROR_SOCIAL_APP_STORE;
    }
    pvVar3 = Translate__JJJNIPAKLJF(pvVar3,(void *)*puVar7);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5a8))(plVar2,pvVar3,*(undefined8 *)(*plVar2 + 0x5b0));
      if ((this.PFDNIPGDOLB != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject(this.PFDNIPGDOLB,0),
         lVar5 != 0)) {
        uVar1 = 1;
        goto LAB_00bf64f0;
      }
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
    lVar5 = Main.FBDDKIOEKDM;
    if (lVar5 == 0) goto LAB_00bf6504;
    if (*(int *)(lVar5 + 0x14) < 1) goto LAB_00bf63d0;
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
    lVar5 = Main.FBDDKIOEKDM;
    if (lVar5 == 0) goto LAB_00bf6504;
    iVar4 = *(int *)(lVar5 + 0x14);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = BridgePHP.countries;
    if (lVar5 == 0) goto LAB_00bf6504;
    if (*(int *)(lVar5 + 0x18) <= iVar4) goto LAB_00bf63d0;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00bf6504;
    lVar5 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
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
    if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_00bf6504;
    uVar1 = BridgePHP__GetCountryTextureFromID(lVar5,lVar6/*DAFNMLEKHAD*/.CDKFEFCGMKE,0);
    if (this.AEDPLPECPFB == 0) goto LAB_00bf6504;
    UnityEngine_UI_Image__set_sprite(this.AEDPLPECPFB,uVar1,0);
    if (this.EIBBOOMANFB == 0) goto LAB_00bf6504;
    UnityEngine_GameObject__SetActive(this.EIBBOOMANFB,1,0);
    plVar2 = this.PFDNIPGDOLB;
joined_r0x00bf64d8:
    if ((plVar2 != (long *)0x0) &&
       (lVar5 = UnityEngine_Component__get_gameObject(plVar2,0), lVar5 != 0)) {
      uVar1 = 0;
LAB_00bf64f0:
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar5,uVar1);
      return;
    }
  }
LAB_00bf6504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HIPELCKHJCI() { }   @0xaf6508

/* WARNING: Removing unreachable block (ram,0x00bf6760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__HIPELCKHJCI(void *__this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001916ee1 & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    bRam0000000001916ee1 = 1;
  }
  if (this.GFJIPFFBPLJ != 0) {
    plVar1 = (long *)UnityEngine_Transform__GetEnumerator(this.GFJIPFFBPLJ,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    do {
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00bf65e4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00bf65e4:
      uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        plVar1 = (long *)func_0x00a67a34(plVar1,_System_IDisposable_TypeInfo);
        if (plVar1 == (long *)0x0) goto LAB_00bf671c;
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_00bf66f4;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_00bf66dc;
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00bf6644;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00bf6644:
      plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
      if (plVar3 == (long *)0x0) goto LAB_00bf6754;
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) {
        func_0x00a67eec();
LAB_00bf6754:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar4,0);
    } while( true );
  }
  goto LAB_00bf6758;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_00bf66dc:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00bf6710;
    }
  }
LAB_00bf66f4:
  puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_IDisposable_TypeInfo,0);
LAB_00bf6710:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_00bf671c:
  if ((*(long *)((long)__this + 200) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)((long)__this + 200),0), lVar5 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar5,0);
    return;
  }
LAB_00bf6758:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BPPPAAMEJAF() { }   @0xaf6824

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BPPPAAMEJAF(void *__this)

{
  uint uVar1;
  long lVar2;
  
  if (this.HKGHDDMDBFB == '\0') {
    uVar1 = this.JCCEIMEKCAF - 1;
    if (0 < this.JCCEIMEKCAF) {
      lVar2 = this.BAOOLCOELKG;
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar2 != 0) {
          UnityEngine_UI_Toggle__set_isOn(lVar2,1,0);
          this.JCCEIMEKCAF = uVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void PAHDFNGJABH(RatingController.DBDHJONGNMF GIHDNMOMBIG) { }   @0xaf6840

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PAHDFNGJABH(void *__this,int GIHDNMOMBIG)

{
  long lVar1;
  
  lVar1 = this.BAOOLCOELKG;
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= (uint)GIHDNMOMBIG) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar1 = *(long *)(lVar1 + (long)GIHDNMOMBIG * 8 + 0x20);
    if (lVar1 != 0) {
      UnityEngine_UI_Toggle__set_isOn(lVar1,1,0);
      this.JCCEIMEKCAF = GIHDNMOMBIG;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BKGEGFOEGEO() { }   @0xaf6894

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BKGEGFOEGEO(void *__this)

{
  uint uVar1;
  long lVar2;
  
  if (this.HKGHDDMDBFB == '\0') {
    if (this.BAOOLCOELKG == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (this.JCCEIMEKCAF < this.BAOOLCOELKG.Length + -1) {
      uVar1 = this.JCCEIMEKCAF + 1;
      lVar2 = this.BAOOLCOELKG;
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar2 != 0) {
          UnityEngine_UI_Toggle__set_isOn(lVar2,1,0);
          this.JCCEIMEKCAF = uVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== private void PLCDDDDLCBB() { }   @0xaf68d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PLCDDDDLCBB(void *__this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lStack_68;
  
  if ((bRam0000000001916ee2 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__100);
    bRam0000000001916ee2 = 1;
  }
  lVar8 = this.PCFHJOFJFFJ;
  if (lVar8 == 0) {
    return;
  }
  if (this.JCCEIMEKCAF < **(uint **)(lVar8 + 0x10)) {
    lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4);
    if (this.HPNJNACEFCF < (uint)lVar10) {
      lVar8 = *(long *)(lVar8 + ((long)(int)this.HPNJNACEFCF +
                                lVar10 * (int)this.JCCEIMEKCAF) * 8 + 0x20);
      if (lVar8 == 0) {
        return;
      }
      if (*(long *)(lVar8 + 0x18) == 0) {
        return;
      }
      RatingController__HPAFDOMPACP(__this);
      RatingController__GGOIKHNAIJB(__this,1);
      if (*(int *)(lVar8 + 0x18) < 1) {
        return;
      }
      uVar15 = 0;
      lVar10 = lVar8 + 0x20;
      while( true ) {
        uVar5 = this.GFJIPFFBPLJ;
        uVar2 = this.JAOGBDHEDJO;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = UnityEngine_Object__Instantiate_object_
                          (uVar2,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (lVar4 == 0) goto LAB_00bf6cfc;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar4,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
        lVar4 = lStack_68;
        uVar14 = (uint)uVar15;
        if ((uVar15 & 1) == 0) {
          if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
          UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) || (lVar4 == 0)) goto LAB_00bf6cfc;
        piVar1 = (int *)(lVar9 + 0x10);
        plVar11 = *(long **)(lVar4 + 0x28);
        if (*piVar1 == -1) {
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          lVar9 = *plVar11;
          uVar5 = _Str__100;
        }
        else {
          uVar5 = System_Int32__ToString(piVar1,0);
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          lVar9 = *plVar11;
        }
        (**(code **)(lVar9 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(lVar9 + 0x5b0));
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00bf6cfc;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) ||
           (lVar6 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar6 == 0))
        goto LAB_00bf6cfc;
        uVar5 = BridgePHP__GetCountryTextureFromID(lVar6,*(undefined4 *)(lVar9 + 0x20),0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar4 + 0x30) == 0) goto LAB_00bf6cfc;
          UnityEngine_UI_Image__set_sprite(*(long *)(lVar4 + 0x30),uVar5,0);
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) || (plVar11 = *(long **)(lVar4 + 0x38), plVar11 == (long *)0x0))
        goto LAB_00bf6cfc;
        (**(code **)(*plVar11 + 0x5a8))
                  (plVar11,*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(*plVar11 + 0x5b0));
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if (lVar9 == 0) goto LAB_00bf6cfc;
        plVar11 = *(long **)(lVar4 + 0x50);
        uVar5 = System_Int32__ToString(lVar9 + 0x24,0);
        if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
        (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5b0));
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if (lVar9 == 0) goto LAB_00bf6cfc;
        if (*(int *)(lVar9 + 0x10) == -1) {
LAB_00bf6c18:
          plVar11 = *(long **)(lVar4 + 0x20);
          if (plVar11 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          (**(code **)(*plVar11 + 0x2a8))
                    (this.AJIIIPHJOGH,*(undefined4 *)((long)__this + 0x9c),
                     *(undefined4 *)((long)__this + 0xa0),*(undefined4 *)((long)__this + 0xa4),
                     plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
          if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00bf6cfc;
          UnityEngine_Behaviour__set_enabled(*(long *)(lVar4 + 0x20),1,0);
          plVar11 = *(long **)(lVar4 + 0x50);
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          plVar12 = *(long **)(lVar4 + 0x28);
          plVar13 = *(long **)(lVar4 + 0x38);
          (**(code **)(*plVar11 + 0x2a8))
                    (0,0,0,0x3f800000,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
          if ((plVar13 == (long *)0x0) ||
             ((**(code **)(*plVar13 + 0x2a8))
                        (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)),
             plVar12 == (long *)0x0)) goto LAB_00bf6cfc;
          (**(code **)(*plVar12 + 0x2a8))
                    (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
        }
        else {
          iVar3 = *(int *)(lVar9 + 0x14);
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
          if (lVar9 == 0) goto LAB_00bf6cfc;
          if (iVar3 == *(int *)(lVar9 + 0x10)) goto LAB_00bf6c18;
        }
        uVar15 = uVar15 + 1;
        if (*(int *)(lVar8 + 0x18) <= (int)uVar15) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void HPAFDOMPACP() { }   @0xaf6d04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__HPAFDOMPACP(void *__this)

{
  long *plVar1;
  long lStack_18;
  
  if ((bRam0000000001916ee7 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916ee7 = 1;
  }
  plVar1 = this.LAJILLAKKIB;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (this.GFJIPFFBPLJ != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (this.GFJIPFFBPLJ,&lStack_18,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (lStack_18 != 0) {
        UnityEngine_RectTransform__set_anchoredPosition(0,0,lStack_18,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void GGOIKHNAIJB(bool MDIDBDKGGJI) { }   @0xaf6d8c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__GGOIKHNAIJB(void *__this,bool MDIDBDKGGJI)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = this.NOEHEKOMHAJ;
  if (lVar3 != 0) {
    uVar1 = lVar3.Length;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00bf6df0;
        UnityEngine_GameObject__SetActive(lVar2,MDIDBDKGGJI,0);
        uVar1 = lVar3.Length;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00bf6df0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaf6df4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController___ctor(void *__this)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001916ee3 & 1) == 0) {
    func_0x00a67900(&Rating______TypeInfo);
    func_0x00a67900(&float____TypeInfo);
    bRam0000000001916ee3 = 1;
  }
  uStack_38 = 2;
  uStack_40 = 4;
  uVar1 = func_0x00a679a8(_Rating______TypeInfo,&uStack_40);
  this.PCFHJOFJFFJ = uVar1;
  uStack_48 = 2;
  uStack_50 = 4;
  uVar1 = func_0x00a679a8(_float____TypeInfo,&uStack_50);
  this.PFGOKOLBIOO = uVar1;
  UnityEngine_MonoBehaviour___ctor(__this,0);
  return;
}


// ==== public void MEDLEEIBALB() { }   @0xaf6ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__MEDLEEIBALB(void *__this)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916ee4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Coroutine_stopped_);
    func_0x00a67900(&Str_server_coroutine_is_NULL);
    bRam0000000001916ee4 = 1;
  }
  if (this.PLFMLGHIKAK == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = _Str_server_coroutine_is_NULL;
    if ((bRam0000000001917204 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam0000000001917204 = 1;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__LogError(plVar3,0);
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
    if (lVar7 == 0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c5d818;
    uVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) || (plVar3 == (long *)0x0)) goto LAB_00c5d818;
    lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar7 == 0) goto LAB_00c5d818;
    iVar9 = 1;
  }
  else {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,this.PLFMLGHIKAK,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = _Str_Coroutine_stopped_;
    if ((bRam0000000001917206 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam0000000001917206 = 1;
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
    lVar7 = Main.FBDDKIOEKDM;
    if (lVar7 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar8 = DAFNMLEKHAD__LLEFEIHEJDE(lVar7,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__Log(plVar3,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
    uVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) || (plVar3 == (long *)0x0)) goto LAB_00c590c8;
    lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    uVar10 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (lVar7 == 0) goto LAB_00c590c8;
    iVar9 = 0;
  }
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar10,iVar9,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar3 = *(long **)(lVar7 + 0x1e8);
  if ((plVar3 == (long *)0x0) ||
     (lVar4 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar4 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar4 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar4 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar4,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar4 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar4 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar4,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar3 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar3 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar3 + 0x598))(plVar3,*(undefined8 *)(*plVar3 + 0x5a0)), lVar7 != 0))
  {
    uVar2 = *(uint *)(lVar7 + 0x18);
    if ((uVar2 != 0) &&
       ((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar2 != 1 &&
        (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar2)))) {
      puVar1 = (undefined8 *)&Str__FF4E4A;
      if (iVar9 == 0) {
        puVar1 = (undefined8 *)&Str__78e938;
      }
      *(undefined8 *)(lVar7 + 0x30) = *puVar1;
      if (uVar2 != 3) {
        *(undefined8 *)(lVar7 + 0x38) = _Str___;
        uStack_3c = UnityEngine_Time__get_time(0);
        uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
        uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (((4 < uVar2) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar2 != 5)) &&
           (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar2)) {
          *(undefined8 *)(lVar7 + 0x50) = uVar10;
          uVar10 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x58) = uVar10;
            uVar10 = System_String__Concat(lVar7,0);
            (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar10,*(undefined8 *)(*plVar3 + 0x5b0));
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void RatingOnChangeToggle(int type) { }   @0xaf6f5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__RatingOnChangeToggle(void *__this,int type)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (this.HKGHDDMDBFB == '\0') {
    lVar6 = this.BAOOLCOELKG;
    if (lVar6 == 0) {
LAB_00bf705c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = lVar6.Length;
    if (0 < (int)uVar1) {
      uVar7 = 0;
      uVar9 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar5 == 0) || (plVar4 = *(long **)(lVar5 + 0xe0), plVar4 == (long *)0x0))
        goto LAB_00bf705c;
        uVar8 = uVar9;
        uVar2 = uVar9;
        uVar3 = uVar9;
        if (*(char *)(lVar5 + 0x120) != '\0') {
          uVar8 = 0x3f22a2a2;
          uVar2 = 0x3f038384;
          uVar3 = 0x3eb4b4b5;
        }
        (**(code **)(*plVar4 + 0x2a8))
                  (uVar3,uVar2,uVar8,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        if ((type == uVar7) && (*(char *)(lVar5 + 0x120) != '\0')) {
          lVar5 = UnityEngine_Component__get_transform(lVar5,0);
          if (lVar5 == 0) goto LAB_00bf705c;
          UnityEngine_Transform__SetAsLastSibling(lVar5,0);
          this.JCCEIMEKCAF = type;
          RatingController__OJBAJGILIJN(__this,type,this.HPNJNACEFCF);
        }
        uVar1 = lVar6.Length;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}


// ==== public void OJBAJGILIJN(int PCFMDDLGOIK, int LIJCAJCAIMC) { }   @0xaf7064

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__OJBAJGILIJN(void *__this,int PCFMDDLGOIK,int LIJCAJCAIMC)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  long lStack_68;
  
  RatingController__HIPELCKHJCI();
  lVar8 = this.PFGOKOLBIOO;
  if (lVar8 == 0) {
LAB_00bf713c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (((uint)PCFMDDLGOIK < **(uint **)(lVar8 + 0x10)) &&
     (lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
    lVar9 = this.PCFHJOFJFFJ;
    if (lVar9 == 0) goto LAB_00bf713c;
    if (((uint)PCFMDDLGOIK < **(uint **)(lVar9 + 0x10)) &&
       (lVar11 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar11)) {
      fVar17 = *(float *)(lVar8 + ((long)LIJCAJCAIMC + lVar10 * PCFMDDLGOIK) * 4 + 0x20);
      if ((fVar17 == 0.0) ||
         ((*(long *)(lVar9 + ((long)LIJCAJCAIMC + lVar11 * PCFMDDLGOIK) * 8 + 0x20) == 0 ||
          (fVar16 = (float)UnityEngine_Time__get_time(0), 60.0 < fVar16 - fVar17)))) {
        if (this.PLFMLGHIKAK != 0) {
          this.DJCILMGNFHC = 0;
          RatingController__MEDLEEIBALB(__this);
        }
        lVar8 = RatingController__LDGNMLFKAKM(__this);
        this.PLFMLGHIKAK = lVar8;
        if (lVar8 == 0) {
          func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
          uVar6 = func_0x00a67b44();
          uVar7 = func_0x00a67914(&Str_routine_is_null);
          System_NullReferenceException___ctor(uVar6,uVar7,0);
        }
        else {
          if (pcRam000000000191c478 == (code *)0x0) {
            pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
          }
          uVar5 = (*pcRam000000000191c478)(__this);
          if ((uVar5 & 1) != 0) {
            if (pcRam000000000191c488 == (code *)0x0) {
              pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
            }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c488)(__this,lVar8);
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar6 = func_0x00a67b44();
          uVar7 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
          System_ArgumentException___ctor(uVar6,uVar7,0);
        }
        uVar7 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
        auVar18 = func_0x00a67a20(uVar6,uVar7);
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(auVar18._0_8_,auVar18._8_8_);
        return;
      }
      if ((bRam0000000001916ee2 & 1) == 0) {
        func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
        func_0x00a67900(&Main_TypeInfo);
        func_0x00a67900(&Menu_TypeInfo);
        func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str__100);
        bRam0000000001916ee2 = 1;
      }
      lVar8 = this.PCFHJOFJFFJ;
      if (lVar8 == 0) {
        return;
      }
      if (this.JCCEIMEKCAF < **(uint **)(lVar8 + 0x10)) {
        lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4);
        if (this.HPNJNACEFCF < (uint)lVar10) {
          lVar8 = *(long *)(lVar8 + ((long)(int)this.HPNJNACEFCF +
                                    lVar10 * (int)this.JCCEIMEKCAF) * 8 + 0x20);
          if (lVar8 == 0) {
            return;
          }
          if (*(long *)(lVar8 + 0x18) == 0) {
            return;
          }
          RatingController__HPAFDOMPACP(__this);
          RatingController__GGOIKHNAIJB(__this,1);
          if (*(int *)(lVar8 + 0x18) < 1) {
            return;
          }
          uVar5 = 0;
          lVar10 = lVar8 + 0x20;
          while( true ) {
            uVar7 = this.GFJIPFFBPLJ;
            uVar6 = this.JAOGBDHEDJO;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar9 = UnityEngine_Object__Instantiate_object_
                              (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
            if (lVar9 == 0) goto LAB_00bf6cfc;
            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                      (lVar9,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
            lVar9 = lStack_68;
            uVar15 = (uint)uVar5;
            if ((uVar5 & 1) == 0) {
              if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
              UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) || (lVar9 == 0)) goto LAB_00bf6cfc;
            piVar1 = (int *)(lVar11 + 0x10);
            plVar12 = *(long **)(lVar9 + 0x28);
            if (*piVar1 == -1) {
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              lVar11 = *plVar12;
              uVar7 = _Str__100;
            }
            else {
              uVar7 = System_Int32__ToString(piVar1,0);
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              lVar11 = *plVar12;
            }
            (**(code **)(lVar11 + 0x5a8))(plVar12,uVar7,*(undefined8 *)(lVar11 + 0x5b0));
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00bf6cfc;
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) ||
               (lVar3 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar3 == 0))
            goto LAB_00bf6cfc;
            uVar7 = BridgePHP__GetCountryTextureFromID(lVar3,*(undefined4 *)(lVar11 + 0x20),0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(lVar9 + 0x30) == 0) goto LAB_00bf6cfc;
              UnityEngine_UI_Image__set_sprite(*(long *)(lVar9 + 0x30),uVar7,0);
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if ((lVar11 == 0) || (plVar12 = *(long **)(lVar9 + 0x38), plVar12 == (long *)0x0))
            goto LAB_00bf6cfc;
            (**(code **)(*plVar12 + 0x5a8))
                      (plVar12,*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(*plVar12 + 0x5b0));
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if (lVar11 == 0) goto LAB_00bf6cfc;
            plVar12 = *(long **)(lVar9 + 0x50);
            uVar7 = System_Int32__ToString(lVar11 + 0x24,0);
            if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
            (**(code **)(*plVar12 + 0x5a8))(plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x5b0));
            if (*(uint *)(lVar8 + 0x18) <= uVar15) break;
            lVar11 = *(long *)(lVar10 + uVar5 * 8);
            if (lVar11 == 0) goto LAB_00bf6cfc;
            if (*(int *)(lVar11 + 0x10) == -1) {
LAB_00bf6c18:
              plVar12 = *(long **)(lVar9 + 0x20);
              if (plVar12 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              (**(code **)(*plVar12 + 0x2a8))
                        (this.AJIIIPHJOGH,*(undefined4 *)((long)__this + 0x9c),
                         *(undefined4 *)((long)__this + 0xa0),*(undefined4 *)((long)__this + 0xa4),
                         plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
              if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00bf6cfc;
              UnityEngine_Behaviour__set_enabled(*(long *)(lVar9 + 0x20),1,0);
              plVar12 = *(long **)(lVar9 + 0x50);
              if (plVar12 == (long *)0x0) goto LAB_00bf6cfc;
              plVar13 = *(long **)(lVar9 + 0x28);
              plVar14 = *(long **)(lVar9 + 0x38);
              (**(code **)(*plVar12 + 0x2a8))
                        (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
              if ((plVar14 == (long *)0x0) ||
                 ((**(code **)(*plVar14 + 0x2a8))
                            (0,0,0,0x3f800000,plVar14,*(undefined8 *)(*plVar14 + 0x2b0)),
                 plVar13 == (long *)0x0)) goto LAB_00bf6cfc;
              (**(code **)(*plVar13 + 0x2a8))
                        (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
            }
            else {
              iVar2 = *(int *)(lVar11 + 0x14);
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
              if (lVar11 == 0) goto LAB_00bf6cfc;
              if (iVar2 == *(int *)(lVar11 + 0x10)) goto LAB_00bf6c18;
            }
            uVar5 = uVar5 + 1;
            if (*(int *)(lVar8 + 0x18) <= (int)uVar5) {
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void JIGMJDHGBCJ() { }   @0xaf7140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__JIGMJDHGBCJ(void *__this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (this.PIGLJNICEDO != 0) {
    cVar1 = this.HKGHDDMDBFB;
    uVar2 = UnityEngine_GameObject__get_activeSelf(this.PIGLJNICEDO,0);
    if (cVar1 == '\0') {
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = this.PIGLJNICEDO;
      if (lVar3 != 0) {
        uVar7 = 0;
LAB_00bf7250:
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar3,uVar7);
        return;
      }
    }
    else if ((uVar2 & 1) == 0) {
      lVar3 = this.PIGLJNICEDO;
      if (lVar3 != 0) {
        uVar7 = 1;
        goto LAB_00bf7250;
      }
    }
    else {
      uVar7 = this.LEFJDPLCJAP;
      fVar8 = *(float *)((long)__this + 0x3c);
      if (cRam0000000001916e65 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e65 = '\x01';
      }
      uVar5 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x48);
      fVar6 = *(float *)(UnityEngine_Vector3.<statics> + 0x50);
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar3 = this.BLBKMHDKFMD;
      this.LEFJDPLCJAP =
           CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * -50.0 * fVar4,
                    (float)uVar7 + (float)uVar5 * -50.0 * fVar4);
      *(float *)((long)__this + 0x3c) = fVar8 + fVar6 * -50.0 * fVar4;
      UnityEngine_Quaternion__Internal_FromEulerRad(0);
      if (lVar3 != 0) {
        if (pcRam000000000191c8a0 == (code *)0x0) {
          pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
        }
        (*pcRam000000000191c8a0)(lVar3,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator LDGNMLFKAKM() { }   @0xaf7280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController__LDGNMLFKAKM(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916ee5 & 1) == 0) {
    func_0x00a67900(&RatingController_MPMOFDOCDBD_TypeInfo);
    bRam0000000001916ee5 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_RatingController_MPMOFDOCDBD_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void BEGHPCPPIBK(int JEIDCHDLOGG, int LIJCAJCAIMC, Rating[] LAHMEIEJLEN) { }   @0xaf7308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__BEGHPCPPIBK(void *__this,int JEIDCHDLOGG,int LIJCAJCAIMC,void *LAHMEIEJLEN)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lStack_68;
  
  if (this.PCFHJOFJFFJ != 0) {
    iVar3 = System_Array__get_Length(this.PCFHJOFJFFJ,0);
    if (iVar3 <= JEIDCHDLOGG) {
      return;
    }
    lVar9 = this.PCFHJOFJFFJ;
    this.HKGHDDMDBFB = 0;
    if (lVar9 != 0) {
      if (((uint)JEIDCHDLOGG < **(uint **)(lVar9 + 0x10)) &&
         (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
        *(void **)(lVar9 + ((long)LIJCAJCAIMC + lVar10 * JEIDCHDLOGG) * 8 + 0x20) = LAHMEIEJLEN;
        lVar9 = this.PFGOKOLBIOO;
        uVar16 = UnityEngine_Time__get_time(0);
        if (lVar9 == 0) goto LAB_00bf73e0;
        if (((uint)JEIDCHDLOGG < **(uint **)(lVar9 + 0x10)) &&
           (lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4), (uint)LIJCAJCAIMC < (uint)lVar10)) {
          *(undefined4 *)(lVar9 + ((long)LIJCAJCAIMC + lVar10 * JEIDCHDLOGG) * 4 + 0x20) = uVar16;
          if ((bRam0000000001916ee2 & 1) == 0) {
            func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
            func_0x00a67900(&Main_TypeInfo);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            func_0x00a67900(&Str__100);
            bRam0000000001916ee2 = 1;
          }
          lVar9 = this.PCFHJOFJFFJ;
          if (lVar9 == 0) {
            return;
          }
          if (this.JCCEIMEKCAF < **(uint **)(lVar9 + 0x10)) {
            lVar10 = *(long *)(*(uint **)(lVar9 + 0x10) + 4);
            if (this.HPNJNACEFCF < (uint)lVar10) {
              lVar9 = *(long *)(lVar9 + ((long)(int)this.HPNJNACEFCF +
                                        lVar10 * (int)this.JCCEIMEKCAF) * 8 + 0x20);
              if (lVar9 == 0) {
                return;
              }
              if (*(long *)(lVar9 + 0x18) == 0) {
                return;
              }
              RatingController__HPAFDOMPACP(__this);
              RatingController__GGOIKHNAIJB(__this,1);
              if (*(int *)(lVar9 + 0x18) < 1) {
                return;
              }
              uVar15 = 0;
              lVar10 = lVar9 + 0x20;
              while( true ) {
                uVar5 = this.GFJIPFFBPLJ;
                uVar2 = this.JAOGBDHEDJO;
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar4 = UnityEngine_Object__Instantiate_object_
                                  (uVar2,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___)
                ;
                if (lVar4 == 0) goto LAB_00bf6cfc;
                UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                          (lVar4,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___
                          );
                lVar4 = lStack_68;
                uVar14 = (uint)uVar15;
                if ((uVar15 & 1) == 0) {
                  if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
                  UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) || (lVar4 == 0)) goto LAB_00bf6cfc;
                piVar1 = (int *)(lVar8 + 0x10);
                plVar11 = *(long **)(lVar4 + 0x28);
                if (*piVar1 == -1) {
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  lVar8 = *plVar11;
                  uVar5 = _Str__100;
                }
                else {
                  uVar5 = System_Int32__ToString(piVar1,0);
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  lVar8 = *plVar11;
                }
                (**(code **)(lVar8 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(lVar8 + 0x5b0));
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (Menu.KECGFPHIEHF == 0) goto LAB_00bf6cfc;
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) ||
                   (lVar6 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar6 == 0))
                goto LAB_00bf6cfc;
                uVar5 = BridgePHP__GetCountryTextureFromID(lVar6,*(undefined4 *)(lVar8 + 0x20),0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                if ((uVar7 & 1) != 0) {
                  if (*(long *)(lVar4 + 0x30) == 0) goto LAB_00bf6cfc;
                  UnityEngine_UI_Image__set_sprite(*(long *)(lVar4 + 0x30),uVar5,0);
                }
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if ((lVar8 == 0) || (plVar11 = *(long **)(lVar4 + 0x38), plVar11 == (long *)0x0))
                goto LAB_00bf6cfc;
                (**(code **)(*plVar11 + 0x5a8))
                          (plVar11,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(*plVar11 + 0x5b0));
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if (lVar8 == 0) goto LAB_00bf6cfc;
                plVar11 = *(long **)(lVar4 + 0x50);
                uVar5 = System_Int32__ToString(lVar8 + 0x24,0);
                if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5b0));
                if (*(uint *)(lVar9 + 0x18) <= uVar14) break;
                lVar8 = *(long *)(lVar10 + uVar15 * 8);
                if (lVar8 == 0) goto LAB_00bf6cfc;
                if (*(int *)(lVar8 + 0x10) == -1) {
LAB_00bf6c18:
                  plVar11 = *(long **)(lVar4 + 0x20);
                  if (plVar11 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                  (**(code **)(*plVar11 + 0x2a8))
                            (this.AJIIIPHJOGH,
                             *(undefined4 *)((long)__this + 0x9c),
                             *(undefined4 *)((long)__this + 0xa0),
                             *(undefined4 *)((long)__this + 0xa4),plVar11,
                             *(undefined8 *)(*plVar11 + 0x2b0));
                  if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00bf6cfc;
                  UnityEngine_Behaviour__set_enabled(*(long *)(lVar4 + 0x20),1,0);
                  plVar11 = *(long **)(lVar4 + 0x50);
                  if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
                  plVar12 = *(long **)(lVar4 + 0x28);
                  plVar13 = *(long **)(lVar4 + 0x38);
                  (**(code **)(*plVar11 + 0x2a8))
                            (0,0,0,0x3f800000,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
                  if ((plVar13 == (long *)0x0) ||
                     ((**(code **)(*plVar13 + 0x2a8))
                                (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)),
                     plVar12 == (long *)0x0)) goto LAB_00bf6cfc;
                  (**(code **)(*plVar12 + 0x2a8))
                            (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
                }
                else {
                  iVar3 = *(int *)(lVar8 + 0x14);
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
                  if (lVar8 == 0) goto LAB_00bf6cfc;
                  if (iVar3 == *(int *)(lVar8 + 0x10)) goto LAB_00bf6c18;
                }
                uVar15 = uVar15 + 1;
                if (*(int *)(lVar9 + 0x18) <= (int)uVar15) {
                  return;
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00bf73e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void KFHMEBCIBOA() { }   @0xaf73e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__KFHMEBCIBOA(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (this.PLFMLGHIKAK != 0) {
    this.DJCILMGNFHC = 0;
    RatingController__MEDLEEIBALB(__this);
  }
  lVar1 = RatingController__LDGNMLFKAKM(__this);
  this.PLFMLGHIKAK = lVar1;
  if (lVar1 == 0) {
    func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_routine_is_null);
    System_NullReferenceException___ctor(uVar3,uVar4,0);
  }
  else {
    if (pcRam000000000191c478 == (code *)0x0) {
      pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
    }
    uVar2 = (*pcRam000000000191c478)(__this);
    if ((uVar2 & 1) != 0) {
      if (pcRam000000000191c488 == (code *)0x0) {
        pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
      }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c488)(__this,lVar1);
      return;
    }
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
    System_ArgumentException___ctor(uVar3,uVar4,0);
  }
  uVar4 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
  auVar5 = func_0x00a67a20(uVar3,uVar4);
  if (pcRam000000000191c488 == (code *)0x0) {
    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
  }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
  return;
}


// ==== public void SegmentOnChangeToggle(int type) { }   @0xaf7424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__SegmentOnChangeToggle(void *__this,int type)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lStack_58;
  
  if ((bRam0000000001916ee6 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ee6 = 1;
  }
  if (this.HKGHDDMDBFB == '\0') {
    lVar6 = this.LLINMDNNPNH;
    if (lVar6 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = lVar6.Length;
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar4,0), lVar2 == 0))
        goto LAB_00bf75f0;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        lVar2 = lStack_58;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar2 == 0) goto LAB_00bf75f0;
          uVar8 = UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
          uVar9 = 0;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            uVar9 = 0xc1200000;
          }
          UnityEngine_RectTransform__set_anchoredPosition(uVar8,uVar9,lVar2,0);
        }
        uVar5 = this.ELDBJHKKDLO;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if (this.ELDBJHKKDLO == 0) goto LAB_00bf75f0;
          uVar9 = 0xc2680000;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            uVar9 = 0x42680000;
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (uVar9,0xc1a00000,this.ELDBJHKKDLO,0);
        }
        if ((type == uVar7) && (*(char *)(lVar4 + 0x120) != '\0')) {
          lVar4 = UnityEngine_Component__get_transform(lVar4,0);
          if (lVar4 == 0) goto LAB_00bf75f0;
          UnityEngine_Transform__SetAsLastSibling(lVar4,0);
          this.HPNJNACEFCF = type;
          RatingController__OJBAJGILIJN(__this,this.JCCEIMEKCAF,type);
        }
        uVar1 = lVar6.Length;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}


// ==== private void ALNNLEHPENN() { }   @0xaf75f8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__ALNNLEHPENN(void *__this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = this.BAOOLCOELKG;
  if (lVar3 != 0) {
    uVar1 = lVar3.Length;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00bf7658;
        UnityEngine_UI_Toggle__set_isOn(lVar2,0,0);
        uVar1 = lVar3.Length;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_00bf7658:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LDNINGMNDLE() { }   @0xaf765c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__LDNINGMNDLE(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ee8 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ee8 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    RatingController__GGOIKHNAIJB(__this,false);
    RatingController__ALNNLEHPENN(__this);
    RatingController__EKGEIOGPKIJ(__this);
    RatingController__PAHDFNGJABH(__this,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x100), lVar3 != 0)) {
      GUIWindow__HEGIHOAJOKK(lVar3,0,0);
      RatingController__HPAFDOMPACP(__this);
      if ((Menu.KECGFPHIEHF != 0) &&
         (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
        if ((bRam0000000001916ec4 & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Str_RatingOpen);
          func_0x00a67900(&Str_ANALYTICS__RatingOpen);
          bRam0000000001916ec4 = 1;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_ANALYTICS__RatingOpen,0,0);
        uVar4 = _Str_RatingOpen;
        uVar1 = System_String__IsNullOrEmpty(_Str_RatingOpen,0);
        if ((uVar1 & 1) == 0) {
          if (pcRam000000000191f018 == (code *)0x0) {
            pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
          }
          uVar1 = (*pcRam000000000191f018)();
          if ((uVar1 & 1) == 0) {
            return;
          }
          if (pcRam000000000191f028 == (code *)0x0) {
            pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
          }
                    /* WARNING: Could not recover jumptable at 0x016d8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191f028)(uVar4);
          return;
        }
        func_0x00a67914(&System_ArgumentException_TypeInfo);
        uVar4 = func_0x00a67b44();
        uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
        System_ArgumentException___ctor(uVar4,uVar2,0);
        uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
        auVar5 = func_0x00a67a20(uVar4,uVar2);
        uVar4 = auVar5._0_8_;
        if ((bRam000000000191f039 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
          bRam000000000191f039 = 1;
        }
        uVar1 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar1 & 1) != 0) {
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar4 = func_0x00a67b44();
          uVar2 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
          System_ArgumentException___ctor(uVar4,uVar2,0);
          uVar2 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
          func_0x00a67a20(uVar4,uVar2);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (pcRam000000000191f018 == (code *)0x0) {
          pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
        }
        uVar1 = (*pcRam000000000191f018)();
        if ((uVar1 & 1) != 0) {
          if (auVar5._8_8_ == 0) {
            if (pcRam000000000191f028 == (code *)0x0) {
              pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
            }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191f028)(uVar4);
            return;
          }
          lVar3 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
          UnityEngine_Analytics_CustomEventData___ctor(lVar3,uVar4);
          if (lVar3 == 0) goto LAB_016d9194;
          UnityEngine_Analytics_CustomEventData__AddDictionary(lVar3,auVar5._8_8_);
          if (pcRam000000000191f030 == (code *)0x0) {
            pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
          }
          (*pcRam000000000191f030)(lVar3);
          UnityEngine_Analytics_CustomEventData__Dispose(lVar3);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void IELAOINFAPI() { }   @0xaf778c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__IELAOINFAPI(void *__this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_58;
  
  if (this.EIBBOOMANFB != 0) {
    uVar4 = UnityEngine_GameObject__get_activeSelf(this.EIBBOOMANFB,0);
    if ((((uVar4 & 1) == 0) || (this.HKGHDDMDBFB != '\0')) ||
       (this.HPNJNACEFCF < 1)) {
      return;
    }
    lVar5 = this.LLINMDNNPNH;
    this.HPNJNACEFCF = 0;
    if (lVar5 != 0) {
      if (lVar5.Length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        UnityEngine_UI_Toggle__set_isOn(*(long *)(lVar5 + 0x20),1,0);
        uVar2 = this.HPNJNACEFCF;
        if ((bRam0000000001916ee6 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam0000000001916ee6 = 1;
        }
        if (this.HKGHDDMDBFB == '\0') {
          lVar5 = this.LLINMDNNPNH;
          if (lVar5 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = lVar5.Length;
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
              if ((lVar6 == 0) ||
                 (lVar3 = UnityEngine_Component__get_gameObject(lVar6,0), lVar3 == 0))
              goto LAB_00bf75f0;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar3,&lStack_58,
                         _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
              lVar3 = lStack_58;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar4 & 1) != 0) {
                if (lVar3 == 0) goto LAB_00bf75f0;
                uVar9 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                uVar10 = 0;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0xc1200000;
                }
                UnityEngine_RectTransform__set_anchoredPosition(uVar9,uVar10,lVar3,0);
              }
              uVar7 = this.ELDBJHKKDLO;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar4 & 1) != 0) {
                if (this.ELDBJHKKDLO == 0) goto LAB_00bf75f0;
                uVar10 = 0xc2680000;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0x42680000;
                }
                UnityEngine_RectTransform__set_anchoredPosition
                          (uVar10,0xc1a00000,this.ELDBJHKKDLO,0);
              }
              if ((uVar2 == uVar8) && (*(char *)(lVar6 + 0x120) != '\0')) {
                lVar6 = UnityEngine_Component__get_transform(lVar6,0);
                if (lVar6 == 0) goto LAB_00bf75f0;
                UnityEngine_Transform__SetAsLastSibling(lVar6,0);
                this.HPNJNACEFCF = uVar2;
                RatingController__OJBAJGILIJN(__this,this.JCCEIMEKCAF,uVar2);
              }
              uVar1 = lVar5.Length;
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private string EDCLKAIGBGF(bool PGFNFDFOJKL) { }   @0xaf7804

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController__EDCLKAIGBGF(void *__this,bool PGFNFDFOJKL)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvStack_28;
  
  if ((bRam0000000001916ee9 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_ERROR_INTERNET);
    func_0x00a67900(&Str_ERROR_UNKNOWN);
    bRam0000000001916ee9 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Translate.KECGFPHIEHF == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  puVar1 = (undefined8 *)&Str_ERROR_INTERNET;
  if (!PGFNFDFOJKL) {
    puVar1 = (undefined8 *)&Str_ERROR_UNKNOWN;
  }
  uVar5 = *puVar1;
  if ((bRam0000000001917112 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
                    uVar5,0);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_error);
    bRam0000000001917112 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Translate.LEAMIBBOEKD;
  if (lVar2 == 0) {
LAB_00c31f48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                    (lVar2,uVar5,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  pvVar4 = _Str_error;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = Translate.LEAMIBBOEKD;
    if (lVar2 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar2,uVar5,&pvStack_28,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar4 = pvStack_28;
  }
  return pvVar4;
}


// ==== public void PGHILJEKJEJ() { }   @0xaf78a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PGHILJEKJEJ(void *__this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_58;
  
  if (this.EIBBOOMANFB != 0) {
    uVar4 = UnityEngine_GameObject__get_activeSelf(this.EIBBOOMANFB,0);
    if (((uVar4 & 1) == 0) || (this.HKGHDDMDBFB != '\0')) {
      return;
    }
    lVar5 = this.LLINMDNNPNH;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      if ((int)(uVar2 - 1) <= this.HPNJNACEFCF) {
        return;
      }
      uVar1 = this.HPNJNACEFCF + 1;
      this.HPNJNACEFCF = uVar1;
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar5 != 0) {
        UnityEngine_UI_Toggle__set_isOn(lVar5,1,0);
        uVar2 = this.HPNJNACEFCF;
        if ((bRam0000000001916ee6 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam0000000001916ee6 = 1;
        }
        if (this.HKGHDDMDBFB == '\0') {
          lVar5 = this.LLINMDNNPNH;
          if (lVar5 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
              if ((lVar6 == 0) ||
                 (lVar3 = UnityEngine_Component__get_gameObject(lVar6,0), lVar3 == 0))
              goto LAB_00bf75f0;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar3,&lStack_58,
                         _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
              lVar3 = lStack_58;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar4 & 1) != 0) {
                if (lVar3 == 0) goto LAB_00bf75f0;
                uVar9 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                uVar10 = 0;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0xc1200000;
                }
                UnityEngine_RectTransform__set_anchoredPosition(uVar9,uVar10,lVar3,0);
              }
              uVar7 = this.ELDBJHKKDLO;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar4 & 1) != 0) {
                if (this.ELDBJHKKDLO == 0) goto LAB_00bf75f0;
                uVar10 = 0xc2680000;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0x42680000;
                }
                UnityEngine_RectTransform__set_anchoredPosition
                          (uVar10,0xc1a00000,this.ELDBJHKKDLO,0);
              }
              if ((uVar2 == uVar8) && (*(char *)(lVar6 + 0x120) != '\0')) {
                lVar6 = UnityEngine_Component__get_transform(lVar6,0);
                if (lVar6 == 0) goto LAB_00bf75f0;
                UnityEngine_Transform__SetAsLastSibling(lVar6,0);
                this.HPNJNACEFCF = uVar2;
                RatingController__OJBAJGILIJN(__this,this.JCCEIMEKCAF,uVar2);
              }
              uVar1 = *(uint *)(lVar5 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



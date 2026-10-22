/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class RatingEventController : MonoBehaviour // TypeDefIndex: 5211
{
	// Fields
	public const int OEGNNELLCMD = 300;
	public GameObject PIGLJNICEDO; // 0x20
	public RectTransform BLBKMHDKFMD; // 0x28
	private Vector3 LEFJDPLCJAP; // 0x30
	public GameObject BDNNGFOIGBC; // 0x40
	public RectTransform EGHDNNPNLED; // 0x48
	public ScrollRect LAJILLAKKIB; // 0x50
	public Sprite[] DNBMPCDONOC; // 0x58
	public RectTransform GECECHBNKEN; // 0x60
	public RectTransform ILDPOBCPDDK; // 0x68
	public Transform BNNALAGFBNM; // 0x70
	public GameObject JAOGBDHEDJO; // 0x78
	public GameObject AJFGAFLDOJL; // 0x80
	public GameObject LDBNMECLPIJ; // 0x88
	public GameObject KADEOCHBNKB; // 0x90
	public GameObject ANMJFHGOJAJ; // 0x98
	public Text LAANMPDMDEI; // 0xA0
	public Text CLNELCOGGKC; // 0xA8
	public Transform JMBBOICFJDG; // 0xB0
	public GameObject EJPMMKDMPMF; // 0xB8
	public Button LAOKHJKJHED; // 0xC0
	public GameObject IGOLLJGCFLL; // 0xC8
	public static EventContest[] GBOBBEDAFKH; // 0x0
	public Replay[][] PCFHJOFJFFJ; // 0xD0
	public float[] PFGOKOLBIOO; // 0xD8
	public const int LPAOEDMKBAE = 30;
	private Color GBJMIAIFGLJ; // 0xE0

	// Methods

	public EventContest JGMFIPCELEF() { }

	private void IDANHAOJLGJ(Replay ODBLLMBEFEI) { }

	public void FEGODMGCDKH() { }

	private void HIPELCKHJCI(Transform AIOFDKLKCPM) { }

	private void AMNLEOOJDKP(int MILPOCHJNHH, int GCKKLCLGEDO) { }

	private void HPAFDOMPACP() { }

	private int DGJIDPJKAOG(int FGOHLMLBAOF) { }

	public void CAHNMGGBGBK() { }

	public static void MDGLEPOJOAM(Level GDJDPNDHBNN) { }

	private void MKACNHEOJKP(GUIRating BKBKLJKDINA, bool FJDCALHGHCI, int CGBCBOKAMBP = -1) { }

	public void MLPOBPBMBHG() { }

	public void BEGHPCPPIBK(Level ACLJCGMKGNP, Replay[] LAHMEIEJLEN) { }

	public void .ctor() { }

	private void DGFCAMFFCMH(GUIReward MHPNFMDOMDH, RewardContest[] IPAKMJAIKIA, int NCDDOMDGKBN, bool OCNNIGPFPHM) { }

	public void ELGNLGIIIAJ(string LCEEABHFOLE) { }

	public void JIGMJDHGBCJ() { }

	public void PLCDDDDLCBB(bool OCNNIGPFPHM) { }

	public void OJBAJGILIJN(Level ACLJCGMKGNP, bool KOBMDKEMAOG) { }

	public void ClaimReward() { }
}
*/

// ==== public void OJBAJGILIJN(Level ACLJCGMKGNP, bool KOBMDKEMAOG) { }   @0xb30bc4

/* WARNING: Removing unreachable block (ram,0x00c41dc4) */
/* WARNING: Removing unreachable block (ram,0x00c41df4) */
/* WARNING: Removing unreachable block (ram,0x00c41e00) */
/* WARNING: Removing unreachable block (ram,0x00c41e04) */
/* WARNING: Removing unreachable block (ram,0x00c41dd4) */
/* WARNING: Removing unreachable block (ram,0x00c41e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__OJBAJGILIJN(void *__this,void *ACLJCGMKGNP,bool KOBMDKEMAOG)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  char cVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  pvVar10 = __this;
  if ((bRam0000000001917133 & 1) == 0) {
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    pvVar10 = (void *)func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917133 = 1;
  }
  RatingEventController__HIPELCKHJCI(pvVar10,this.BNNALAGFBNM);
  if ((ACLJCGMKGNP == (void *)0x0) || (lVar18 = this.PFGOKOLBIOO, lVar18 == 0)) {
LAB_00c30ddc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar9 = *(int *)((long)ACLJCGMKGNP + 0x10) - 100;
  if (*(uint *)(lVar18 + 0x18) <= uVar9) {
LAB_00c30de0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  lVar19 = this.PCFHJOFJFFJ;
  if (lVar19 == 0) goto LAB_00c30ddc;
  if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_00c30de0;
  fVar25 = *(float *)(lVar18 + (long)(int)uVar9 * 4 + 0x20);
  bVar7 = true;
  if ((fVar25 != 0.0) && (*(long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20) != 0)) {
    fVar24 = (float)UnityEngine_Time__get_time(0);
    bVar7 = 30.0 < fVar24 - fVar25;
  }
  if (bVar7 || KOBMDKEMAOG) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar21 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Inequality(uVar21,0,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF != 0) {
        lVar19 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
        plVar12 = (long *)func_0x00a679a0(_object___TypeInfo,1);
        lVar18 = func_0x00a67a38(_int_TypeInfo,&stack0xffffffffffffffcc);
        if (plVar12 != (long *)0x0) {
          if ((lVar18 != 0) &&
             (lVar13 = func_0x00a67a34(lVar18,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
            uVar21 = func_0x00a67b74();
            lVar18 = func_0x00a67a20(uVar21,0);
            if ((bRam00000000019170be & 1) == 0) {
              func_0x00a67900(&Str_level_event_);
              bRam00000000019170be = 1;
            }
            if ((99 < *(int *)(lVar18 + 0x10)) && (*(long *)(lVar18 + 0x50) != 0)) {
              _uStack_58 = CONCAT44(*(undefined4 *)(*(long *)(lVar18 + 0x50) + 0x18),uStack_58);
              uVar21 = System_Int32__ToString(&uStack_54,0);
              System_String__Concat(_Str_level_event_,uVar21,0);
            }
            return;
          }
          if ((int)plVar12[3] == 0) goto LAB_00c30de0;
          plVar12[4] = lVar18;
          if (lVar19 != 0) {
            BridgePHP__StartServerConnect(lVar19,4,plVar12,0);
            return;
          }
        }
      }
    }
    goto LAB_00c30ddc;
  }
  acStack_7c[0] = '\x01';
  pvStack_88 = __this;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar10 = pvStack_88;
  if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Main.NMDEEOMHAGP == 0) {
    return;
  }
  lVar18 = *(long *)((long)pvVar10 + 0x78);
  lVar19 = *(long *)((long)pvVar10 + 0xd0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar13 = _Main_TypeInfo;
  lVar20 = Main.NMDEEOMHAGP;
  if ((lVar20 == 0) || (lVar19 == 0)) goto LAB_00c429d8;
  uVar9 = lVar20/*Level*/.id - 100;
  if (*(uint *)(lVar19 + 0x18) <= uVar9) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar12 = *(long **)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarReplay_TypeInfo);
    lVar13 = _Main_TypeInfo;
    lVar20 = Main.NMDEEOMHAGP;
    CarReplay.LHNOLEHPJON = 0;
    if (lVar20 == 0) goto LAB_00c429d8;
  }
  else {
    CarReplay.LHNOLEHPJON = 0;
  }
  lVar19 = lVar20/*Level*/.event_contest;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x00a67a30();
    if (lVar19 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
    Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
    uVar9 = 0;
    uStack_ac = 0;
  }
  else {
    if (lVar19 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
    lVar19 = Main.NMDEEOMHAGP;
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x50), lVar19 == 0)) goto LAB_00c429d8;
    uVar9 = EventContest__get_sort(lVar19,0);
    lVar19 = Main.NMDEEOMHAGP;
    if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x50), lVar19 == 0)) goto LAB_00c429d8;
    uStack_ac = *(undefined4 *)(lVar19 + 0x18);
  }
  pvVar10 = pvStack_88;
  RatingEventController__HPAFDOMPACP(pvStack_88);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = System_Boolean__ToString(acStack_7c,0);
  uVar8 = _Str_FillRating__;
  uVar21 = _Str___good_rating__;
  if (plVar12 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  }
  uVar21 = System_String__Concat(uVar8,uVar14,uVar21,uVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar21,0,0);
  if (plVar12 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar10 + 0x70);
    lStack_a8 = 0;
    puStack_a0 = (undefined8 *)((long)pvVar10 + 0xb0);
    uVar11 = 0;
    uStack_80 = uVar9;
    cVar22 = acStack_7c[0];
    do {
      if (cVar22 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar10,uVar11 & 0xffffffff,(int)plVar12[3]);
      }
      cVar22 = acStack_7c[0];
      if ((long)uVar11 < (long)(int)*(uint *)(plVar12 + 3)) {
        if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
        if ((plVar12[uVar11 + 4] != 0) && (*(int *)(plVar12[uVar11 + 4] + 0x10) != -2)) {
          ppuVar6 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar6 = &puStack_98;
          }
          uVar21 = **ppuVar6;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar19 = UnityEngine_Object__Instantiate_object_
                             (lVar18,uVar21,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar19 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar19,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar13 = lStack_78;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar12[uVar11 + 4] + 0x10);
          plVar23 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar19;
          if (*piVar1 == -1) {
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            lVar19 = *plVar23;
            uVar21 = _Str__100;
          }
          else {
            uVar21 = System_Int32__ToString(piVar1,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            lVar19 = *plVar23;
          }
          (**(code **)(lVar19 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(lVar19 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) ||
             (lVar19 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar19 == 0))
          goto LAB_00c429d8;
          uVar21 = BridgePHP__GetCountryTextureFromID
                             (lVar19,*(undefined4 *)(plVar12[uVar11 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar16 = UnityEngine_Object__op_Inequality(uVar21,0,0);
          if ((uVar16 & 1) != 0) {
            if (*(long *)(lVar13 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar13 + 0x30),uVar21,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if ((plVar12[uVar11 + 4] == 0) ||
             (plVar23 = *(long **)(lVar13 + 0x38), plVar23 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar23 + 0x5a8))
                    (plVar23,*(undefined8 *)(plVar12[uVar11 + 4] + 0x28),
                     *(undefined8 *)(*plVar23 + 0x5b0));
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
          plVar23 = *(long **)(lVar13 + 0x40);
          pvVar10 = Car__DBJBMIGLBNF(*(int *)(plVar12[uVar11 + 4] + 0x1c));
          if (plVar23 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar23 + 0x5a8))(plVar23,pvVar10,*(undefined8 *)(*plVar23 + 0x5b0));
          uVar5 = uVar9 - 1;
          if (uVar9 < 2) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
            plVar23 = *(long **)(lVar13 + 0x50);
            uVar3 = *(undefined4 *)(plVar12[uVar11 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar21 = Main__HIIJGDANAIK(uVar3,uStack_ac,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar23 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(*plVar23 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
            plVar23 = *(long **)(lVar13 + 0x60);
            uVar3 = *(undefined4 *)(plVar12[uVar11 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar21 = Main__CHJONPOFGFA(uVar3,0);
            if (plVar23 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar23 + 0x5a8))(plVar23,uVar21,*(undefined8 *)(*plVar23 + 0x5b0));
          }
          pvVar10 = pvStack_88;
          if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
          if (plVar12[uVar11 + 4] == 0) goto LAB_00c429d8;
          iVar4 = *(int *)(plVar12[uVar11 + 4] + 0x18);
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
          lVar19 = Main.FBDDKIOEKDM;
          if (lVar19 == 0) goto LAB_00c429d8;
          if (iVar4 == *(int *)(lVar19 + 0x10)) {
            if (*(uint *)(plVar12 + 3) <= uVar11) goto LAB_00c429dc;
            lStack_a8 = plVar12[uVar11 + 4];
            RatingEventController__MKACNHEOJKP(pvVar10,lVar13,1,uVar11 & 0xffffffff);
            uVar9 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              CarReplay.LHNOLEHPJON = lStack_a8;
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
              lVar19 = Main.NMDEEOMHAGP;
              if ((lVar19 == 0) ||
                 (pvVar17 = Main.FBDDKIOEKDM, pvVar17 == (void *)0x0
                 )) goto LAB_00c429d8;
              pvVar17 = DAFNMLEKHAD__PJDAAMCNMHJ(pvVar17,*(int *)(lVar19 + 0x10));
              uVar9 = uStack_80;
              if (pvVar17 != (void *)0x0) {
                DJKGLJOCFCE__GEBLPKOKIDF(pvVar17,1,0);
                uVar9 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar10,lVar13,0,uVar11 & 0xffffffff);
            uVar9 = uStack_80;
          }
          uStack_80 = uVar9;
          cVar22 = acStack_7c[0];
          if (uVar11 == 0) {
            if (uVar5 < 2) {
              if ((*(long *)(lVar13 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar13,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar9 == 1) {
                if ((*(long *)(lVar13 + 0x60) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x60),0),
                   lVar18 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if (*(long *)(lVar13 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar13 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar18 = lStack_78;
                if (((*(long *)(lVar13 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar13 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar18,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar13 + 0x50) == 0) goto LAB_00c429d8;
                  lVar18 = *(long *)(lVar13 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar25 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar13 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar13 + 0x48),0),
                     lVar18 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar25 + -86.0,lVar18,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar13 + 0x58) == 0) ||
                       (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x58),0),
                       lVar18 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar18,0,0);
                  }
                }
                if (*(long *)((long)pvVar10 + 0x68) == 0) goto LAB_00c429d8;
                lVar18 = *(long *)((long)pvVar10 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar10 + 0x68),0);
                if (lVar18 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar18,0);
                if (*(long *)((long)pvVar10 + 0x68) == 0) goto LAB_00c429d8;
                lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x68),0);
                uVar9 = uStack_80;
              }
              else {
                if (uVar9 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar13 + 0x50) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x50),0),
                   lVar18 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if ((*(long *)((long)pvVar10 + 0x60) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar10 + 0x60),0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,0,0);
                if ((*(long *)((long)pvVar10 + 0x68) == 0) ||
                   (lVar18 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar10 + 0x68),0), lVar18 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar18,1,0);
                lVar18 = lStack_90;
                cVar22 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar13 + 0x48) == 0) goto LAB_00c429d8;
                lVar18 = UnityEngine_Component__get_gameObject(*(long *)(lVar13 + 0x48),0);
              }
              if (lVar18 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,0,0);
            }
            else if (uVar9 == 0) {
              if ((*(long *)((long)pvVar10 + 0x68) == 0) ||
                 (lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x68),0),
                 lVar18 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,1,0);
              if ((*(long *)((long)pvVar10 + 0x60) == 0) ||
                 (lVar18 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar10 + 0x60),0),
                 lVar18 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar18,1,0);
              lVar18 = *(long *)((long)pvVar10 + 0x60);
              if (lVar18 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar18,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar18,0);
              uVar9 = uStack_80;
            }
LAB_00c426ec:
            lVar18 = lStack_90;
            cVar22 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar13 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar13 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar18 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar22 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x66);
    if ((cVar22 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar10,lStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarReplay.LHNOLEHPJON == 0) {
        uVar21 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar18 = UnityEngine_Object__Instantiate_object_
                           (lVar18,uVar21,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar18 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar18,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar12 = *(long **)(lStack_78 + 0x28), plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0x5a8))(plVar12,_Str__,*(undefined8 *)(*plVar12 + 0x5b0));
          plVar12 = *(long **)(lStack_78 + 0x50);
          if (plVar12 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar9) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar12 + 0x5a8))(plVar12,*puVar2,*(undefined8 *)(*plVar12 + 0x5b0));
            plVar12 = *(long **)(lStack_78 + 0x60);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x5a8))(plVar12,_Str______,*(undefined8 *)(*plVar12 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF != 0) {
                lVar18 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
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
                lVar19 = Main.FBDDKIOEKDM;
                if ((lVar19 != 0) && (lVar18 != 0)) {
                  uVar21 = BridgePHP__GetCountryTextureFromID
                                     (lVar18,*(undefined4 *)(lVar19 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar11 = UnityEngine_Object__op_Inequality(uVar21,0,0);
                  if ((uVar11 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar21,0);
                  }
                  plVar12 = *(long **)(lStack_78 + 0x38);
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
                  lVar18 = Main.FBDDKIOEKDM;
                  if ((lVar18 != 0) && (plVar12 != (long *)0x0)) {
                    (**(code **)(*plVar12 + 0x5a8))
                              (plVar12,*(undefined8 *)(lVar18 + 0x20),
                               *(undefined8 *)(*plVar12 + 0x5b0));
                    plVar12 = *(long **)(lStack_78 + 0x40);
                    if (plVar12 != (long *)0x0) {
                      (**(code **)(*plVar12 + 0x5a8))
                                (plVar12,_Str______,*(undefined8 *)(*plVar12 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== public EventContest JGMFIPCELEF() { }   @0xb3fb84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingEventController__JGMFIPCELEF(void *__this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  
  if ((bRam0000000001917126 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    bRam0000000001917126 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Main.NMDEEOMHAGP == 0) ||
      (lVar7 = RatingEventController.GBOBBEDAFKH, lVar7 == 0)) ||
     (uVar1 = *(uint *)(lVar7 + 0x18), (int)uVar1 < 1)) {
    pvVar6 = (void *)0x0;
  }
  else {
    lVar8 = 0;
    lVar3 = _Main_TypeInfo;
    pvVar5 = (void *)0x0;
    do {
      if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      pvVar9 = *(void **)(lVar7 + 0x20 + lVar8 * 8);
      if (pvVar9 == (void *)0x0) {
LAB_00c3fc94:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = *(int *)((long)pvVar9 + 0x14);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = _Main_TypeInfo;
      }
      lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
      if (lVar4 == 0) goto LAB_00c3fc94;
      pvVar6 = pvVar5;
      if ((iVar2 == *(int *)(lVar4 + 0x10) + -100) &&
         (pvVar6 = pvVar9, *(int *)((long)pvVar9 + 0x1c) != 3)) {
        pvVar6 = pvVar5;
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      lVar8 = lVar8 + 1;
      pvVar5 = pvVar6;
    } while ((int)lVar8 < (int)uVar1);
  }
  return pvVar6;
}


// ==== private void IDANHAOJLGJ(Replay ODBLLMBEFEI) { }   @0xb3fc9c

/* WARNING: Removing unreachable block (ram,0x00c4012c) */
/* WARNING: Removing unreachable block (ram,0x00c402ec) */
/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__IDANHAOJLGJ(void *__this,void *ODBLLMBEFEI)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *pvVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x25;
  long lStack_68;
  
  if ((bRam0000000001917127 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str_car_block);
    func_0x00a67900(&Str_cup_);
    func_0x00a67900(&Str_value_panel);
    func_0x00a67900(&Str_Fail_SetYourReward__);
    func_0x00a67900(&Str_Fail_SetYourReward_Main_current_level__);
    bRam0000000001917127 = 1;
  }
  lVar5 = RatingEventController__JGMFIPCELEF();
  uVar14 = _Str_Fail_SetYourReward__;
  if (((ODBLLMBEFEI == (void *)0x0) || (lVar5 == 0)) || (*(long *)(lVar5 + 0x20) == 0)) {
    if (ODBLLMBEFEI == (void *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = (**(code **)(*(long *)ODBLLMBEFEI + 0x168))
                         (ODBLLMBEFEI,*(undefined8 *)(*(long *)ODBLLMBEFEI + 0x170));
    }
    plVar7 = (long *)System_String__Concat(uVar14,uVar15,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
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
    UnityEngine_Debug__LogError(plVar7,0);
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
    if (pvVar10 == (void *)0x0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    bVar3 = DAFNMLEKHAD__LLEFEIHEJDE(pvVar10);
    if (!bVar3) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c5d818;
    uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) || (plVar7 == (long *)0x0)) goto LAB_00c5d818;
    lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (lVar5 == 0) goto LAB_00c5d818;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar14,1,0);
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
    plVar7 = *(long **)(lVar5 + 0x1e8);
    if ((plVar7 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar6 == 0)
       ) goto LAB_00c16768;
    if (10000 < *(int *)(lVar6 + 0x10)) {
      if (*(long *)(lVar5 + 0x1e8) == 0) goto LAB_00c16768;
      uVar15 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x1e8),0);
      if ((*(long *)(lVar5 + 0x1e8) == 0) ||
         (lVar6 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x1e8),0), lVar6 == 0))
      goto LAB_00c16768;
      uVar4 = UnityEngine_Transform__get_parent(lVar6,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar6 = UnityEngine_Object__Instantiate_object_
                        (uVar15,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar6 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar6,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___)
      ;
      *(long **)(lVar5 + 0x1e8) = unaff_x25;
      if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
    }
    plVar7 = *(long **)(lVar5 + 0x1e8);
    lVar5 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar7 != (long *)0x0) &&
       (uVar15 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar5 != 0
       )) {
      uVar11 = *(uint *)(lVar5 + 0x18);
      if ((uVar11 != 0) &&
         (((*(undefined8 *)(lVar5 + 0x20) = uVar15, uVar11 != 1 &&
           (*(undefined8 *)(lVar5 + 0x28) = _Str__color_, 2 < uVar11)) &&
          (*(undefined8 *)(lVar5 + 0x30) = _Str__FF4E4A, uVar11 != 3)))) {
        *(undefined8 *)(lVar5 + 0x38) = _Str___;
        UnityEngine_Time__get_time(0);
        uVar15 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
        uVar15 = System_String__Format(_Str__0_f2_,uVar15,0);
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (((4 < uVar11) && (*(undefined8 *)(lVar5 + 0x40) = uVar15, uVar11 != 5)) &&
           (*(undefined8 *)(lVar5 + 0x48) = _Str____color___, 6 < uVar11)) {
          *(undefined8 *)(lVar5 + 0x50) = uVar14;
          uVar14 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x58) = uVar14;
            uVar14 = System_String__Concat(lVar5,0);
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
            return;
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
  uVar14 = this.ANMJFHGOJAJ;
  uVar15 = this.JMBBOICFJDG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Object__Instantiate_object_
            (uVar14,uVar15,_Method_UnityEngine_Object_Instantiate_GameObject___);
  lVar6 = UnityEngine_Object__Instantiate_object_
                    (this.LDBNMECLPIJ,this.JMBBOICFJDG,
                     _Method_UnityEngine_Object_Instantiate_GameObject___);
  if (((lVar6 != 0) &&
      (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                 (lVar6,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIReward___),
      lVar2 = lStack_68, lStack_68 != 0)) &&
     (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lStack_68,&lStack_68,_Method_UnityEngine_Component_GetComponent_Image___),
     lStack_68 != 0)) {
    UnityEngine_Behaviour__set_enabled(lStack_68,0,0);
    lVar6 = UnityEngine_GameObject__get_transform(lVar6,0);
    if (lVar6 != 0) {
      plVar7 = (long *)UnityEngine_Transform__GetEnumerator(lVar6,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar6 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_00c3fed4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c3fed4:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_00c40120;
          lVar6 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 == 0) goto LAB_00c400a8;
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_00c40090;
        }
        lVar6 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_00c3ff34;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c3ff34:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
LAB_00c402d4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo)) {
          func_0x00a67eec(plVar9);
          goto LAB_00c402d4;
        }
        lVar6 = UnityEngine_Object__get_name(plVar9,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar12 = System_String__Contains(lVar6,_Str_cup_,0);
        if ((uVar12 & 1) == 0) {
          uVar14 = UnityEngine_Object__get_name(plVar9,0);
          uVar12 = System_String__op_Equality(uVar14,_Str_value_panel,0);
          if ((uVar12 & 1) == 0) {
            uVar14 = UnityEngine_Object__get_name(plVar9,0);
            uVar12 = System_String__op_Equality(uVar14,_Str_car_block,0);
            if ((uVar12 & 1) != 0) {
              UnityEngine_Transform__SetParent(plVar9,*(undefined8 *)(lVar2 + 0x30),0);
            }
          }
          else {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (plVar9,&lStack_68,_Method_UnityEngine_Component_GetComponent_RectTransform___
                      );
            if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44660000,lStack_68,0,0);
          }
        }
        else {
          lVar6 = UnityEngine_Component__get_gameObject(plVar9,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
      } while( true );
    }
  }
  goto LAB_00c402e4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_00c40090:
    if (*(long *)(piVar13 + -2) == _System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_00c40114;
    }
  }
LAB_00c400a8:
  puVar8 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_IDisposable_TypeInfo,0);
LAB_00c40114:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_00c40120:
  iVar1 = *(int *)((long)ODBLLMBEFEI + 0x10);
  if (iVar1 < 0) {
    uVar11 = 4;
  }
  else if (iVar1 < 6) {
    uVar11 = 0;
  }
  else if (iVar1 < 0xb) {
    uVar11 = 1;
  }
  else if (iVar1 < 0x33) {
    uVar11 = 2;
  }
  else {
    uVar11 = 3;
    if (100 < iVar1) {
      uVar11 = 4;
    }
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar12 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  if ((uVar12 & 1) != 0) {
    RatingEventController__DGFCAMFFCMH(uVar12,lVar2,*(undefined8 *)(lVar5 + 0x20),uVar11,0);
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    plVar9 = Main.NMDEEOMHAGP;
    plVar7 = plVar9;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      plVar7 = Main.NMDEEOMHAGP;
    }
    uVar14 = _Str_Fail_SetYourReward_Main_current_level__;
    if (plVar9 != (long *)0x0) goto LAB_00c40220;
    if (plVar7 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      goto LAB_00c4027c;
    }
  }
  else {
    plVar7 = Main.NMDEEOMHAGP;
    if (plVar7 != (long *)0x0) {
LAB_00c40220:
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        if (plVar7 != (long *)0x0) {
          plVar7[0xb] = *(long *)(lVar5 + (ulong)uVar11 * 8 + 0x20);
          return;
        }
      }
LAB_00c402e4:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  uVar15 = 0;
  uVar14 = _Str_Fail_SetYourReward_Main_current_level__;
LAB_00c4027c:
  pvVar10 = (void *)System_String__Concat(uVar14,uVar15,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(pvVar10);
  return;
}


// ==== private int DGJIDPJKAOG(int FGOHLMLBAOF) { }   @0xb403f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int RatingEventController__DGJIDPJKAOG(void *__this,int FGOHLMLBAOF)

{
  int iVar1;
  
  if (FGOHLMLBAOF < 0) {
    return 4;
  }
  if (FGOHLMLBAOF < 6) {
    return 0;
  }
  if (FGOHLMLBAOF < 0xb) {
    return 1;
  }
  if (0x32 < FGOHLMLBAOF) {
    iVar1 = 3;
    if (100 < FGOHLMLBAOF) {
      iVar1 = 4;
    }
    return iVar1;
  }
  return 2;
}


// ==== private void DGFCAMFFCMH(GUIReward MHPNFMDOMDH, RewardContest[] IPAKMJAIKIA, int NCDDOMDGKBN, bool OCNNIGPFPHM) { }   @0xb4043c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__DGFCAMFFCMH
               (void *__this,void *MHPNFMDOMDH,void *IPAKMJAIKIA,int NCDDOMDGKBN,bool OCNNIGPFPHM)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  uint uStack_34;
  
  if ((bRam0000000001917130 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    __this = (void *)func_0x00a67900(&Str_Fail_FillGUIRewardLine__);
    bRam0000000001917130 = 1;
  }
  if (IPAKMJAIKIA == (void *)0x0) goto LAB_00c407e8;
  uStack_34 = *(uint *)((long)IPAKMJAIKIA + 0x18);
  if ((int)uStack_34 <= NCDDOMDGKBN) {
    uVar3 = System_Int32__ToString(&uStack_34,0);
    uVar3 = System_String__Concat(_Str_Fail_FillGUIRewardLine__,uVar3,0);
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar3,0);
    return;
  }
  if (uStack_34 <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
  plVar6 = (long *)((long)IPAKMJAIKIA + (long)NCDDOMDGKBN * 8 + 0x20);
  if (*plVar6 == 0) goto LAB_00c407e8;
  if (*(int *)(*plVar6 + 0x10) < 1) {
    if (OCNNIGPFPHM) {
      if ((MHPNFMDOMDH == (void *)0x0) || (*(long *)((long)MHPNFMDOMDH + 0x30) == 0))
      goto LAB_00c407e8;
      UnityEngine_RectTransform__set_anchoredPosition
                (0,0xc1c80000,*(long *)((long)MHPNFMDOMDH + 0x30),0);
    }
    else if (MHPNFMDOMDH == (void *)0x0) goto LAB_00c407e8;
    if (*(long *)((long)MHPNFMDOMDH + 0x68) == 0) goto LAB_00c407e8;
    __this = (void *)UnityEngine_GameObject__SetActive(*(long *)((long)MHPNFMDOMDH + 0x68),0,0);
  }
  else {
    if ((MHPNFMDOMDH == (void *)0x0) || (*(long *)((long)MHPNFMDOMDH + 0x30) == 0))
    goto LAB_00c407e8;
    UnityEngine_RectTransform__set_anchoredPosition
              (0,0x40400000,*(long *)((long)MHPNFMDOMDH + 0x30),0);
    if (*(long *)((long)MHPNFMDOMDH + 0x68) == 0) goto LAB_00c407e8;
    __this = (void *)UnityEngine_GameObject__SetActive(*(long *)((long)MHPNFMDOMDH + 0x68),1,0);
    if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
    if (*plVar6 == 0) goto LAB_00c407e8;
    iVar1 = *(int *)(*plVar6 + 0x10);
    if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = **(long **)((long)_Main_TypeInfo + 0xb8);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c407e8;
    __this = _Main_TypeInfo;
    if (iVar1 < *(int *)(*(long *)(lVar4 + 0x28) + 0x18)) {
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x70);
      if (*(int *)((long)_Main_TypeInfo + 0xe0) == 0) {
        __this = (void *)func_0x00a67a30();
        lVar4 = **(long **)((long)_Main_TypeInfo + 0xb8);
        if (lVar4 == 0) goto LAB_00c407e8;
      }
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if ((*plVar6 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_00c407e8;
      uVar2 = *(uint *)(*plVar6 + 0x10);
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_00c407ec;
      lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      if ((lVar4 == 0) || (plVar5 == (long *)0x0)) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))
                                 (plVar5,*(undefined8 *)(lVar4 + 0x10),
                                  *(undefined8 *)(*plVar5 + 0x5b0));
    }
  }
  if ((uint)NCDDOMDGKBN < *(uint *)((long)IPAKMJAIKIA + 0x18)) {
    if ((*plVar6 == 0) || (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x48), lVar4 == 0))
    goto LAB_00c407e8;
    if (*(int *)(*plVar6 + 0x18) < 1) {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    else {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if (*plVar6 == 0) goto LAB_00c407e8;
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x50);
      uVar3 = System_Int32__ToString(*plVar6 + 0x18,0);
      if (plVar5 == (long *)0x0) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0))
      ;
    }
    if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
    if ((*plVar6 == 0) || (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x38), lVar4 == 0))
    goto LAB_00c407e8;
    if (*(int *)(*plVar6 + 0x14) < 1) {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    else {
      __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
      if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
      if (*plVar6 == 0) goto LAB_00c407e8;
      plVar5 = *(long **)((long)MHPNFMDOMDH + 0x40);
      uVar3 = System_Int32__ToString(*plVar6 + 0x14,0);
      if (plVar5 == (long *)0x0) goto LAB_00c407e8;
      __this = (void *)(**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0))
      ;
    }
    if ((uint)NCDDOMDGKBN < *(uint *)((long)IPAKMJAIKIA + 0x18)) {
      if ((*plVar6 != 0) && (lVar4 = *(long *)((long)MHPNFMDOMDH + 0x58), lVar4 != 0)) {
        if (*(int *)(*plVar6 + 0x1c) < 1) {
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          return;
        }
        __this = (void *)UnityEngine_GameObject__SetActive(lVar4,1,0);
        if (*(uint *)((long)IPAKMJAIKIA + 0x18) <= (uint)NCDDOMDGKBN) goto LAB_00c407ec;
        if (*plVar6 != 0) {
          plVar5 = *(long **)((long)MHPNFMDOMDH + 0x60);
          uVar3 = System_Int32__ToString(*plVar6 + 0x1c,0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x5b0));
            return;
          }
        }
      }
LAB_00c407e8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
LAB_00c407ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58(__this);
}


// ==== public void FEGODMGCDKH() { }   @0xb407f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__FEGODMGCDKH(void *__this)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__this_00;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 extraout_s0;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam0000000001917128 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917128 = 1;
  }
  if ((this.LAOKHJKJHED == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(this.LAOKHJKJHED,0), lVar3 == 0))
  {
LAB_00c40910:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar3,0,0);
  if (this.EJPMMKDMPMF == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(this.EJPMMKDMPMF,1,0);
  if (*(long *)((long)__this + 200) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)((long)__this + 200),1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = Main__KCHOEBEIOCE(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = Menu.KECGFPHIEHF;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_00c40910;
  if (*(char *)(*(long *)(lVar3 + 0x58) + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar3 = Menu.KECGFPHIEHF;
    if (lVar3 == 0) goto LAB_00c40910;
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 == 0) goto LAB_00c40910;
  plVar8 = this.EJPMMKDMPMF;
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___,plVar8,0);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&MLCNINCNANA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SetButton__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str_lvl_);
    bRam00000000019171a4 = 1;
  }
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Equality(plVar8,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c55ff4;
  uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x150), lVar9 == 0)) ||
       (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) goto LAB_00c55ff4;
    uVar4 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(lVar3);
  uVar11 = _Str_SetButton__;
  if (plVar8 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  }
  uVar1 = _Str___last__;
  plVar6 = *(long **)(lVar3 + 0x38);
  if (plVar6 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  uVar11 = System_String__Concat(uVar11,uVar5,uVar1,uVar7,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  *(long **)(lVar3 + 0x38) = plVar8;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar9 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar9,plVar8,0);
  uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)(lVar3 + 0x58) = uVar12;
  if (*(long *)(lVar3 + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)(lVar3 + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar4 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar9 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar9,0);
        *(long *)(lVar3 + 0x20) = lVar9;
        if ((lVar9 == 0) || (*(long **)(lVar9 + 0x10) = plVar8, plVar8 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar11 = UnityEngine_Object__get_name(plVar8,0);
        uVar4 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar9 + 0x10),0);
        if ((uVar4 & 1) != 0) {
          if (lVar10 == 0) goto LAB_00c55ff4;
          lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
        }
        *(long *)(lVar9 + 0x20) = lVar10;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar9 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar9 + 0x18) = plStack_a8;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar9 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar9 + 0x28) = plStack_a8;
        lVar9 = *(long *)(lVar3 + 0x20);
        if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
           (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar9 + 0x20),0), lVar10 == 0))
        goto LAB_00c55ff4;
        uVar4 = System_String__Contains(lVar10,_Str_lvl_,0);
        uVar17 = 0x3f800000;
        uVar15 = 0x3f800000;
        uVar12 = 0x3f800000;
        if ((uVar4 & 1) == 0) {
          if ((*(long *)(lVar3 + 0x20) == 0) ||
             (lVar10 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar10 == 0)) goto LAB_00c55ff4;
          uVar12 = UnityEngine_Transform__get_localScale(lVar10,0);
        }
        *(undefined4 *)(lVar9 + 0x30) = uVar12;
        *(undefined4 *)(lVar9 + 0x34) = uVar15;
        *(undefined4 *)(lVar9 + 0x38) = uVar17;
        lVar9 = *(long *)(lVar3 + 0x20);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
        __this_00 = (void *)UnityEngine_RectTransform__get_pivot(*(long *)(lVar9 + 0x28),0);
        *(undefined4 *)(lVar9 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar9 + 0x40) = uVar15;
        bVar2 = GamePadController__PJOJJBEIFAE(__this_00,*(void **)(lVar3 + 0x20));
        if (!bVar2) {
          lVar9 = *(long *)(lVar3 + 0x20);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar12 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar9 + 0x28),0);
          *(undefined4 *)(lVar9 + 0x44) = uVar12;
          *(undefined4 *)(lVar9 + 0x48) = uVar15;
        }
        if (*(long *)(lVar3 + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar9 = lStack_78;
    } while (lStack_78 == 0);
    uVar11 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,plVar8,0);
  } while ((uVar4 & 1) == 0);
  *(long *)(lVar3 + 0x20) = lVar9;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)(lVar3 + 0x20) == 0) {
    return;
  }
  lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28);
  if (lVar9 == 0) goto LAB_00c55ff4;
  fVar13 = (float)UnityEngine_RectTransform__get_pivot(lVar9,0);
  fVar16 = 0.5;
  if (fVar13 == 0.5) {
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28), lVar9 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar9,0);
    if (fVar16 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x28), lVar9 == 0)) goto LAB_00c55ff4;
    fVar13 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar9,0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
    fVar18 = *(float *)(lVar9 + 0x44);
    fVar16 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar20 = *(float *)(lVar9 + 0x3c);
    fVar22 = *(float *)(lVar9 + 0x30);
    fVar21 = *(float *)(lVar9 + 0x44);
    fVar19 = *(float *)(lVar9 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar9 + 0x28),0);
    lVar9 = *(long *)(lVar3 + 0x20);
    if (lVar9 == 0) goto LAB_00c55ff4;
    fVar14 = ABS(fVar20 + -0.5);
    fVar20 = fVar16 * fVar14;
    if (fVar21 < 0.0) {
      fVar20 = -(fVar16 * fVar14);
    }
    fVar21 = ABS(*(float *)(lVar9 + 0x40) + -0.5);
    fVar16 = fVar13 * fVar21;
    if (*(float *)(lVar9 + 0x48) < 0.0) {
      fVar16 = -(fVar13 * fVar21);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar18 + ABS(fVar22) * fVar20,fVar19 + ABS(*(float *)(lVar9 + 0x34)) * fVar16,lVar10,
               0);
  }
  if ((*(long *)(lVar3 + 0x20) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10), lVar9 != 0)) {
    uVar11 = UnityEngine_Object__get_name(lVar9,0);
    uVar4 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(lVar3 + 0x20) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar3 + 0x20) + 0x20), lVar9 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar9,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar4 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (*(undefined4 *)(lVar3 + 0x6c),*(undefined4 *)(lVar3 + 0x70),
                   *(undefined4 *)(lVar3 + 0x74),*(undefined4 *)(lVar3 + 0x78),plStack_a8,
                   *(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HIPELCKHJCI(Transform AIOFDKLKCPM) { }   @0xb40914

/* WARNING: Removing unreachable block (ram,0x00c40b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__HIPELCKHJCI(void *__this,void *AIOFDKLKCPM)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001917129 & 1) == 0) {
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    __this = (void *)func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    bRam0000000001917129 = 1;
  }
  if (AIOFDKLKCPM == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50(__this);
  }
  plVar1 = (long *)UnityEngine_Transform__GetEnumerator(AIOFDKLKCPM,0);
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
          goto LAB_00c409f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c409f0:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      plVar1 = (long *)func_0x00a67a34(plVar1,_System_IDisposable_TypeInfo);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_00c40b00;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00c40a50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c40a50:
    plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_00c40b44;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo)) {
      func_0x00a67eec();
LAB_00c40b44:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = UnityEngine_Component__get_gameObject(plVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Destroy(uVar4,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00c40b1c;
    }
  }
LAB_00c40b00:
  puVar2 = (undefined8 *)func_0x00a9e6c4(plVar1,_System_IDisposable_TypeInfo,0);
LAB_00c40b1c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


// ==== private void AMNLEOOJDKP(int MILPOCHJNHH, int GCKKLCLGEDO) { }   @0xb40c14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__AMNLEOOJDKP(void *__this,int MILPOCHJNHH,int GCKKLCLGEDO)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iStack_3c;
  long lStack_38;
  
  iStack_3c = MILPOCHJNHH;
  if ((bRam000000000191712a & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_101_);
    func_0x00a67900(&Str_100);
    func_0x00a67900(&Str_10);
    func_0x00a67900(&Str_Fail_SetRewardLine__);
    func_0x00a67900(&Str_5);
    func_0x00a67900(&Str_50);
    bRam000000000191712a = 1;
  }
  if (((uint)MILPOCHJNHH < 0x33) &&
     ((1L << ((ulong)(uint)MILPOCHJNHH & 0x3f) & 0x4000000000421U) != 0)) {
    if (0 < MILPOCHJNHH - GCKKLCLGEDO) {
      uVar6 = this.AJFGAFLDOJL;
      uVar7 = this.BNNALAGFBNM;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Instantiate_object_
                (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    uVar6 = this.LDBNMECLPIJ;
    uVar7 = this.BNNALAGFBNM;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c40fdc;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&lStack_38,_Method_UnityEngine_GameObject_GetComponent_GUIReward___);
    uVar4 = UnityEngine_Object__op_Inequality(lStack_38,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar3 = Main.NMDEEOMHAGP;
      if (lVar3 == 0) goto LAB_00c40fdc;
      if (*(long *)(lVar3 + 0x50) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar3 = Main.NMDEEOMHAGP;
          if (lVar3 == 0) goto LAB_00c40fdc;
        }
        if (*(long *)(lVar3 + 0x50) == 0) goto LAB_00c40fdc;
        if (*(long *)(*(long *)(lVar3 + 0x50) + 0x20) != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar3 = Main.NMDEEOMHAGP;
            if (lVar3 == 0) goto LAB_00c40fdc;
          }
          if ((*(long *)(lVar3 + 0x50) == 0) ||
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + 0x20), lVar3 == 0)) {
LAB_00c40fdc:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          if (*(int *)(lVar3 + 0x18) == 5) {
            iVar1 = iStack_3c + 1;
            if (iVar1 < 0) {
              uVar5 = 4;
            }
            else if (iVar1 < 6) {
              uVar5 = 0;
            }
            else if (iVar1 < 0xb) {
              uVar5 = 1;
            }
            else if (iVar1 < 0x33) {
              uVar5 = 2;
            }
            else {
              uVar5 = 3;
              if (100 < iVar1) {
                uVar5 = 4;
              }
            }
            lVar3 = func_0x00a679a0(_string___TypeInfo,5);
            if (lVar3 != 0) {
              uVar2 = *(uint *)(lVar3 + 0x18);
              if ((((uVar2 == 0) || (*(undefined8 *)(lVar3 + 0x20) = _Str_5, uVar2 == 1)) ||
                  (*(undefined8 *)(lVar3 + 0x28) = _Str_10, uVar2 < 3)) ||
                 ((*(undefined8 *)(lVar3 + 0x30) = _Str_50, uVar2 == 3 ||
                  (*(undefined8 *)(lVar3 + 0x38) = _Str_100, uVar2 < 5)))) {
LAB_00c40fe0:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              *(undefined8 *)(lVar3 + 0x40) = _Str_101_;
              if (uVar5 != 0) {
                lVar3 = this.DNBMPCDONOC;
                if (lVar3 == 0) goto LAB_00c40fdc;
                if ((int)uVar5 < (int)*(uint *)(lVar3 + 0x18)) {
                  if (lStack_38 == 0) goto LAB_00c40fdc;
                  if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_00c40fe0;
                  if (*(long *)(lStack_38 + 0x28) == 0) goto LAB_00c40fdc;
                  UnityEngine_UI_Image__set_sprite
                            (*(long *)(lStack_38 + 0x28),
                             *(undefined8 *)(lVar3 + (ulong)uVar5 * 8 + 0x20),0);
                }
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar3 = Main.NMDEEOMHAGP;
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
                RatingEventController__DGFCAMFFCMH
                          (_Main_TypeInfo,lStack_38,*(undefined8 *)(lVar3 + 0x20),uVar5,1);
                return;
              }
            }
            goto LAB_00c40fdc;
          }
        }
      }
    }
    uVar6 = System_Int32__ToString(&iStack_3c,0);
    uVar6 = System_String__Concat(_Str_Fail_SetRewardLine__,uVar6,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__EEKNCFLMGDP(uVar6,0);
  }
  return;
}


// ==== private void HPAFDOMPACP() { }   @0xb40fe4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__HPAFDOMPACP(void *__this)

{
  long *plVar1;
  long lStack_18;
  
  if ((bRam000000000191712b & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam000000000191712b = 1;
  }
  plVar1 = this.LAJILLAKKIB;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (this.BNNALAGFBNM != 0) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (this.BNNALAGFBNM,&lStack_18,
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


// ==== public void CAHNMGGBGBK() { }   @0xb4106c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__CAHNMGGBGBK(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((bRam000000000191712c & 1) == 0) {
    func_0x00a67900(&EventContest_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam000000000191712c = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Main.KECGFPHIEHF != 0) &&
     (lVar7 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar7 != 0)) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c41254;
        if (99 < *(int *)(lVar6 + 0x10)) {
          uVar2 = func_0x00a67b44(_EventContest_TypeInfo);
          EventContest___ctor(uVar2,0);
          *(undefined8 *)(lVar6 + 0x50) = uVar2;
          *(undefined8 *)(lVar6 + 0x60) = 0;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((((Menu.KECGFPHIEHF == 0) ||
               (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
              (lVar4 = *(long *)(lVar4 + 0x70), lVar4 == 0)) ||
             (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_00c41254;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          if ((uVar3 & 1) != 0) {
            Level__HMPEMADOAAL(lVar6);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = Main.<statics>;
            lVar5 = *(long *)(lVar4 + 0x40);
            if (lVar5 != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
                lVar4 = Main.<statics>;
                lVar5 = *(long *)(lVar4 + 0x40);
                if (lVar5 == 0) goto LAB_00c41254;
              }
              if (99 < *(int *)(lVar5 + 0x10)) {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar4 = Main.<statics>;
                }
                if (*(long *)(lVar4 + 0x40) == lVar6) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0))
                  goto LAB_00c41254;
                  GUIGarage__PGEEGDGGHLL(lVar4,lVar6,0,0);
                }
              }
            }
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_00c41254:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public static void MDGLEPOJOAM(Level GDJDPNDHBNN) { }   @0xb4125c

/* WARNING: Removing unreachable block (ram,0x00c16680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MDGLEPOJOAM(void *GDJDPNDHBNN)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  void *CIDKMFLFJEJ;
  long *plVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 extraout_s0;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long *in_stack_ffffffffffffffc8;
  
  if ((bRam000000000191712d & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_Fail_SetEventReward__);
    bRam000000000191712d = 1;
  }
  if (GDJDPNDHBNN == (void *)0x0) goto LAB_00c417c0;
  if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) {
    plVar9 = (long *)System_String__Concat(_Str_Fail_SetEventReward__,0,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
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
    UnityEngine_Debug__LogError(plVar9,0);
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
    if (lVar4 == 0) {
LAB_00c5d818:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar13 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c5d818;
    uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) || (plVar9 == (long *)0x0)) goto LAB_00c5d818;
    lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    uVar13 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    if (lVar4 == 0) goto LAB_00c5d818;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar13,1,0);
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
    plVar9 = *(long **)(lVar4 + 0x1e8);
    if ((plVar9 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)),
       lVar10 == 0)) goto LAB_00c16768;
    if (10000 < *(int *)(lVar10 + 0x10)) {
      if (*(long *)(lVar4 + 0x1e8) == 0) goto LAB_00c16768;
      uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1e8),0);
      if ((*(long *)(lVar4 + 0x1e8) == 0) ||
         (lVar10 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1e8),0), lVar10 == 0))
      goto LAB_00c16768;
      uVar3 = UnityEngine_Transform__get_parent(lVar10,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar10 = UnityEngine_Object__Instantiate_object_
                         (uVar6,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar10 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar10,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___
                );
      *(long **)(lVar4 + 0x1e8) = in_stack_ffffffffffffffc8;
      if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x5a8))
                (in_stack_ffffffffffffffc8,_Str_,*(undefined8 *)(*in_stack_ffffffffffffffc8 + 0x5b0)
                );
    }
    plVar9 = *(long **)(lVar4 + 0x1e8);
    lVar4 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar9 != (long *)0x0) &&
       (uVar6 = (**(code **)(*plVar9 + 0x598))(plVar9,*(undefined8 *)(*plVar9 + 0x5a0)), lVar4 != 0)
       ) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((uVar1 != 0) &&
         (((*(undefined8 *)(lVar4 + 0x20) = uVar6, uVar1 != 1 &&
           (*(undefined8 *)(lVar4 + 0x28) = _Str__color_, 2 < uVar1)) &&
          (*(undefined8 *)(lVar4 + 0x30) = _Str__FF4E4A, uVar1 != 3)))) {
        *(undefined8 *)(lVar4 + 0x38) = _Str___;
        uVar14 = UnityEngine_Time__get_time(0);
        _uStack_40 = CONCAT44(uVar14,uStack_40);
        uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
        uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (((4 < uVar1) && (*(undefined8 *)(lVar4 + 0x40) = uVar6, uVar1 != 5)) &&
           (*(undefined8 *)(lVar4 + 0x48) = _Str____color___, 6 < uVar1)) {
          *(undefined8 *)(lVar4 + 0x50) = uVar13;
          uVar13 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x58) = uVar13;
            uVar13 = System_String__Concat(lVar4,0);
            (**(code **)(*plVar9 + 0x5a8))(plVar9,uVar13,*(undefined8 *)(*plVar9 + 0x5b0));
            return;
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
  if (0 < *(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10)) {
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
    if ((*(long *)((long)GDJDPNDHBNN + 0x58) == 0) ||
       (lVar4 = Main.FBDDKIOEKDM, lVar4 == 0)) goto LAB_00c417c0;
    lVar4 = DAFNMLEKHAD__DKJLCJPBPPN
                      (lVar4,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10),0,0);
    if (lVar4 == 0) {
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
      if ((*(long *)((long)GDJDPNDHBNN + 0x58) == 0) ||
         (lVar4 = Main.FBDDKIOEKDM, lVar4 == 0)) goto LAB_00c417c0;
      DAFNMLEKHAD__NODNJNKEFKM
                (lVar4,0,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x10),0);
    }
  }
  lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
  if (lVar4 == 0) goto LAB_00c417c0;
  if (0 < *(int *)(lVar4 + 0x18)) {
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
    pvVar12 = Main.FBDDKIOEKDM;
    if (pvVar12 == (void *)0x0) goto LAB_00c417c0;
    iVar2 = DAFNMLEKHAD__HPDEBBJNCIK(pvVar12,0);
    if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) goto LAB_00c417c0;
    DAFNMLEKHAD__DIMKKHJDHFJ(pvVar12,*(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x18) + iVar2);
    lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
    if (lVar4 == 0) goto LAB_00c417c0;
  }
  if (0 < *(int *)(lVar4 + 0x14)) {
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
    if (lVar4 == 0) goto LAB_00c417c0;
    iVar2 = DAFNMLEKHAD__LOCFCFJIAIH(lVar4,0);
    if (*(long *)((long)GDJDPNDHBNN + 0x58) == 0) goto LAB_00c417c0;
    DAFNMLEKHAD__JLEEMPONONF(lVar4,*(int *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x14) + iVar2,0);
    lVar4 = *(long *)((long)GDJDPNDHBNN + 0x58);
    if (lVar4 == 0) goto LAB_00c417c0;
  }
  if (0 < *(int *)(lVar4 + 0x1c)) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c417c0;
    uVar13 = Menu.KECGFPHIEHF.LCCECGFFBGC;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) || (*(long *)((long)GDJDPNDHBNN + 0x58) == 0))
         || (lVar4 = Menu.KECGFPHIEHF.LCCECGFFBGC, lVar4 == 0))
      goto LAB_00c417c0;
      FuelManager__PNAAGCJLMLB
                (lVar4,*(undefined4 *)(*(long *)((long)GDJDPNDHBNN + 0x58) + 0x1c),0,0);
    }
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  SoundScript__GIGBLEBBIEK(SoundScript.CIMAPDEBGGG);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c417c0;
  uVar13 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = _Method_System_Array_Empty_object___;
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c417c0;
    lVar11 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
    lVar10 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
    if (lVar10 == 0) {
      func_0x00a9e42c(_Method_System_Array_Empty_object___);
      lVar10 = *(long *)(lVar4 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = func_0x00a9e3d0();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = func_0x00a9e3d0();
    }
    if (lVar11 == 0) goto LAB_00c417c0;
    BridgePHP__StartServerConnect(lVar11,3,**(undefined8 **)(lVar4 + 0xb8),0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) {
LAB_00c417c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) goto LAB_00c417c0;
  uVar13 = *(undefined8 *)(lVar4 + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF == 0) ||
      (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)) goto LAB_00c417c0;
  if ((bRam0000000001917128 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917128 = 1;
  }
  if ((*(long *)(lVar4 + 0xc0) == 0) ||
     (lVar10 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0xc0),0), lVar10 == 0)) {
LAB_00c40910:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar10,0,0);
  if (*(long *)(lVar4 + 0xb8) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 0xb8),1,0);
  if (*(long *)(lVar4 + 200) == 0) goto LAB_00c40910;
  UnityEngine_GameObject__SetActive(*(long *)(lVar4 + 200),1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = Main__KCHOEBEIOCE(0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar10 = Menu.KECGFPHIEHF;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0)) goto LAB_00c40910;
  if (*(char *)(*(long *)(lVar10 + 0x58) + 0x30) == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar10 = Menu.KECGFPHIEHF;
    if (lVar10 == 0) goto LAB_00c40910;
  }
  pvVar12 = *(void **)(lVar10 + 0x58);
  if (pvVar12 == (void *)0x0) goto LAB_00c40910;
  plVar9 = *(long **)(lVar4 + 0xb8);
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___,plVar9,0);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&MLCNINCNANA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SetButton__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str_lvl_);
    bRam00000000019171a4 = 1;
  }
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(plVar9,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c55ff4;
  uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x150), lVar4 == 0)) ||
       (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) goto LAB_00c55ff4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(pvVar12);
  uVar13 = _Str_SetButton__;
  if (plVar9 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  }
  uVar3 = _Str___last__;
  plVar7 = *(long **)((long)pvVar12 + 0x38);
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(uVar13,uVar6,uVar3,uVar8,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  *(long **)((long)pvVar12 + 0x38) = plVar9;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar13 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar4 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar4,plVar9,0);
  uVar14 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)pvVar12 + 0x58) = uVar14;
  if (*(long *)((long)pvVar12 + 0x28) == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (*(long *)((long)pvVar12 + 0x28),&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar4 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar4,0);
        *(long *)((long)pvVar12 + 0x20) = lVar4;
        if ((lVar4 == 0) || (*(long **)(lVar4 + 0x10) = plVar9, plVar9 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar13 = UnityEngine_Object__get_name(plVar9,0);
        uVar5 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar4 + 0x10),0);
        if ((uVar5 & 1) != 0) {
          if (lVar10 == 0) goto LAB_00c55ff4;
          lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
        }
        *(long *)(lVar4 + 0x20) = lVar10;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar4 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar4 + 0x18) = plStack_a8;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar4 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar4 + 0x28) = plStack_a8;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) ||
           (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar4 + 0x20),0), lVar10 == 0))
        goto LAB_00c55ff4;
        uVar5 = System_String__Contains(lVar10,_Str_lvl_,0);
        uVar19 = 0x3f800000;
        uVar17 = 0x3f800000;
        uVar14 = 0x3f800000;
        if ((uVar5 & 1) == 0) {
          if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
             (lVar10 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x20), lVar10 == 0))
          goto LAB_00c55ff4;
          uVar14 = UnityEngine_Transform__get_localScale(lVar10,0);
        }
        *(undefined4 *)(lVar4 + 0x30) = uVar14;
        *(undefined4 *)(lVar4 + 0x34) = uVar17;
        *(undefined4 *)(lVar4 + 0x38) = uVar19;
        lVar4 = *(long *)((long)pvVar12 + 0x20);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar13 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar4 + 0x28),0);
        *(undefined4 *)(lVar4 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar4 + 0x40) = uVar17;
        uVar5 = GamePadController__PJOJJBEIFAE(uVar13,*(undefined8 *)((long)pvVar12 + 0x20));
        if ((uVar5 & 1) == 0) {
          lVar4 = *(long *)((long)pvVar12 + 0x20);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar14 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar4 + 0x28),0);
          *(undefined4 *)(lVar4 + 0x44) = uVar14;
          *(undefined4 *)(lVar4 + 0x48) = uVar17;
        }
        if (*(long *)((long)pvVar12 + 0x28) == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(*(long *)((long)pvVar12 + 0x28),*(undefined8 *)((long)pvVar12 + 0x20),
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar4 = lStack_78;
    } while (lStack_78 == 0);
    uVar13 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar13,plVar9,0);
  } while ((uVar5 & 1) == 0);
  *(long *)((long)pvVar12 + 0x20) = lVar4;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (*(long *)((long)pvVar12 + 0x20) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28);
  if (lVar4 == 0) goto LAB_00c55ff4;
  fVar15 = (float)UnityEngine_RectTransform__get_pivot(lVar4,0);
  fVar18 = 0.5;
  if (fVar15 == 0.5) {
    if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28), lVar4 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar4,0);
    if (fVar18 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x28), lVar4 == 0)) goto LAB_00c55ff4;
    fVar15 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar4,0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if ((lVar4 == 0) || (lVar10 = *(long *)(lVar4 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
    fVar20 = *(float *)(lVar4 + 0x44);
    fVar18 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar22 = *(float *)(lVar4 + 0x3c);
    fVar24 = *(float *)(lVar4 + 0x30);
    fVar23 = *(float *)(lVar4 + 0x44);
    fVar21 = *(float *)(lVar4 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar4 + 0x28),0);
    lVar4 = *(long *)((long)pvVar12 + 0x20);
    if (lVar4 == 0) goto LAB_00c55ff4;
    fVar16 = ABS(fVar22 + -0.5);
    fVar22 = fVar18 * fVar16;
    if (fVar23 < 0.0) {
      fVar22 = -(fVar18 * fVar16);
    }
    fVar23 = ABS(*(float *)(lVar4 + 0x40) + -0.5);
    fVar18 = fVar15 * fVar23;
    if (*(float *)(lVar4 + 0x48) < 0.0) {
      fVar18 = -(fVar15 * fVar23);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar20 + ABS(fVar24) * fVar22,fVar21 + ABS(*(float *)(lVar4 + 0x34)) * fVar18,lVar10,
               0);
  }
  if ((*(long *)((long)pvVar12 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x10), lVar4 != 0)) {
    uVar13 = UnityEngine_Object__get_name(lVar4,0);
    uVar5 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)((long)pvVar12 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)((long)pvVar12 + 0x20) + 0x20), lVar4 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar5 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (*(undefined4 *)((long)pvVar12 + 0x6c),*(undefined4 *)((long)pvVar12 + 0x70),
                   *(undefined4 *)((long)pvVar12 + 0x74),*(undefined4 *)((long)pvVar12 + 0x78),
                   plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MKACNHEOJKP(GUIRating BKBKLJKDINA, bool FJDCALHGHCI, int CGBCBOKAMBP = -1) { }   @0xb417c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MKACNHEOJKP
               (void *__this,void *BKBKLJKDINA,bool FJDCALHGHCI,int CGBCBOKAMBP)

{
  long *plVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (BKBKLJKDINA != (void *)0x0) {
    plVar1 = *(long **)((long)BKBKLJKDINA + 0x20);
    if (FJDCALHGHCI) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                   *(undefined8 *)(*plVar1 + 0x2b0));
        if (*(long *)((long)BKBKLJKDINA + 0x20) != 0) {
          UnityEngine_Behaviour__set_enabled(*(long *)((long)BKBKLJKDINA + 0x20),1,0);
          plVar1 = *(long **)((long)BKBKLJKDINA + 0x50);
          if (plVar1 != (long *)0x0) {
            plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
            plVar4 = *(long **)((long)BKBKLJKDINA + 0x38);
            plVar5 = *(long **)((long)BKBKLJKDINA + 0x60);
            (**(code **)(*plVar1 + 0x2a8))(0,0,0,0x3f800000,plVar1,*(undefined8 *)(*plVar1 + 0x2b0))
            ;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x2a8))
                        (0,0,0,0x3f800000,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x2a8))
                          (0,0,0,0x3f800000,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x2a8))
                            (0,0,0,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
                  plVar1 = *(long **)((long)BKBKLJKDINA + 0x40);
                  if (plVar1 != (long *)0x0) {
                    uVar6 = 0x3f000000;
                    uVar7 = 0x3f000000;
                    uVar8 = 0x3f000000;
                    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2a8);
                    uVar2 = *(undefined8 *)(*plVar1 + 0x2b0);
LAB_00c419fc:
                    /* WARNING: Could not recover jumptable at 0x00c41a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar7,uVar8,0x3f800000,plVar1,uVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))
                (this.GBJMIAIFGLJ,*(undefined4 *)((long)__this + 0xe4),
                 *(undefined4 *)((long)__this + 0xe8),*(undefined4 *)((long)__this + 0xec),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      if (*(long *)((long)BKBKLJKDINA + 0x20) != 0) {
        UnityEngine_Behaviour__set_enabled
                  (*(long *)((long)BKBKLJKDINA + 0x20),(CGBCBOKAMBP & 1U) == 0,0);
        plVar1 = *(long **)((long)BKBKLJKDINA + 0x50);
        if (plVar1 != (long *)0x0) {
          plVar3 = *(long **)((long)BKBKLJKDINA + 0x28);
          plVar4 = *(long **)((long)BKBKLJKDINA + 0x38);
          plVar5 = *(long **)((long)BKBKLJKDINA + 0x60);
          (**(code **)(*plVar1 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar1,
                     *(undefined8 *)(*plVar1 + 0x2b0));
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar5,
                       *(undefined8 *)(*plVar5 + 0x2b0));
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar4,
                         *(undefined8 *)(*plVar4 + 0x2b0));
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,
                           *(undefined8 *)(*plVar3 + 0x2b0));
                plVar1 = *(long **)((long)BKBKLJKDINA + 0x40);
                if (plVar1 != (long *)0x0) {
                  uVar6 = 0x3f4ccccd;
                  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x2a8);
                  uVar2 = *(undefined8 *)(*plVar1 + 0x2b0);
                  uVar7 = 0x3f4ccccd;
                  uVar8 = 0x3f4ccccd;
                  goto LAB_00c419fc;
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


// ==== public void MLPOBPBMBHG() { }   @0xb41a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__MLPOBPBMBHG(void *__this)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_24;
  
  if ((bRam000000000191712e & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_);
    bRam000000000191712e = 1;
  }
  if (*(int *)((long)_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((*(char *)(*(long *)((long)_BridgePHP_TypeInfo + 0xb8) + 0x40) == '\0') &&
      (pvVar1 = RatingEventController__JGMFIPCELEF(_BridgePHP_TypeInfo), pvVar1 != (void *)0x0)) &&
     (*(long *)((long)pvVar1 + 0x30) != 0)) {
    RatingEventController__HIPELCKHJCI(pvVar1,this.JMBBOICFJDG);
    RatingEventController__PLCDDDDLCBB(__this,0);
    plVar3 = this.CLNELCOGGKC;
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_24 = *(undefined4 *)((long)pvVar1 + 0x18);
    lVar4 = Translate.KECGFPHIEHF;
    uVar2 = System_Int32__ToString(&uStack_24,0);
    uVar2 = System_String__Concat(_Str_EVENT_,uVar2,0);
    if ((lVar4 != 0) && (uVar2 = Translate__JJJNIPAKLJF(uVar2,uVar2), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
      if (this.LAOKHJKJHED != 0) {
        UnityEngine_UI_Selectable__set_interactable(this.LAOKHJKJHED,1,0);
        if ((this.LAOKHJKJHED != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject(this.LAOKHJKJHED,0),
           lVar4 != 0)) {
          UnityEngine_GameObject__SetActive(lVar4,1,0);
          if (this.BDNNGFOIGBC != 0) {
            UnityEngine_GameObject__SetActive(this.BDNNGFOIGBC,0,0);
            if (this.EJPMMKDMPMF != 0) {
              UnityEngine_GameObject__SetActive(this.EJPMMKDMPMF,0,0);
              if (*(long *)((long)__this + 200) != 0) {
                UnityEngine_GameObject__SetActive(*(long *)((long)__this + 200),0,0);
                if ((this.LAANMPDMDEI != 0) &&
                   (lVar4 = UnityEngine_Component__get_gameObject(this.LAANMPDMDEI,0),
                   lVar4 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar4,0,0);
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF != 0) &&
                      (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
                     (lVar4 = *(long *)(lVar4 + 0x170), lVar4 != 0)) {
                    GUIWindow__HEGIHOAJOKK(lVar4,1,0);
                    return;
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


// ==== public void PLCDDDDLCBB(bool OCNNIGPFPHM) { }   @0xb41c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__PLCDDDDLCBB(void *__this,bool OCNNIGPFPHM)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long *plVar17;
  char cVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined4 uStack_ac;
  void *pvStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  
  pvStack_88 = __this;
  acStack_7c[0] = OCNNIGPFPHM;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar16 = pvStack_88;
  if (OCNNIGPFPHM) {
    if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
      return;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Main.NMDEEOMHAGP == 0) {
      return;
    }
    lVar20 = *(long *)((long)pvVar16 + 0x78);
    lVar15 = *(long *)((long)pvVar16 + 0xd0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar9 = _Main_TypeInfo;
    lVar14 = Main.NMDEEOMHAGP;
    if ((lVar14 == 0) || (lVar15 == 0)) goto LAB_00c429d8;
    uVar8 = *(int *)(lVar14 + 0x10) - 100;
    if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar17 = *(long **)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_CarReplay_TypeInfo);
      lVar9 = _Main_TypeInfo;
      lVar14 = Main.NMDEEOMHAGP;
      CarReplay.LHNOLEHPJON = 0;
      if (lVar14 == 0) goto LAB_00c429d8;
    }
    else {
      CarReplay.LHNOLEHPJON = 0;
    }
    lVar15 = *(long *)(lVar14 + 0x50);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x00a67a30();
      if (lVar15 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
      lVar15 = Main.NMDEEOMHAGP;
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x50), lVar15 == 0)) goto LAB_00c429d8;
      uVar8 = EventContest__get_sort(lVar15,0);
      lVar15 = Main.NMDEEOMHAGP;
      if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x50), lVar15 == 0)) goto LAB_00c429d8;
      uStack_ac = *(undefined4 *)(lVar15 + 0x18);
    }
    else {
      if (lVar15 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
      Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
      uVar8 = 0;
      uStack_ac = 0;
    }
    pvVar16 = pvStack_88;
    RatingEventController__HPAFDOMPACP(pvStack_88);
  }
  else {
    lVar20 = *(long *)((long)pvStack_88 + 0x90);
    lVar15 = RatingEventController__JGMFIPCELEF();
    if (lVar15 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__GEMDEAMAGPG(_Str_Error_in_FillRating__2,0,0);
      uVar8 = 0;
      plVar17 = (long *)0x0;
      uStack_ac = 0;
      pvVar16 = pvStack_88;
    }
    else {
      plVar17 = *(long **)(lVar15 + 0x30);
      uVar8 = EventContest__get_sort(lVar15,0);
      uStack_ac = *(undefined4 *)(lVar15 + 0x18);
      pvVar16 = pvStack_88;
    }
  }
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar10 = System_Boolean__ToString(acStack_7c,0);
  uVar7 = _Str_FillRating__;
  uVar12 = _Str___good_rating__;
  if (plVar17 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
  }
  uVar12 = System_String__Concat(uVar7,uVar10,uVar12,uVar11,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar12,0,0);
  if (plVar17 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar16 + 0x70);
    pvStack_a8 = (void *)0x0;
    puStack_a0 = (undefined8 *)((long)pvVar16 + 0xb0);
    uVar19 = 0;
    uStack_80 = uVar8;
    cVar18 = acStack_7c[0];
    do {
      if (cVar18 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar16,uVar19 & 0xffffffff,(int)plVar17[3]);
      }
      cVar18 = acStack_7c[0];
      if ((long)uVar19 < (long)(int)*(uint *)(plVar17 + 3)) {
        if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
        if ((plVar17[uVar19 + 4] != 0) && (*(int *)(plVar17[uVar19 + 4] + 0x10) != -2)) {
          ppuVar6 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar6 = &puStack_98;
          }
          uVar12 = **ppuVar6;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar15 = UnityEngine_Object__Instantiate_object_
                             (lVar20,uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar15 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar15,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar9 = lStack_78;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar17[uVar19 + 4] + 0x10);
          plVar21 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar15;
          if (*piVar1 == -1) {
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar15 = *plVar21;
            uVar12 = _Str__100;
          }
          else {
            uVar12 = System_Int32__ToString(piVar1,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar15 = *plVar21;
          }
          (**(code **)(lVar15 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(lVar15 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) ||
             (lVar15 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar15 == 0))
          goto LAB_00c429d8;
          uVar12 = BridgePHP__GetCountryTextureFromID
                             (lVar15,*(undefined4 *)(plVar17[uVar19 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar13 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(lVar9 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar9 + 0x30),uVar12,0);
          }
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if ((plVar17[uVar19 + 4] == 0) ||
             (plVar21 = *(long **)(lVar9 + 0x38), plVar21 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))
                    (plVar21,*(undefined8 *)(plVar17[uVar19 + 4] + 0x28),
                     *(undefined8 *)(*plVar21 + 0x5b0));
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
          plVar21 = *(long **)(lVar9 + 0x40);
          uVar12 = Car__DBJBMIGLBNF(*(undefined4 *)(plVar17[uVar19 + 4] + 0x1c),0);
          if (plVar21 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          uVar5 = uVar8 - 1;
          if (uVar8 < 2) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar9 + 0x50);
            uVar3 = *(undefined4 *)(plVar17[uVar19 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar12 = Main__HIIJGDANAIK(uVar3,uStack_ac,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar9 + 0x60);
            uVar3 = *(undefined4 *)(plVar17[uVar19 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar12 = Main__CHJONPOFGFA(uVar3,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar12,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          pvVar16 = pvStack_88;
          if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
          if (plVar17[uVar19 + 4] == 0) goto LAB_00c429d8;
          iVar4 = *(int *)(plVar17[uVar19 + 4] + 0x18);
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
          if (lVar15 == 0) goto LAB_00c429d8;
          if (iVar4 == *(int *)(lVar15 + 0x10)) {
            if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_00c429dc;
            pvStack_a8 = (void *)plVar17[uVar19 + 4];
            RatingEventController__MKACNHEOJKP(pvVar16,lVar9,1,uVar19 & 0xffffffff);
            uVar8 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              CarReplay.LHNOLEHPJON = pvStack_a8;
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
              lVar15 = Main.NMDEEOMHAGP;
              if ((lVar15 == 0) ||
                 (lVar14 = Main.FBDDKIOEKDM, lVar14 == 0))
              goto LAB_00c429d8;
              lVar15 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar14,*(undefined4 *)(lVar15 + 0x10),0);
              uVar8 = uStack_80;
              if (lVar15 != 0) {
                DJKGLJOCFCE__GEBLPKOKIDF(lVar15,1,0);
                uVar8 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar16,lVar9,0,uVar19 & 0xffffffff);
            uVar8 = uStack_80;
          }
          uStack_80 = uVar8;
          cVar18 = acStack_7c[0];
          if (uVar19 == 0) {
            if (uVar5 < 2) {
              if ((*(long *)(lVar9 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar9,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar8 == 1) {
                if ((*(long *)(lVar9 + 0x60) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x60),0),
                   lVar20 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar9 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar20 = lStack_78;
                if (((*(long *)(lVar9 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar9 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar20,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00c429d8;
                  lVar20 = *(long *)(lVar9 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar22 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar9 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar9 + 0x48),0),
                     lVar20 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar22 + -86.0,lVar20,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar9 + 0x58) == 0) ||
                       (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x58),0),
                       lVar20 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar20,0,0);
                  }
                }
                if (*(long *)((long)pvVar16 + 0x68) == 0) goto LAB_00c429d8;
                lVar20 = *(long *)((long)pvVar16 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar16 + 0x68),0);
                if (lVar20 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar20,0);
                if (*(long *)((long)pvVar16 + 0x68) == 0) goto LAB_00c429d8;
                lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x68),0);
                uVar8 = uStack_80;
              }
              else {
                if (uVar8 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar9 + 0x50) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x50),0),
                   lVar20 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if ((*(long *)((long)pvVar16 + 0x60) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar16 + 0x60),0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,0,0);
                if ((*(long *)((long)pvVar16 + 0x68) == 0) ||
                   (lVar20 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar16 + 0x68),0), lVar20 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar20,1,0);
                lVar20 = lStack_90;
                cVar18 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar9 + 0x48) == 0) goto LAB_00c429d8;
                lVar20 = UnityEngine_Component__get_gameObject(*(long *)(lVar9 + 0x48),0);
              }
              if (lVar20 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,0,0);
            }
            else if (uVar8 == 0) {
              if ((*(long *)((long)pvVar16 + 0x68) == 0) ||
                 (lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x68),0),
                 lVar20 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,1,0);
              if ((*(long *)((long)pvVar16 + 0x60) == 0) ||
                 (lVar20 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar16 + 0x60),0),
                 lVar20 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar20,1,0);
              lVar20 = *(long *)((long)pvVar16 + 0x60);
              if (lVar20 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar20,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar20,0);
              uVar8 = uStack_80;
            }
LAB_00c426ec:
            lVar20 = lStack_90;
            cVar18 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar9 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar9 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar20 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar18 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x66);
    if ((cVar18 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar16,pvStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarReplay.LHNOLEHPJON == 0) {
        uVar12 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar20 = UnityEngine_Object__Instantiate_object_
                           (lVar20,uVar12,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar20 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar20,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar17 = *(long **)(lStack_78 + 0x28), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 0x5a8))(plVar17,_Str__,*(undefined8 *)(*plVar17 + 0x5b0));
          plVar17 = *(long **)(lStack_78 + 0x50);
          if (plVar17 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar8) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar17 + 0x5a8))(plVar17,*puVar2,*(undefined8 *)(*plVar17 + 0x5b0));
            plVar17 = *(long **)(lStack_78 + 0x60);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x5a8))(plVar17,_Str______,*(undefined8 *)(*plVar17 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF != 0) {
                lVar20 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
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
                if ((lVar15 != 0) && (lVar20 != 0)) {
                  uVar12 = BridgePHP__GetCountryTextureFromID
                                     (lVar20,*(undefined4 *)(lVar15 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar19 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                  if ((uVar19 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar12,0);
                  }
                  plVar17 = *(long **)(lStack_78 + 0x38);
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
                  lVar20 = Main.FBDDKIOEKDM;
                  if ((lVar20 != 0) && (plVar17 != (long *)0x0)) {
                    (**(code **)(*plVar17 + 0x5a8))
                              (plVar17,*(undefined8 *)(lVar20 + 0x20),
                               *(undefined8 *)(*plVar17 + 0x5b0));
                    plVar17 = *(long **)(lStack_78 + 0x40);
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(*plVar17 + 0x5a8))
                                (plVar17,_Str______,*(undefined8 *)(*plVar17 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== public void BEGHPCPPIBK(Level ACLJCGMKGNP, Replay[] LAHMEIEJLEN) { }   @0xb429e0

/* WARNING: Removing unreachable block (ram,0x00c41dc4) */
/* WARNING: Removing unreachable block (ram,0x00c41df4) */
/* WARNING: Removing unreachable block (ram,0x00c41e00) */
/* WARNING: Removing unreachable block (ram,0x00c41e04) */
/* WARNING: Removing unreachable block (ram,0x00c41dd4) */
/* WARNING: Removing unreachable block (ram,0x00c41e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__BEGHPCPPIBK(void *__this,void *ACLJCGMKGNP,void *LAHMEIEJLEN)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  char cVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uStack_ac;
  void *pvStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  void *pvStack_88;
  uint uStack_80;
  char acStack_7c [4];
  long lStack_78;
  
  if ((ACLJCGMKGNP == (void *)0x0) ||
     (uVar7 = *(int *)((long)ACLJCGMKGNP + 0x10) - 100, *(int *)((long)ACLJCGMKGNP + 0x10) < 100)) {
    return;
  }
  *(undefined8 *)((long)ACLJCGMKGNP + 0x60) = 0;
  plVar19 = this.PCFHJOFJFFJ;
  if (plVar19 == (long *)0x0) {
LAB_00c42ae0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((LAHMEIEJLEN != (void *)0x0) &&
     (lVar13 = func_0x00a67a34(LAHMEIEJLEN,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
    uVar11 = func_0x00a67b74();
    lVar13 = func_0x00a67a20(uVar11,0);
    if ((bRam000000000191712f & 1) == 0) {
      func_0x00a67900(&Replay_____TypeInfo);
      func_0x00a67900(&float___TypeInfo);
      bRam000000000191712f = 1;
    }
    uVar11 = func_0x00a679a0(_Replay_____TypeInfo,3);
    *(undefined8 *)(lVar13 + 0xd0) = uVar11;
    uVar11 = func_0x00a679a0(_float___TypeInfo,3);
    *(undefined8 *)(lVar13 + 0xd8) = uVar11;
    *(undefined8 *)(lVar13 + 0xe8) = 0x3e23d70a3f800000;
    *(undefined8 *)(lVar13 + 0xe0) = 0x3f8000003f800000;
    if ((bRam000000000191c370 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
      bRam000000000191c370 = 1;
    }
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    return;
  }
  if (*(uint *)(plVar19 + 3) <= uVar7) {
LAB_00c42ae4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar19[(ulong)uVar7 + 4] = (long)LAHMEIEJLEN;
  lVar13 = this.PFGOKOLBIOO;
  iVar3 = *(int *)((long)ACLJCGMKGNP + 0x10);
  uVar23 = UnityEngine_Time__get_time(0);
  if (lVar13 == 0) goto LAB_00c42ae0;
  uVar7 = iVar3 - 100;
  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_00c42ae4;
  *(undefined4 *)(lVar13 + (long)(int)uVar7 * 4 + 0x20) = uVar23;
  if (LAHMEIEJLEN == (void *)0x0) goto LAB_00c42ae0;
  iVar3 = *(int *)((long)LAHMEIEJLEN + 0x18);
  if (0 < iVar3) {
    iVar14 = 0;
    do {
      if (iVar3 == iVar14) goto LAB_00c42ae4;
      lVar13 = *(long *)((long)LAHMEIEJLEN + (long)iVar14 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_00c42ae0;
      if ((*(long *)(lVar13 + 0x38) != 0) && (0 < *(int *)(*(long *)(lVar13 + 0x38) + 0x10))) {
        *(long *)((long)ACLJCGMKGNP + 0x60) = lVar13;
      }
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  acStack_7c[0] = '\x01';
  pvStack_88 = __this;
  if ((bRam0000000001917132 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Error_in_FillRating__1);
    func_0x00a67900(&Str______);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_FillRating__);
    func_0x00a67900(&Str__100);
    func_0x00a67900(&Str_Error_in_FillRating__2);
    func_0x00a67900(&Str___good_rating__);
    func_0x00a67900(&Str_);
    bRam0000000001917132 = 1;
  }
  pvVar17 = pvStack_88;
  if (*(long *)((long)pvStack_88 + 0xd0) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Main.NMDEEOMHAGP == 0) {
    return;
  }
  lVar13 = *(long *)((long)pvVar17 + 0x78);
  lVar16 = *(long *)((long)pvVar17 + 0xd0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar8 = _Main_TypeInfo;
  lVar15 = Main.NMDEEOMHAGP;
  if ((lVar15 == 0) || (lVar16 == 0)) goto LAB_00c429d8;
  uVar7 = *(int *)(lVar15 + 0x10) - 100;
  if (*(uint *)(lVar16 + 0x18) <= uVar7) {
LAB_00c429dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  plVar19 = *(long **)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_CarReplay_TypeInfo);
    lVar8 = _Main_TypeInfo;
    lVar15 = Main.NMDEEOMHAGP;
    CarReplay.LHNOLEHPJON = 0;
    if (lVar15 == 0) goto LAB_00c429d8;
  }
  else {
    CarReplay.LHNOLEHPJON = 0;
  }
  lVar16 = *(long *)(lVar15 + 0x50);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x00a67a30();
    if (lVar16 == 0) goto LAB_00c41eb8;
LAB_00c41e64:
    lVar16 = Main.NMDEEOMHAGP;
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)) goto LAB_00c429d8;
    uVar7 = EventContest__get_sort(lVar16,0);
    lVar16 = Main.NMDEEOMHAGP;
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)) goto LAB_00c429d8;
    uStack_ac = *(undefined4 *)(lVar16 + 0x18);
  }
  else {
    if (lVar16 != 0) goto LAB_00c41e64;
LAB_00c41eb8:
    Main__GEMDEAMAGPG(_Str_Error_in_FillRating__1,0,0);
    uVar7 = 0;
    uStack_ac = 0;
  }
  pvVar17 = pvStack_88;
  RatingEventController__HPAFDOMPACP(pvStack_88);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = System_Boolean__ToString(acStack_7c,0);
  uVar6 = _Str_FillRating__;
  uVar11 = _Str___good_rating__;
  if (plVar19 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
  }
  uVar11 = System_String__Concat(uVar6,uVar9,uVar11,uVar10,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar11,0,0);
  if (plVar19 != (long *)0x0) {
    puStack_98 = (undefined8 *)((long)pvVar17 + 0x70);
    pvStack_a8 = (void *)0x0;
    puStack_a0 = (undefined8 *)((long)pvVar17 + 0xb0);
    uVar20 = 0;
    uStack_80 = uVar7;
    cVar18 = acStack_7c[0];
    do {
      if (cVar18 != '\0') {
        RatingEventController__AMNLEOOJDKP(pvVar17,uVar20 & 0xffffffff,(int)plVar19[3]);
      }
      cVar18 = acStack_7c[0];
      if ((long)uVar20 < (long)(int)*(uint *)(plVar19 + 3)) {
        if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
        if ((plVar19[uVar20 + 4] != 0) && (*(int *)(plVar19[uVar20 + 4] + 0x10) != -2)) {
          ppuVar5 = &puStack_a0;
          if (acStack_7c[0] != '\0') {
            ppuVar5 = &puStack_98;
          }
          uVar11 = **ppuVar5;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar16 = UnityEngine_Object__Instantiate_object_
                             (lVar13,uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar16 == 0) goto LAB_00c429d8;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar16,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
          lVar8 = lStack_78;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) || (lStack_78 == 0)) goto LAB_00c429d8;
          piVar1 = (int *)(plVar19[uVar20 + 4] + 0x10);
          plVar21 = *(long **)(lStack_78 + 0x28);
          lStack_90 = lVar16;
          if (*piVar1 == -1) {
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar16 = *plVar21;
            uVar11 = _Str__100;
          }
          else {
            uVar11 = System_Int32__ToString(piVar1,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            lVar16 = *plVar21;
          }
          (**(code **)(lVar16 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(lVar16 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c429d8;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) ||
             (lVar16 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar16 == 0))
          goto LAB_00c429d8;
          uVar11 = BridgePHP__GetCountryTextureFromID
                             (lVar16,*(undefined4 *)(plVar19[uVar20 + 4] + 0x20),0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar12 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar12 & 1) != 0) {
            if (*(long *)(lVar8 + 0x30) == 0) goto LAB_00c429d8;
            UnityEngine_UI_Image__set_sprite(*(long *)(lVar8 + 0x30),uVar11,0);
          }
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if ((plVar19[uVar20 + 4] == 0) ||
             (plVar21 = *(long **)(lVar8 + 0x38), plVar21 == (long *)0x0)) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))
                    (plVar21,*(undefined8 *)(plVar19[uVar20 + 4] + 0x28),
                     *(undefined8 *)(*plVar21 + 0x5b0));
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
          plVar21 = *(long **)(lVar8 + 0x40);
          uVar11 = Car__DBJBMIGLBNF(*(undefined4 *)(plVar19[uVar20 + 4] + 0x1c),0);
          if (plVar21 == (long *)0x0) goto LAB_00c429d8;
          (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          uVar4 = uVar7 - 1;
          if (uVar7 < 2) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar8 + 0x50);
            uVar23 = *(undefined4 *)(plVar19[uVar20 + 4] + 0x34);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = Main__HIIJGDANAIK(uVar23,uStack_ac,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          if ((uStack_80 | 2) == 2) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
            plVar21 = *(long **)(lVar8 + 0x60);
            uVar23 = *(undefined4 *)(plVar19[uVar20 + 4] + 0x30);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = Main__CHJONPOFGFA(uVar23,0);
            if (plVar21 == (long *)0x0) goto LAB_00c429d8;
            (**(code **)(*plVar21 + 0x5a8))(plVar21,uVar11,*(undefined8 *)(*plVar21 + 0x5b0));
          }
          pvVar17 = pvStack_88;
          if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
          if (plVar19[uVar20 + 4] == 0) goto LAB_00c429d8;
          iVar3 = *(int *)(plVar19[uVar20 + 4] + 0x18);
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
          lVar16 = Main.FBDDKIOEKDM;
          if (lVar16 == 0) goto LAB_00c429d8;
          if (iVar3 == *(int *)(lVar16 + 0x10)) {
            if (*(uint *)(plVar19 + 3) <= uVar20) goto LAB_00c429dc;
            pvStack_a8 = (void *)plVar19[uVar20 + 4];
            RatingEventController__MKACNHEOJKP(pvVar17,lVar8,1,uVar20 & 0xffffffff);
            uVar7 = uStack_80;
            if (acStack_7c[0] != '\0') {
              if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              CarReplay.LHNOLEHPJON = pvStack_a8;
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
              lVar16 = Main.NMDEEOMHAGP;
              if ((lVar16 == 0) ||
                 (lVar15 = Main.FBDDKIOEKDM, lVar15 == 0))
              goto LAB_00c429d8;
              lVar16 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar15,*(undefined4 *)(lVar16 + 0x10),0);
              uVar7 = uStack_80;
              if (lVar16 != 0) {
                DJKGLJOCFCE__GEBLPKOKIDF(lVar16,1,0);
                uVar7 = uStack_80;
              }
            }
          }
          else {
            RatingEventController__MKACNHEOJKP(pvVar17,lVar8,0,uVar20 & 0xffffffff);
            uVar7 = uStack_80;
          }
          uStack_80 = uVar7;
          cVar18 = acStack_7c[0];
          if (uVar20 == 0) {
            if (uVar4 < 2) {
              if ((*(long *)(lVar8 + 0x38) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x38),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x43eb0000,lStack_78,0,0);
              if (acStack_7c[0] == '\0') {
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (lVar8,&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                if (lStack_78 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x442f0000,lStack_78,0,0);
              }
              if (uVar7 == 1) {
                if ((*(long *)(lVar8 + 0x60) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x60),0),
                   lVar13 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c429d8;
                UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                          (*(long *)(lVar8 + 0x50),&lStack_78,
                           _Method_UnityEngine_Component_GetComponent_RectTransform___);
                lVar13 = lStack_78;
                if (((*(long *)(lVar8 + 0x60) == 0) ||
                    (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                               (*(long *)(lVar8 + 0x60),&lStack_78,
                                _Method_UnityEngine_Component_GetComponent_RectTransform___),
                    lStack_78 == 0)) ||
                   (UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(lVar13,0);
                if (acStack_7c[0] == '\0') {
                  if (*(long *)(lVar8 + 0x50) == 0) goto LAB_00c429d8;
                  lVar13 = *(long *)(lVar8 + 0x48);
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x50),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___);
                  if (lStack_78 == 0) goto LAB_00c429d8;
                  fVar22 = (float)UnityEngine_RectTransform__get_anchoredPosition(lStack_78,0);
                  if ((*(long *)(lVar8 + 0x48) == 0) ||
                     (UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar8 + 0x48),0),
                     lVar13 == 0)) goto LAB_00c429d8;
                  UnityEngine_RectTransform__set_anchoredPosition(fVar22 + -86.0,lVar13,0);
                  if (acStack_7c[0] == '\0') {
                    if ((*(long *)(lVar8 + 0x58) == 0) ||
                       (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x58),0),
                       lVar13 == 0)) goto LAB_00c429d8;
                    UnityEngine_GameObject__SetActive(lVar13,0,0);
                  }
                }
                if (*(long *)((long)pvVar17 + 0x68) == 0) goto LAB_00c429d8;
                lVar13 = *(long *)((long)pvVar17 + 0x60);
                UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)pvVar17 + 0x68),0);
                if (lVar13 == 0) goto LAB_00c429d8;
                UnityEngine_RectTransform__set_anchoredPosition(0xc3050000,lVar13,0);
                if (*(long *)((long)pvVar17 + 0x68) == 0) goto LAB_00c429d8;
                lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x68),0);
                uVar7 = uStack_80;
              }
              else {
                if (uVar7 != 2) goto LAB_00c426ec;
                if ((*(long *)(lVar8 + 0x50) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x50),0),
                   lVar13 == 0)) goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if ((*(long *)((long)pvVar17 + 0x60) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar17 + 0x60),0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,0,0);
                if ((*(long *)((long)pvVar17 + 0x68) == 0) ||
                   (lVar13 = UnityEngine_Component__get_gameObject
                                       (*(long *)((long)pvVar17 + 0x68),0), lVar13 == 0))
                goto LAB_00c429d8;
                UnityEngine_GameObject__SetActive(lVar13,1,0);
                lVar13 = lStack_90;
                cVar18 = '\x01';
                if (acStack_7c[0] != '\0') goto LAB_00c423e4;
                if (*(long *)(lVar8 + 0x48) == 0) goto LAB_00c429d8;
                lVar13 = UnityEngine_Component__get_gameObject(*(long *)(lVar8 + 0x48),0);
              }
              if (lVar13 == 0) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,0,0);
            }
            else if (uVar7 == 0) {
              if ((*(long *)((long)pvVar17 + 0x68) == 0) ||
                 (lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x68),0),
                 lVar13 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,1,0);
              if ((*(long *)((long)pvVar17 + 0x60) == 0) ||
                 (lVar13 = UnityEngine_Component__get_gameObject(*(long *)((long)pvVar17 + 0x60),0),
                 lVar13 == 0)) goto LAB_00c429d8;
              UnityEngine_GameObject__SetActive(lVar13,1,0);
              lVar13 = *(long *)((long)pvVar17 + 0x60);
              if (lVar13 == 0) goto LAB_00c429d8;
              UnityEngine_RectTransform__get_anchoredPosition(lVar13,0);
              UnityEngine_RectTransform__set_anchoredPosition(0xc3820000,lVar13,0);
              uVar7 = uStack_80;
            }
LAB_00c426ec:
            lVar13 = lStack_90;
            cVar18 = acStack_7c[0];
            if (acStack_7c[0] == '\0') {
              if ((*(long *)(lVar8 + 0x20) == 0) ||
                 (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (*(long *)(lVar8 + 0x20),&lStack_78,
                             _Method_UnityEngine_Component_GetComponent_RectTransform___),
                 lVar13 = lStack_90, lStack_78 == 0)) goto LAB_00c429d8;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(0x44688000,lStack_78,0,0);
              cVar18 = acStack_7c[0];
            }
          }
        }
      }
LAB_00c423e4:
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x66);
    if ((cVar18 != '\0') ||
       (RatingEventController__IDANHAOJLGJ(pvVar17,pvStack_a8), acStack_7c[0] != '\0')) {
      if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarReplay.LHNOLEHPJON == 0) {
        uVar11 = *puStack_98;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar13 = UnityEngine_Object__Instantiate_object_
                           (lVar13,uVar11,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (((lVar13 != 0) &&
            (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                       (lVar13,&lStack_78,_Method_UnityEngine_GameObject_GetComponent_GUIRating___),
            lStack_78 != 0)) && (plVar19 = *(long **)(lStack_78 + 0x28), plVar19 != (long *)0x0)) {
          (**(code **)(*plVar19 + 0x5a8))(plVar19,_Str__,*(undefined8 *)(*plVar19 + 0x5b0));
          plVar19 = *(long **)(lStack_78 + 0x50);
          if (plVar19 != (long *)0x0) {
            puVar2 = (undefined8 *)&Str______;
            if (1 < uVar7) {
              puVar2 = (undefined8 *)&Str_;
            }
            (**(code **)(*plVar19 + 0x5a8))(plVar19,*puVar2,*(undefined8 *)(*plVar19 + 0x5b0));
            plVar19 = *(long **)(lStack_78 + 0x60);
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x5a8))(plVar19,_Str______,*(undefined8 *)(*plVar19 + 0x5b0));
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF != 0) {
                lVar13 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
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
                lVar16 = Main.FBDDKIOEKDM;
                if ((lVar16 != 0) && (lVar13 != 0)) {
                  uVar11 = BridgePHP__GetCountryTextureFromID
                                     (lVar13,*(undefined4 *)(lVar16 + 0x14),0);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar20 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                  if ((uVar20 & 1) != 0) {
                    if (*(long *)(lStack_78 + 0x30) == 0) goto LAB_00c429d8;
                    UnityEngine_UI_Image__set_sprite(*(long *)(lStack_78 + 0x30),uVar11,0);
                  }
                  plVar19 = *(long **)(lStack_78 + 0x38);
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
                  if ((lVar13 != 0) && (plVar19 != (long *)0x0)) {
                    (**(code **)(*plVar19 + 0x5a8))
                              (plVar19,*(undefined8 *)(lVar13 + 0x20),
                               *(undefined8 *)(*plVar19 + 0x5b0));
                    plVar19 = *(long **)(lStack_78 + 0x40);
                    if (plVar19 != (long *)0x0) {
                      (**(code **)(*plVar19 + 0x5a8))
                                (plVar19,_Str______,*(undefined8 *)(*plVar19 + 0x5b0));
                      RatingEventController__MKACNHEOJKP(pvStack_88,lStack_78,1,0xffffffff);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LAB_00c429d8:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xb42af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam000000000191712f & 1) == 0) {
    func_0x00a67900(&Replay_____TypeInfo);
    func_0x00a67900(&float___TypeInfo);
    bRam000000000191712f = 1;
  }
  uVar1 = func_0x00a679a0(_Replay_____TypeInfo,3);
  this.PCFHJOFJFFJ = uVar1;
  uVar1 = func_0x00a679a0(_float___TypeInfo,3);
  this.PFGOKOLBIOO = uVar1;
  *(undefined8 *)((long)__this + 0xe8) = 0x3e23d70a3f800000;
  this.GBJMIAIFGLJ = 0x3f8000003f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void ELGNLGIIIAJ(string LCEEABHFOLE) { }   @0xb42b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__ELGNLGIIIAJ(void *__this,void *LCEEABHFOLE)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_24 [4];
  
  if ((this.LAANMPDMDEI != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject(this.LAANMPDMDEI,0), lVar1 != 0))
  {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    plVar2 = this.LAANMPDMDEI;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5a8))(plVar2,LCEEABHFOLE,*(undefined8 *)(*plVar2 + 0x5b0));
      lVar1 = this.LAOKHJKJHED;
      if (lVar1 != 0) {
        if ((bRam000000000191ee9a & 1) == 0) {
          func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo,1,0);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
          bRam000000000191ee9a = 1;
        }
        auStack_24[0] = 1;
        uVar3 = UnityEngine_UI_SetPropertyUtility__SetStruct___Il2CppFullySharedGenericStructType_
                          ((char *)(lVar1 + 0xd8),auStack_24,
                           _Method_UnityEngine_UI_SetPropertyUtility_SetStruct_bool___);
        if ((uVar3 & 1) != 0) {
          if (*(char *)(lVar1 + 0xd8) == '\0') {
            if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar3 & 1) != 0) {
              if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
              if (lVar5 == 0) {
LAB_016bdcf8:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar6 = *(undefined8 *)(lVar5 + 0x40);
              uVar4 = UnityEngine_Component__get_gameObject(lVar1,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar4,0);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
                if (lVar5 == 0) goto LAB_016bdcf8;
                UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar5,0,0);
              }
            }
          }
          UnityEngine_UI_Selectable__OnSetProperty(lVar1);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JIGMJDHGBCJ() { }   @0xb42bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__JIGMJDHGBCJ(void *__this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam0000000001917131 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001917131 = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (this.PIGLJNICEDO != 0) {
    cVar1 = BridgePHP.is_loading;
    uVar2 = UnityEngine_GameObject__get_activeSelf(this.PIGLJNICEDO,0);
    if (cVar1 == '\0') {
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (this.PIGLJNICEDO != 0) {
        UnityEngine_GameObject__SetActive(this.PIGLJNICEDO,0,0);
        lVar3 = this.BDNNGFOIGBC;
        if (lVar3 != 0) {
          uVar8 = 0;
LAB_00c42dc0:
          if (pcRam000000000191c3f8 == (code *)0x0) {
            pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
          }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c3f8)(lVar3,uVar8);
          return;
        }
      }
    }
    else if ((uVar2 & 1) == 0) {
      if (this.PIGLJNICEDO != 0) {
        UnityEngine_GameObject__SetActive(this.PIGLJNICEDO,1,0);
        if (this.LAOKHJKJHED != 0) {
          if (*(char *)(this.LAOKHJKJHED + 0xd8) != '\0') {
            return;
          }
          lVar3 = this.BDNNGFOIGBC;
          if (lVar3 != 0) {
            uVar8 = 1;
            goto LAB_00c42dc0;
          }
        }
      }
    }
    else {
      uVar8 = this.LEFJDPLCJAP;
      fVar9 = *(float *)((long)__this + 0x38);
      if (cRam0000000001916e65 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e65 = '\x01';
      }
      uVar6 = *(undefined8 *)(UnityEngine_Vector3.<statics> + 0x48);
      fVar7 = *(float *)(UnityEngine_Vector3.<statics> + 0x50);
      fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
      lVar3 = this.BLBKMHDKFMD;
      lVar4 = this.EGHDNNPNLED;
      this.LEFJDPLCJAP =
           CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * -50.0 * fVar5,
                    (float)uVar8 + (float)uVar6 * -50.0 * fVar5);
      *(float *)((long)__this + 0x38) = fVar9 + fVar7 * -50.0 * fVar5;
      UnityEngine_Quaternion__Internal_FromEulerRad(0);
      if ((lVar4 != 0) && (UnityEngine_Transform__set_rotation(lVar4,0), lVar3 != 0)) {
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


// ==== public void ClaimReward() { }   @0xb42ddc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingEventController__ClaimReward(void *__this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__this_00;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001917134 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917134 = 1;
  }
  if (this.LAOKHJKJHED != 0) {
    UnityEngine_UI_Selectable__set_interactable(this.LAOKHJKJHED,0,0);
    if ((this.LAANMPDMDEI != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(this.LAANMPDMDEI,0), lVar1 != 0)
       ) {
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF != 0) {
        uVar5 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar1 = _Method_System_Array_Empty_object___;
        if (Menu.KECGFPHIEHF != 0) {
          __this_00 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
          lVar4 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
          if (lVar4 == 0) {
            func_0x00a9e42c(_Method_System_Array_Empty_object___);
            lVar4 = *(long *)(lVar1 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = func_0x00a9e3d0();
          }
          if (__this_00 != (void *)0x0) {
            uVar5 = **(undefined8 **)(lVar1 + 0xb8);
            if ((bRam0000000001916e14 & 1) == 0) {
              func_0x00a67900(&BridgePHP_TypeInfo,5,uVar5,0);
              func_0x00a67900(&Str_);
              bRam0000000001916e14 = 1;
            }
            if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = System_String__op_Inequality
                              (BridgePHP.sid,_Str_,0
                              );
            if ((uVar2 & 1) != 0) {
              if ((__this_00/*BridgePHP*/.server_coroutine != 0) &&
                 (__this_00/*BridgePHP*/.is_can_stop_coroutine != '\0')) {
                __this_00/*BridgePHP*/.wwwBridge = 0;
                BridgePHP__StopServerConnect(__this_00);
              }
              lVar1 = BridgePHP__ServerConnect(__this_00,5,uVar5);
              __this_00/*BridgePHP*/.server_coroutine = lVar1;
              if (lVar1 == 0) {
                func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
                uVar3 = func_0x00a67b44();
                uVar5 = func_0x00a67914(&Str_routine_is_null);
                System_NullReferenceException___ctor(uVar3,uVar5,0);
              }
              else {
                if (pcRam000000000191c478 == (code *)0x0) {
                  pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
                }
                uVar2 = (*pcRam000000000191c478)(__this_00);
                if ((uVar2 & 1) != 0) {
                  if (pcRam000000000191c488 == (code *)0x0) {
                    pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
                  }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191c488)(__this_00,lVar1);
                  return;
                }
                func_0x00a67914(&System_ArgumentException_TypeInfo);
                uVar3 = func_0x00a67b44();
                uVar5 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
                System_ArgumentException___ctor(uVar3,uVar5,0);
              }
              uVar5 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
              auVar6 = func_0x00a67a20(uVar3,uVar5);
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(auVar6._0_8_,auVar6._8_8_);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUICoins : MonoBehaviour // TypeDefIndex: 5107
{
	// Fields
	public GUICoins.EJHGCAJDPNC FHOFNGHGNGF; // 0x20
	public float ONEGFFJABBM; // 0x24
	public Text CIDKMFLFJEJ; // 0x28
	public RectTransform OONFFMIIIJN; // 0x30
	private float PCAMLKIMMPM; // 0x38
	private float KEAGDNFNNMC; // 0x3C
	private Vector3 EDPJENMOOGC; // 0x40
	private Color LJOLODBEIOB; // 0x4C
	private Color FDLIPDDFFMP; // 0x5C
	private bool DLCMLDLHLLC; // 0x6C

	// Methods

	public void ICMOCEHIFOI(int ALLBGCHDGNC) { }

	public void ICMOCEHIFOI() { }

	private void Update() { }

	public void LEOCFHHFANH() { }

	public void ICMOCEHIFOI(int ALLBGCHDGNC, Color EFOGAOHIGOE, float FACIBICJINE) { }

	private void Start() { }

	public void .ctor() { }
}
*/

// ==== public void ICMOCEHIFOI(int ALLBGCHDGNC) { }   @0xaf4ec0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI(void *__this,int ALLBGCHDGNC)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  int iStack_14;
  
  iStack_14 = ALLBGCHDGNC;
  uVar4 = UnityEngine_Time__get_time(0);
  this.PCAMLKIMMPM = uVar4;
  this.DLCMLDLHLLC = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  iVar1 = this.FHOFNGHGNGF;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      plVar3 = this.CIDKMFLFJEJ;
      auVar5 = NEON_fmov(0x3f800000,4);
      *(long *)((long)__this + 0x54) = auVar5._8_8_;
      this.LJOLODBEIOB = auVar5._0_8_;
      if (plVar3 == (long *)0x0) goto LAB_00bf4f9c;
      (**(code **)(*plVar3 + 0x2a8))
                (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      if (this.OONFFMIIIJN == 0) goto LAB_00bf4f9c;
      auVar5 = UnityEngine_RectTransform__get_anchoredPosition(this.OONFFMIIIJN,0);
      if (this.OONFFMIIIJN == 0) goto LAB_00bf4f9c;
      UnityEngine_RectTransform__set_anchoredPosition
                (auVar5,*(undefined4 *)((long)__this + 0x44),this.OONFFMIIIJN,0);
    }
    else if (iVar1 != 0) {
      return;
    }
  }
  plVar3 = this.CIDKMFLFJEJ;
  uVar2 = System_Int32__ToString(&iStack_14,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x5b0));
    return;
  }
LAB_00bf4f9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ICMOCEHIFOI() { }   @0xaf4fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI(void *__this)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  long *in_stack_ffffffffffffffe8;
  
  if ((bRam0000000001916ed9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    bRam0000000001916ed9 = 1;
  }
  uVar3 = UnityEngine_Time__get_time(0);
  this.PCAMLKIMMPM = uVar3;
  this.DLCMLDLHLLC = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  if (this.FHOFNGHGNGF == 4) {
    this.PCAMLKIMMPM = this.PCAMLKIMMPM + 0.3;
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar1,1);
      return;
    }
  }
  else {
    if (this.FHOFNGHGNGF != 3) {
      return;
    }
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (this.OONFFMIIIJN != 0) {
        uVar3 = 0x3fc00000;
        uVar6 = 0x3f800000;
        UnityEngine_Transform__set_localScale(this.OONFFMIIIJN,0);
        plVar2 = this.CIDKMFLFJEJ;
        auVar5 = NEON_fmov(0x3f800000,4);
        *(long *)((long)__this + 100) = auVar5._8_8_;
        this.FDLIPDDFFMP = auVar5._0_8_;
        if (plVar2 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
          this.LJOLODBEIOB = uVar4;
          *(undefined4 *)((long)__this + 0x50) = uVar3;
          *(undefined4 *)((long)__this + 0x54) = uVar6;
          *(undefined4 *)((long)__this + 0x68) = 0;
          *(undefined4 *)((long)__this + 0x58) = 0;
          if ((this.OONFFMIIIJN != 0) &&
             (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                        (this.OONFFMIIIJN,&stack0xffffffffffffffe8,
                         _Method_UnityEngine_Component_GetComponent_Image___),
             in_stack_ffffffffffffffe8 != (long *)0x0)) {
            (**(code **)(*in_stack_ffffffffffffffe8 + 0x2a8))
                      (this.FDLIPDDFFMP,*(undefined4 *)((long)__this + 0x60),
                       *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                       in_stack_ffffffffffffffe8,*(undefined8 *)(*in_stack_ffffffffffffffe8 + 0x2b0)
                      );
            plVar2 = this.CIDKMFLFJEJ;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x2a8))
                        (this.LJOLODBEIOB,*(undefined4 *)((long)__this + 0x50),
                         *(undefined4 *)((long)__this + 0x54),*(undefined4 *)((long)__this + 0x58),
                         plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
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


// ==== private void Update() { }   @0xaf5110

/* WARNING: Removing unreachable block (ram,0x00bf52f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__Update(void *__this)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long *plStack_78;
  
  if ((bRam0000000001916eda & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916eda = 1;
  }
  if (this.DLCMLDLHLLC == '\0') {
    return;
  }
  fVar8 = (float)UnityEngine_Time__get_time(0);
  uVar13 = (ulong)(uint)this.PCAMLKIMMPM;
  fVar8 = (fVar8 - this.PCAMLKIMMPM) * 1.5;
  switch(this.FHOFNGHGNGF) {
  case 0:
    if (this.OONFFMIIIJN == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    fVar11 = this.KEAGDNFNNMC;
    fVar9 = 1.2;
    break;
  case 1:
    if (0.3 < fVar8 / this.ONEGFFJABBM) {
      fVar10 = *(float *)((long)__this + 0x58);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar2 = this.CIDKMFLFJEJ;
      *(float *)((long)__this + 0x58) = fVar10 + fVar9 * -2.5;
      if (plVar2 == (long *)0x0) goto code_r0x00bf5758;
      (**(code **)(*plVar2 + 0x2a8))
                (this.LJOLODBEIOB,*(undefined4 *)((long)__this + 0x50),
                 *(undefined4 *)((long)__this + 0x54),plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    }
    lVar4 = this.OONFFMIIIJN;
    if (cRam0000000001916c7f == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916c7f = '\x01';
    }
    uVar6 = *(undefined8 *)(UnityEngine_Vector2.<statics> + 0x10);
    fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar4 == 0) goto code_r0x00bf5758;
    UnityEngine_Transform__Translate
              ((float)uVar6 * fVar9 * -40.0,(float)((ulong)uVar6 >> 0x20) * fVar9 * -40.0,0,lVar4,0)
    ;
    goto LAB_00bf56fc;
  case 2:
    if (this.OONFFMIIIJN == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    fVar11 = this.KEAGDNFNNMC;
    fVar9 = 1.4;
    break;
  case 3:
    fVar9 = fVar8 * 1.5 * -0.5 + 1.5;
    if (fVar8 * 1.5 < 0.0) {
      fVar9 = 1.5;
    }
    if (this.OONFFMIIIJN != 0) {
      UnityEngine_Transform__set_localScale(fVar9,fVar9,0x3f800000,this.OONFFMIIIJN,0)
      ;
      fVar10 = *(float *)((long)__this + 0x58);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 + fVar9 * 2.5;
      *(float *)((long)__this + 0x58) = fVar10;
      *(float *)((long)__this + 0x68) = fVar10;
      if ((this.OONFFMIIIJN != 0) &&
         (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (this.OONFFMIIIJN,&plStack_78,
                     _Method_UnityEngine_Component_GetComponent_Image___), plStack_78 != (long *)0x0
         )) {
        (**(code **)(*plStack_78 + 0x2a8))
                  (this.FDLIPDDFFMP,*(undefined4 *)((long)__this + 0x60),
                   *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                   plStack_78,*(undefined8 *)(*plStack_78 + 0x2b0));
        plVar2 = this.CIDKMFLFJEJ;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x2a8))
                    (this.LJOLODBEIOB,*(undefined4 *)((long)__this + 0x50),
                     *(undefined4 *)((long)__this + 0x54),*(undefined4 *)((long)__this + 0x58),
                     plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
          goto LAB_00bf56fc;
        }
      }
    }
    goto code_r0x00bf5758;
  case 4:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF != 0) {
      uVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf56fc;
      uVar7 = 0;
      while( true ) {
        fVar9 = (float)uVar13;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = CarController.KECGFPHIEHF;
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) ||
           (lVar5 = *(long *)(*(long *)(lVar4 + 0x30) + 800), lVar5 == 0)) break;
        if (*(int *)(lVar5 + 0x18) <= (int)uVar7) goto LAB_00bf56fc;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = CarController.KECGFPHIEHF;
          if (lVar4 == 0) break;
        }
        if ((*(long *)(lVar4 + 0x30) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 800), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
code_r0x00bf575c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = (long)(int)uVar7;
        lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
        if (lVar4 == 0) break;
        fVar10 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
        fVar11 = fVar8 * 0.4 * ((float)(int)uVar7 / 3.0 + 1.0);
        bVar1 = fVar11 < 0.0;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
        if (bVar1) {
          fVar11 = 0.0;
        }
        uVar13 = (ulong)(uint)(fVar9 + fVar11 * (169.0 - fVar9));
        UnityEngine_RectTransform__set_anchoredPosition
                  (fVar10 + fVar11 * (67.0 - fVar10),uVar13,lVar4,0);
        if (((CarController.KECGFPHIEHF == 0) ||
            (lVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
        lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
        break;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((CarController.KECGFPHIEHF == 0) ||
              (lVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar4 == 0))
             || (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
          lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
          if (lVar4 == 0) break;
          fVar9 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
          uVar13 = 0x428a0000;
          if ((fVar9 < 69.0) || (this.ONEGFFJABBM < fVar8)) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((CarController.KECGFPHIEHF == 0) ||
                (lVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar4 == 0))
               || (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
            lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
            if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)
               ) break;
            UnityEngine_GameObject__SetActive(lVar4,0,0);
            if ((CarController.KECGFPHIEHF == 0) ||
               ((lVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar4 == 0
                || (*(long *)(lVar4 + 0x310) == 0)))) break;
            GUICoins__ICMOCEHIFOI();
            if (uVar7 == 5) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar4 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar4 == 0)
                 ) break;
              uVar6 = GUIGameplay__JLHJOJHINPC(lVar4,*(undefined8 *)(lVar4 + 0x278),0);
              UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar6,0);
            }
          }
        }
        uVar7 = uVar7 + 1;
      }
    }
    goto code_r0x00bf5758;
  case 5:
    if (this.OONFFMIIIJN == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    fVar9 = this.KEAGDNFNNMC * 1.2;
    if (0.2 <= fVar8) {
      fVar9 = this.KEAGDNFNNMC;
    }
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar12 = 17.0;
    goto code_r0x00bf56c0;
  default:
    goto LAB_00bf56fc;
  }
  fVar9 = fVar11 * fVar9;
  if (0.2 <= fVar8) {
    fVar9 = fVar11;
  }
  fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar12 = 10.0;
code_r0x00bf56c0:
  fVar11 = fVar11 * fVar12;
  fVar12 = fVar11;
  if (1.0 < fVar11) {
    fVar12 = 1.0;
  }
  if (fVar11 < 0.0) {
    fVar12 = 0.0;
  }
  if (this.OONFFMIIIJN == 0) {
code_r0x00bf5758:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar10 = fVar10 + (fVar9 - fVar10) * fVar12;
  UnityEngine_Transform__set_localScale(fVar10,fVar10,0x3f800000,this.OONFFMIIIJN,0);
LAB_00bf56fc:
  if (this.ONEGFFJABBM < fVar8) {
    this.DLCMLDLHLLC = 0;
    if (this.FHOFNGHGNGF == 1) {
      GUICoins__LEOCFHHFANH(__this);
    }
    UnityEngine_Behaviour__set_enabled(__this,0,0);
  }
  return;
}


// ==== public void LEOCFHHFANH() { }   @0xaf5760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__LEOCFHHFANH(void *__this)

{
  long *plVar1;
  
  if ((bRam0000000001916edb & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916edb = 1;
  }
  plVar1 = this.CIDKMFLFJEJ;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bf57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x5a8))
              (plVar1,**(undefined8 **)(_string_TypeInfo + 0xb8),*(undefined8 *)(*plVar1 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ICMOCEHIFOI(int ALLBGCHDGNC, Color EFOGAOHIGOE, float FACIBICJINE) { }   @0xaf57c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI
               (void *__this,int ALLBGCHDGNC,float EFOGAOHIGOE_r,float EFOGAOHIGOE_g,
               float EFOGAOHIGOE_b,float EFOGAOHIGOE_a,float FACIBICJINE)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 in_register_00005004;
  undefined8 uVar3;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  int iStack_34;
  
  this.ONEGFFJABBM = FACIBICJINE;
  iStack_34 = ALLBGCHDGNC;
  uVar2 = UnityEngine_Time__get_time(0);
  this.PCAMLKIMMPM = uVar2;
  this.DLCMLDLHLLC = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  if (this.FHOFNGHGNGF != 1) {
    return;
  }
  plVar1 = this.CIDKMFLFJEJ;
  this.LJOLODBEIOB = EFOGAOHIGOE_r;
  *(float *)((long)__this + 0x50) = EFOGAOHIGOE_g;
  *(float *)((long)__this + 0x54) = EFOGAOHIGOE_b;
  *(float *)((long)__this + 0x58) = EFOGAOHIGOE_a;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))
              (CONCAT44(in_register_00005004,EFOGAOHIGOE_r),
               CONCAT44(in_register_00005024,EFOGAOHIGOE_g),
               CONCAT44(in_register_00005044,EFOGAOHIGOE_b),
               CONCAT44(in_register_00005064,EFOGAOHIGOE_a),plVar1,*(undefined8 *)(*plVar1 + 0x2b0))
    ;
    if (this.OONFFMIIIJN != 0) {
      uVar3 = UnityEngine_RectTransform__get_anchoredPosition(this.OONFFMIIIJN,0);
      if (this.OONFFMIIIJN != 0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (uVar3,*(undefined4 *)((long)__this + 0x44),this.OONFFMIIIJN,0);
        plVar1 = this.CIDKMFLFJEJ;
        uVar3 = System_Int32__ToString(&iStack_34,0);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x5a8))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x5b0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xaf58b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__Start(void *__this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  
  if ((bRam0000000001916edc & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916edc = 1;
  }
  uVar3 = this.OONFFMIIIJN;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (this.OONFFMIIIJN == 0) goto LAB_00bf59b0;
    uVar4 = UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    this.KEAGDNFNNMC = uVar4;
    if (this.OONFFMIIIJN == 0) goto LAB_00bf59b0;
    uVar4 = UnityEngine_RectTransform__get_anchoredPosition(this.OONFFMIIIJN,0);
    this.EDPJENMOOGC = uVar4;
    *(undefined4 *)((long)__this + 0x44) = in_s1;
    *(undefined4 *)((long)__this + 0x48) = 0;
  }
  if (this.FHOFNGHGNGF == 1) {
    plVar2 = this.CIDKMFLFJEJ;
    if (plVar2 == (long *)0x0) {
LAB_00bf59b0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    (**(code **)(*plVar2 + 0x5a8))
              (plVar2,**(undefined8 **)(_string_TypeInfo + 0xb8),*(undefined8 *)(*plVar2 + 0x5b0));
  }
  if (this.DLCMLDLHLLC != '\0') {
    return;
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,0);
  return;
}


// ==== public void .ctor() { }   @0xaf59b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins___ctor(void *__this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  this.ONEGFFJABBM = 0x3f800000;
  *(long *)((long)__this + 0x54) = auVar1._8_8_;
  this.LJOLODBEIOB = auVar1._0_8_;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class objDestructorHints : MonoBehaviour // TypeDefIndex: 5065
{
	// Fields
	private bool DIFNGFMLPMP; // 0x20
	public float ACBDHBLLEEK; // 0x24
	public JLPFNIPEELJ FHOFNGHGNGF; // 0x28
	private float CNAGLGLEJMC; // 0x2C
	private Color FJDBNMAHHLA; // 0x30
	private Color NJJAMIBLJKH; // 0x40
	private Color IEDLIFLBMCE; // 0x50
	private Color DGBMPJHIMHO; // 0x60
	public RectTransform OONFFMIIIJN; // 0x70
	public Image EECGBBLCAOP; // 0x78
	public Image[] FEFEIMLHAKI; // 0x80
	public Text CIDKMFLFJEJ; // 0x88
	private float KEAGDNFNNMC; // 0x90
	private float EDPJENMOOGC; // 0x94

	// Methods

	private void Update() { }

	public void .ctor() { }

	public IEnumerator BHAHHFJLFNI() { }

	public void NNIADFNMHGB() { }
}
*/

// ==== private void Update() { }   @0xad8c18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints__Update(void *__this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  if ((bRam0000000001916e07 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e07 = 1;
  }
  iVar1 = this.FHOFNGHGNGF;
  if ((iVar1 == 0) || (iVar1 == 3)) {
    if (this.OONFFMIIIJN == 0) goto LAB_00bd91bc;
    fVar9 = (float)UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    fVar8 = this.KEAGDNFNNMC * 1.3;
    if (0.2 <= this.CNAGLGLEJMC) {
      fVar8 = this.KEAGDNFNNMC;
    }
    fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar10 = fVar10 * 10.0;
    fVar14 = fVar10;
    if (1.0 < fVar10) {
      fVar14 = 1.0;
    }
    if (fVar10 < 0.0) {
      fVar14 = 0.0;
    }
    if (this.OONFFMIIIJN == 0) goto LAB_00bd91bc;
    fVar9 = fVar9 + (fVar8 - fVar9) * fVar14;
    UnityEngine_Transform__set_localScale(fVar9,fVar9,0x3f800000,this.OONFFMIIIJN,0);
    if (0.8 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
      fVar9 = *(float *)((long)__this + 0x4c);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar3 = this.CIDKMFLFJEJ;
      *(float *)((long)__this + 0x4c) = fVar9 - (fVar8 + fVar8);
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      lVar5 = *plVar3;
      uVar12 = *(undefined4 *)((long)__this + 0x44);
      uVar13 = *(undefined4 *)((long)__this + 0x48);
      uVar11 = this.NJJAMIBLJKH;
LAB_00bd8ea8:
      (**(code **)(lVar5 + 0x2a8))(uVar11,uVar12,uVar13,plVar3,*(undefined8 *)(lVar5 + 0x2b0));
    }
  }
  else if (iVar1 == 4) {
    fVar8 = this.CNAGLGLEJMC;
    if (fVar8 < 0.15) {
      fVar14 = *(float *)((long)__this + 0x3c);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar9 = fVar9 * 20.0;
      plVar3 = this.EECGBBLCAOP;
      fVar8 = fVar9;
      if (1.0 < fVar9) {
        fVar8 = 1.0;
      }
      if (fVar9 < 0.0) {
        fVar8 = 0.0;
      }
      *(float *)((long)__this + 0x3c) = fVar14 + (1.0 - fVar14) * fVar8;
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      (**(code **)(*plVar3 + 0x2a8))
                (this.FJDBNMAHHLA,*(undefined4 *)((long)__this + 0x34),
                 *(undefined4 *)((long)__this + 0x38),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      lVar5 = this.FEFEIMLHAKI;
      if (lVar5 == 0) goto LAB_00bd91bc;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) goto LAB_00bd91c0;
          plVar3 = *(long **)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          (**(code **)(*plVar3 + 0x2a8))
                    (this.FJDBNMAHHLA,*(undefined4 *)((long)__this + 0x34),
                     *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),
                     plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
      fVar8 = this.CNAGLGLEJMC;
    }
    if (0.8 < fVar8 / this.ACBDHBLLEEK) {
      fVar9 = *(float *)((long)__this + 0x3c);
      fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar3 = this.EECGBBLCAOP;
      *(float *)((long)__this + 0x3c) = fVar9 + fVar8 * -4.0;
      if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
      (**(code **)(*plVar3 + 0x2a8))
                (this.FJDBNMAHHLA,*(undefined4 *)((long)__this + 0x34),
                 *(undefined4 *)((long)__this + 0x38),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      lVar5 = this.FEFEIMLHAKI;
      if (lVar5 == 0) goto LAB_00bd91bc;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar2) {
        uVar7 = 0;
        do {
          if (uVar2 <= uVar7) {
LAB_00bd91c0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          plVar3 = *(long **)(lVar5 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          (**(code **)(*plVar3 + 0x2a8))
                    (this.FJDBNMAHHLA,*(undefined4 *)((long)__this + 0x34),
                     *(undefined4 *)((long)__this + 0x38),*(undefined4 *)((long)__this + 0x3c),
                     plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
          uVar2 = *(uint *)(lVar5 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar2);
      }
    }
  }
  else {
    if (this.OONFFMIIIJN == 0) goto LAB_00bd91bc;
    fVar8 = (float)UnityEngine_Transform__get_localScale(this.OONFFMIIIJN,0);
    fVar9 = this.CNAGLGLEJMC;
    if (iVar1 == 6) {
      fVar14 = this.KEAGDNFNNMC * 1.4;
      if (0.2 <= fVar9) {
        fVar14 = this.KEAGDNFNNMC;
      }
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 * 10.0;
      fVar9 = fVar10;
      if (1.0 < fVar10) {
        fVar9 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar9 = 0.0;
      }
      if (this.OONFFMIIIJN == 0) goto LAB_00bd91bc;
      fVar8 = fVar8 + (fVar14 - fVar8) * fVar9;
      UnityEngine_Transform__set_localScale(fVar8,fVar8,0x3f800000,this.OONFFMIIIJN,0)
      ;
      if (0.3 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = CarController.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (CarController.KECGFPHIEHF == 0) goto LAB_00bd91bc;
          if (CarController.KECGFPHIEHF.CBPOPFMFNFF != '\0') {
            fVar9 = *(float *)((long)__this + 0x4c);
            fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
            plVar3 = this.CIDKMFLFJEJ;
            *(float *)((long)__this + 0x4c) = fVar9 + fVar8 * -3.0;
            if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
            (**(code **)(*plVar3 + 0x2a8))
                      (this.NJJAMIBLJKH,*(undefined4 *)((long)__this + 0x44),
                       *(undefined4 *)((long)__this + 0x48),plVar3,*(undefined8 *)(*plVar3 + 0x2b0))
            ;
            uVar6 = this.EECGBBLCAOP;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if ((uVar4 & 1) != 0) {
              fVar9 = *(float *)((long)__this + 0x4c);
              plVar3 = this.EECGBBLCAOP;
              goto LAB_00bd91a4;
            }
          }
        }
      }
    }
    else {
      fVar15 = this.KEAGDNFNNMC;
      fVar10 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 * 5.0;
      fVar14 = fVar10;
      if (1.0 < fVar10) {
        fVar14 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar14 = 0.0;
      }
      if (this.OONFFMIIIJN == 0) goto LAB_00bd91bc;
      fVar8 = fVar8 + (*(float *)(&UNK_0059c810 + (ulong)(fVar9 < 0.3) * 4) * fVar15 - fVar8) *
                      fVar14;
      UnityEngine_Transform__set_localScale(fVar8,fVar8,0x3f800000,this.OONFFMIIIJN,0)
      ;
      if (0.6 < this.CNAGLGLEJMC / this.ACBDHBLLEEK) {
        fVar9 = *(float *)((long)__this + 0x4c);
        fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
        plVar3 = this.CIDKMFLFJEJ;
        *(float *)((long)__this + 0x4c) = fVar9 - fVar8;
        if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
        (**(code **)(*plVar3 + 0x2a8))
                  (this.NJJAMIBLJKH,*(undefined4 *)((long)__this + 0x44),
                   *(undefined4 *)((long)__this + 0x48),plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
        uVar6 = this.EECGBBLCAOP;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          fVar9 = *(float *)((long)__this + 0x3c);
          fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
          plVar3 = this.EECGBBLCAOP;
          fVar9 = fVar9 - fVar8;
LAB_00bd91a4:
          *(float *)((long)__this + 0x3c) = fVar9;
          if (plVar3 == (long *)0x0) goto LAB_00bd91bc;
          lVar5 = *plVar3;
          uVar12 = *(undefined4 *)((long)__this + 0x34);
          uVar13 = *(undefined4 *)((long)__this + 0x38);
          uVar11 = this.FJDBNMAHHLA;
          goto LAB_00bd8ea8;
        }
      }
    }
  }
  fVar9 = this.CNAGLGLEJMC;
  fVar8 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar9 = fVar9 + fVar8;
  this.CNAGLGLEJMC = fVar9;
  if (fVar9 <= this.ACBDHBLLEEK) {
    return;
  }
  lVar5 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar5 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar5,0);
    return;
  }
LAB_00bd91bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xad91c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints___ctor(void *__this)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  this.ACBDHBLLEEK = 0x3dcccccd;
  *(long *)((long)__this + 0x38) = auVar1._8_8_;
  this.FJDBNMAHHLA = auVar1._0_8_;
  *(long *)((long)__this + 0x48) = auVar1._8_8_;
  this.NJJAMIBLJKH = auVar1._0_8_;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public IEnumerator BHAHHFJLFNI() { }   @0xad91e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * objDestructorHints__BHAHHFJLFNI(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916e08 & 1) == 0) {
    func_0x00a67900(&objDestructorHints_LJPKMOGKGGM_TypeInfo);
    bRam0000000001916e08 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_objDestructorHints_LJPKMOGKGGM_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void NNIADFNMHGB() { }   @0xad9268

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorHints__NNIADFNMHGB(void *__this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined4 in_s1;
  float fVar9;
  undefined4 in_s2;
  undefined4 in_s3;
  long lStack_28;
  
  if ((bRam0000000001916e09 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e09 = 1;
  }
  if (this.DIFNGFMLPMP == '\0') {
    if (this.FHOFNGHGNGF != 4) {
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
      this.OONFFMIIIJN = lStack_28;
      if (lStack_28 == 0) goto LAB_00bd9510;
      uVar6 = UnityEngine_Transform__get_localScale(lStack_28,0);
      this.KEAGDNFNNMC = uVar6;
      if (this.OONFFMIIIJN == 0) goto LAB_00bd9510;
      UnityEngine_Transform__get_localPosition(this.OONFFMIIIJN,0);
      this.EDPJENMOOGC = in_s1;
    }
    plVar1 = this.EECGBBLCAOP;
    if (plVar1 == (long *)0x0) goto LAB_00bd9510;
    uVar6 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    this.FJDBNMAHHLA = uVar6;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    *(undefined4 *)((long)__this + 0x38) = in_s2;
    *(undefined4 *)((long)__this + 0x3c) = in_s3;
    this.IEDLIFLBMCE = uVar6;
    *(undefined4 *)((long)__this + 0x54) = in_s1;
    *(undefined4 *)((long)__this + 0x58) = in_s2;
    *(undefined4 *)((long)__this + 0x5c) = in_s3;
    uVar4 = this.CIDKMFLFJEJ;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      plVar1 = this.CIDKMFLFJEJ;
      if (plVar1 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar1 + 0x2a8))
                (ZEXT816(0x3f800000),0x3f800000,0x3f800000,0x3f800000,plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      auVar8 = NEON_fmov(0x3f800000,4);
      *(long *)((long)__this + 0x68) = auVar8._8_8_;
      this.DGBMPJHIMHO = auVar8._0_8_;
    }
    this.DIFNGFMLPMP = 1;
  }
  else {
    plVar1 = this.EECGBBLCAOP;
    this.FJDBNMAHHLA = this.IEDLIFLBMCE;
    *(undefined4 *)((long)__this + 0x34) = *(undefined4 *)((long)__this + 0x54);
    *(undefined4 *)((long)__this + 0x38) = *(undefined4 *)((long)__this + 0x58);
    *(undefined4 *)((long)__this + 0x3c) = *(undefined4 *)((long)__this + 0x5c);
    if (plVar1 == (long *)0x0) goto LAB_00bd9510;
    (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    uVar4 = this.CIDKMFLFJEJ;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      plVar1 = this.CIDKMFLFJEJ;
      this.NJJAMIBLJKH = this.DGBMPJHIMHO;
      *(undefined4 *)((long)__this + 0x44) = *(undefined4 *)((long)__this + 100);
      *(undefined4 *)((long)__this + 0x48) = *(undefined4 *)((long)__this + 0x68);
      *(undefined4 *)((long)__this + 0x4c) = *(undefined4 *)((long)__this + 0x6c);
      if (plVar1 == (long *)0x0) goto LAB_00bd9510;
      (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    }
  }
  this.CNAGLGLEJMC = 0;
  lVar3 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar3 == 0) {
LAB_00bd9510:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_GameObject__SetActive(lVar3,1,0);
  uVar4 = this.OONFFMIIIJN;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = this.CIDKMFLFJEJ;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if (((uVar2 & 1) != 0) && (this.FHOFNGHGNGF != 6)) {
      plVar1 = this.CIDKMFLFJEJ;
      if (plVar1 != (long *)0x0) {
        lVar5 = this.OONFFMIIIJN;
        lVar3 = (**(code **)(*plVar1 + 0x598))(plVar1,*(undefined8 *)(*plVar1 + 0x5a0));
        if (lVar3 != 0) {
          fVar7 = (float)*(int *)(lVar3 + 0x10) / 20.0;
          fVar9 = fVar7;
          if (1.0 < fVar7) {
            fVar9 = 1.0;
          }
          fVar9 = fVar9 * 580.0 + 420.0;
          if (fVar7 < 0.0) {
            fVar9 = 420.0;
          }
          if ((this.OONFFMIIIJN != 0) &&
             (UnityEngine_RectTransform__get_sizeDelta(this.OONFFMIIIJN,0), lVar5 != 0
             )) {
            UnityEngine_RectTransform__set_sizeDelta(fVar9,lVar5,0);
            return;
          }
        }
      }
      goto LAB_00bd9510;
    }
  }
  return;
}



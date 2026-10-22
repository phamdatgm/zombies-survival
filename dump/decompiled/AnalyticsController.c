/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class AnalyticsController : MonoBehaviour // TypeDefIndex: 5099
{
	// Fields
	private bool HOLMLCHJHGC; // 0x20
	private bool MEELACGAIMP; // 0x21
	private bool IAKBBCGGDMO; // 0x22
	private bool FCEHDFFBIME; // 0x23
	private bool EGFHHDLMJCM; // 0x24
	public static bool KMCOHCPFGMK; // 0x0
	public static bool EODFEFNJEDM; // 0x1

	// Methods

	public void BHBKBILKNBE(int GCDJJBJHGJK) { }

	public void MELFCMJLGPJ(int ALLBGCHDGNC) { }

	public void JDPLKBLAJGI(int PBFKBPCNKKF, int HCBODNKILEA) { }

	public void ODLOKNOHMOB(KKMHKJEGDLA BPHDIJAFHJM) { }

	public void JGPNJOOHDBA(int ALLBGCHDGNC) { }

	public void LNJAADGHIHB(string FHOFNGHGNGF) { }

	public void PKLGNADJLIG(GUIGameplay.POFCDOMOIBH BNCKNDDBOPA) { }

	public void AEOHFJNPEJA() { }

	public void FKMJMCBODAF() { }

	public void KNPMHFKJGNL() { }

	public void ABPGNFKMKAF(int HCBODNKILEA) { }

	public void GMIAJGPBEPN(int PBFKBPCNKKF, int NHEMBDGCNFG, int HCBODNKILEA) { }

	private void DBGNHGJOOCB() { }

	public void NLMEEFHDKMH(int EGCBHPKONII, string PFLOEJOJJAP, string AJFBHMKJHJD) { }

	public void JCMFKBONIGF(string FHOFNGHGNGF) { }

	public void LEGLCIPMLDP(string FBIDBFEKKDA, string IHNICLOGLNC) { }

	public void HBKCMEEGIMF() { }

	public void MLJBGIEIBJA() { }

	public void KHDFDGMBOIJ() { }

	public void KPMBGEFPJCE() { }

	public void FFLOAIJLGHB() { }

	public void JOOHAKJLNLC(string FHOFNGHGNGF) { }

	public void .ctor() { }

	public void PAHGPPCKPBM(string FHOFNGHGNGF) { }

	public void CCFACNADLJH() { }

	public void GINNFMLCJBK() { }

	public void EFHKCIDGLHC() { }

	public void MICBBJKICOP(string CICIFFFOBLK, float KEFPEDBJENE, Decimal AJHFJLJLOOM, string DLBELLGFEOM, string EFAMGLIMNBI, string DKBDCJAIPLC, string JJDDKNOGDIK) { }

	public void JOMBJMIMKHJ() { }

	public void DFHNBMEPNDH(string FHOFNGHGNGF) { }

	public void OJNGEGNNOME(int PBFKBPCNKKF, string FHOFNGHGNGF) { }

	public void DCAKJGANLFG(string LDDJJLJMOHD) { }

	public void GJEJLEDIILK(int HCBODNKILEA) { }

	public void PKLJHOHIJEP(string FHOFNGHGNGF) { }

	public void CBPJCFHKMLE(string FHOFNGHGNGF, int GBADBNPHNGF) { }
}
*/

// ==== public void BHBKBILKNBE(int GCDJJBJHGJK) { }   @0xaecda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__BHBKBILKNBE(void *__this,int GCDJJBJHGJK)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,GCDJJBJHGJK);
    func_0x00a67900(&Str_Clicked_Rate_Us);
    func_0x00a67900(&Str_ANALYTICS__Clicked_Rate_Us);
    bRam0000000001916eb0 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__Clicked_Rate_Us,0,0);
  uVar2 = _Str_Clicked_Rate_Us;
  uVar1 = System_String__IsNullOrEmpty(_Str_Clicked_Rate_Us,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void MELFCMJLGPJ(int ALLBGCHDGNC) { }   @0xaef470

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MELFCMJLGPJ(void *__this,int ALLBGCHDGNC)

{
  return;
}


// ==== public void JDPLKBLAJGI(int PBFKBPCNKKF, int HCBODNKILEA) { }   @0xaef474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JDPLKBLAJGI(void *__this,int PBFKBPCNKKF,int HCBODNKILEA)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_38 = HCBODNKILEA;
  iStack_34 = PBFKBPCNKKF;
  if ((bRam0000000001916eb1 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str___car_upgrade_armor__);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__level_id__);
    func_0x00a67900(&Str_car_upgrade_armor);
    func_0x00a67900(&Str___car_upgrade_nitro__);
    func_0x00a67900(&Str_car_upgrade_wheel);
    func_0x00a67900(&Str_car_upgrade_gun);
    func_0x00a67900(&Str___car_upgrade_wheel__);
    func_0x00a67900(&Str___car_upgrade_gun__);
    func_0x00a67900(&Str_car_upgrade_engine);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__Error);
    func_0x00a67900(&Str_Level_Start);
    func_0x00a67900(&Str___car_upgrade_engine__);
    func_0x00a67900(&Str_car_upgrade_nitro);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___complete_count__);
    func_0x00a67900(&Str_complete_count);
    func_0x00a67900(&Str_car_id);
    func_0x00a67900(&Str_ANALYTICS__Level_Start__car_id__);
    bRam0000000001916eb1 = 1;
  }
  uStack_3c = 0;
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
  lVar1 = Main.FBDDKIOEKDM;
  if (lVar1 != 0) {
    lVar1 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar1,PBFKBPCNKKF);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = Main.FBDDKIOEKDM;
    if (lVar2 != 0) {
      lVar2 = DAFNMLEKHAD__DKJLCJPBPPN(lVar2,HCBODNKILEA,1);
      if ((lVar1 == 0) || (lVar2 == 0)) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__EEKNCFLMGDP(_Str_ANALYTICS__Level_Start__Error);
        return;
      }
      lVar3 = func_0x00a679a0(_string___TypeInfo,6);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Level_Start__level_id__;
          uVar4 = System_Int32__ToString(&iStack_34,0);
          if ((1 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x28) = uVar4, *(uint *)(lVar3 + 0x18) != 2)) {
            *(undefined8 *)(lVar3 + 0x30) = _Str___attempts__;
            uStack_3c = *(undefined4 *)(lVar1 + 0x3c);
            uVar4 = System_Int32__ToString(&uStack_3c,0);
            if ((3 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x38) = uVar4, *(uint *)(lVar3 + 0x18) != 4)) {
              *(undefined8 *)(lVar3 + 0x40) = _Str___complete_count__;
              uStack_3c = *(undefined4 *)(lVar1 + 0x40);
              uVar4 = System_Int32__ToString(&uStack_3c,0);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar4;
                uVar4 = System_String__Concat(lVar3,0);
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Main_TypeInfo);
                }
                Main__GEMDEAMAGPG(uVar4,0,0);
                lVar3 = func_0x00a679a0(_string___TypeInfo,0xc);
                if (lVar3 == 0) goto LAB_00befbec;
                if (*(int *)(lVar3 + 0x18) != 0) {
                  *(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Level_Start__car_id__;
                  uVar4 = System_Int32__ToString(&iStack_38,0);
                  if ((1 < *(uint *)(lVar3 + 0x18)) &&
                     (*(undefined8 *)(lVar3 + 0x28) = uVar4, *(uint *)(lVar3 + 0x18) != 2)) {
                    *(undefined8 *)(lVar3 + 0x30) = _Str___car_upgrade_engine__;
                    uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,0,0);
                    uVar4 = System_Int32__ToString(&uStack_3c,0);
                    if ((3 < *(uint *)(lVar3 + 0x18)) &&
                       (*(undefined8 *)(lVar3 + 0x38) = uVar4, *(uint *)(lVar3 + 0x18) != 4)) {
                      *(undefined8 *)(lVar3 + 0x40) = _Str___car_upgrade_wheel__;
                      uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,1,0);
                      uVar4 = System_Int32__ToString(&uStack_3c,0);
                      if ((5 < *(uint *)(lVar3 + 0x18)) &&
                         (*(undefined8 *)(lVar3 + 0x48) = uVar4, *(uint *)(lVar3 + 0x18) != 6)) {
                        *(undefined8 *)(lVar3 + 0x50) = _Str___car_upgrade_gun__;
                        uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,2,0);
                        uVar4 = System_Int32__ToString(&uStack_3c,0);
                        if ((7 < *(uint *)(lVar3 + 0x18)) &&
                           (*(undefined8 *)(lVar3 + 0x58) = uVar4, *(uint *)(lVar3 + 0x18) != 8)) {
                          *(undefined8 *)(lVar3 + 0x60) = _Str___car_upgrade_nitro__;
                          uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,3,0);
                          uVar4 = System_Int32__ToString(&uStack_3c,0);
                          if ((9 < *(uint *)(lVar3 + 0x18)) &&
                             (*(undefined8 *)(lVar3 + 0x68) = uVar4, *(uint *)(lVar3 + 0x18) != 10))
                          {
                            *(undefined8 *)(lVar3 + 0x70) = _Str___car_upgrade_armor__;
                            uStack_3c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,4,0);
                            uVar4 = System_Int32__ToString(&uStack_3c,0);
                            if (0xb < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x78) = uVar4;
                              uVar4 = System_String__Concat(lVar3,0);
                              Main__GEMDEAMAGPG(uVar4,0,0);
                              lVar3 = func_0x00a67b44(
                                                  _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                                  );
                              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                                        (lVar3,
                                         _Method_System_Collections_Generic_Dictionary_string__object___ctor__
                                        );
                              iStack_40 = iStack_34;
                              uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_40);
                              if (lVar3 != 0) {
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_level_id,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_44 = *(undefined4 *)(lVar1 + 0x3c);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_44);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_attempts,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_48 = *(undefined4 *)(lVar1 + 0x40);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_48);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_complete_count,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                iStack_4c = iStack_38;
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_id,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_50 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,0,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_50);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_engine,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_54 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,1,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_54);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_wheel,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_58 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,2,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_58);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_gun,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_5c = MKCBGHDANLA__IDOHKCCDGDG(lVar2,3,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_5c);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_nitro,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                uStack_60 = MKCBGHDANLA__IDOHKCCDGDG(lVar2,4,0);
                                uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_60);
                                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                          (lVar3,_Str_car_upgrade_armor,uVar4,
                                           _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                          );
                                UnityEngine_Analytics_Analytics__CustomEvent
                                          (_Str_Level_Start,lVar3,0);
                                return;
                              }
                              goto LAB_00befbec;
                            }
                          }
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
        il2cpp_throw_967b58();
      }
    }
  }
LAB_00befbec:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ODLOKNOHMOB(KKMHKJEGDLA BPHDIJAFHJM) { }   @0xaeffd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__ODLOKNOHMOB(void *__this,int BPHDIJAFHJM)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_54;
  
  if ((bRam0000000001916eb2 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&KKMHKJEGDLA_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Achievement_Claimed);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_achievement_id);
    func_0x00a67900(&Str_ANALYTICS__Achievement_Claimed__);
    bRam0000000001916eb2 = 1;
  }
  iStack_54 = BPHDIJAFHJM;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_70 = _KKMHKJEGDLA_TypeInfo;
  uStack_68 = 0xffffffffffffffff;
  iStack_60 = BPHDIJAFHJM;
  uVar2 = System_Enum__ToString(&uStack_70,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Achievement_Claimed__,uVar1,_Str__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_74 = BPHDIJAFHJM;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_74);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar3,_Str_achievement_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Achievement_Claimed,lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JGPNJOOHDBA(int ALLBGCHDGNC) { }   @0xaf01a8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JGPNJOOHDBA(void *__this,int ALLBGCHDGNC)

{
  return;
}


// ==== public void LNJAADGHIHB(string FHOFNGHGNGF) { }   @0xaf01ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__LNJAADGHIHB(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916eb3 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SyncProgress);
    func_0x00a67900(&Str_type);
    func_0x00a67900(&Str_ANALYTICS__SyncProgress__);
    bRam0000000001916eb3 = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__SyncProgress__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_SyncProgress;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void PKLGNADJLIG(GUIGameplay.POFCDOMOIBH BNCKNDDBOPA) { }   @0xaf02e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PKLGNADJLIG(void *__this,int BNCKNDDBOPA)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_54;
  
  if ((bRam0000000001916eb4 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&GUIGameplay_POFCDOMOIBH_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Tutorial___);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_step_name);
    func_0x00a67900(&Str_Tutorial);
    bRam0000000001916eb4 = 1;
  }
  iStack_54 = BNCKNDDBOPA;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_70 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
  uStack_68 = 0xffffffffffffffff;
  iStack_60 = BNCKNDDBOPA;
  uVar2 = System_Enum__ToString(&uStack_70,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Tutorial___,uVar1,_Str__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_54 = BNCKNDDBOPA;
  uVar1 = System_Int32__ToString(&iStack_54,0);
  uStack_88 = _GUIGameplay_POFCDOMOIBH_TypeInfo;
  uStack_80 = 0xffffffffffffffff;
  iStack_78 = BNCKNDDBOPA;
  uVar2 = System_Enum__ToString(&uStack_88,0);
  uVar1 = System_String__Concat(uVar1,_Str__,uVar2,0);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar3,_Str_step_name,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Tutorial,lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void AEOHFJNPEJA() { }   @0xaf04d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__AEOHFJNPEJA(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsControls);
    func_0x00a67900(&Str_ANALYTICS__SettingsControls);
    bRam0000000001916eb5 = 1;
  }
  if (this.HOLMLCHJHGC != '\0') {
    return;
  }
  this.HOLMLCHJHGC = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsControls,0,0);
  uVar2 = _Str_SettingsControls;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsControls,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void FKMJMCBODAF() { }   @0xaf0580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__FKMJMCBODAF(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsFPS);
    func_0x00a67900(&Str_ANALYTICS__SettingsFPS);
    bRam0000000001916eb6 = 1;
  }
  if (this.FCEHDFFBIME != '\0') {
    return;
  }
  this.FCEHDFFBIME = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsFPS,0,0);
  uVar2 = _Str_SettingsFPS;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsFPS,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void KNPMHFKJGNL() { }   @0xaf062c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KNPMHFKJGNL(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916eb7 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Shop_Visited);
    func_0x00a67900(&Str_ANALYTICS__Shop_Visited);
    bRam0000000001916eb7 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__Shop_Visited,false);
  uVar2 = _Str_Shop_Visited;
  uVar1 = System_String__IsNullOrEmpty(_Str_Shop_Visited,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void ABPGNFKMKAF(int HCBODNKILEA) { }   @0xaf06b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__ABPGNFKMKAF(void *__this,int HCBODNKILEA)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = HCBODNKILEA;
  if ((bRam0000000001916eb8 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Not_Enough_Fuel__);
    func_0x00a67900(&Str_Not_Enough_Fuel);
    func_0x00a67900(&Str_car_id);
    bRam0000000001916eb8 = 1;
  }
  uVar1 = System_Int32__ToString(&iStack_34,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Not_Enough_Fuel__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_38 = iStack_34;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_38);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_car_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Not_Enough_Fuel,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void GMIAJGPBEPN(int PBFKBPCNKKF, int NHEMBDGCNFG, int HCBODNKILEA) { }   @0xaf0830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__GMIAJGPBEPN(void *__this,int PBFKBPCNKKF,int NHEMBDGCNFG,int HCBODNKILEA)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_38;
  int iStack_34;
  
  iStack_44 = HCBODNKILEA;
  iStack_38 = NHEMBDGCNFG;
  iStack_34 = PBFKBPCNKKF;
  if ((bRam0000000001916eb9 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str___car_upgrade_armor__);
    func_0x00a67900(&Str_car_upgrade_armor);
    func_0x00a67900(&Str_result);
    func_0x00a67900(&Str___car_upgrade_nitro__);
    func_0x00a67900(&Str_car_upgrade_wheel);
    func_0x00a67900(&Str_car_upgrade_gun);
    func_0x00a67900(&Str___car_upgrade_wheel__);
    func_0x00a67900(&Str_Level_End);
    func_0x00a67900(&Str___result__);
    func_0x00a67900(&Str___car_upgrade_gun__);
    func_0x00a67900(&Str_car_upgrade_engine);
    func_0x00a67900(&Str___car_upgrade_engine__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str_null__lvl_);
    func_0x00a67900(&Str_car_upgrade_nitro);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str___playerLevel_);
    func_0x00a67900(&Str___car_);
    func_0x00a67900(&Str_ANALYTICS__Level_End__car_id__);
    func_0x00a67900(&Str___playerCar_);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str_event_id);
    func_0x00a67900(&Str_ANALYTICS__Level_End__Error__level_);
    func_0x00a67900(&Str___complete_count__);
    func_0x00a67900(&Str_ANALYTICS__Level_End__level_id__);
    func_0x00a67900(&Str_complete_count);
    func_0x00a67900(&Str_car_id);
    bRam0000000001916eb9 = 1;
  }
  uStack_48 = 0;
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = Level__FHMGLDDPEDJ(PBFKBPCNKKF,0);
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
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 != 0) {
    lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,PBFKBPCNKKF);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Main.FBDDKIOEKDM;
    if (lVar3 != 0) {
      lVar3 = DAFNMLEKHAD__DKJLCJPBPPN(lVar3,HCBODNKILEA,1);
      if (((lVar2 == 0) || (lVar1 == 0)) || (lVar3 == 0)) {
        lVar4 = func_0x00a679a0(_string___TypeInfo,6);
        if (lVar4 != 0) {
          uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
          if (uVar8 != 0) {
            *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__Error__level_;
            uVar5 = _Str_null;
            if (lVar1 != 0) {
              uVar5 = System_Int32__ToString(lVar1 + 0x10,0);
              uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
            }
            if ((1 < uVar8) && (*(undefined8 *)(lVar4 + 0x28) = uVar5, uVar8 != 2)) {
              *(undefined8 *)(lVar4 + 0x30) = _Str___playerLevel_;
              uVar5 = _Str_null;
              if (lVar2 != 0) {
                uStack_48 = *(undefined4 *)(lVar2 + 0x10);
                uVar5 = System_Int32__ToString(&uStack_48,0);
                uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
              }
              if ((3 < uVar8) && (*(undefined8 *)(lVar4 + 0x38) = uVar5, uVar8 != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str___playerCar_;
                if (lVar3 == 0) {
                  uVar5 = System_Int32__ToString(&iStack_34,0);
                  uVar7 = System_Int32__ToString(&iStack_44,0);
                  uVar5 = System_String__Concat(_Str_null__lvl_,uVar5,_Str___car_,uVar7,0);
                }
                else {
                  uStack_48 = *(undefined4 *)(lVar3 + 0x10);
                  uVar5 = System_Int32__ToString(&uStack_48,0);
                }
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x48) = uVar5;
                  uVar5 = System_String__Concat(lVar4,0);
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Main_TypeInfo);
                  }
                  Main__EEKNCFLMGDP(uVar5,0);
                  return;
                }
              }
            }
          }
          goto LAB_00bf1244;
        }
      }
      else {
        lVar4 = func_0x00a679a0(_string___TypeInfo,8);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) != 0) {
            *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__level_id__;
            uVar5 = System_Int32__ToString(&iStack_34,0);
            if ((1 < *(uint *)(lVar4 + 0x18)) &&
               (*(undefined8 *)(lVar4 + 0x28) = uVar5, *(uint *)(lVar4 + 0x18) != 2)) {
              *(undefined8 *)(lVar4 + 0x30) = _Str___attempts__;
              uStack_48 = *(undefined4 *)(lVar2 + 0x3c);
              uVar5 = System_Int32__ToString(&uStack_48,0);
              if ((3 < *(uint *)(lVar4 + 0x18)) &&
                 (*(undefined8 *)(lVar4 + 0x38) = uVar5, *(uint *)(lVar4 + 0x18) != 4)) {
                *(undefined8 *)(lVar4 + 0x40) = _Str___result__;
                uVar5 = System_Int32__ToString(&iStack_38,0);
                if ((5 < *(uint *)(lVar4 + 0x18)) &&
                   (*(undefined8 *)(lVar4 + 0x48) = uVar5, *(uint *)(lVar4 + 0x18) != 6)) {
                  *(undefined8 *)(lVar4 + 0x50) = _Str___complete_count__;
                  uStack_48 = *(undefined4 *)(lVar2 + 0x40);
                  uVar5 = System_Int32__ToString(&uStack_48,0);
                  if (7 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x58) = uVar5;
                    uVar5 = System_String__Concat(lVar4,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar5,0,0);
                    lVar4 = func_0x00a679a0(_string___TypeInfo,0xc);
                    if (lVar4 == 0) goto LAB_00bf1248;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined8 *)(lVar4 + 0x20) = _Str_ANALYTICS__Level_End__car_id__;
                      uVar5 = System_Int32__ToString(&iStack_44,0);
                      if ((1 < *(uint *)(lVar4 + 0x18)) &&
                         (*(undefined8 *)(lVar4 + 0x28) = uVar5, *(uint *)(lVar4 + 0x18) != 2)) {
                        *(undefined8 *)(lVar4 + 0x30) = _Str___car_upgrade_engine__;
                        uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,0,0);
                        uVar5 = System_Int32__ToString(&uStack_48,0);
                        if ((3 < *(uint *)(lVar4 + 0x18)) &&
                           (*(undefined8 *)(lVar4 + 0x38) = uVar5, *(uint *)(lVar4 + 0x18) != 4)) {
                          *(undefined8 *)(lVar4 + 0x40) = _Str___car_upgrade_wheel__;
                          uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,1,0);
                          uVar5 = System_Int32__ToString(&uStack_48,0);
                          if ((5 < *(uint *)(lVar4 + 0x18)) &&
                             (*(undefined8 *)(lVar4 + 0x48) = uVar5, *(uint *)(lVar4 + 0x18) != 6))
                          {
                            *(undefined8 *)(lVar4 + 0x50) = _Str___car_upgrade_gun__;
                            uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,2,0);
                            uVar5 = System_Int32__ToString(&uStack_48,0);
                            if ((7 < *(uint *)(lVar4 + 0x18)) &&
                               (*(undefined8 *)(lVar4 + 0x58) = uVar5, *(uint *)(lVar4 + 0x18) != 8)
                               ) {
                              *(undefined8 *)(lVar4 + 0x60) = _Str___car_upgrade_nitro__;
                              uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,3,0);
                              uVar5 = System_Int32__ToString(&uStack_48,0);
                              if ((9 < *(uint *)(lVar4 + 0x18)) &&
                                 (*(undefined8 *)(lVar4 + 0x68) = uVar5,
                                 *(uint *)(lVar4 + 0x18) != 10)) {
                                *(undefined8 *)(lVar4 + 0x70) = _Str___car_upgrade_armor__;
                                uStack_48 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,4,0);
                                uVar5 = System_Int32__ToString(&uStack_48,0);
                                if (0xb < *(uint *)(lVar4 + 0x18)) {
                                  *(undefined8 *)(lVar4 + 0x78) = uVar5;
                                  uVar5 = System_String__Concat(lVar4,0);
                                  Main__GEMDEAMAGPG(uVar5,0,0);
                                  lVar4 = func_0x00a67b44(
                                                  _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                                  );
                                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                                            (lVar4,
                                             _Method_System_Collections_Generic_Dictionary_string__object___ctor__
                                            );
                                  iStack_4c = iStack_34;
                                  uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                  if (lVar4 != 0) {
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_level_id,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_50 = *(int *)(lVar2 + 0x3c);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_50);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_attempts,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_54 = iStack_38;
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_54);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_result,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uVar6 = Level__get_IsEvent(lVar1,0);
                                    if ((uVar6 & 1) != 0) {
                                      iStack_4c = DJKGLJOCFCE__EECPDELFCIL(lVar2,0);
                                      uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                                (lVar4,_Str_event_id,uVar5,
                                                 _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                                );
                                    }
                                    iStack_4c = *(int *)(lVar2 + 0x40);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_4c);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_complete_count,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_50 = iStack_44;
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_50);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_id,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    iStack_54 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,0,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_54);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_engine,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_58 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,1,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_58);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_wheel,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_5c = MKCBGHDANLA__IDOHKCCDGDG(lVar3,2,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_5c);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_gun,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_60 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,3,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_60);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_nitro,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    uStack_64 = MKCBGHDANLA__IDOHKCCDGDG(lVar3,4,0);
                                    uVar5 = func_0x00a67a38(_int_TypeInfo,&uStack_64);
                                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                                              (lVar4,_Str_car_upgrade_armor,uVar5,
                                               _Method_System_Collections_Generic_Dictionary_string__object__Add__
                                              );
                                    UnityEngine_Analytics_Analytics__CustomEvent
                                              (_Str_Level_End,lVar4,0);
                                    return;
                                  }
                                  goto LAB_00bf1248;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00bf1244:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
      }
    }
  }
LAB_00bf1248:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DBGNHGJOOCB() { }   @0xaf124c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DBGNHGJOOCB(void *__this)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__this_00;
  ulong uVar8;
  long lVar9;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916eba & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__App_Start__IsFirstStart);
    bRam0000000001916eba = 1;
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
  lVar3 = _Main_TypeInfo;
  lVar9 = Main.FBDDKIOEKDM;
  if (lVar9 == 0) {
LAB_00bf13fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar9 + 0x98) != 1) {
    return;
  }
  AdvController.PEDOKFNDCIB = 1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
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
  if (lVar3 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__MJIAJNKPEAL(lVar3,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = Main.FBDDKIOEKDM;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uVar4 = System_DateTime__get_Now(0);
  if (lVar3 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__PGHAPGLHFPH(lVar3,uVar4);
  plVar5 = _Str_ANALYTICS__App_Start__IsFirstStart;
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
  __this_00 = Main.FBDDKIOEKDM;
  if (__this_00 == (void *)0x0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  bVar2 = DAFNMLEKHAD__LLEFEIHEJDE(__this_00);
  if (!bVar2) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar5,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) || (plVar5 == (long *)0x0)) goto LAB_00c590c8;
  lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  if (lVar3 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar4,0,0);
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
  plVar5 = *(long **)(lVar3 + 0x1e8);
  if ((plVar5 == (long *)0x0) ||
     (lVar9 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar9 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar9 + 0x10)) {
    if (*(long *)(lVar3 + 0x1e8) == 0) goto LAB_00c16768;
    uVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x1e8),0);
    if ((*(long *)(lVar3 + 0x1e8) == 0) ||
       (lVar9 = UnityEngine_Component__get_transform(*(long *)(lVar3 + 0x1e8),0), lVar9 == 0))
    goto LAB_00c16768;
    uVar7 = UnityEngine_Transform__get_parent(lVar9,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar9 = UnityEngine_Object__Instantiate_object_
                      (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar9 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar9,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar3 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar5 = *(long **)(lVar3 + 0x1e8);
  lVar3 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar5 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0)), lVar3 != 0))
  {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar3 + 0x20) = uVar6, uVar1 != 1 &&
         (*(undefined8 *)(lVar3 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar3 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar3 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar6 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar6 = System_String__Format(_Str__0_f2_,uVar6,0);
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar3 + 0x40) = uVar6, uVar1 != 5)) &&
         (*(undefined8 *)(lVar3 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar3 + 0x50) = uVar4;
        uVar4 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x58) = uVar4;
          uVar4 = System_String__Concat(lVar3,0);
          (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
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


// ==== public void NLMEEFHDKMH(int EGCBHPKONII, string PFLOEJOJJAP, string AJFBHMKJHJD) { }   @0xaf14fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__NLMEEFHDKMH
               (void *__this,int EGCBHPKONII,void *PFLOEJOJJAP,void *AJFBHMKJHJD)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  iStack_64 = EGCBHPKONII;
  if ((bRam0000000001916ebb & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str___attempts__);
    func_0x00a67900(&Str_item_id);
    func_0x00a67900(&Str_item_type);
    func_0x00a67900(&Str_ANALYTICS__Gold_Spend__item_type__);
    func_0x00a67900(&Str___item_id__);
    func_0x00a67900(&Str_attempts);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__current_level);
    func_0x00a67900(&Str_Gold_Spend);
    func_0x00a67900(&Str___level_id__);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___item_value__);
    func_0x00a67900(&Str_car_id);
    func_0x00a67900(&Str___car_id__);
    func_0x00a67900(&Str_item_value);
    bRam0000000001916ebb = 1;
  }
  uStack_68 = 0;
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
  if (Main.FBDDKIOEKDM != 0) {
    lVar2 = DAFNMLEKHAD__DCOOPMCEMNE();
    if (lVar2 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_ANALYTICS__Rewarded_Video__current_level,0);
      return;
    }
    lVar3 = func_0x00a679a0(_string___TypeInfo,0xc);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if ((((uVar1 != 0) &&
           (*(undefined8 *)(lVar3 + 0x20) = _Str_ANALYTICS__Gold_Spend__item_type__, uVar1 != 1)) &&
          (*(void **)(lVar3 + 0x28) = PFLOEJOJJAP, 2 < uVar1)) &&
         ((*(undefined8 *)(lVar3 + 0x30) = _Str___item_id__, uVar1 != 3 &&
          (*(void **)(lVar3 + 0x38) = AJFBHMKJHJD, 4 < uVar1)))) {
        *(undefined8 *)(lVar3 + 0x40) = _Str___item_value__;
        uVar4 = System_Int32__ToString(&iStack_64,0);
        if ((5 < *(uint *)(lVar3 + 0x18)) &&
           (*(undefined8 *)(lVar3 + 0x48) = uVar4, *(uint *)(lVar3 + 0x18) != 6)) {
          *(undefined8 *)(lVar3 + 0x50) = _Str___car_id__;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = System_Int32__ToString(Main.<statics> + 0x2c,0);
          if ((7 < *(uint *)(lVar3 + 0x18)) &&
             (*(undefined8 *)(lVar3 + 0x58) = uVar4, *(uint *)(lVar3 + 0x18) != 8)) {
            *(undefined8 *)(lVar3 + 0x60) = _Str___level_id__;
            uStack_68 = *(undefined4 *)(lVar2 + 0x10);
            uVar4 = System_Int32__ToString(&uStack_68,0);
            if ((9 < *(uint *)(lVar3 + 0x18)) &&
               (*(undefined8 *)(lVar3 + 0x68) = uVar4, *(uint *)(lVar3 + 0x18) != 10)) {
              *(undefined8 *)(lVar3 + 0x70) = _Str___attempts__;
              uStack_68 = *(undefined4 *)(lVar2 + 0x3c);
              uVar4 = System_Int32__ToString(&uStack_68,0);
              if (0xb < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x78) = uVar4;
                uVar4 = System_String__Concat(lVar3,0);
                Main__GEMDEAMAGPG(uVar4,0,0);
                lVar3 = func_0x00a67b44(
                                       _System_Collections_Generic_Dictionary_string__object__TypeInfo
                                       );
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                          (lVar3,
                           _Method_System_Collections_Generic_Dictionary_string__object___ctor__);
                if (lVar3 != 0) {
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_type,PFLOEJOJJAP,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_id,AJFBHMKJHJD,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  iStack_6c = iStack_64;
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&iStack_6c);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_item_value,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_70 = Main.LCFFGBBHMPH;
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_70);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_car_id,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_74 = *(undefined4 *)(lVar2 + 0x10);
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_74);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_level_id,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  uStack_78 = *(undefined4 *)(lVar2 + 0x3c);
                  uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_78);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                            (lVar3,_Str_attempts,uVar4,
                             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
                  UnityEngine_Analytics_Analytics__CustomEvent(_Str_Gold_Spend,lVar3,0);
                  return;
                }
                goto LAB_00bf19a0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
  }
LAB_00bf19a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void JCMFKBONIGF(string FHOFNGHGNGF) { }   @0xaf1b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JCMFKBONIGF(void *__this,void *FHOFNGHGNGF)

{
  long lVar1;
  undefined8 uVar2;
  void *CIDKMFLFJEJ;
  long lVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000001916ebc & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__current_level);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str__level_id__);
    func_0x00a67900(&Str_ANALYTICS__Rewarded_Video__);
    func_0x00a67900(&Str_Rewarded_Video);
    func_0x00a67900(&Str_type);
    bRam0000000001916ebc = 1;
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
  if (Main.FBDDKIOEKDM != 0) {
    lVar1 = DAFNMLEKHAD__DCOOPMCEMNE();
    if (lVar1 == 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_ANALYTICS__Rewarded_Video__current_level,0);
    }
    else {
      uStack_44 = *(undefined4 *)(lVar1 + 0x10);
      uVar2 = System_Int32__ToString(&uStack_44,0);
      CIDKMFLFJEJ = (void *)System_String__Concat
                                      (_Str_ANALYTICS__Rewarded_Video__,FHOFNGHGNGF,_Str__level_id__
                                       ,uVar2,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
      lVar3 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if (lVar3 == 0) goto LAB_00bf1de0;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar3,_Str_type,FHOFNGHGNGF,
                 _Method_System_Collections_Generic_Dictionary_string__object__Add__);
      uStack_48 = *(undefined4 *)(lVar1 + 0x10);
      uVar2 = func_0x00a67a38(_int_TypeInfo,&uStack_48);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                (lVar3,_Str_level_id,uVar2,
                 _Method_System_Collections_Generic_Dictionary_string__object__Add__);
      UnityEngine_Analytics_Analytics__CustomEvent(_Str_Rewarded_Video,lVar3,0);
    }
    return;
  }
LAB_00bf1de0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void LEGLCIPMLDP(string FBIDBFEKKDA, string IHNICLOGLNC) { }   @0xaf1de4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__LEGLCIPMLDP(void *__this,void *FBIDBFEKKDA,void *IHNICLOGLNC)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ebd & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_parent);
    func_0x00a67900(&Str_ANALYTICS__SiteLockActivated__);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str_SiteLockActivated);
    func_0x00a67900(&Str_frame);
    bRam0000000001916ebd = 1;
  }
  uVar1 = System_String__Concat
                    (_Str_ANALYTICS__SiteLockActivated__,FBIDBFEKKDA,_Str___,IHNICLOGLNC,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_frame,FBIDBFEKKDA,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_parent,IHNICLOGLNC,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_SiteLockActivated;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void HBKCMEEGIMF() { }   @0xaf1f68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__HBKCMEEGIMF(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ebe & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__EncyclopediaOpen);
    func_0x00a67900(&Str_EncyclopediaOpen);
    bRam0000000001916ebe = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__EncyclopediaOpen,0,0);
  uVar2 = _Str_EncyclopediaOpen;
  uVar1 = System_String__IsNullOrEmpty(_Str_EncyclopediaOpen,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void MLJBGIEIBJA() { }   @0xaf1ff4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MLJBGIEIBJA(void *__this)

{
  return;
}


// ==== public void KHDFDGMBOIJ() { }   @0xaf1ff8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KHDFDGMBOIJ(void *__this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916ebf & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_AnalyticsController_init___);
    bRam0000000001916ebf = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_AnalyticsController_init___,0,0);
  if ((bRam0000000001916eba & 1) == 0) {
    func_0x00a67900(&AdvController_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__App_Start__IsFirstStart);
    bRam0000000001916eba = 1;
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
  lVar2 = _Main_TypeInfo;
  lVar8 = Main.FBDDKIOEKDM;
  if (lVar8 == 0) {
LAB_00bf13fc:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar8 + 0x98) != 1) {
    return;
  }
  AdvController.PEDOKFNDCIB = 1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
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
  if (lVar2 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__MJIAJNKPEAL(lVar2,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Main.FBDDKIOEKDM;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uVar3 = System_DateTime__get_Now(0);
  if (lVar2 == 0) goto LAB_00bf13fc;
  DAFNMLEKHAD__PGHAPGLHFPH(lVar2,uVar3);
  plVar4 = _Str_ANALYTICS__App_Start__IsFirstStart;
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
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar2,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar4,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar2 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar3,0,0);
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
  plVar4 = *(long **)(lVar2 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar8 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar8 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar8 + 0x10)) {
    if (*(long *)(lVar2 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar2 + 0x1e8),0);
    if ((*(long *)(lVar2 + 0x1e8) == 0) ||
       (lVar8 = UnityEngine_Component__get_transform(*(long *)(lVar2 + 0x1e8),0), lVar8 == 0))
    goto LAB_00c16768;
    uVar6 = UnityEngine_Transform__get_parent(lVar8,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar8 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar6,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar8 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar8,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar2 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar4 = *(long **)(lVar2 + 0x1e8);
  lVar2 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar2 != 0))
  {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar2 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar2 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar2 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar2 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar2 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar2 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar2 + 0x50) = uVar3;
        uVar3 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x58) = uVar3;
          uVar3 = System_String__Concat(lVar2,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5b0));
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


// ==== public void KPMBGEFPJCE() { }   @0xaf2068

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__KPMBGEFPJCE(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__FreeReviveTutorial);
    func_0x00a67900(&Str_FreeReviveTutorial);
    bRam0000000001916ec0 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__FreeReviveTutorial,false);
  uVar2 = _Str_FreeReviveTutorial;
  uVar1 = System_String__IsNullOrEmpty(_Str_FreeReviveTutorial,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void FFLOAIJLGHB() { }   @0xaf20f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__FFLOAIJLGHB(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec1 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Interstitial_Video);
    func_0x00a67900(&Str_Interstitial_Video);
    bRam0000000001916ec1 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__Interstitial_Video,0,0);
  uVar2 = _Str_Interstitial_Video;
  uVar1 = System_String__IsNullOrEmpty(_Str_Interstitial_Video,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void JOOHAKJLNLC(string FHOFNGHGNGF) { }   @0xaf2180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JOOHAKJLNLC(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec2 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_CrossPromoZD2);
    func_0x00a67900(&Str_ANALYTICS__CrossPromoZD2__);
    func_0x00a67900(&Str_type);
    bRam0000000001916ec2 = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__CrossPromoZD2__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_CrossPromoZD2;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void .ctor() { }   @0xaf22b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void PAHGPPCKPBM(string FHOFNGHGNGF) { }   @0xaf22bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PAHGPPCKPBM(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec3 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_PurchaseNotValid);
    func_0x00a67900(&Str_Type);
    func_0x00a67900(&Str_ANALYTICS__PurchaseNotValid__);
    bRam0000000001916ec3 = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__PurchaseNotValid__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_Type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_PurchaseNotValid;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void CCFACNADLJH() { }   @0xaf23f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__CCFACNADLJH(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_RatingOpen);
    func_0x00a67900(&Str_ANALYTICS__RatingOpen);
    bRam0000000001916ec4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__RatingOpen,false);
  uVar2 = _Str_RatingOpen;
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void GINNFMLCJBK() { }   @0xaf247c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__GINNFMLCJBK(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec5 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__SettingsNotifications);
    func_0x00a67900(&Str_SettingsNotifications);
    bRam0000000001916ec5 = 1;
  }
  if (this.MEELACGAIMP != '\0') {
    return;
  }
  this.MEELACGAIMP = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsNotifications,0,0);
  uVar2 = _Str_SettingsNotifications;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsNotifications,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void EFHKCIDGLHC() { }   @0xaf2528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__EFHKCIDGLHC(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001916ec6 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SettingsGFX);
    func_0x00a67900(&Str_ANALYTICS__SettingsGFX);
    bRam0000000001916ec6 = 1;
  }
  if (this.IAKBBCGGDMO != '\0') {
    return;
  }
  this.IAKBBCGGDMO = 1;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_ANALYTICS__SettingsGFX,0,0);
  uVar2 = _Str_SettingsGFX;
  uVar1 = System_String__IsNullOrEmpty(_Str_SettingsGFX,0);
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
    (*pcRam000000000191f028)(uVar2);
    return;
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar2 = func_0x00a67b44();
  uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
  System_ArgumentException___ctor(uVar2,uVar3,0);
  uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
  auVar5 = func_0x00a67a20(uVar2,uVar3);
  uVar2 = auVar5._0_8_;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo);
    bRam000000000191f039 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(uVar2,0);
  if ((uVar1 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar2 = func_0x00a67b44();
    uVar3 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar2,uVar3,0);
    uVar3 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar2,uVar3);
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
      (*pcRam000000000191f028)(uVar2);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar2);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,auVar5._8_8_);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void MICBBJKICOP(string CICIFFFOBLK, float KEFPEDBJENE, Decimal AJHFJLJLOOM, string DLBELLGFEOM, string EFAMGLIMNBI, string DKBDCJAIPLC, string JJDDKNOGDIK) { }   @0xaf25d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__MICBBJKICOP
               (void *__this,void *CICIFFFOBLK,float KEFPEDBJENE,void *AJHFJLJLOOM,void *DLBELLGFEOM
               ,void *EFAMGLIMNBI,void *DKBDCJAIPLC,void *JJDDKNOGDIK)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  fStack_34 = KEFPEDBJENE;
  if ((bRam0000000001916ec7 & 1) == 0) {
    func_0x00a67900(&System_Decimal_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__Revenue__current_level____nul);
    func_0x00a67900(&Str___price_converted__);
    func_0x00a67900(&Str_ANALYTICS__Revenue__productId__);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___price_in_usd__);
    bRam0000000001916ec7 = 1;
  }
  uStack_38 = 0;
  lVar2 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar2 == 0) goto LAB_00bf28a0;
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (((uVar1 != 0) &&
      (*(undefined8 *)(lVar2 + 0x20) = _Str_ANALYTICS__Revenue__productId__, uVar1 != 1)) &&
     (*(void **)(lVar2 + 0x28) = CICIFFFOBLK, 2 < uVar1)) {
    *(undefined8 *)(lVar2 + 0x30) = _Str___price_in_usd__;
    uVar3 = System_Single__ToString(&fStack_34,0);
    if ((3 < *(uint *)(lVar2 + 0x18)) &&
       (*(undefined8 *)(lVar2 + 0x38) = uVar3, *(uint *)(lVar2 + 0x18) != 4)) {
      *(undefined8 *)(lVar2 + 0x40) = _Str___price_converted__;
      if (*(int *)(_System_Decimal_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uStack_38 = System_Decimal__op_Explicit(AJHFJLJLOOM,DLBELLGFEOM,0);
      uVar3 = System_Single__ToString(&uStack_38,0);
      if (5 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x48) = uVar3;
        uVar3 = System_String__Concat(lVar2,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar3,0,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.FBDDKIOEKDM != 0) {
          lVar2 = DAFNMLEKHAD__DCOOPMCEMNE();
          if (lVar2 == 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            Main__EEKNCFLMGDP(_Str_ANALYTICS__Revenue__current_level____nul);
          }
          else {
            lVar4 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo)
            ;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                      (lVar4,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
            uStack_3c = *(undefined4 *)(lVar2 + 0x10);
            uVar3 = func_0x00a67a38(_int_TypeInfo,&uStack_3c);
            if (lVar4 == 0) goto LAB_00bf28a0;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar4,_Str_level_id,uVar3,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
          }
          return;
        }
LAB_00bf28a0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public void JOMBJMIMKHJ() { }   @0xaf28a4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__JOMBJMIMKHJ(void *__this)

{
  return;
}


// ==== public void DFHNBMEPNDH(string FHOFNGHGNGF) { }   @0xaf28a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DFHNBMEPNDH(void *__this,void *FHOFNGHGNGF)

{
  void *CIDKMFLFJEJ;
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ec8 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_SocialClick);
    func_0x00a67900(&Str_ANALYTICS__SocialClick__);
    func_0x00a67900(&Str_type);
    bRam0000000001916ec8 = 1;
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(_Str_ANALYTICS__SocialClick__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  lVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar1,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar1,_Str_type,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar4 = _Str_SocialClick;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar1,0);
    bRam000000000191f039 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(uVar4,0);
  if ((uVar2 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar4 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar4,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar4,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar2 = (*pcRam000000000191f018)();
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
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
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar3,lVar1);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar3);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar3);
  }
  return;
}


// ==== public void OJNGEGNNOME(int PBFKBPCNKKF, string FHOFNGHGNGF) { }   @0xaf29dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__OJNGEGNNOME(void *__this,int PBFKBPCNKKF,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_48;
  int iStack_44;
  
  iStack_44 = PBFKBPCNKKF;
  if ((bRam0000000001916ec9 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Level_Restart);
    func_0x00a67900(&Str_ANALYTICS__Level_Restart__);
    func_0x00a67900(&Str_level_id);
    func_0x00a67900(&Str___type__);
    func_0x00a67900(&Str_type);
    bRam0000000001916ec9 = 1;
  }
  uVar1 = System_Int32__ToString(&iStack_44,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Level_Restart__,uVar1,_Str___type__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_48 = iStack_44;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_48);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_level_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_type,FHOFNGHGNGF,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Level_Restart,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DCAKJGANLFG(string LDDJJLJMOHD) { }   @0xaf2ba4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__DCAKJGANLFG(void *__this,void *LDDJJLJMOHD)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916eca & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__CheatDetect__);
    func_0x00a67900(&Str_scene_name);
    func_0x00a67900(&Str_CheatDetect);
    bRam0000000001916eca = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__CheatDetect__,LDDJJLJMOHD,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_scene_name,LDDJJLJMOHD,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_CheatDetect;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void GJEJLEDIILK(int HCBODNKILEA) { }   @0xaf2cd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__GJEJLEDIILK(void *__this,int HCBODNKILEA)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = HCBODNKILEA;
  if ((bRam0000000001916ecb & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Buy_New_Car);
    func_0x00a67900(&Str_ANALYTICS__Buy_New_Car__);
    func_0x00a67900(&Str_car_id);
    bRam0000000001916ecb = 1;
  }
  uVar1 = System_Int32__ToString(&iStack_34,0);
  uVar1 = System_String__Concat(_Str_ANALYTICS__Buy_New_Car__,uVar1,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  iStack_38 = iStack_34;
  uVar1 = func_0x00a67a38(_int_TypeInfo,&iStack_38);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_car_id,uVar1,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_Buy_New_Car,lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PKLJHOHIJEP(string FHOFNGHGNGF) { }   @0xaf2e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__PKLJHOHIJEP(void *__this,void *FHOFNGHGNGF)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001916ecc & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__AdvBannerClick__);
    func_0x00a67900(&Str_AdvBannerClick);
    func_0x00a67900(&Str_window);
    bRam0000000001916ecc = 1;
  }
  uVar1 = System_String__Concat(_Str_ANALYTICS__AdvBannerClick__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar1,0,0);
  lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
            (lVar2,_Str_window,FHOFNGHGNGF,
             _Method_System_Collections_Generic_Dictionary_string__object__Add__);
  uVar1 = _Str_AdvBannerClick;
  if ((bRam000000000191f039 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar2,0);
    bRam000000000191f039 = 1;
  }
  uVar3 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar3 & 1) != 0) {
    func_0x00a67914(&System_ArgumentException_TypeInfo);
    uVar1 = func_0x00a67b44();
    uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
    System_ArgumentException___ctor(uVar1,uVar5,0);
    uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
    func_0x00a67a20(uVar1,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (pcRam000000000191f018 == (code *)0x0) {
    pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
  }
  uVar3 = (*pcRam000000000191f018)();
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) {
      if (pcRam000000000191f028 == (code *)0x0) {
        pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
      }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191f028)(uVar1);
      return;
    }
    lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
    UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar1);
    if (lVar4 == 0) goto LAB_016d9194;
    UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar2);
    if (pcRam000000000191f030 == (code *)0x0) {
      pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
    }
    (*pcRam000000000191f030)(lVar4);
    UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
  }
  return;
}


// ==== public void CBPJCFHKMLE(string FHOFNGHGNGF, int GBADBNPHNGF) { }   @0xaf2f84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AnalyticsController__CBPJCFHKMLE(void *__this,void *FHOFNGHGNGF,int GBADBNPHNGF)

{
  ulong uVar1;
  void *CIDKMFLFJEJ;
  long lVar2;
  undefined8 uVar3;
  int iStack_34;
  
  if ((bRam0000000001916ecd & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_ANALYTICS__AccelerometerProblem__);
    func_0x00a67900(&Str_api);
    func_0x00a67900(&Str_device);
    func_0x00a67900(&Str_AccelerometerProblem);
    func_0x00a67900(&Str_type);
    bRam0000000001916ecd = 1;
  }
  uVar1 = UnityEngine_PlayerPrefs__HasKey(_Str_AccelerometerProblem,0);
  if ((uVar1 & 1) == 0) {
    UnityEngine_PlayerPrefs__SetInt(_Str_AccelerometerProblem,1,0);
    CIDKMFLFJEJ = (void *)System_String__Concat
                                    (_Str_ANALYTICS__AccelerometerProblem__,FHOFNGHGNGF,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
    lVar2 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
              (lVar2,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_type,FHOFNGHGNGF,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    iStack_34 = GBADBNPHNGF;
    uVar3 = func_0x00a67a38(_int_TypeInfo,&iStack_34);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_api,uVar3,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    uVar3 = UnityEngine_SystemInfo__get_deviceModel(0);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
              (lVar2,_Str_device,uVar3,
               _Method_System_Collections_Generic_Dictionary_string__object__Add__);
    UnityEngine_Analytics_Analytics__CustomEvent(_Str_AccelerometerProblem,lVar2,0);
  }
  return;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUIAchievement : MonoBehaviour // TypeDefIndex: 5096
{
	// Fields
	public KKMHKJEGDLA HKGEOJPHLAN; // 0x20
	public Text OIGEBFODLLH; // 0x28
	public string GDLHJGFGDNO; // 0x30
	public GameObject ELBNMDEPPPH; // 0x38
	public Text JDCEFHEPHNK; // 0x40
	public Text JHNGOGLIHFK; // 0x48
	public Image EBCLENJBNPJ; // 0x50
	public GameObject OLIFKKJBDCC; // 0x58
	public GameObject DONPFEBKFPL; // 0x60
	public RectTransform JDPIDMFCMNB; // 0x68
	public Text BJEIFCMEHFK; // 0x70
	public GameObject IIPDPHGEIHD; // 0x78
	public GameObject AIJPCKKCFLL; // 0x80
	public Text GHPCKOOLEHB; // 0x88
	public Image AMKHPKONHIB; // 0x90

	// Methods

	public void ButtonAchievementClaim() { }

	public void ButtonAchievementRewarded() { }

	public void .ctor() { }
}
*/

// ==== public void ButtonAchievementClaim() { }   @0xaed260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIAchievement__ButtonAchievementClaim(void *__this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__this_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000001916ea3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916ea3 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Main.KECGFPHIEHF != 0) &&
     (lVar6 = Main.KECGFPHIEHF.HEIGOLFEAHJ, lVar6 != 0)) {
    iVar1 = *(int *)(lVar6 + 0x18);
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        if (iVar1 == iVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar6 + (long)iVar2 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00bed318;
        if (this.HKGEOJPHLAN == *(int *)(lVar3 + 0x10)) {
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
          lVar6 = Main.FBDDKIOEKDM;
          if (lVar6 != 0) {
            uVar4 = DAFNMLEKHAD__OFOJMCJAGFD(lVar6,*(undefined4 *)(lVar3 + 0x10));
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
            lVar6 = Main.FBDDKIOEKDM;
            if (lVar6 != 0) {
              DAFNMLEKHAD__EBANJKOABAL(lVar6,*(undefined4 *)(lVar3 + 0x10),2);
              iVar1 = *(int *)(lVar3 + 0x30);
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
              if (__this_00 != (void *)0x0) {
                uStack_50 = *(undefined4 *)((long)__this_00 + 0x4c);
                uStack_58 = *(undefined8 *)((long)__this_00 + 0x44);
                uStack_60 = __this_00/*DAFNMLEKHAD*/.AAOCOGMIAHM;
                iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
                DAFNMLEKHAD__DIMKKHJDHFJ(__this_00,iVar1 + iVar2);
                if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                SoundScript__GIGBLEBBIEK(SoundScript.CIMAPDEBGGG)
                ;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (Menu.KECGFPHIEHF != 0) {
                  uVar5 = Menu__KLGOLHHGBKP(Menu.KECGFPHIEHF,0);
                  if ((Menu.KECGFPHIEHF != 0) &&
                     (Menu.KECGFPHIEHF.OJJAEEGGHJM != 0)) {
                    AnalyticsController__ODLOKNOHMOB(uVar5,*(undefined4 *)(lVar3 + 0x10));
                    if ((Menu.KECGFPHIEHF != 0) &&
                       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 != 0)) {
                      GUIGarage__MAKGMMFFGPG(lVar6,0);
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
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    return;
  }
LAB_00bed318:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void ButtonAchievementRewarded() { }   @0xaed578

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIAchievement__ButtonAchievementRewarded(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000001916ea4 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ea4 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar4 = Menu.KECGFPHIEHF.ANIMNONMFFH;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar2 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar2 != 0)) {
      uVar1 = AdvController__HNDMJBICLJF(lVar2,3,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = Menu.KECGFPHIEHF;
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x38);
        *(undefined4 *)(lVar2 + 0x8c) = this.HKGEOJPHLAN;
        if (lVar3 != 0) {
          if ((bRam00000000019171df & 1) == 0) {
            func_0x00a67900(&Main_TypeInfo,3,0);
            func_0x00a67900(&MaxSdkAndroid_TypeInfo);
            func_0x00a67900(&Menu_TypeInfo);
            func_0x00a67900(&NNPDABJADNE_TypeInfo);
            func_0x00a67900(&Str_ADV_REWARD__SHOW_);
            bRam00000000019171df = 1;
          }
          uVar1 = AdvController__HNDMJBICLJF(lVar3);
          if ((uVar1 & 1) == 0) {
            return;
          }
          *(undefined4 *)(lVar3 + 0x30) = 3;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF != 0) {
            lVar2 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
            uStack_48 = _NNPDABJADNE_TypeInfo;
            uStack_40 = 0xffffffffffffffff;
            uStack_38 = *(undefined4 *)(lVar3 + 0x30);
            uVar4 = System_Enum__ToString(&uStack_48,0);
            if (lVar2 != 0) {
              AnalyticsController__JCMFKBONIGF(lVar2,uVar4,0);
              uStack_60 = _NNPDABJADNE_TypeInfo;
              uVar5 = *(undefined8 *)(lVar3 + 0x40);
              uStack_58 = 0xffffffffffffffff;
              uStack_50 = *(undefined4 *)(lVar3 + 0x30);
              uVar4 = System_Enum__ToString(&uStack_60,0);
              if (*(int *)(_MaxSdkAndroid_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_MaxSdkAndroid_TypeInfo);
              }
              MaxSdkAndroid__ShowRewardedAd(uVar5,uVar4,0,0);
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              Main__GEMDEAMAGPG(_Str_ADV_REWARD__SHOW_,0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xaed6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUIAchievement___ctor(void *__this)

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



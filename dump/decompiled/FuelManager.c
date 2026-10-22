/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class FuelManager : MonoBehaviour // TypeDefIndex: 5083
{
	// Fields
	private bool DIFNGFMLPMP; // 0x20
	public static bool NDMMNFPNIGC; // 0x0
	public static bool ONOJBFNLIJI; // 0x1
	public const int JAMPECBLPCF = 24;
	public static int PCGAGFMFKMC; // 0x4
	public const int NMONNADLOBD = 600;
	private ObscuredInt DIJKLNELFMH; // 0x24
	private float DEEAMAOHJGM; // 0x38

	// Methods

	public void JKGPIEKIJNG() { }

	public void PNAAGCJLMLB(int ALLBGCHDGNC, bool DHJBFBDKNJE) { }

	private void KPOIGAIGJGL() { }

	public void NGBCNBFIMFC(int ICGGFAKJHGN = -1) { }

	public void AFCKJABEJKI() { }

	private void Update() { }

	public void NALMHNPBAAF() { }

	private void DJOELCKFNBO() { }

	public void CNNAILDHIMN() { }

	private void Start() { }

	public void CPLMJMFGLMB() { }

	public void .ctor() { }

	private void OnEnable() { }

	private void MLLMOHIBFMC(int ILPEALLOJNJ) { }

	public void OBAELOECFBH() { }

	private void IGOLHIKAMHI() { }
}
*/

// ==== public void JKGPIEKIJNG() { }   @0xae4750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__JKGPIEKIJNG(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_18;
  
  if ((bRam0000000001916e40 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e40 = 1;
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
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_18 = System_DateTime__get_Now(0);
  uVar1 = System_DateTime__AddHours(0x4020000000000000,&uStack_18,0);
  if (lVar2 != 0) {
    uVar1 = DAFNMLEKHAD__GBNPKHOGCBB(lVar2,uVar1,0);
    FuelManager.ONOJBFNLIJI = 1;
    FuelManager__NGBCNBFIMFC(uVar1,0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NGBCNBFIMFC(int ICGGFAKJHGN = -1) { }   @0xae4860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__NGBCNBFIMFC(void *__this,int ICGGFAKJHGN)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int iStack_24;
  
  iStack_24 = ICGGFAKJHGN;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
  }
  if (ICGGFAKJHGN == -1) {
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
    if (lVar2 == 0) goto LAB_00be4b00;
    iStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar2,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) {
      uVar5 = *(undefined8 *)(lVar2 + 0x3d0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      cVar1 = FuelManager.ONOJBFNLIJI;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF != 0) &&
          (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x3d0), lVar2 != 0)) {
        plVar6 = *(long **)(lVar2 + 0x28);
        if (cVar1 == '\0') {
          uVar5 = System_Int32__ToString(&iStack_24,0);
          uVar4 = System_Int32__ToString(FuelManager.<statics> + 4,0);
          uVar5 = System_String__Concat(uVar5,_Str__,uVar4,0);
          if (plVar6 == (long *)0x0) goto LAB_00be4b00;
          lVar2 = *plVar6;
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_00be4b00;
          lVar2 = *plVar6;
          uVar5 = _Str__size_65____size___size_65____size_;
        }
        (**(code **)(lVar2 + 0x5a8))(plVar6,uVar5,*(undefined8 *)(lVar2 + 0x5b0));
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF != 0) &&
           (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) {
          GUIGarage__NFJNJCLENFD(lVar2,0);
          return;
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PNAAGCJLMLB(int ALLBGCHDGNC, bool DHJBFBDKNJE) { }   @0xae4b04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__PNAAGCJLMLB(void *__this,int ALLBGCHDGNC,bool DHJBFBDKNJE)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *__this_00;
  int iStack_34;
  
  iStack_34 = ALLBGCHDGNC;
  if ((bRam0000000001916e41 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Increase_Fuel__);
    func_0x00a67900(&Str_fuel);
    bRam0000000001916e41 = 1;
  }
  uVar2 = System_Int32__ToString(&iStack_34,0);
  uVar2 = System_String__Concat(_Str_Increase_Fuel__,uVar2,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar2,0,0);
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  __this_00 = Main.FBDDKIOEKDM;
  if (__this_00 != (void *)0x0) {
    iVar1 = DAFNMLEKHAD__HDABOKNLKGK(__this_00,0);
    DAFNMLEKHAD__OPFBHOGMKNG(__this_00,iStack_34 + iVar1);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Main.FBDDKIOEKDM;
    if (lVar3 != 0) {
      iVar1 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
      if (iVar1 < FuelManager.PCGAGFMFKMC) {
        if (DHJBFBDKNJE) {
          FuelManager__DJOELCKFNBO(__this);
        }
      }
      else {
        FuelManager__KPOIGAIGJGL(__this);
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
        if (lVar3 == 0) goto LAB_00be4fa4;
        uVar4 = DAFNMLEKHAD__PHOGLOAEGLO(lVar3,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          NotificationsManager__LLFJNKAPDIM(_Str_fuel,3,1,0);
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.MDLMIEDLJMC == '\0') {
LAB_00be4f8c:
        FuelManager__IGOLHIKAMHI();
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF != 0) {
        uVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar4 & 1) == 0) goto LAB_00be4f8c;
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
          uVar4 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
          FuelManager__NGBCNBFIMFC(uVar4,uVar4 & 0xffffffff);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) {
            uVar2 = *(undefined8 *)(lVar3 + 0x3d0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((Menu.KECGFPHIEHF == 0) ||
                  (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0)) ||
                 (lVar3 = *(long *)(lVar3 + 0x3d0), lVar3 == 0)) goto LAB_00be4fa4;
              GUICoins__ICMOCEHIFOI(lVar3,0);
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
              iVar1 = DAFNMLEKHAD__HDABOKNLKGK(lVar3,0);
              if (iVar1 == 0) {
                uVar2 = GUIWindow.OFEJBBPBBFG;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0))
                goto LAB_00be4fa4;
                uVar5 = *(undefined8 *)(lVar3 + 0x78);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar4 = UnityEngine_Object__op_Equality(uVar2,uVar5,0);
                if ((uVar4 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (Menu.KECGFPHIEHF == 0) goto LAB_00be4fa4;
                  Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
                }
              }
              goto LAB_00be4f8c;
            }
          }
        }
      }
    }
  }
LAB_00be4fa4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void KPOIGAIGJGL() { }   @0xae4fa8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__KPOIGAIGJGL(void *__this)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000001916e42 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Stop_Timer);
    bRam0000000001916e42 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_Stop_Timer,0,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_58,600,0);
  *(undefined4 *)((long)__this + 0x34) = uStack_48;
  *(undefined8 *)((long)__this + 0x2c) = uStack_50;
  this.DIJKLNELFMH = uStack_58;
  return;
}


// ==== private void DJOELCKFNBO() { }   @0xae504c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__DJOELCKFNBO(void *__this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *__this_00;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  double dStack_38;
  
  if ((bRam0000000001916e46 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_time_full_refresh__);
    func_0x00a67900(&Str_fuel);
    func_0x00a67900(&Str___Notifications_in__);
    func_0x00a67900(&Str_FUEL_REFRESHED);
    bRam0000000001916e46 = 1;
  }
  uStack_40 = 0;
  dStack_38 = 0.0;
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
    bVar2 = DAFNMLEKHAD__PHOGLOAEGLO(__this_00);
    if (!bVar2) {
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
    lVar5 = Main.FBDDKIOEKDM;
    if (lVar5 != 0) {
      iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
      iVar1 = FuelManager.PCGAGFMFKMC;
      if (iVar1 <= iVar3) {
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
      lVar5 = Main.FBDDKIOEKDM;
      if (lVar5 != 0) {
        iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
        uStack_58 = *(undefined8 *)((long)__this + 0x2c);
        uStack_60 = this.DIJKLNELFMH;
        uStack_50 = *(undefined4 *)((long)__this + 0x34);
        iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_60,0);
        dStack_38 = (double)((iVar1 - iVar3) * 600 - iVar4);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar5 = Main.FBDDKIOEKDM;
        if (lVar5 != 0) {
          uVar6 = DAFNMLEKHAD__AFDIIKEDILD(lVar5,0);
          if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
          }
          uVar7 = System_Globalization_CultureInfo__get_CurrentCulture(0);
          if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_DateTime_TypeInfo);
          }
          uStack_40 = System_DateTime__ParseExact(uVar6,_Str_G,uVar7,0);
          uStack_40 = System_DateTime__AddSeconds(dStack_38,&uStack_40,0);
          uVar6 = System_Double__ToString(&dStack_38,0);
          uVar7 = System_DateTime__ToString(&uStack_40,0);
          uVar6 = System_String__Concat
                            (_Str_time_full_refresh__,uVar6,_Str___Notifications_in__,uVar7,0);
          Main__GEMDEAMAGPG(uVar6,0,0);
          uVar6 = uStack_40;
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Translate.KECGFPHIEHF != 0) {
            uVar7 = Translate__JJJNIPAKLJF
                              (Translate.KECGFPHIEHF,_Str_FUEL_REFRESHED,0);
            if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_NotificationsManager_TypeInfo);
            }
            NotificationsManager__KJLOEDMCBNA(uVar6,uVar7,_Str_fuel,3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void IGOLHIKAMHI() { }   @0xae5408

/* WARNING: Removing unreachable block (ram,0x0149380c) */
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
/* WARNING: Removing unreachable block (ram,0x01493814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__IGOLHIKAMHI(void *__this)

{
  int iVar1;
  void *__this_00;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001916e4a & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e4a = 1;
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
  if (__this_00 == (void *)0x0) goto LAB_00be56bc;
  iVar1 = DAFNMLEKHAD__HDABOKNLKGK(__this_00);
  if (FuelManager.PCGAGFMFKMC <= iVar1) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF != 0) {
        uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
        if ((Menu.KECGFPHIEHF != 0) &&
           (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
          uVar5 = *(undefined8 *)(lVar4 + 0x678);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF == 0) ||
                (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
               (plVar3 = *(long **)(lVar4 + 0x678), plVar3 == (long *)0x0)) goto LAB_00be56bc;
            (**(code **)(*plVar3 + 0x5a8))(plVar3,_Str_,*(undefined8 *)(*plVar3 + 0x5b0));
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
            uVar5 = *(undefined8 *)(lVar4 + 0x670);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((Menu.KECGFPHIEHF == 0) ||
                  (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
                 (lVar4 = *(long *)(lVar4 + 0x670), lVar4 == 0)) goto LAB_00be56bc;
              UnityEngine_GameObject__SetActive(lVar4,0,0);
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF != 0) &&
               (uVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, uVar2 != 0)) {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar2;
              if (*(long *)(uVar2 + 0x668) != 0) {
                auVar6 = ZEXT816(0);
                if (*(long *)(uVar2 + 0x670) != 0) {
                  lVar4 = *(long *)(*(long *)(uVar2 + 0x668) + 0x20);
                  auVar6 = UnityEngine_GameObject__get_activeSelf(*(long *)(uVar2 + 0x670),0);
                  if (lVar4 != 0) {
                    UnityEngine_RectTransform__get_sizeDelta(lVar4,0,0);
                    UnityEngine_RectTransform__GetParentSize(lVar4);
                    UnityEngine_RectTransform__get_anchorMax(lVar4);
                    UnityEngine_RectTransform__get_anchorMin(lVar4);
                    if (pcRam000000000191c810 == (code *)0x0) {
                      pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
                    }
                    (*pcRam000000000191c810)(lVar4,&stack0xffffffffffffffe8);
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50(auVar6._0_8_,auVar6._8_8_);
            }
          }
        }
      }
LAB_00be56bc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void AFCKJABEJKI() { }   @0xae56c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__AFCKJABEJKI(void *__this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  double dVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  int iStack_4c;
  undefined8 uStack_48;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000001916e44 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str_fuel_time__);
    func_0x00a67900(&Str_G);
    func_0x00a67900(&Str_CheckFuelForRefresh__Fuel__);
    func_0x00a67900(&Str_total_seconds__);
    func_0x00a67900(&Str___parsed__);
    func_0x00a67900(&Str___fuel_add__);
    func_0x00a67900(&Str___max__);
    bRam0000000001916e44 = 1;
  }
  uStack_48 = 0;
  iStack_38 = 0;
  iStack_4c = 0;
  uStack_58 = 0;
  if ((FuelManager.NDMMNFPNIGC != '\0') ||
     (this.DIFNGFMLPMP == '\0')) {
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
    uStack_34 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
    uVar5 = System_Int32__ToString(&uStack_34,0);
    uVar6 = System_Int32__ToString(FuelManager.<statics> + 4,0);
    pvVar7 = (void *)System_String__Concat
                               (_Str_CheckFuelForRefresh__Fuel__,uVar5,_Str___max__,uVar6,0);
    Main__GEMDEAMAGPG(pvVar7,false);
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = Main.FBDDKIOEKDM;
    if (lVar4 != 0) {
      iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
      if (FuelManager.PCGAGFMFKMC <= iVar2) {
        FuelManager__KPOIGAIGJGL(__this);
        goto LAB_00be5c10;
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
        uVar5 = DAFNMLEKHAD__AFDIIKEDILD(lVar4,0);
        if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_Globalization_CultureInfo_TypeInfo);
        }
        uVar6 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_System_DateTime_TypeInfo);
        }
        uStack_48 = System_DateTime__ParseExact(uVar5,_Str_G,uVar6,0);
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = Main.FBDDKIOEKDM;
        if (lVar4 != 0) {
          uVar5 = DAFNMLEKHAD__AFDIIKEDILD(lVar4,0);
          uVar6 = System_DateTime__ToString(&uStack_48,0);
          pvVar7 = (void *)System_String__Concat(_Str_fuel_time__,uVar5,_Str___parsed__,uVar6,0);
          Main__GEMDEAMAGPG(pvVar7,false);
          uVar5 = System_DateTime__get_Now(0);
          uStack_58 = System_DateTime__op_Subtraction(uVar5,uStack_48,0);
          if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_System_TimeSpan_TypeInfo);
          }
          dVar8 = (double)System_TimeSpan__get_TotalSeconds(&uStack_58,0);
          iVar2 = -0x80000000;
          if (dVar8 != INFINITY) {
            iVar2 = (int)dVar8;
          }
          iStack_38 = iVar2;
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_88,iVar2,0);
          iStack_4c = iVar2 / 600;
          uStack_60 = uStack_78;
          uStack_68 = uStack_80;
          uStack_70 = uStack_88;
          *(undefined4 *)((long)__this + 0x34) = uStack_78;
          *(undefined8 *)((long)__this + 0x2c) = uStack_80;
          this.DIJKLNELFMH = uStack_88;
          uVar5 = System_Int32__ToString(&iStack_38,0);
          uVar6 = System_Int32__ToString(&iStack_4c,0);
          pvVar7 = (void *)System_String__Concat
                                     (_Str_total_seconds__,uVar5,_Str___fuel_add__,uVar6,0);
          Main__GEMDEAMAGPG(pvVar7,false);
          iVar2 = iStack_38;
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
            iVar3 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
            iVar1 = FuelManager.PCGAGFMFKMC;
            if (iStack_4c + iVar3 < iVar1) {
              if (0 < iStack_4c) {
                FuelManager__PNAAGCJLMLB(__this,iStack_4c,0);
              }
              FuelManager__MLLMOHIBFMC
                        (__this,iVar2 - 600U & ((int)(iVar2 - 600U) >> 0x1f ^ 0xffffffffU));
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
              lVar4 = Main.FBDDKIOEKDM;
              if (lVar4 == 0) goto LAB_00be5c2c;
              iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar4,0);
              FuelManager__PNAAGCJLMLB(__this,iVar1 - iVar2,0);
            }
LAB_00be5c10:
            FuelManager__IGOLHIKAMHI();
            return;
          }
        }
      }
    }
  }
LAB_00be5c2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void MLLMOHIBFMC(int ILPEALLOJNJ) { }   @0xae5c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__MLLMOHIBFMC(void *__this,int ILPEALLOJNJ)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_28;
  
  if ((bRam0000000001916e48 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_StartTimer__);
    func_0x00a67900(&Str_StartTimer_not_start__);
    bRam0000000001916e48 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_60 = *(undefined4 *)((long)__this + 0x34);
  uStack_68 = *(undefined8 *)((long)__this + 0x2c);
  uStack_70 = this.DIJKLNELFMH;
  puVar1 = (undefined8 *)(&this.DIJKLNELFMH);
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_70,0);
  if (iVar2 != 0) {
    uStack_80 = *(undefined4 *)((long)__this + 0x34);
    uStack_88 = *(undefined8 *)((long)__this + 0x2c);
    uStack_90 = *puVar1;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_90,0);
    if (iVar2 < 600) {
      uStack_40 = *(undefined4 *)((long)__this + 0x34);
      uStack_48 = *(undefined8 *)((long)__this + 0x2c);
      uStack_50 = *puVar1;
      uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
      uVar3 = System_String__Concat(_Str_StartTimer_not_start__,uVar3,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      Main__GEMDEAMAGPG(uVar3,0,0);
      return;
    }
  }
  uStack_40 = *(undefined4 *)((long)__this + 0x34);
  uStack_48 = *(undefined8 *)((long)__this + 0x2c);
  uStack_50 = *puVar1;
  uVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(&uStack_50,0);
  uVar3 = System_String__Concat(_Str_StartTimer__,uVar3,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar3,0,0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_c8,ILPEALLOJNJ,0);
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  *(undefined4 *)((long)__this + 0x34) = uStack_b8;
  *(undefined8 *)((long)__this + 0x2c) = uStack_c0;
  *puVar1 = uStack_c8;
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = Main.FBDDKIOEKDM;
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_System_DateTime_TypeInfo);
  }
  uStack_28 = System_DateTime__get_Now(0);
  uStack_28 = System_DateTime__AddSeconds((double)-ILPEALLOJNJ,&uStack_28,0);
  uVar3 = System_DateTime__ToString(&uStack_28,0);
  if (lVar4 != 0) {
    DAFNMLEKHAD__KGEAALNFELC(lVar4,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xae5e88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__Update(void *__this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916e45 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Str__0___1_00_);
    func_0x00a67900(&Str_Menu_I_gui_garage_is_null);
    func_0x00a67900(&Str__0___1_00___2_00_);
    bRam0000000001916e45 = 1;
  }
  uStack_68 = 0;
  uStack_70 = *(undefined4 *)((long)__this + 0x34);
  uStack_78 = *(undefined8 *)((long)__this + 0x2c);
  uStack_80 = this.DIJKLNELFMH;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_80,0);
  if ((iVar2 < 600) &&
     (fVar9 = (float)UnityEngine_Time__get_time(0), 1.0 <= fVar9 - this.DEEAMAOHJGM))
  {
    puVar1 = (undefined8 *)(&this.DIJKLNELFMH);
    uVar10 = UnityEngine_Time__get_time(0);
    this.DEEAMAOHJGM = uVar10;
    uStack_c0 = *(undefined4 *)((long)__this + 0x34);
    uStack_c8 = *(undefined8 *)((long)__this + 0x2c);
    uStack_d0 = *puVar1;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Increment(&iStack_b8,&uStack_d0,0);
    uStack_a0 = CONCAT44(uStack_b4,iStack_b8);
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    *(undefined4 *)((long)__this + 0x34) = uStack_a8;
    *(undefined8 *)((long)__this + 0x2c) = uStack_b0;
    *puVar1 = uStack_a0;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC == '\0') {
LAB_00be63b4:
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(_Str_Menu_I_gui_garage_is_null,0);
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00be6718;
      uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00be63b4;
      uVar6 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
      goto LAB_00be6718;
      uVar8 = *(undefined8 *)(lVar5 + 0x78);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
        goto LAB_00be6718;
        uVar8 = *(undefined8 *)(lVar5 + 0x70);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
        if ((uVar3 & 1) != 0) goto LAB_00be6168;
        uVar6 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
        goto LAB_00be6718;
        uVar8 = *(undefined8 *)(lVar5 + 0xa8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
        if ((uVar3 & 1) != 0) goto LAB_00be6168;
      }
      else {
LAB_00be6168:
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
        goto LAB_00be6718;
        uVar6 = *(undefined8 *)(lVar5 + 0x670);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF == 0) ||
              (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
             (lVar5 = *(long *)(lVar5 + 0x670), lVar5 == 0)) goto LAB_00be6718;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
          if ((uVar3 & 1) == 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF == 0) ||
                (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x670), lVar5 == 0)) goto LAB_00be6718;
            UnityEngine_GameObject__SetActive(lVar5,1,0);
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
            goto LAB_00be6718;
            GUIGarage__CGHIGIBEHAE(lVar5,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
        goto LAB_00be6718;
        uVar6 = *(undefined8 *)(lVar5 + 0x678);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
          goto LAB_00be6718;
          uStack_e0 = *(undefined4 *)((long)__this + 0x34);
          uStack_e8 = *(undefined8 *)((long)__this + 0x2c);
          uStack_f0 = *puVar1;
          plVar7 = *(long **)(lVar5 + 0x678);
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_f0,0);
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(600 - iVar2) / 0x3c);
          uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_a0);
          uStack_108 = *(undefined8 *)((long)__this + 0x2c);
          uStack_110 = *puVar1;
          uStack_100 = *(undefined4 *)((long)__this + 0x34);
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_110,0);
          iStack_b8 = (600 - iVar2) % 0x3c;
          uVar8 = func_0x00a67a38(_int_TypeInfo,&iStack_b8);
          uVar6 = System_String__Format(_Str__0___1_00_,uVar6,uVar8,0);
          if (plVar7 == (long *)0x0) goto LAB_00be6718;
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
        }
      }
    }
    uStack_120 = *(undefined4 *)((long)__this + 0x34);
    uStack_128 = *(undefined8 *)((long)__this + 0x2c);
    uStack_130 = *puVar1;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(&uStack_130,0);
    if (599 < iVar2) {
      FuelManager__KPOIGAIGJGL(__this);
      FuelManager__AFCKJABEJKI(__this);
    }
  }
  if (FuelManager.ONOJBFNLIJI == '\0') {
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
  lVar5 = Main.FBDDKIOEKDM;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
    if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = System_DateTime__get_Now(0);
    uStack_68 = System_DateTime__op_Subtraction(uVar6,uVar8,0);
    if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_TimeSpan_TypeInfo);
    }
    dVar11 = (double)System_TimeSpan__get_TotalSeconds(&uStack_68,0);
    if (dVar11 <= 0.0) {
      FuelManager.ONOJBFNLIJI = 0;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = _Menu_TypeInfo;
      if (Menu.MDLMIEDLJMC != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00be6718;
        uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
          goto LAB_00be6718;
          uVar3 = GUIGarage__GFNKMDJEDBD(lVar5,0);
        }
      }
      FuelManager__NGBCNBFIMFC(uVar3,0xffffffff);
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.MDLMIEDLJMC != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF != 0) {
          uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) {
            plVar7 = *(long **)(lVar5 + 0x6b0);
            if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = System_TimeSpan__get_Hours(&uStack_68,0);
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
            uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_a0);
            iStack_b8 = System_TimeSpan__get_Minutes(&uStack_68,0);
            uVar8 = func_0x00a67a38(_int_TypeInfo,&iStack_b8);
            uStack_134 = System_TimeSpan__get_Seconds(&uStack_68,0);
            uVar4 = func_0x00a67a38(_int_TypeInfo,&uStack_134);
            uVar6 = System_String__Format(_Str__0___1_00___2_00_,uVar6,uVar8,uVar4,0);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x5b0));
              return;
            }
          }
        }
        goto LAB_00be6718;
      }
    }
    return;
  }
LAB_00be6718:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NALMHNPBAAF() { }   @0xae671c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__NALMHNPBAAF(void *__this)

{
  return;
}


// ==== public void CNNAILDHIMN() { }   @0xae6720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__CNNAILDHIMN(void *__this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  
  if ((bRam0000000001916e47 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e47 = 1;
  }
  this.DIFNGFMLPMP = 1;
  if (FuelManager.NDMMNFPNIGC != '\0') {
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
  lVar5 = Main.FBDDKIOEKDM;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x70);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = System_DateTime__get_Now(0);
  bVar2 = System_DateTime__op_GreaterThan(uVar7,uVar4,0);
  lVar5 = FuelManager.<statics>;
  *(byte *)(lVar5 + 1) = bVar2 & 1;
  *(undefined4 *)(lVar5 + 4) = 0x18;
  if (this.DIFNGFMLPMP == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI();
  uStack_24 = 0xffffffff;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
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
  lVar5 = Main.FBDDKIOEKDM;
  if (lVar5 != 0) {
    uStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC == '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        cVar1 = FuelManager.ONOJBFNLIJI;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x3d0), lVar5 != 0)) {
          plVar6 = *(long **)(lVar5 + 0x28);
          if (cVar1 == '\0') {
            uVar7 = System_Int32__ToString(&uStack_24,0);
            uVar4 = System_Int32__ToString(FuelManager.<statics> + 4,0);
            uVar7 = System_String__Concat(uVar7,_Str__,uVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
            uVar7 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar5 + 0x5a8))(plVar6,uVar7,*(undefined8 *)(lVar5 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CPLMJMFGLMB() { }   @0xae6854

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__CPLMJMFGLMB(void *__this)

{
  char cVar1;
  void *__this_00;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iStack_24;
  
  if (this.DIFNGFMLPMP == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI();
  iStack_24 = -1;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
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
  if (__this_00 != (void *)0x0) {
    iStack_24 = DAFNMLEKHAD__HDABOKNLKGK(__this_00);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC == '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
        uVar5 = *(undefined8 *)(lVar4 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        cVar1 = FuelManager.ONOJBFNLIJI;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
           (lVar4 = *(long *)(lVar4 + 0x3d0), lVar4 != 0)) {
          plVar6 = *(long **)(lVar4 + 0x28);
          if (cVar1 == '\0') {
            uVar5 = System_Int32__ToString(&iStack_24,0);
            uVar3 = System_Int32__ToString(FuelManager.<statics> + 4,0);
            uVar5 = System_String__Concat(uVar5,_Str__,uVar3,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar4 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar4 = *plVar6;
            uVar5 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar4 + 0x5a8))(plVar6,uVar5,*(undefined8 *)(lVar4 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar4,0);
            return;
          }
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xae6878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__Start(void *__this)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  
  if ((bRam0000000001916e47 & 1) == 0) {
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916e47 = 1;
  }
  this.DIFNGFMLPMP = 1;
  if (FuelManager.NDMMNFPNIGC != '\0') {
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
  lVar5 = Main.FBDDKIOEKDM;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x70);
  if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = System_DateTime__get_Now(0);
  bVar2 = System_DateTime__op_GreaterThan(uVar7,uVar4,0);
  lVar5 = FuelManager.<statics>;
  *(byte *)(lVar5 + 1) = bVar2 & 1;
  *(undefined4 *)(lVar5 + 4) = 0x18;
  if (this.DIFNGFMLPMP == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI(__this);
  uStack_24 = 0xffffffff;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
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
  lVar5 = Main.FBDDKIOEKDM;
  if (lVar5 != 0) {
    uStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar5,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC == '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        cVar1 = FuelManager.ONOJBFNLIJI;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x3d0), lVar5 != 0)) {
          plVar6 = *(long **)(lVar5 + 0x28);
          if (cVar1 == '\0') {
            uVar7 = System_Int32__ToString(&uStack_24,0);
            uVar4 = System_Int32__ToString(FuelManager.<statics> + 4,0);
            uVar7 = System_String__Concat(uVar7,_Str__,uVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar5 = *plVar6;
            uVar7 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar5 + 0x5a8))(plVar6,uVar7,*(undefined8 *)(lVar5 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xae687c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager___ctor(void *__this)

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


// ==== private void OnEnable() { }   @0xae6884

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__OnEnable(void *__this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uStack_24;
  
  if (this.DIFNGFMLPMP == '\0') {
    return;
  }
  FuelManager__AFCKJABEJKI();
  uStack_24 = 0xffffffff;
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
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
    uStack_24 = DAFNMLEKHAD__HDABOKNLKGK(lVar2,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.MDLMIEDLJMC == '\0') {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF != 0) &&
         (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) {
        uVar5 = *(undefined8 *)(lVar2 + 0x3d0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        cVar1 = FuelManager.ONOJBFNLIJI;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x3d0), lVar2 != 0)) {
          plVar6 = *(long **)(lVar2 + 0x28);
          if (cVar1 == '\0') {
            uVar5 = System_Int32__ToString(&uStack_24,0);
            uVar4 = System_Int32__ToString(FuelManager.<statics> + 4,0);
            uVar5 = System_String__Concat(uVar5,_Str__,uVar4,0);
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar2 = *plVar6;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_00be4b00;
            lVar2 = *plVar6;
            uVar5 = _Str__size_65____size___size_65____size_;
          }
          (**(code **)(lVar2 + 0x5a8))(plVar6,uVar5,*(undefined8 *)(lVar2 + 0x5b0));
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF != 0) &&
             (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) {
            GUIGarage__NFJNJCLENFD(lVar2,0);
            return;
          }
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OBAELOECFBH() { }   @0xae6888

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FuelManager__OBAELOECFBH(void *__this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e49 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916e49 = 1;
  }
  if ((FuelManager.NDMMNFPNIGC != '\0') ||
     ((*(char **)(_FuelManager_TypeInfo + 0xb8))[1] != '\0')) {
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
  if (lVar6 == 0) {
LAB_00be6b08:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  DAFNMLEKHAD__OPFBHOGMKNG(lVar6,iVar2 + -1,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00be6b08;
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
      goto LAB_00be6b08;
      uVar7 = *(undefined8 *)(lVar6 + 0x3d8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF == 0) ||
            (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x3d8), lVar6 == 0)) goto LAB_00be6b08;
        GUICoins__ICMOCEHIFOI(lVar6,0xffffffff,0);
      }
    }
  }
  FuelManager__MLLMOHIBFMC(__this,0);
  FuelManager__DJOELCKFNBO(__this);
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
  if (lVar6 == 0) goto LAB_00be6b08;
  iVar2 = DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  if ((bRam0000000001916e43 & 1) == 0) {
    func_0x00a67900(&FuelManager_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__size_65____size___size_65____size_);
    func_0x00a67900(&Str__);
    bRam0000000001916e43 = 1;
  }
  if (iVar2 == -1) {
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
    if (lVar6 == 0) goto LAB_00be4b00;
    DAFNMLEKHAD__HDABOKNLKGK(lVar6,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 != 0)) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3d0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      cVar1 = FuelManager.ONOJBFNLIJI;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF != 0) &&
          (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0x3d0), lVar6 != 0)) {
        plVar5 = *(long **)(lVar6 + 0x28);
        if (cVar1 == '\0') {
          uVar7 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
          uVar3 = System_Int32__ToString(FuelManager.<statics> + 4,0);
          uVar7 = System_String__Concat(uVar7,_Str__,uVar3,0);
          if (plVar5 == (long *)0x0) goto LAB_00be4b00;
          lVar6 = *plVar5;
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_00be4b00;
          lVar6 = *plVar5;
          uVar7 = _Str__size_65____size___size_65____size_;
        }
        (**(code **)(lVar6 + 0x5a8))(plVar5,uVar7,*(undefined8 *)(lVar6 + 0x5b0));
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF != 0) &&
           (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 != 0)) {
          GUIGarage__NFJNJCLENFD(lVar6,0);
          return;
        }
      }
    }
  }
LAB_00be4b00:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



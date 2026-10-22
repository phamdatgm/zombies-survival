/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GamePadController : MonoBehaviour // TypeDefIndex: 5270
{
	// Fields
	public MLCNINCNANA LMGKPMKNHCI; // 0x20
	private List<MLCNINCNANA> DJMNPCHPFJO; // 0x28
	public bool EECHHPBBMAG; // 0x30
	private bool LMBKHDPLFGA; // 0x31
	private bool NHNHDNAFBLE; // 0x32
	private bool LPKKHPJMCBO; // 0x33
	private GameObject CDIJMLNDKEP; // 0x38
	private float HNAIJOLJKAK; // 0x40
	public GameObject HMDGOKKIOHJ; // 0x48
	private Level HKPINLCABOF; // 0x50
	private float JGOPIEKJDKI; // 0x58
	private Color MMCFKCNGIOM; // 0x5C
	private Color ELEMNDGENFO; // 0x6C
	private Color JKHICCBMIKB; // 0x7C
	private bool CGLADILALNN; // 0x8C
	private bool MFGKNDJPBBD; // 0x8D
	public static string LMDBBPDHGLJ; // 0x0
	public static string AMHELLCDICB; // 0x8

	// Methods

	private bool ANCEANGJPLH(GameObject AOHDLBGLGCF) { }

	public void FKBCEHJHEBP() { }

	public void HFPFJNKNJND() { }

	private void Update() { }

	public void PKDDGJPLNAP() { }

	private static void .cctor() { }

	public void KBLMMLBPPKO() { }

	public void FJJJEMJAMGO(GameObject MIPKEALMBHI) { }

	private bool EODAOKKOJLL(string BJNIAMHIPAM) { }

	private void Awake() { }

	public void BBNJMJMLBCA() { }

	public void AGMBMNONINL() { }

	private void DJHKBCNIBNG() { }

	public GameObject KNABINMBNJC() { }

	private bool FEGHHAKCEIG() { }

	public void OJPBPDDLDGB() { }

	private bool PJOJJBEIFAE(MLCNINCNANA DBCKMAANOIL) { }

	public void .ctor() { }

	public void FNHCGKNKDNJ(Level MGKLJJHHEML) { }

	private bool GDCKFJKBEOE() { }

	public void KCAHLEAKNNK() { }
}
*/

// ==== public void KCAHLEAKNNK() { }   @0xb48bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__KCAHLEAKNNK(void *__this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  void *__this_00;
  int iVar9;
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
  long in_stack_ffffffffffffffb8;
  
  if ((bRam00000000019171b1 & 1) == 0) {
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_OnWindowSwitched__);
    func_0x00a67900(&Str_achievements_button);
    func_0x00a67900(&Str_encyclopedia_button);
    bRam00000000019171b1 = 1;
  }
  if (this.EECHHPBBMAG == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c49438;
  uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  uVar11 = _Str_OnWindowSwitched__;
  if ((uVar3 & 1) != 0) {
    plVar4 = this.HKPINLCABOF;
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
    uVar11 = System_String__Concat(uVar11,uVar5,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar11,0,0);
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c49438;
  uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar3 & 1) == 0) goto LAB_00c49274;
  lVar6 = GamePadController__KNABINMBNJC();
  uVar11 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
  goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar10 + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  if ((uVar3 & 1) != 0) {
    GamePadController__FNHCGKNKDNJ(__this,0);
    goto LAB_00c48f2c;
  }
  uVar11 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
  goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar10 + 0x60);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  lVar10 = GUIWindow.<statics>;
  if ((uVar3 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar10 + 0x10);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0))
    goto LAB_00c49438;
    uVar5 = *(undefined8 *)(lVar10 + 0x78);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar6 == 0) goto LAB_00c49438;
        uVar11 = UnityEngine_Object__get_name(lVar6,0);
        uVar3 = System_String__op_Equality(uVar11,_Str_encyclopedia_button,0);
        if ((uVar3 & 1) == 0) {
          uVar11 = UnityEngine_Object__get_name(lVar6,0);
          uVar3 = System_String__op_Equality(uVar11,_Str_achievements_button,0);
          if ((uVar3 & 1) == 0) goto LAB_00c48f2c;
        }
        lVar10 = GUIWindow.<statics>;
        goto LAB_00c48e4c;
      }
    }
  }
  else {
LAB_00c48e4c:
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00c49438;
    *(long *)(*(long *)(lVar10 + 0x10) + 0x38) = lVar6;
  }
LAB_00c48f2c:
  uVar11 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) goto LAB_00c49438;
  uVar5 = *(undefined8 *)(lVar6 + 0x70);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
  if ((uVar3 & 1) == 0) {
LAB_00c49050:
    uVar11 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0))
    goto LAB_00c49438;
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,uVar5,0);
    if ((uVar3 & 1) != 0) {
      uVar11 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if ((uVar3 & 1) != 0) {
        uVar11 = this.HMDGOKKIOHJ;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) != 0) {
          GamePadController__FJJJEMJAMGO(__this,this.HMDGOKKIOHJ);
          this.HMDGOKKIOHJ = 0;
          return;
        }
      }
    }
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c49438;
    uVar11 = GUIWindow.OFEJBBPBBFG.DIOAEABLGJH;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) != 0) {
      if (GUIWindow.OFEJBBPBBFG != 0) {
        GamePadController__FJJJEMJAMGO
                  (__this,GUIWindow.OFEJBBPBBFG.DIOAEABLGJH);
        if (GUIWindow.OFEJBBPBBFG != 0) {
          GUIWindow.OFEJBBPBBFG.DIOAEABLGJH = 0;
          return;
        }
      }
      goto LAB_00c49438;
    }
  }
  else {
    uVar11 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c49050;
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
    if (lVar6 == 0) goto LAB_00c49438;
    lVar6 = DAFNMLEKHAD__DCOOPMCEMNE(lVar6,0);
    if (lVar6 == 0) {
      lVar10 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(lVar6 + 0x10);
      if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar10 = Level__FHMGLDDPEDJ(uVar12,0);
    }
    if (this.HKPINLCABOF != 0) {
      uVar11 = Level__get_gui(this.HKPINLCABOF,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00c491d0;
      lVar10 = this.HKPINLCABOF;
      if (lVar10 == 0) goto LAB_00c49438;
      goto LAB_00c49404;
    }
LAB_00c491d0:
    if ((lVar6 != 0) && (lVar10 != 0)) {
      uVar11 = Level__get_gui(lVar10,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar3 & 1) != 0) {
        iVar1 = *(int *)(lVar6 + 0x10);
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar9 = Level.total_story_levels;
        if (iVar9 <= iVar1) {
          iVar1 = *(int *)(lVar6 + 0x10);
          if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            iVar9 = Level.total_story_levels;
          }
          if ((iVar1 != iVar9) || (uVar3 = DJKGLJOCFCE__MCDLFBJCNNA(lVar6,0), (uVar3 & 1) != 0))
          goto LAB_00c49274;
        }
LAB_00c49404:
        lVar6 = Level__get_gui(lVar10,0);
        if (lVar6 == 0) goto LAB_00c49438;
        plVar4 = (long *)UnityEngine_Component__get_gameObject(lVar6,0);
        if ((bRam00000000019171a4 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
          func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__)
          ;
          func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                         );
          func_0x00a67900(&
                          Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                         );
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
        uVar3 = UnityEngine_Object__op_Equality(plVar4,0,0);
        if ((uVar3 & 1) != 0) {
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
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((((Menu.KECGFPHIEHF == 0) ||
               (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
              (lVar6 = *(long *)(lVar6 + 0x150), lVar6 == 0)) ||
             (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
          goto LAB_00c55ff4;
          uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
          if ((uVar3 & 1) != 0) {
            return;
          }
        }
        GamePadController__DJHKBCNIBNG(__this);
        uVar11 = _Str_SetButton__;
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        }
        uVar2 = _Str___last__;
        plVar7 = this.CDIJMLNDKEP;
        if (plVar7 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar11 = System_String__Concat(uVar11,uVar5,uVar2,uVar8,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
        this.CDIJMLNDKEP = plVar4;
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
        if (lVar6 == 0) goto LAB_00c55ff4;
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar6,plVar4,0);
        uVar12 = UnityEngine_Time__get_realtimeSinceStartup(0);
        this.JGOPIEKJDKI = uVar12;
        if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (this.DJMNPCHPFJO,&plStack_a8,
                   _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
        uStack_88 = uStack_a0;
        plStack_90 = plStack_a8;
        uStack_80 = uStack_98;
        do {
          do {
            uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                              (&plStack_90,
                               _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                              );
            if ((uVar3 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
              __this_00 = (void *)func_0x00a67b44(_MLCNINCNANA_TypeInfo);
              MLCNINCNANA___ctor(__this_00);
              this.LMGKPMKNHCI = __this_00;
              if ((__this_00 == (void *)0x0) ||
                 (*(long **)((long)__this_00 + 0x10) = plVar4, plVar4 == (long *)0x0))
              goto LAB_00c55ff4;
              uVar11 = UnityEngine_Object__get_name(plVar4,0);
              uVar3 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
              lVar6 = this.LMGKPMKNHCI;
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
              lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
              if ((uVar3 & 1) != 0) {
                if (lVar10 == 0) goto LAB_00c55ff4;
                lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
              }
              *(long *)(lVar6 + 0x20) = lVar10;
              lVar6 = this.LMGKPMKNHCI;
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (*(long *)(lVar6 + 0x10),&plStack_a8,
                         _Method_UnityEngine_GameObject_GetComponent_Button___);
              *(long **)(lVar6 + 0x18) = plStack_a8;
              lVar6 = this.LMGKPMKNHCI;
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (*(long *)(lVar6 + 0x10),&plStack_a8,
                         _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
              *(long **)(lVar6 + 0x28) = plStack_a8;
              lVar6 = this.LMGKPMKNHCI;
              if (((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) ||
                 (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar6 + 0x20),0), lVar10 == 0))
              goto LAB_00c55ff4;
              uVar3 = System_String__Contains(lVar10,_Str_lvl_,0);
              uVar17 = 0x3f800000;
              uVar15 = 0x3f800000;
              uVar12 = 0x3f800000;
              if ((uVar3 & 1) == 0) {
                if ((this.LMGKPMKNHCI == 0) ||
                   (lVar10 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar10 == 0))
                goto LAB_00c55ff4;
                uVar12 = UnityEngine_Transform__get_localScale(lVar10,0);
              }
              *(undefined4 *)(lVar6 + 0x30) = uVar12;
              *(undefined4 *)(lVar6 + 0x34) = uVar15;
              *(undefined4 *)(lVar6 + 0x38) = uVar17;
              lVar6 = this.LMGKPMKNHCI;
              if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
              uVar11 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar6 + 0x28),0);
              *(undefined4 *)(lVar6 + 0x3c) = extraout_s0;
              *(undefined4 *)(lVar6 + 0x40) = uVar15;
              uVar3 = GamePadController__PJOJJBEIFAE(uVar11,this.LMGKPMKNHCI);
              if ((uVar3 & 1) == 0) {
                lVar6 = this.LMGKPMKNHCI;
                if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
                uVar12 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x28),0);
                *(undefined4 *)(lVar6 + 0x44) = uVar12;
                *(undefined4 *)(lVar6 + 0x48) = uVar15;
              }
              if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
              func_0x00b7fe44(this.DJMNPCHPFJO,this.LMGKPMKNHCI,
                              _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
              goto LAB_00c55e20;
            }
            func_0x00b947ec(&plStack_90,&lStack_78,
                            _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                           );
            lVar6 = lStack_78;
          } while (lStack_78 == 0);
          uVar11 = *(undefined8 *)(lStack_78 + 0x10);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar11,plVar4,0);
        } while ((uVar3 & 1) == 0);
        this.LMGKPMKNHCI = lVar6;
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
        if (this.LMGKPMKNHCI == 0) {
          return;
        }
        lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28);
        if (lVar6 == 0) goto LAB_00c55ff4;
        fVar13 = (float)UnityEngine_RectTransform__get_pivot(lVar6,0);
        fVar16 = 0.5;
        if (fVar13 == 0.5) {
          if ((this.LMGKPMKNHCI == 0) ||
             (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar6 == 0))
          goto LAB_00c55ff4;
          UnityEngine_RectTransform__get_pivot(lVar6,0);
          if (fVar16 != 0.5) goto LAB_00c55e68;
        }
        else {
LAB_00c55e68:
          if ((this.LMGKPMKNHCI == 0) ||
             (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar6 == 0))
          goto LAB_00c55ff4;
          fVar13 = 0.5;
          UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar6,0);
          lVar6 = this.LMGKPMKNHCI;
          if ((lVar6 == 0) || (lVar10 = *(long *)(lVar6 + 0x28), lVar10 == 0)) goto LAB_00c55ff4;
          fVar18 = *(float *)(lVar6 + 0x44);
          fVar16 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
          lVar6 = this.LMGKPMKNHCI;
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
          fVar20 = *(float *)(lVar6 + 0x3c);
          fVar22 = *(float *)(lVar6 + 0x30);
          fVar21 = *(float *)(lVar6 + 0x44);
          fVar19 = *(float *)(lVar6 + 0x48);
          UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar6 + 0x28),0);
          lVar6 = this.LMGKPMKNHCI;
          if (lVar6 == 0) goto LAB_00c55ff4;
          fVar14 = ABS(fVar20 + -0.5);
          fVar20 = fVar16 * fVar14;
          if (fVar21 < 0.0) {
            fVar20 = -(fVar16 * fVar14);
          }
          fVar21 = ABS(*(float *)(lVar6 + 0x40) + -0.5);
          fVar16 = fVar13 * fVar21;
          if (*(float *)(lVar6 + 0x48) < 0.0) {
            fVar16 = -(fVar13 * fVar21);
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (fVar18 + ABS(fVar22) * fVar20,fVar19 + ABS(*(float *)(lVar6 + 0x34)) * fVar16,
                     lVar10,0);
        }
        if ((this.LMGKPMKNHCI != 0) &&
           (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x10), lVar6 != 0)) {
          uVar11 = UnityEngine_Object__get_name(lVar6,0);
          uVar3 = GamePadController__EODAOKKOJLL(uVar11,uVar11);
          if ((uVar3 & 1) != 0) {
            if ((this.LMGKPMKNHCI == 0) ||
               (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar6 == 0))
            goto LAB_00c55ff4;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar6,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
            if ((uVar3 & 1) != 0) {
              if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
              (**(code **)(*plStack_a8 + 0x2a8))
                        (this.ELEMNDGENFO,*(undefined4 *)((long)__this + 0x70),
                         *(undefined4 *)((long)__this + 0x74),*(undefined4 *)((long)__this + 0x78),
                         plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
            }
          }
          return;
        }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
LAB_00c49274:
  uVar11 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c49334:
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c49438;
    uVar11 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((GUIWindow.OFEJBBPBBFG == 0) ||
       (lVar6 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI, lVar6 == 0))
    goto LAB_00c49438;
    uVar3 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((GUIWindow.OFEJBBPBBFG == 0) ||
        (lVar6 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI, lVar6 == 0)) ||
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar6,&stack0xffffffffffffffb8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___),
       in_stack_ffffffffffffffb8 == 0)) goto LAB_00c49438;
    if (*(char *)(in_stack_ffffffffffffffb8 + 0xd8) == '\0') {
      return;
    }
    lVar6 = GUIWindow.OFEJBBPBBFG;
  }
  else {
    lVar6 = GUIWindow.DNEPGKHAOBF;
    if (lVar6 == 0) goto LAB_00c49438;
    uVar11 = *(undefined8 *)(lVar6 + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c49334;
    lVar6 = GUIWindow.DNEPGKHAOBF;
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) ||
       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar6,&stack0xffffffffffffffb8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___),
       in_stack_ffffffffffffffb8 == 0)) goto LAB_00c49438;
    if (*(char *)(in_stack_ffffffffffffffb8 + 0xd8) == '\0') goto LAB_00c49334;
    lVar6 = GUIWindow.DNEPGKHAOBF;
  }
  if (lVar6 != 0) {
    GamePadController__FJJJEMJAMGO(__this,*(undefined8 *)(lVar6 + 0x30));
    return;
  }
LAB_00c49438:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool ANCEANGJPLH(GameObject AOHDLBGLGCF) { }   @0xb52e94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__ANCEANGJPLH(void *__this,void *AOHDLBGLGCF)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  long *aplStack_90 [10];
  undefined4 uStack_34;
  
  if ((bRam000000000191719d & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_GraphicRaycaster___);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_RaycastResult__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_RaycastResult__TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    func_0x00a67900(&Str_CheckForOvelapsByBackground_Hits__);
    bRam000000000191719d = 1;
  }
  uStack_34 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c531f4;
    uVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
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
         (lVar5 = *(long *)(lVar5 + 0x1b0), lVar5 == 0)) goto LAB_00c531f4;
      uVar3 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF == 0) ||
            (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0)) ||
           (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
LAB_00c531f4:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar5,aplStack_90,_Method_UnityEngine_Component_GetComponent_GraphicRaycaster___)
        ;
        plVar1 = aplStack_90[0];
        if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
        lVar5 = func_0x00a67b44(_UnityEngine_EventSystems_PointerEventData_TypeInfo);
        UnityEngine_EventSystems_PointerEventData___ctor(lVar5,uVar6,0);
        if (((AOHDLBGLGCF == (void *)0x0) ||
            (lVar4 = UnityEngine_GameObject__get_transform(AOHDLBGLGCF,0), lVar4 == 0)) ||
           (uVar7 = UnityEngine_Transform__get_position(lVar4,0), lVar5 == 0)) goto LAB_00c531f4;
        *(undefined4 *)(lVar5 + 0x104) = uVar7;
        *(undefined4 *)(lVar5 + 0x108) = in_s1;
        lVar4 = func_0x00a67b44(_System_Collections_Generic_List_RaycastResult__TypeInfo);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
                  (lVar4,_Method_System_Collections_Generic_List_RaycastResult___ctor__);
        if (plVar1 == (long *)0x0) goto LAB_00c531f4;
        (**(code **)(*plVar1 + 0x248))(plVar1,lVar5,lVar4,*(undefined8 *)(*plVar1 + 0x250));
        if (lVar4 == 0) goto LAB_00c531f4;
        uStack_34 = *(undefined4 *)(lVar4 + 0x18);
        uVar6 = System_Int32__ToString(&uStack_34,0);
        uVar6 = System_String__Concat(_Str_CheckForOvelapsByBackground_Hits__,uVar6,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar6,0,0);
        if (0 < *(int *)(lVar4 + 0x18)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                    (lVar4,0,aplStack_90,
                     _Method_System_Collections_Generic_List_RaycastResult__get_Item__);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar5 == 0))
          goto LAB_00c531f4;
          uVar6 = *(undefined8 *)(lVar5 + 0x1b0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          bVar2 = UnityEngine_Object__op_Equality(aplStack_90[0],uVar6,0);
          goto LAB_00c531d8;
        }
      }
    }
  }
  bVar2 = 0;
LAB_00c531d8:
  return (bool)(bVar2 & 1);
}


// ==== public void FKBCEHJHEBP() { }   @0xb531f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FKBCEHJHEBP(void *__this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if ((bRam000000000191719e & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_color__);
    func_0x00a67900(&Str_ChangeButtonSelectedColor__IsGamePadInpu);
    func_0x00a67900(&Str___gui_object__);
    func_0x00a67900(&Str_back_button);
    bRam000000000191719e = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c5371c;
  uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c5371c;
    uVar13 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    plVar10 = (long *)0x0;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarController.KECGFPHIEHF == 0) goto LAB_00c5371c;
      lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG;
      goto joined_r0x00c533d4;
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c5371c;
    lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
joined_r0x00c533d4:
    if (lVar9 == 0) goto LAB_00c5371c;
    plVar10 = (long *)UnityEngine_Component__get_gameObject(lVar9,0);
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(plVar10,0,0);
  if ((uVar8 & 1) != 0) {
    if (this.EECHHPBBMAG == '\0') {
      uVar16 = 0x3f800000;
      uVar17 = 0x3f800000;
      uVar18 = 0x3f800000;
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = this.MMCFKCNGIOM;
      uVar18 = *(undefined4 *)((long)__this + 0x60);
      uVar17 = *(undefined4 *)((long)__this + 100);
      uVar16 = *(undefined4 *)((long)__this + 0x68);
    }
    uStack_98 = CONCAT44(uVar18,uVar19);
    uStack_90 = CONCAT44(uVar16,uVar17);
    uVar13 = func_0x00c57430(&uStack_98,0,0,0);
    uVar13 = System_String__Concat(_Str_color__,uVar13,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar13,0,0);
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                          (plVar10,1,
                           _Method_UnityEngine_GameObject_GetComponentsInChildren_Button___),
       lVar9 == 0)) {
LAB_00c5371c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar4) {
      uVar15 = 0;
      do {
        if (uVar4 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar14 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_00c5371c;
        if (*(int *)(lVar14 + 0x28) == 0) {
          uVar13 = UnityEngine_Object__get_name(lVar14,0);
          uVar8 = System_String__op_Inequality(uVar13,_Str_back_button,0);
          if ((uVar8 & 1) == 0) goto LAB_00c53524;
        }
        else {
LAB_00c53524:
          uVar13 = UnityEngine_Object__get_name(lVar14,0);
          uVar8 = GamePadController__EODAOKKOJLL(uVar13,uVar13);
          if ((uVar8 & 1) == 0) {
            func_0x016decc0(&uStack_e0,lVar14 + 100,0x48);
            if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uStack_138 = uVar19;
            uStack_134 = uVar18;
            uStack_130 = uVar17;
            uStack_12c = uVar16;
            func_0x016decc0(auStack_128,&uStack_e0,0x48);
            UnityEngine_UI_Selectable__set_colors(lVar14,&uStack_138,0);
          }
          else {
            lVar14 = UnityEngine_Component__get_transform(lVar14,0);
            if ((lVar14 == 0) || (lVar14 = UnityEngine_Transform__get_parent(lVar14,0), lVar14 == 0)
               ) goto LAB_00c5371c;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar14,&plStack_88,_Method_UnityEngine_Component_GetComponent_Image___);
            plVar6 = plStack_88;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Inequality(plVar6,0,0);
            if ((uVar8 & 1) != 0) {
              if (plVar6 == (long *)0x0) goto LAB_00c5371c;
              bVar7 = this.EECHHPBBMAG != '\0';
              lVar14 = 0x6c;
              if (bVar7) {
                lVar14 = 0x7c;
              }
              lVar1 = 0x70;
              if (bVar7) {
                lVar1 = 0x80;
              }
              lVar2 = 0x74;
              if (bVar7) {
                lVar2 = 0x84;
              }
              lVar3 = 0x78;
              if (bVar7) {
                lVar3 = 0x88;
              }
              (**(code **)(*plVar6 + 0x2a8))
                        (*(undefined4 *)((long)__this + lVar14),
                         *(undefined4 *)((long)__this + lVar1),*(undefined4 *)((long)__this + lVar2)
                         ,*(undefined4 *)((long)__this + lVar3),plVar6,
                         *(undefined8 *)(*plVar6 + 0x2b0));
            }
          }
        }
        uVar4 = *(uint *)(lVar9 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar4);
    }
  }
  GamePadController__HFPFJNKNJND(__this);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = System_Boolean__ToString(&this.EECHHPBBMAG,0);
  uVar5 = _Str_ChangeButtonSelectedColor__IsGamePadInpu;
  uVar13 = _Str___gui_object__;
  if (plVar10 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  uVar13 = System_String__Concat(uVar5,uVar11,uVar13,uVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar13,0,0);
  return;
}


// ==== private bool EODAOKKOJLL(string BJNIAMHIPAM) { }   @0xb53724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__EODAOKKOJLL(void *__this,void *BJNIAMHIPAM)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam00000000019171a5 & 1) == 0) {
    func_0x00a67900(&Str_icon_encyclopedia);
    func_0x00a67900(&Str_color_);
    __this = (void *)func_0x00a67900(&Str_bg);
    bRam00000000019171a5 = 1;
  }
  if (BJNIAMHIPAM == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50(__this);
  }
  uVar4 = System_String__Contains(BJNIAMHIPAM,_Str_color_,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = System_String__Contains(BJNIAMHIPAM,_Str_bg,0), (uVar4 & 1) != 0)) {
    return true;
  }
  if (BJNIAMHIPAM == _Str_icon_encyclopedia) {
    return true;
  }
  if (BJNIAMHIPAM != (void *)0x0) {
    if (_Str_icon_encyclopedia == (void *)0x0) {
      return false;
    }
    if (*(int *)((long)BJNIAMHIPAM + 0x10) != *(int *)((long)_Str_icon_encyclopedia + 0x10)) {
      return false;
    }
    lVar1 = (long)BJNIAMHIPAM + 0x14;
    lVar2 = (long)_Str_icon_encyclopedia + 0x14;
    lVar8 = (long)*(int *)((long)BJNIAMHIPAM + 0x10) << 1;
    if (lVar1 != lVar2) {
      lVar5 = System_IntPtr__op_Explicit(0,0,lVar8,0);
      uVar6 = System_IntPtr__op_Explicit(lVar8,0);
      uVar4 = System_IntPtr__op_Explicit(uVar6,0);
      if (7 < uVar4) {
        lVar8 = System_IntPtr__op_Subtraction(uVar6,8,0);
        while( true ) {
          uVar4 = System_IntPtr__op_Explicit(lVar8,0);
          uVar7 = System_IntPtr__op_Explicit(lVar5,0);
          if (uVar4 <= uVar7) {
            return *(long *)(lVar1 + lVar8) == *(long *)(lVar2 + lVar8);
          }
          uVar4 = System_UIntPtr__op_Inequality
                            (*(undefined8 *)(lVar1 + lVar5),*(undefined8 *)(lVar2 + lVar5),0);
          if ((uVar4 & 1) != 0) break;
          lVar5 = System_IntPtr__op_Addition(lVar5,8,0);
        }
        return false;
      }
      uVar4 = System_IntPtr__op_Explicit(uVar6,0);
      uVar7 = System_IntPtr__op_Explicit(lVar5,0);
      if (uVar7 < uVar4) {
        do {
          bVar3 = *(char *)(lVar1 + lVar5) == *(char *)(lVar2 + lVar5);
          if (!bVar3) {
            return bVar3;
          }
          lVar5 = System_IntPtr__op_Addition(lVar5,1,0);
          uVar4 = System_IntPtr__op_Explicit(uVar6,0);
          uVar7 = System_IntPtr__op_Explicit(lVar5,0);
        } while (uVar7 < uVar4);
        return bVar3;
      }
    }
    return true;
  }
  return false;
}


// ==== public void HFPFJNKNJND() { }   @0xb537d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__HFPFJNKNJND(void *__this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000000191719f & 1) == 0) {
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_lvl_);
    bRam000000000191719f = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c53c40;
  uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((((Menu.KECGFPHIEHF == 0) ||
       (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x70), lVar3 == 0)) ||
     (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0)) goto LAB_00c53c40;
  uVar1 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = Main.NMDEEOMHAGP;
  if (lVar3 == 0) {
LAB_00c53a34:
    uVar5 = this.CDIJMLNDKEP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if ((this.CDIJMLNDKEP == 0) ||
         (lVar3 = UnityEngine_Object__get_name(this.CDIJMLNDKEP,0), lVar3 == 0))
      goto LAB_00c53c40;
      uVar1 = System_String__Contains(lVar3,_Str_lvl_,0);
      if ((uVar1 & 1) != 0) {
        if ((this.CDIJMLNDKEP == 0) ||
           (lVar3 = UnityEngine_GameObject__get_transform(this.CDIJMLNDKEP,0),
           lVar3 == 0)) goto LAB_00c53c40;
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar3,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = Main.NMDEEOMHAGP;
        lVar3 = lStack_38;
        if (lVar4 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar4 = Main.NMDEEOMHAGP;
            if (lVar4 == 0) goto LAB_00c53c40;
          }
          uVar5 = Level__get_gui(lVar4,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar4 = Main.NMDEEOMHAGP;
            if (lVar4 == 0) goto LAB_00c53c40;
            uVar5 = Level__get_gui(lVar4,0);
            uVar6 = this.CDIJMLNDKEP;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar1 = UnityEngine_Object__op_Equality(uVar5,uVar6,0);
            uVar1 = uVar1 & 0xffffffff;
            goto LAB_00c53b8c;
          }
        }
        uVar1 = 0;
        goto LAB_00c53b8c;
      }
    }
    uVar1 = 0;
    lVar3 = 0;
  }
  else {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar3 = Main.NMDEEOMHAGP;
      if (lVar3 == 0) goto LAB_00c53c40;
    }
    uVar5 = Level__get_gui(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) == 0) goto LAB_00c53a34;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Main.NMDEEOMHAGP;
    if (lVar3 == 0) goto LAB_00c53c40;
    uVar5 = Level__get_gui(lVar3,0);
    uVar6 = this.CDIJMLNDKEP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,uVar6,0);
    if ((uVar1 & 1) == 0) goto LAB_00c53a34;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Main.NMDEEOMHAGP;
    if ((lVar3 == 0) || (lVar3 = Level__get_gui(lVar3,0), lVar3 == 0)) goto LAB_00c53c40;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___);
    uVar1 = 1;
    lVar3 = lStack_38;
  }
LAB_00c53b8c:
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (((uVar1 & 1) == 0) && (this.EECHHPBBMAG != '\0')) {
      auVar7 = *(undefined1 (*) [16])(&this.MMCFKCNGIOM);
    }
    else {
      auVar7 = NEON_fmov(0x3f800000,4);
    }
    if (lVar3 == 0) {
LAB_00c53c40:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    func_0x016decc0(&uStack_80,lVar3 + 100,0x48);
    if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uStack_e0 = auVar7._0_8_;
    uStack_d8 = auVar7._8_8_;
    func_0x016decc0(auStack_d0,&uStack_80,0x48);
    UnityEngine_UI_Selectable__set_colors(lVar3,&uStack_e0,0);
  }
  return;
}


// ==== private void Update() { }   @0xb53c44

/* WARNING: Removing unreachable block (ram,0x00c55318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__Update(void *__this)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_s0;
  float fVar17;
  undefined4 uVar18;
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
  long in_stack_ffffffffffffffa8;
  
  pvVar4 = __this;
  if ((bRam00000000019171a0 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
    func_0x00a67900(&GamePadController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_JoyVertical);
    func_0x00a67900(&Str_help_arrow);
    func_0x00a67900(&Str_LB);
    func_0x00a67900(&Str_isControllerInput__IsGamePadInput__);
    func_0x00a67900(&Str_lvl_);
    func_0x00a67900(&Str_RB);
    func_0x00a67900(&Str_hide_button);
    func_0x00a67900(&Str_Start);
    func_0x00a67900(&Str_isMouseKeyboard__IsGamePadInput__);
    func_0x00a67900(&Str_arrow_car);
    func_0x00a67900(&Str_JoyHorizontal);
    pvVar4 = (void *)func_0x00a67900(&Str_X);
    bRam00000000019171a0 = 1;
  }
  pvVar4 = GamePadController__KNABINMBNJC(pvVar4);
  uVar11 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c55828;
    uVar11 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
          if ((uVar5 & 1) != 0) {
            if (pvVar4 == (void *)0x0) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeInHierarchy(pvVar4,0);
            if ((uVar5 & 1) == 0) goto LAB_00c53eb0;
          }
        }
        else {
LAB_00c53eb0:
          fVar14 = (float)UnityEngine_Input__GetAxisRaw(_Str_JoyVertical,0);
          fVar15 = (float)UnityEngine_Input__GetAxisRaw(_Str_JoyHorizontal,0);
          if ((ABS(fVar14) <= 0.5) && (ABS(fVar15) <= 0.5)) {
            if (*(int *)(_GamePadController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Input__GetButtonDown
                              (GamePadController.LMDBBPDHGLJ,0);
            if (((uVar5 & 1) == 0) &&
               (uVar5 = UnityEngine_Input__GetButtonDown(_Str_X,0), (uVar5 & 1) == 0)) {
              if (this.NHNHDNAFBLE == '\0') {
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = Main__KCHOEBEIOCE(0);
                if ((uVar5 & 1) != 0) goto LAB_00c53f90;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
              if (((uVar5 & 1) == 0) || (this.EECHHPBBMAG == '\0')) goto LAB_00c549e4;
            }
          }
LAB_00c53f90:
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(pvVar4,0,0);
          if ((uVar5 & 1) == 0) goto LAB_00c54848;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.MDLMIEDLJMC == '\0') {
LAB_00c541f4:
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar11 = CarController.KECGFPHIEHF;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (CarController.KECGFPHIEHF == 0) goto LAB_00c55828;
              uVar11 = CarController.KECGFPHIEHF.CDDOBCENBOG;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((CarController.KECGFPHIEHF == 0) ||
                     (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((CarController.KECGFPHIEHF == 0) ||
                      (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                      lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x438), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((CarController.KECGFPHIEHF == 0) ||
                        (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                        lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x460), lVar9 == 0))
                    goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_CarController_TypeInfo);
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar9 == 0)) goto LAB_00c55828;
                    if ((uVar5 & 1) == 0) {
                      if (*(long *)(lVar9 + 0x440) == 0) goto LAB_00c55828;
                      uVar5 = UnityEngine_GameObject__get_activeInHierarchy
                                        (*(long *)(lVar9 + 0x440),0);
                      if ((uVar5 & 1) == 0) goto LAB_00c54848;
                      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((CarController.KECGFPHIEHF == 0) ||
                         (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                         lVar9 == 0)) goto LAB_00c55828;
                      plVar8 = *(long **)(lVar9 + 0x440);
                    }
                    else {
                      plVar8 = *(long **)(lVar9 + 0x460);
                    }
code_r0x00c558ec:
                    if ((bRam00000000019171a4 & 1) == 0) {
                      func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                                     );
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                                     );
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                                     );
                      func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
                      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Button___);
                      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
                      func_0x00a67900(&
                                      Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__
                                     );
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
                    uVar5 = UnityEngine_Object__op_Equality(plVar8,0,0);
                    if ((uVar5 & 1) != 0) {
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
                    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((((Menu.KECGFPHIEHF == 0) ||
                           (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0
                           )) || (lVar9 = *(long *)(lVar9 + 0x150), lVar9 == 0)) ||
                         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                      goto LAB_00c55ff4;
                      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                      if ((uVar5 & 1) != 0) {
                        return;
                      }
                    }
                    GamePadController__DJHKBCNIBNG(__this);
                    uVar11 = _Str_SetButton__;
                    if (plVar8 == (long *)0x0) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = (**(code **)(*plVar8 + 0x168))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    }
                    uVar1 = _Str___last__;
                    plVar6 = this.CDIJMLNDKEP;
                    if (plVar6 == (long *)0x0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar6 + 0x168))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x170));
                    }
                    uVar11 = System_String__Concat(uVar11,uVar13,uVar1,uVar7,0);
                    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Main_TypeInfo);
                    }
                    Main__GEMDEAMAGPG(uVar11,0,0);
                    this.CDIJMLNDKEP = plVar8;
                    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar11 = UnityEngine_EventSystems_EventSystem__get_current(0);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                    }
                    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    lVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
                    if (lVar9 == 0) goto LAB_00c55ff4;
                    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar9,plVar8,0);
                    uVar16 = UnityEngine_Time__get_realtimeSinceStartup(0);
                    this.JGOPIEKJDKI = uVar16;
                    if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                              (this.DJMNPCHPFJO,&plStack_a8,
                               _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__)
                    ;
                    uStack_88 = uStack_a0;
                    plStack_90 = plStack_a8;
                    uStack_80 = uStack_98;
                    do {
                      do {
                        uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                                          (&plStack_90,
                                           _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                                          );
                        if ((uVar5 & 1) == 0) {
                          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                                    (&plStack_90,
                                     _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                                    );
                          lVar9 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
                          MLCNINCNANA___ctor(lVar9,0);
                          this.LMGKPMKNHCI = lVar9;
                          if ((lVar9 == 0) ||
                             (*(long **)(lVar9 + 0x10) = plVar8, plVar8 == (long *)0x0))
                          goto LAB_00c55ff4;
                          pvVar4 = (void *)UnityEngine_Object__get_name(plVar8,0);
                          bVar3 = GamePadController__EODAOKKOJLL(pvVar4,pvVar4);
                          lVar9 = this.LMGKPMKNHCI;
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          lVar10 = UnityEngine_GameObject__get_transform(*(long *)(lVar9 + 0x10),0);
                          if (bVar3) {
                            if (lVar10 == 0) goto LAB_00c55ff4;
                            lVar10 = UnityEngine_Transform__get_parent(lVar10,0);
                          }
                          *(long *)(lVar9 + 0x20) = lVar10;
                          lVar9 = this.LMGKPMKNHCI;
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                    (*(long *)(lVar9 + 0x10),&plStack_a8,
                                     _Method_UnityEngine_GameObject_GetComponent_Button___);
                          *(long **)(lVar9 + 0x18) = plStack_a8;
                          lVar9 = this.LMGKPMKNHCI;
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_00c55ff4;
                          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                    (*(long *)(lVar9 + 0x10),&plStack_a8,
                                     _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                          *(long **)(lVar9 + 0x28) = plStack_a8;
                          lVar9 = this.LMGKPMKNHCI;
                          if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
                             (lVar10 = UnityEngine_Object__get_name(*(long *)(lVar9 + 0x20),0),
                             lVar10 == 0)) goto LAB_00c55ff4;
                          uVar5 = System_String__Contains(lVar10,_Str_lvl_,0);
                          uVar19 = 0x3f800000;
                          uVar18 = 0x3f800000;
                          uVar16 = 0x3f800000;
                          if ((uVar5 & 1) == 0) {
                            if ((this.LMGKPMKNHCI == 0) ||
                               (lVar10 = *(long *)(this.LMGKPMKNHCI + 0x20),
                               lVar10 == 0)) goto LAB_00c55ff4;
                            uVar16 = UnityEngine_Transform__get_localScale(lVar10,0);
                          }
                          *(undefined4 *)(lVar9 + 0x30) = uVar16;
                          *(undefined4 *)(lVar9 + 0x34) = uVar18;
                          *(undefined4 *)(lVar9 + 0x38) = uVar19;
                          lVar9 = this.LMGKPMKNHCI;
                          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                          uVar11 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar9 + 0x28),0);
                          *(undefined4 *)(lVar9 + 0x3c) = extraout_s0;
                          *(undefined4 *)(lVar9 + 0x40) = uVar18;
                          uVar5 = GamePadController__PJOJJBEIFAE
                                            (uVar11,this.LMGKPMKNHCI);
                          if ((uVar5 & 1) == 0) {
                            lVar9 = this.LMGKPMKNHCI;
                            if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                            uVar16 = UnityEngine_RectTransform__get_anchoredPosition
                                               (*(long *)(lVar9 + 0x28),0);
                            *(undefined4 *)(lVar9 + 0x44) = uVar16;
                            *(undefined4 *)(lVar9 + 0x48) = uVar18;
                          }
                          if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
                          func_0x00b7fe44(this.DJMNPCHPFJO,
                                          this.LMGKPMKNHCI,
                                          _Method_System_Collections_Generic_List_MLCNINCNANA__Add__
                                         );
                          goto LAB_00c55e20;
                        }
                        func_0x00b947ec(&plStack_90,&lStack_78,
                                        _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                                       );
                        lVar9 = lStack_78;
                      } while (lStack_78 == 0);
                      uVar11 = *(undefined8 *)(lStack_78 + 0x10);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Equality(uVar11,plVar8,0);
                    } while ((uVar5 & 1) == 0);
                    this.LMGKPMKNHCI = lVar9;
                    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                              (&plStack_90,
                               _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
                              );
LAB_00c55e20:
                    if (this.LMGKPMKNHCI == 0) {
                      return;
                    }
                    lVar9 = *(long *)(this.LMGKPMKNHCI + 0x28);
                    if (lVar9 == 0) goto LAB_00c55ff4;
                    fVar14 = (float)UnityEngine_RectTransform__get_pivot(lVar9,0);
                    fVar15 = 0.5;
                    if (fVar14 == 0.5) {
                      if ((this.LMGKPMKNHCI == 0) ||
                         (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar9 == 0))
                      goto LAB_00c55ff4;
                      UnityEngine_RectTransform__get_pivot(lVar9,0);
                      if (fVar15 != 0.5) goto LAB_00c55e68;
                    }
                    else {
LAB_00c55e68:
                      if ((this.LMGKPMKNHCI == 0) ||
                         (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar9 == 0))
                      goto LAB_00c55ff4;
                      fVar14 = 0.5;
                      UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar9,0);
                      lVar9 = this.LMGKPMKNHCI;
                      if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0x28), lVar10 == 0))
                      goto LAB_00c55ff4;
                      fVar20 = *(float *)(lVar9 + 0x44);
                      fVar15 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar10,0);
                      lVar9 = this.LMGKPMKNHCI;
                      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_00c55ff4;
                      fVar22 = *(float *)(lVar9 + 0x3c);
                      fVar24 = *(float *)(lVar9 + 0x30);
                      fVar23 = *(float *)(lVar9 + 0x44);
                      fVar21 = *(float *)(lVar9 + 0x48);
                      UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar9 + 0x28),0);
                      lVar9 = this.LMGKPMKNHCI;
                      if (lVar9 == 0) goto LAB_00c55ff4;
                      fVar17 = ABS(fVar22 + -0.5);
                      fVar22 = fVar15 * fVar17;
                      if (fVar23 < 0.0) {
                        fVar22 = -(fVar15 * fVar17);
                      }
                      fVar23 = ABS(*(float *)(lVar9 + 0x40) + -0.5);
                      fVar15 = fVar14 * fVar23;
                      if (*(float *)(lVar9 + 0x48) < 0.0) {
                        fVar15 = -(fVar14 * fVar23);
                      }
                      UnityEngine_RectTransform__set_anchoredPosition
                                (fVar20 + ABS(fVar24) * fVar22,
                                 fVar21 + ABS(*(float *)(lVar9 + 0x34)) * fVar15,lVar10,0);
                    }
                    if ((this.LMGKPMKNHCI != 0) &&
                       (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x10), lVar9 != 0)) {
                      pvVar4 = (void *)UnityEngine_Object__get_name(lVar9,0);
                      bVar3 = GamePadController__EODAOKKOJLL(pvVar4,pvVar4);
                      if (bVar3) {
                        if ((this.LMGKPMKNHCI == 0) ||
                           (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar9 == 0))
                        goto LAB_00c55ff4;
                        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                                  (lVar9,&plStack_a8,
                                   _Method_UnityEngine_Component_GetComponent_Image___);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
                          (**(code **)(*plStack_a8 + 0x2a8))
                                    (this.ELEMNDGENFO,
                                     *(undefined4 *)((long)__this + 0x70),
                                     *(undefined4 *)((long)__this + 0x74),
                                     *(undefined4 *)((long)__this + 0x78),plStack_a8,
                                     *(undefined8 *)(*plStack_a8 + 0x2b0));
                        }
                      }
                      return;
                    }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
                    il2cpp_throw_967b50();
                  }
                }
              }
            }
          }
          else {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
            uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) goto LAB_00c541f4;
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((((Menu.KECGFPHIEHF == 0) ||
                 (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                (lVar9 = *(long *)(lVar9 + 0x78), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
            goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) != 0) {
              uVar11 = this.CDIJMLNDKEP;
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
              goto LAB_00c55828;
              uVar13 = *(undefined8 *)(lVar9 + 0x420);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
              if ((uVar5 & 1) == 0) {
LAB_00c540f0:
                uVar11 = this.CDIJMLNDKEP;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                goto LAB_00c55828;
                uVar13 = *(undefined8 *)(lVar9 + 0x430);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar11,uVar13,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x430), lVar9 == 0)) goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) goto LAB_00c54180;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
LAB_00c5469c:
                  if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x20), lVar9 == 0))
                  goto LAB_00c55828;
                  plVar8 = *(long **)(lVar9 + 0x420);
                  goto code_r0x00c558ec;
                }
LAB_00c54180:
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x480), lVar9 == 0)) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                goto LAB_00c55828;
                if ((uVar5 & 1) != 0) {
                  plVar8 = *(long **)(lVar9 + 0x480);
                  goto code_r0x00c558ec;
                }
                if (*(long *)(lVar9 + 0x4b8) == 0) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeInHierarchy(*(long *)(lVar9 + 0x4b8),0);
                if ((uVar5 & 1) == 0) goto LAB_00c54848;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                lVar9 = Menu.KECGFPHIEHF;
                if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
                if (*(char *)(*(long *)(lVar9 + 0x20) + 0x471) != '\0') {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Menu_TypeInfo);
                    lVar9 = Menu.KECGFPHIEHF;
                    if (lVar9 == 0) goto LAB_00c55828;
                  }
                  if ((*(long *)(lVar9 + 0x20) == 0) ||
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x420), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Menu_TypeInfo);
                    }
                    plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
                    goto LAB_00c5469c;
                  }
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                lVar9 = Menu.KECGFPHIEHF;
                if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
                if (*(char *)(*(long *)(lVar9 + 0x20) + 0x470) != '\0') {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_Menu_TypeInfo);
                    lVar9 = Menu.KECGFPHIEHF;
                    if (lVar9 == 0) goto LAB_00c55828;
                  }
                  if ((*(long *)(lVar9 + 0x20) == 0) ||
                     (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x430), lVar9 == 0))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30(_Menu_TypeInfo);
                    }
                    plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
                    goto LAB_00c5466c;
                  }
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                goto LAB_00c55828;
                uVar11 = *(undefined8 *)(lVar9 + 0x548);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                if ((uVar5 & 1) == 0) goto LAB_00c54848;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                goto LAB_00c55828;
                plVar8 = *(long **)(lVar9 + 0x548);
              }
              else {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x420), lVar9 == 0)) goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) goto LAB_00c540f0;
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                plVar8 = *(long **)(_Menu_TypeInfo + 0xb8);
LAB_00c5466c:
                if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x20), lVar9 == 0))
                goto LAB_00c55828;
                plVar8 = *(long **)(lVar9 + 0x430);
              }
              goto code_r0x00c558ec;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((((Menu.KECGFPHIEHF == 0) ||
                 (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
            goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((Menu.KECGFPHIEHF == 0) ||
                  (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                 ((lVar9 = *(long *)(lVar9 + 0x278), lVar9 == 0 ||
                  (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0)) goto LAB_00c55828;
                  uVar11 = *(undefined8 *)(lVar9 + 0x30);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((Menu.KECGFPHIEHF == 0) ||
                        (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                       || ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0 ||
                           (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)))) goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (((Menu.KECGFPHIEHF != 0) &&
                          (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 != 0)
                          ) && ((lVar9 = *(long *)(lVar9 + 0x170), lVar9 != 0 &&
                                (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)))) {
                        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                  (lVar9,&stack0xffffffffffffffa8,
                                   _Method_UnityEngine_GameObject_GetComponent_Button___);
                        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        uVar5 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffa8,0,0);
                        if ((uVar5 & 1) == 0) {
                          return;
                        }
                        if (in_stack_ffffffffffffffa8 != 0) {
                          uVar11 = *(undefined8 *)(in_stack_ffffffffffffffa8 + 0x30);
                          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
                          if ((uVar5 & 1) == 0) {
                            return;
                          }
                          plVar8 = *(long **)(in_stack_ffffffffffffffa8 + 0x30);
                          if (plVar8 != (long *)0x0) {
                            (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
                            return;
                          }
                        }
                      }
                      goto LAB_00c55828;
                    }
                  }
                  goto LAB_00c54848;
                }
                if ((bRam00000000019171a1 & 1) == 0) {
                  func_0x00a67900(&Menu_TypeInfo);
                  bRam00000000019171a1 = 1;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((Menu.KECGFPHIEHF == 0) ||
                     (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                    (lVar9 = *(long *)(lVar9 + 0x170), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)) {
LAB_00c561a4:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b50();
                }
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  return;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x268), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c561a4;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_Menu_TypeInfo);
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                goto LAB_00c561a4;
                if ((uVar5 & 1) == 0) {
                  lVar9 = *(long *)(lVar9 + 0x280);
                }
                else {
                  lVar9 = *(long *)(lVar9 + 0x268);
                }
                if (lVar9 == 0) goto LAB_00c561a4;
                plVar8 = (long *)UnityEngine_Component__get_gameObject(lVar9,0);
                goto code_r0x00c558ec;
              }
            }
          }
LAB_00c54848:
          uVar11 = this.CDIJMLNDKEP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) == 0) {
LAB_00c548c8:
            uVar11 = GUIWindow.DNEPGKHAOBF;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) {
LAB_00c54968:
              if ((GUIWindow.OFEJBBPBBFG == 0) ||
                 (lVar9 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI, lVar9 == 0))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) != 0) {
                if (((GUIWindow.OFEJBBPBBFG == 0) ||
                    (lVar9 = GUIWindow.OFEJBBPBBFG.PIABNBOLPFI, lVar9 == 0))
                   || (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                 (lVar9,&stack0xffffffffffffffa8,
                                  _Method_UnityEngine_GameObject_GetComponent_Button___),
                      in_stack_ffffffffffffffa8 == 0)) goto LAB_00c55828;
                if (*(char *)(in_stack_ffffffffffffffa8 + 0xd8) != '\0') {
                  lVar9 = GUIWindow.OFEJBBPBBFG;
                  goto joined_r0x00c549d4;
                }
              }
              goto LAB_00c549e4;
            }
            lVar9 = GUIWindow.DNEPGKHAOBF;
            if (lVar9 == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(lVar9 + 0x30);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) == 0) goto LAB_00c54968;
            lVar9 = GUIWindow.DNEPGKHAOBF;
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            if ((uVar5 & 1) == 0) goto LAB_00c54968;
            lVar9 = GUIWindow.DNEPGKHAOBF;
joined_r0x00c549d4:
            if (lVar9 == 0) goto LAB_00c55828;
            uVar11 = *(undefined8 *)(lVar9 + 0x30);
          }
          else {
            if ((this.CDIJMLNDKEP == 0) ||
               (lVar9 = UnityEngine_GameObject__get_gameObject(this.CDIJMLNDKEP,0),
               lVar9 == 0)) goto LAB_00c55828;
            uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
            if ((uVar5 & 1) == 0) goto LAB_00c548c8;
            if ((this.CDIJMLNDKEP == 0) ||
               (uVar11 = UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                   (this.CDIJMLNDKEP,&stack0xffffffffffffffa8,
                                    _Method_UnityEngine_GameObject_GetComponent_Button___),
               in_stack_ffffffffffffffa8 == 0)) goto LAB_00c55828;
            if ((*(char *)(in_stack_ffffffffffffffa8 + 0xd8) == '\0') ||
               (uVar5 = GamePadController__ANCEANGJPLH(uVar11,this.CDIJMLNDKEP),
               (uVar5 & 1) != 0)) goto LAB_00c548c8;
            uVar11 = this.CDIJMLNDKEP;
          }
          GamePadController__FJJJEMJAMGO(__this,uVar11);
        }
      }
    }
  }
LAB_00c549e4:
  fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
  if ((this.HNAIJOLJKAK < fVar14) ||
     (uVar5 = UnityEngine_Input__get_anyKey(0), (uVar5 & 1) != 0)) {
    uVar5 = GamePadController__GDCKFJKBEOE();
    if ((uVar5 & 1) == 0) {
      if (this.NHNHDNAFBLE == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = Main__KCHOEBEIOCE(0);
        if ((uVar5 & 1) != 0) goto LAB_00c54a0c;
      }
    }
    else {
LAB_00c54a0c:
      pcVar12 = (char *)(&this.EECHHPBBMAG);
      this.LMBKHDPLFGA = *pcVar12;
      *pcVar12 = '\x01';
      UnityEngine_Cursor__set_visible(0,0);
      UnityEngine_Cursor__set_lockState(1,0);
      if (*pcVar12 != this.LMBKHDPLFGA) {
        GamePadController__FKBCEHJHEBP(__this);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c55828;
        Menu__OCCACLIDKCM((void *)Menu.KECGFPHIEHF);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = CarController.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (CarController.KECGFPHIEHF == 0) goto LAB_00c55828;
          uVar11 = CarController.KECGFPHIEHF.CDDOBCENBOG;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar9 == 0))
            goto LAB_00c55828;
            GUIGameplay__AGGPLIPJHPI(lVar9,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = Menu.KECGFPHIEHF;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
            uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
              Menu__FMEHJALLGBK(Menu.KECGFPHIEHF,0);
              if ((((Menu.KECGFPHIEHF == 0) ||
                   (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                  (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) ||
                 (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
              goto LAB_00c55828;
              uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                    (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) == 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     ((lVar9 = *(long *)(lVar9 + 0x88), lVar9 == 0 ||
                      (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                  goto LAB_00c55828;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
                    Menu__KJDAFBPKLLF(Menu.KECGFPHIEHF,0);
                  }
                  goto LAB_00c54cb4;
                }
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
              Menu__INMDNKGHGEO(Menu.KECGFPHIEHF,0);
            }
          }
        }
LAB_00c54cb4:
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = System_Boolean__ToString(pcVar12,0);
        uVar11 = System_String__Concat(_Str_isControllerInput__IsGamePadInput__,uVar11,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
      }
    }
    uVar5 = GamePadController__FEGHHAKCEIG();
    if ((uVar5 & 1) == 0) {
      if (this.NHNHDNAFBLE != '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = Main__KCHOEBEIOCE(0);
        if ((uVar5 & 1) == 0) goto LAB_00c54d70;
      }
    }
    else {
LAB_00c54d70:
      GamePadController__DJHKBCNIBNG(__this);
      GamePadController__KBLMMLBPPKO(__this);
      pcVar12 = (char *)(&this.EECHHPBBMAG);
      this.LMBKHDPLFGA = *pcVar12;
      *pcVar12 = '\0';
      UnityEngine_Cursor__set_visible(1,0);
      UnityEngine_Cursor__set_lockState(0,0);
      if (*pcVar12 != this.LMBKHDPLFGA) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((void *)Menu.KECGFPHIEHF == (void *)0x0) goto LAB_00c55828;
        Menu__OCCACLIDKCM((void *)Menu.KECGFPHIEHF);
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
        Menu__DEEFHDJMBAC(Menu.KECGFPHIEHF,0);
        GamePadController__FKBCEHJHEBP(__this);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = CarController.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (CarController.KECGFPHIEHF == 0) goto LAB_00c55828;
          uVar11 = CarController.KECGFPHIEHF.CDDOBCENBOG;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar9 == 0))
            goto LAB_00c55828;
            GUIGameplay__AGGPLIPJHPI(lVar9,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar11 = Menu.KECGFPHIEHF;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
            uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
              Menu__FMEHJALLGBK(Menu.KECGFPHIEHF,0);
            }
          }
        }
        if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar11 = System_Boolean__ToString(pcVar12,0);
        uVar11 = System_String__Concat(_Str_isMouseKeyboard__IsGamePadInput__,uVar11,0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        Main__GEMDEAMAGPG(uVar11,0,0);
      }
    }
    fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
    this.HNAIJOLJKAK = fVar14 + 0.1;
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar2 = Main__KCHOEBEIOCE(0);
    this.NHNHDNAFBLE = bVar2 & 1;
  }
  if (this.EECHHPBBMAG == '\0') {
    return;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar11 = this.CDIJMLNDKEP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(pvVar4,uVar11,0);
    if (((uVar5 & 1) != 0) || (this.LMGKPMKNHCI == 0)) {
      GamePadController__FJJJEMJAMGO(__this,pvVar4);
    }
  }
  if (this.LMGKPMKNHCI != 0) {
    uVar11 = *(undefined8 *)(this.LMGKPMKNHCI + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (this.LMGKPMKNHCI == 0) goto LAB_00c55828;
      uVar11 = *(undefined8 *)(this.LMGKPMKNHCI + 0x10);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(pvVar4,uVar11,0);
      if ((uVar5 & 1) != 0) {
        if (this.LMGKPMKNHCI == 0) goto LAB_00c55828;
        uVar11 = *(undefined8 *)(this.LMGKPMKNHCI + 0x18);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if ((this.LMGKPMKNHCI == 0) ||
             (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x18), lVar9 == 0))
          goto LAB_00c55828;
          if (*(char *)(lVar9 + 0xd8) != '\0') {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            fVar14 = 1.1;
            if (Menu.MDLMIEDLJMC != '\0') {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
              uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((((Menu.KECGFPHIEHF == 0) ||
                     (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                    (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) ||
                   (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))
                goto LAB_00c55828;
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                if ((uVar5 & 1) != 0) {
                  if (((this.LMGKPMKNHCI == 0) ||
                      (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar9 == 0)) ||
                     (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
                  uVar5 = System_String__Contains(lVar9,_Str_lvl_,0);
                  if ((uVar5 & 1) == 0) {
                    if (((this.LMGKPMKNHCI == 0) ||
                        (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar9 == 0)) ||
                       (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0))
                    goto LAB_00c55828;
                    uVar5 = System_String__Contains(lVar9,_Str_hide_button,0);
                    if ((uVar5 & 1) == 0) goto LAB_00c55268;
                  }
                  fVar14 = 1.2;
                }
              }
            }
LAB_00c55268:
            if (((this.LMGKPMKNHCI == 0) ||
                (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar9 == 0)) ||
               (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
            uVar5 = System_String__Contains(lVar9,_Str_help_arrow,0);
            if ((uVar5 & 1) == 0) {
              if (((this.LMGKPMKNHCI == 0) ||
                  (lVar9 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar9 == 0)) ||
                 (lVar9 = UnityEngine_Object__get_name(lVar9,0), lVar9 == 0)) goto LAB_00c55828;
              uVar5 = System_String__Contains(lVar9,_Str_arrow_car,0);
              if ((uVar5 & 1) != 0) goto LAB_00c552d0;
            }
            else {
LAB_00c552d0:
              fVar14 = 1.2;
            }
            fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
            fVar15 = ((fVar15 - this.JGOPIEKJDKI) + 0.3) * 1.5;
            fVar20 = (float)(int)(fVar15 * 0.5);
            fVar15 = fVar15 - (fVar20 + fVar20);
            fVar20 = fVar15 + -1.0;
            if (fVar15 < 0.0) {
              fVar20 = -1.0;
            }
            lVar9 = this.LMGKPMKNHCI;
            fVar20 = 1.0 - ABS(fVar20);
            fVar15 = fVar20;
            if (1.0 < fVar20) {
              fVar15 = 1.0;
            }
            if (fVar20 < 0.0) {
              fVar15 = 0.0;
            }
            if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) goto LAB_00c55828;
            fVar14 = (fVar14 + -1.0) * fVar15 + 1.0;
            UnityEngine_Transform__set_localScale
                      (fVar14 * *(float *)(lVar9 + 0x30),fVar14 * *(float *)(lVar9 + 0x34),
                       fVar14 * *(float *)(lVar9 + 0x38),*(long *)(lVar9 + 0x20),0);
          }
        }
      }
    }
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(pvVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (pvVar4 == (void *)0x0) goto LAB_00c55828;
    uVar5 = UnityEngine_GameObject__get_activeInHierarchy(pvVar4,0);
    if ((uVar5 & 1) == 0) {
      GamePadController__KBLMMLBPPKO(__this);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF != 0) {
      uVar11 = CarController.KECGFPHIEHF.CDDOBCENBOG;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((((CarController.KECGFPHIEHF != 0) &&
           (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar9 != 0)) &&
          (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) &&
         (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 != 0)) {
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        uVar5 = UnityEngine_Input__GetButtonDown(_Str_LB,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar9 == 0))
          goto LAB_00c55828;
          GUIGameplay__ButtonPauseHelpLeft(lVar9,0);
        }
        uVar5 = UnityEngine_Input__GetButtonDown(_Str_RB,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF != 0) &&
           (lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar9 != 0)) {
          GUIGameplay__ButtonPauseHelpRight(lVar9,0);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      uVar11 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF != 0) &&
          (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 != 0)) &&
         (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
        if ((uVar5 & 1) != 0) {
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_LB,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
            Menu__LJDEGMJCOIG(Menu.KECGFPHIEHF,0);
          }
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_RB,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c55828;
            Menu__BMIIEMFFFEO(Menu.KECGFPHIEHF,0);
          }
          uVar5 = UnityEngine_Input__GetButtonDown(_Str_Start,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF != 0) &&
                (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 != 0)) &&
               ((lVar9 = *(long *)(lVar9 + 0x578), lVar9 != 0 &&
                (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 != 0)))) {
              uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar9 = Menu.KECGFPHIEHF;
              if (((lVar9 != 0) && (*(long *)(lVar9 + 0x20) != 0)) &&
                 (lVar10 = *(long *)(*(long *)(lVar9 + 0x20) + 0x578), lVar10 != 0)) {
                if (*(char *)(lVar10 + 0xd8) == '\0') {
                  return;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  lVar9 = Menu.KECGFPHIEHF;
                  if (lVar9 == 0) goto LAB_00c55828;
                }
                if ((*(long *)(lVar9 + 0x20) != 0) &&
                   (lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 0x1b0), lVar9 != 0)) {
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((Menu.KECGFPHIEHF == 0) ||
                        (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                       || (lVar9 = *(long *)(lVar9 + 0x1b0), lVar9 == 0)) goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (((Menu.KECGFPHIEHF == 0) ||
                        (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0))
                       || ((lVar9 = *(long *)(lVar9 + 0x90), lVar9 == 0 ||
                           (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0))))
                    goto LAB_00c55828;
                    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                  }
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF != 0) &&
                     (pvVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA,
                     pvVar4 != (void *)0x0)) {
                    GUIGarage__ButtonStartRaceGo(pvVar4);
                    return;
                  }
                }
              }
            }
            goto LAB_00c55828;
          }
        }
        return;
      }
    }
  }
LAB_00c55828:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public GameObject KNABINMBNJC() { }   @0xb5582c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * GamePadController__KNABINMBNJC(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  if ((bRam00000000019171aa & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171aa = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  pvVar3 = (void *)0x0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    pvVar3 = *(void **)(lVar4 + 0x40);
  }
  return pvVar3;
}


// ==== public void FJJJEMJAMGO(GameObject MIPKEALMBHI) { }   @0xb558ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FJJJEMJAMGO(void *__this,void *MIPKEALMBHI)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *CIDKMFLFJEJ;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 extraout_s0;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
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
  uVar2 = UnityEngine_Object__op_Equality(MIPKEALMBHI,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c55ff4;
  uVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar6 == 0)) ||
        (lVar6 = *(long *)(lVar6 + 0x150), lVar6 == 0)) ||
       (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_00c55ff4;
    uVar2 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(__this);
  uVar8 = _Str_SetButton__;
  if (MIPKEALMBHI == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(long *)MIPKEALMBHI + 0x168))
                      (MIPKEALMBHI,*(undefined8 *)(*(long *)MIPKEALMBHI + 0x170));
  }
  uVar1 = _Str___last__;
  plVar4 = this.CDIJMLNDKEP;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  CIDKMFLFJEJ = (void *)System_String__Concat(uVar8,uVar3,uVar1,uVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(CIDKMFLFJEJ,false);
  this.CDIJMLNDKEP = MIPKEALMBHI;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar6 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar6,MIPKEALMBHI,0);
  uVar9 = UnityEngine_Time__get_realtimeSinceStartup(0);
  this.JGOPIEKJDKI = uVar9;
  if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (this.DJMNPCHPFJO,&plStack_a8,
             _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
  uStack_88 = uStack_a0;
  plStack_90 = plStack_a8;
  uStack_80 = uStack_98;
  do {
    do {
      uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                        (&plStack_90,
                         _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__)
      ;
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                  (&plStack_90,
                   _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
        lVar6 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar6,0);
        this.LMGKPMKNHCI = lVar6;
        if ((lVar6 == 0) || (*(void **)(lVar6 + 0x10) = MIPKEALMBHI, MIPKEALMBHI == (void *)0x0))
        goto LAB_00c55ff4;
        uVar8 = UnityEngine_Object__get_name(MIPKEALMBHI,0);
        uVar2 = GamePadController__EODAOKKOJLL(uVar8,uVar8);
        lVar6 = this.LMGKPMKNHCI;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar7 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
        if ((uVar2 & 1) != 0) {
          if (lVar7 == 0) goto LAB_00c55ff4;
          lVar7 = UnityEngine_Transform__get_parent(lVar7,0);
        }
        *(long *)(lVar6 + 0x20) = lVar7;
        lVar6 = this.LMGKPMKNHCI;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar6 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar6 + 0x18) = plStack_a8;
        lVar6 = this.LMGKPMKNHCI;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar6 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar6 + 0x28) = plStack_a8;
        lVar6 = this.LMGKPMKNHCI;
        if (((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) ||
           (lVar7 = UnityEngine_Object__get_name(*(long *)(lVar6 + 0x20),0), lVar7 == 0))
        goto LAB_00c55ff4;
        uVar2 = System_String__Contains(lVar7,_Str_lvl_,0);
        uVar14 = 0x3f800000;
        uVar12 = 0x3f800000;
        uVar9 = 0x3f800000;
        if ((uVar2 & 1) == 0) {
          if ((this.LMGKPMKNHCI == 0) ||
             (lVar7 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar7 == 0))
          goto LAB_00c55ff4;
          uVar9 = UnityEngine_Transform__get_localScale(lVar7,0);
        }
        *(undefined4 *)(lVar6 + 0x30) = uVar9;
        *(undefined4 *)(lVar6 + 0x34) = uVar12;
        *(undefined4 *)(lVar6 + 0x38) = uVar14;
        lVar6 = this.LMGKPMKNHCI;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar8 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar6 + 0x28),0);
        *(undefined4 *)(lVar6 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar6 + 0x40) = uVar12;
        uVar2 = GamePadController__PJOJJBEIFAE(uVar8,this.LMGKPMKNHCI);
        if ((uVar2 & 1) == 0) {
          lVar6 = this.LMGKPMKNHCI;
          if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar9 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar6 + 0x28),0);
          *(undefined4 *)(lVar6 + 0x44) = uVar9;
          *(undefined4 *)(lVar6 + 0x48) = uVar12;
        }
        if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(this.DJMNPCHPFJO,this.LMGKPMKNHCI,
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar6 = lStack_78;
    } while (lStack_78 == 0);
    uVar8 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar8,MIPKEALMBHI,0);
  } while ((uVar2 & 1) == 0);
  this.LMGKPMKNHCI = lVar6;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (this.LMGKPMKNHCI == 0) {
    return;
  }
  lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28);
  if (lVar6 == 0) goto LAB_00c55ff4;
  fVar10 = (float)UnityEngine_RectTransform__get_pivot(lVar6,0);
  fVar13 = 0.5;
  if (fVar10 == 0.5) {
    if ((this.LMGKPMKNHCI == 0) ||
       (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar6 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar6,0);
    if (fVar13 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((this.LMGKPMKNHCI == 0) ||
       (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar6 == 0)) goto LAB_00c55ff4;
    fVar10 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar6,0);
    lVar6 = this.LMGKPMKNHCI;
    if ((lVar6 == 0) || (lVar7 = *(long *)(lVar6 + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    fVar15 = *(float *)(lVar6 + 0x44);
    fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar7,0);
    lVar6 = this.LMGKPMKNHCI;
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar17 = *(float *)(lVar6 + 0x3c);
    fVar19 = *(float *)(lVar6 + 0x30);
    fVar18 = *(float *)(lVar6 + 0x44);
    fVar16 = *(float *)(lVar6 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar6 + 0x28),0);
    lVar6 = this.LMGKPMKNHCI;
    if (lVar6 == 0) goto LAB_00c55ff4;
    fVar11 = ABS(fVar17 + -0.5);
    fVar17 = fVar13 * fVar11;
    if (fVar18 < 0.0) {
      fVar17 = -(fVar13 * fVar11);
    }
    fVar18 = ABS(*(float *)(lVar6 + 0x40) + -0.5);
    fVar13 = fVar10 * fVar18;
    if (*(float *)(lVar6 + 0x48) < 0.0) {
      fVar13 = -(fVar10 * fVar18);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar15 + ABS(fVar19) * fVar17,fVar16 + ABS(*(float *)(lVar6 + 0x34)) * fVar13,lVar7,0
              );
  }
  if ((this.LMGKPMKNHCI != 0) &&
     (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x10), lVar6 != 0)) {
    uVar8 = UnityEngine_Object__get_name(lVar6,0);
    uVar2 = GamePadController__EODAOKKOJLL(uVar8,uVar8);
    if ((uVar2 & 1) != 0) {
      if ((this.LMGKPMKNHCI == 0) ||
         (lVar6 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar6 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar6,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar2 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (this.ELEMNDGENFO,*(undefined4 *)((long)__this + 0x70),
                   *(undefined4 *)((long)__this + 0x74),*(undefined4 *)((long)__this + 0x78),
                   plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void PKDDGJPLNAP() { }   @0xb56078

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__PKDDGJPLNAP(void *__this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 extraout_s0;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam00000000019171a1 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171a1 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((((Menu.KECGFPHIEHF == 0) ||
       (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
      (lVar7 = *(long *)(lVar7 + 0x170), lVar7 == 0)) ||
     (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) {
LAB_00c561a4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (((Menu.KECGFPHIEHF == 0) ||
      (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
     ((lVar7 = *(long *)(lVar7 + 0x268), lVar7 == 0 ||
      (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)))) goto LAB_00c561a4;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Menu_TypeInfo);
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) goto LAB_00c561a4;
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x280);
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x268);
  }
  if (lVar7 == 0) goto LAB_00c561a4;
  plVar6 = (long *)UnityEngine_Component__get_gameObject(lVar7,0);
  if ((bRam00000000019171a4 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
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
  uVar5 = UnityEngine_Object__op_Equality(plVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c55ff4;
  uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
        (lVar7 = *(long *)(lVar7 + 0x150), lVar7 == 0)) ||
       (lVar7 = UnityEngine_Component__get_gameObject(lVar7,0), lVar7 == 0)) goto LAB_00c55ff4;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  GamePadController__DJHKBCNIBNG(__this);
  uVar9 = _Str_SetButton__;
  if (plVar6 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  uVar1 = _Str___last__;
  plVar3 = this.CDIJMLNDKEP;
  if (plVar3 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  uVar9 = System_String__Concat(uVar9,uVar2,uVar1,uVar4,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar9,0,0);
  this.CDIJMLNDKEP = plVar6;
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar7 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar7 == 0) goto LAB_00c55ff4;
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar7,plVar6,0);
  uVar10 = UnityEngine_Time__get_realtimeSinceStartup(0);
  this.JGOPIEKJDKI = uVar10;
  if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
            (this.DJMNPCHPFJO,&plStack_a8,
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
        lVar7 = func_0x00a67b44(_MLCNINCNANA_TypeInfo);
        MLCNINCNANA___ctor(lVar7,0);
        this.LMGKPMKNHCI = lVar7;
        if ((lVar7 == 0) || (*(long **)(lVar7 + 0x10) = plVar6, plVar6 == (long *)0x0))
        goto LAB_00c55ff4;
        uVar9 = UnityEngine_Object__get_name(plVar6,0);
        uVar5 = GamePadController__EODAOKKOJLL(uVar9,uVar9);
        lVar7 = this.LMGKPMKNHCI;
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        lVar8 = UnityEngine_GameObject__get_transform(*(long *)(lVar7 + 0x10),0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_00c55ff4;
          lVar8 = UnityEngine_Transform__get_parent(lVar8,0);
        }
        *(long *)(lVar7 + 0x20) = lVar8;
        lVar7 = this.LMGKPMKNHCI;
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar7 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_Button___);
        *(long **)(lVar7 + 0x18) = plStack_a8;
        lVar7 = this.LMGKPMKNHCI;
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_00c55ff4;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (*(long *)(lVar7 + 0x10),&plStack_a8,
                   _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        *(long **)(lVar7 + 0x28) = plStack_a8;
        lVar7 = this.LMGKPMKNHCI;
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) ||
           (lVar8 = UnityEngine_Object__get_name(*(long *)(lVar7 + 0x20),0), lVar8 == 0))
        goto LAB_00c55ff4;
        uVar5 = System_String__Contains(lVar8,_Str_lvl_,0);
        uVar15 = 0x3f800000;
        uVar13 = 0x3f800000;
        uVar10 = 0x3f800000;
        if ((uVar5 & 1) == 0) {
          if ((this.LMGKPMKNHCI == 0) ||
             (lVar8 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar8 == 0))
          goto LAB_00c55ff4;
          uVar10 = UnityEngine_Transform__get_localScale(lVar8,0);
        }
        *(undefined4 *)(lVar7 + 0x30) = uVar10;
        *(undefined4 *)(lVar7 + 0x34) = uVar13;
        *(undefined4 *)(lVar7 + 0x38) = uVar15;
        lVar7 = this.LMGKPMKNHCI;
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
        uVar9 = UnityEngine_RectTransform__get_pivot(*(long *)(lVar7 + 0x28),0);
        *(undefined4 *)(lVar7 + 0x3c) = extraout_s0;
        *(undefined4 *)(lVar7 + 0x40) = uVar13;
        uVar5 = GamePadController__PJOJJBEIFAE(uVar9,this.LMGKPMKNHCI);
        if ((uVar5 & 1) == 0) {
          lVar7 = this.LMGKPMKNHCI;
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
          uVar10 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar7 + 0x28),0);
          *(undefined4 *)(lVar7 + 0x44) = uVar10;
          *(undefined4 *)(lVar7 + 0x48) = uVar13;
        }
        if (this.DJMNPCHPFJO == 0) goto LAB_00c55ff4;
        func_0x00b7fe44(this.DJMNPCHPFJO,this.LMGKPMKNHCI,
                        _Method_System_Collections_Generic_List_MLCNINCNANA__Add__);
        goto LAB_00c55e20;
      }
      func_0x00b947ec(&plStack_90,&lStack_78,
                      _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__)
      ;
      lVar7 = lStack_78;
    } while (lStack_78 == 0);
    uVar9 = *(undefined8 *)(lStack_78 + 0x10);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,plVar6,0);
  } while ((uVar5 & 1) == 0);
  this.LMGKPMKNHCI = lVar7;
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
            (&plStack_90,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
LAB_00c55e20:
  if (this.LMGKPMKNHCI == 0) {
    return;
  }
  lVar7 = *(long *)(this.LMGKPMKNHCI + 0x28);
  if (lVar7 == 0) goto LAB_00c55ff4;
  fVar11 = (float)UnityEngine_RectTransform__get_pivot(lVar7,0);
  fVar14 = 0.5;
  if (fVar11 == 0.5) {
    if ((this.LMGKPMKNHCI == 0) ||
       (lVar7 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    UnityEngine_RectTransform__get_pivot(lVar7,0);
    if (fVar14 != 0.5) goto LAB_00c55e68;
  }
  else {
LAB_00c55e68:
    if ((this.LMGKPMKNHCI == 0) ||
       (lVar7 = *(long *)(this.LMGKPMKNHCI + 0x28), lVar7 == 0)) goto LAB_00c55ff4;
    fVar11 = 0.5;
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,lVar7,0);
    lVar7 = this.LMGKPMKNHCI;
    if ((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x28), lVar8 == 0)) goto LAB_00c55ff4;
    fVar16 = *(float *)(lVar7 + 0x44);
    fVar14 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar8,0);
    lVar7 = this.LMGKPMKNHCI;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) goto LAB_00c55ff4;
    fVar18 = *(float *)(lVar7 + 0x3c);
    fVar20 = *(float *)(lVar7 + 0x30);
    fVar19 = *(float *)(lVar7 + 0x44);
    fVar17 = *(float *)(lVar7 + 0x48);
    UnityEngine_RectTransform__get_sizeDelta(*(long *)(lVar7 + 0x28),0);
    lVar7 = this.LMGKPMKNHCI;
    if (lVar7 == 0) goto LAB_00c55ff4;
    fVar12 = ABS(fVar18 + -0.5);
    fVar18 = fVar14 * fVar12;
    if (fVar19 < 0.0) {
      fVar18 = -(fVar14 * fVar12);
    }
    fVar19 = ABS(*(float *)(lVar7 + 0x40) + -0.5);
    fVar14 = fVar11 * fVar19;
    if (*(float *)(lVar7 + 0x48) < 0.0) {
      fVar14 = -(fVar11 * fVar19);
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (fVar16 + ABS(fVar20) * fVar18,fVar17 + ABS(*(float *)(lVar7 + 0x34)) * fVar14,lVar8,0
              );
  }
  if ((this.LMGKPMKNHCI != 0) &&
     (lVar7 = *(long *)(this.LMGKPMKNHCI + 0x10), lVar7 != 0)) {
    uVar9 = UnityEngine_Object__get_name(lVar7,0);
    uVar5 = GamePadController__EODAOKKOJLL(uVar9,uVar9);
    if ((uVar5 & 1) != 0) {
      if ((this.LMGKPMKNHCI == 0) ||
         (lVar7 = *(long *)(this.LMGKPMKNHCI + 0x20), lVar7 == 0)) goto LAB_00c55ff4;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar7,&plStack_a8,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(plStack_a8,0,0);
      if ((uVar5 & 1) != 0) {
        if (plStack_a8 == (long *)0x0) goto LAB_00c55ff4;
        (**(code **)(*plStack_a8 + 0x2a8))
                  (this.ELEMNDGENFO,*(undefined4 *)((long)__this + 0x70),
                   *(undefined4 *)((long)__this + 0x74),*(undefined4 *)((long)__this + 0x78),
                   plStack_a8,*(undefined8 *)(*plStack_a8 + 0x2b0));
      }
    }
    return;
  }
LAB_00c55ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private bool GDCKFJKBEOE() { }   @0xb561a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__GDCKFJKBEOE(void *__this)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  if ((bRam00000000019171b0 & 1) == 0) {
    func_0x00a67900(&Str_JoyVertical);
    func_0x00a67900(&Str_LB);
    func_0x00a67900(&Str_Back);
    func_0x00a67900(&Str_Accel);
    func_0x00a67900(&Str_RB);
    func_0x00a67900(&Str_Start);
    func_0x00a67900(&Str_JoyHorizontal);
    func_0x00a67900(&Str_B);
    func_0x00a67900(&Str_Y);
    func_0x00a67900(&Str_X);
    func_0x00a67900(&Str_A);
    bRam00000000019171b0 = 1;
  }
  uVar2 = UnityEngine_Input__GetButtonDown(_Str_A,0);
  if (((((((uVar2 & 1) != 0) ||
         (uVar2 = UnityEngine_Input__GetButtonDown(_Str_B,0), (uVar2 & 1) != 0)) ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_X,0), (uVar2 & 1) != 0)) ||
       ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_Y,0), (uVar2 & 1) != 0 ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_LB,0), (uVar2 & 1) != 0)))) ||
      ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_RB,0), (uVar2 & 1) != 0 ||
       ((uVar2 = UnityEngine_Input__GetButtonDown(_Str_Back,0), (uVar2 & 1) != 0 ||
        (uVar2 = UnityEngine_Input__GetButtonDown(_Str_Start,0), (uVar2 & 1) != 0)))))) ||
     ((fVar3 = (float)UnityEngine_Input__GetAxis(_Str_JoyHorizontal,0), 0.5 < ABS(fVar3) ||
      ((fVar3 = (float)UnityEngine_Input__GetAxis(_Str_JoyVertical,0), 0.5 < ABS(fVar3) ||
       (fVar3 = (float)UnityEngine_Input__GetAxisRaw(_Str_Accel,0), 0.5 < ABS(fVar3))))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ==== private bool FEGHHAKCEIG() { }   @0xb56390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__FEGHHAKCEIG(void *__this)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  float fVar4;
  
  if ((bRam00000000019171ab & 1) == 0) {
    func_0x00a67900(&Str_Fire_Keyboard);
    func_0x00a67900(&Str_Accel_Keyboard);
    func_0x00a67900(&Str_Titl_Keyboard);
    func_0x00a67900(&Str_Nitro_Keyboard);
    bRam00000000019171ab = 1;
  }
  uVar3 = UnityEngine_Input__GetMouseButton(0,0);
  if (((((uVar3 & 1) == 0) && (uVar3 = UnityEngine_Input__GetMouseButton(1,0), (uVar3 & 1) == 0)) &&
      (uVar3 = UnityEngine_Input__GetMouseButton(2,0), (uVar3 & 1) == 0)) &&
     (((fVar4 = (float)UnityEngine_Input__GetAxisRaw(_Str_Accel_Keyboard,0), fVar4 == 0.0 &&
       (fVar4 = (float)UnityEngine_Input__GetAxisRaw(_Str_Titl_Keyboard,0), fVar4 == 0.0)) &&
      (uVar3 = UnityEngine_Input__GetButton(_Str_Nitro_Keyboard,0), uVar1 = _Str_Fire_Keyboard,
      (uVar3 & 1) == 0)))) {
    if (pcRam000000000191d2d0 == (code *)0x0) {
      pcRam000000000191d2d0 = (code *)func_0x00a678c4(&UNK_005a78ce);
    }
                    /* WARNING: Could not recover jumptable at 0x014c822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam000000000191d2d0)(uVar1);
    return (bool)uVar2;
  }
  return true;
}


// ==== private void DJHKBCNIBNG() { }   @0xb5647c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__DJHKBCNIBNG(void *__this)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam00000000019171a9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171a9 = 1;
  }
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar3 = this.CDIJMLNDKEP;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (this.DJMNPCHPFJO == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
              (this.DJMNPCHPFJO,&plStack_78,
               _Method_System_Collections_Generic_List_MLCNINCNANA__GetEnumerator__);
    uStack_58 = uStack_70;
    plStack_60 = plStack_78;
    uStack_50 = uStack_68;
    do {
      do {
        uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                          (&plStack_60,
                           _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__MoveNext__
                          );
        if ((uVar2 & 1) == 0) goto LAB_00c566a4;
        func_0x00b947ec(&plStack_60,&plStack_78,
                        _Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__get_Current__
                       );
        plVar1 = plStack_78;
      } while (plStack_78 == (long *)0x0);
      lVar4 = plStack_78[2];
      uVar3 = this.CDIJMLNDKEP;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Equality(lVar4,uVar3,0);
    } while ((uVar2 & 1) == 0);
    if (this.CDIJMLNDKEP == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_Object__get_name(this.CDIJMLNDKEP,0);
    uVar2 = GamePadController__EODAOKKOJLL(uVar3,uVar3);
    if ((uVar2 & 1) != 0) {
      if (this.CDIJMLNDKEP == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar4 = UnityEngine_GameObject__get_transform(this.CDIJMLNDKEP,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      lVar4 = UnityEngine_Transform__get_parent(lVar4,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (lVar4,&plStack_78,_Method_UnityEngine_Component_GetComponent_Image___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(plStack_78,0,0);
      if ((uVar2 & 1) != 0) {
        if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        (**(code **)(*plStack_78 + 0x2a8))
                  (this.MMCFKCNGIOM,*(undefined4 *)((long)__this + 0x60),
                   *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                   plStack_78,*(undefined8 *)(*plStack_78 + 0x2b0));
      }
    }
    GamePadController__HFPFJNKNJND(__this);
    if (plVar1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__set_localScale
              ((int)plVar1[6],*(undefined4 *)((long)plVar1 + 0x34),(int)plVar1[7],plVar1[4],0);
    if (plVar1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = UnityEngine_RectTransform__set_pivot
                      (*(undefined4 *)((long)plVar1 + 0x3c),(int)plVar1[8],plVar1[5],0);
    uVar2 = GamePadController__PJOJJBEIFAE(uVar3,plVar1);
    if ((uVar2 & 1) == 0) {
      if (plVar1[5] == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_RectTransform__set_anchoredPosition
                (*(undefined4 *)((long)plVar1 + 0x44),(int)plVar1[9],plVar1[5],0);
    }
LAB_00c566a4:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
              (&plStack_60,_Method_System_Collections_Generic_List_Enumerator_MLCNINCNANA__Dispose__
              );
  }
  return;
}


// ==== public void KBLMMLBPPKO() { }   @0xb567b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__KBLMMLBPPKO(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000019171a3 & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171a3 = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(lVar3,0,0);
  }
  this.LMGKPMKNHCI = 0;
  return;
}


// ==== private static void .cctor() { }   @0xb56878

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController___cctor(void)

{
  if ((bRam00000000019171a2 & 1) == 0) {
    func_0x00a67900(&GamePadController_TypeInfo);
    func_0x00a67900(&Str_B);
    func_0x00a67900(&Str_A);
    bRam00000000019171a2 = 1;
  }
  GamePadController.LMDBBPDHGLJ = _Str_A;
  GamePadController.AMHELLCDICB = _Str_B;
  return;
}


// ==== private bool PJOJJBEIFAE(MLCNINCNANA DBCKMAANOIL) { }   @0xb56904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GamePadController__PJOJJBEIFAE(void *__this,void *DBCKMAANOIL)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam00000000019171ad & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ad = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((DBCKMAANOIL == (void *)0x0) || ((uVar2 & 1) == 0)) {
      return false;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF != 0) &&
       (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) {
      lVar5 = *(long *)(lVar3 + 0x280);
      lVar3 = *(long *)((long)DBCKMAANOIL + 0x28);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((bRam000000000191c553 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo,lVar3,0);
        bRam000000000191c553 = 1;
      }
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((bRam000000000191c502 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        bRam000000000191c502 = 1;
      }
      if (lVar5 == 0 && lVar3 == 0) {
        bVar1 = 1;
      }
      else {
        if (lVar3 == 0) {
          lVar3 = lVar5;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
        }
        else {
          if (lVar5 != 0) {
            bVar1 = lVar5 == lVar3;
            goto LAB_0148e6ec;
          }
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
        }
        bVar1 = UnityEngine_Object__IsNativeObjectAlive(lVar3);
        bVar1 = bVar1 ^ 1;
      }
LAB_0148e6ec:
      return (bool)(bVar1 & 1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb56a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__Awake(void *__this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [72];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  
  if ((bRam00000000019171a6 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019171a6 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  bVar7 = Main__KCHOEBEIOCE();
  if (bVar7) {
LAB_00c56b04:
    this.EECHHPBBMAG = 0x101;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)Menu.KECGFPHIEHF == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    Menu__FMEHJALLGBK((void *)Menu.KECGFPHIEHF);
  }
  else {
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    iVar13 = BridgePHP.sn;
    if (iVar13 == 9) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = BridgePHP.sn;
    }
    if (iVar13 == 0xb) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = BridgePHP.sn;
    }
    if (iVar13 == 0xc) goto LAB_00c56b04;
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      iVar13 = BridgePHP.sn;
    }
    if (iVar13 == 0xd) goto LAB_00c56b04;
  }
  if ((bRam000000000191719e & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_UI_ColorBlock_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_Button___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_color__);
    func_0x00a67900(&Str_ChangeButtonSelectedColor__IsGamePadInpu);
    func_0x00a67900(&Str___gui_object__);
    func_0x00a67900(&Str_back_button);
    bRam000000000191719e = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c5371c;
  uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c5371c;
    uVar14 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    plVar10 = (long *)0x0;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarController.KECGFPHIEHF == 0) goto LAB_00c5371c;
      lVar9 = CarController.KECGFPHIEHF.CDDOBCENBOG;
      goto joined_r0x00c533d4;
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c5371c;
    lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
joined_r0x00c533d4:
    if (lVar9 == 0) goto LAB_00c5371c;
    plVar10 = (long *)UnityEngine_Component__get_gameObject(lVar9,0);
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(plVar10,0,0);
  if ((uVar8 & 1) != 0) {
    if (this.EECHHPBBMAG == '\0') {
      uVar17 = 0x3f800000;
      uVar18 = 0x3f800000;
      uVar19 = 0x3f800000;
      uVar20 = 0x3f800000;
    }
    else {
      uVar20 = this.MMCFKCNGIOM;
      uVar19 = *(undefined4 *)((long)__this + 0x60);
      uVar18 = *(undefined4 *)((long)__this + 100);
      uVar17 = *(undefined4 *)((long)__this + 0x68);
    }
    uStack_98 = CONCAT44(uVar19,uVar20);
    uStack_90 = CONCAT44(uVar17,uVar18);
    uVar14 = func_0x00c57430(&uStack_98,0,0,0);
    uVar14 = System_String__Concat(_Str_color__,uVar14,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(uVar14,0,0);
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                          (plVar10,1,
                           _Method_UnityEngine_GameObject_GetComponentsInChildren_Button___),
       lVar9 == 0)) {
LAB_00c5371c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar4) {
      uVar16 = 0;
      do {
        if (uVar4 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_00c5371c;
        if (*(int *)(lVar15 + 0x28) == 0) {
          uVar14 = UnityEngine_Object__get_name(lVar15,0);
          uVar8 = System_String__op_Inequality(uVar14,_Str_back_button,0);
          if ((uVar8 & 1) == 0) goto LAB_00c53524;
        }
        else {
LAB_00c53524:
          uVar14 = UnityEngine_Object__get_name(lVar15,0);
          uVar8 = GamePadController__EODAOKKOJLL(uVar14,uVar14);
          if ((uVar8 & 1) == 0) {
            func_0x016decc0(&uStack_e0,lVar15 + 100,0x48);
            if (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uStack_138 = uVar20;
            uStack_134 = uVar19;
            uStack_130 = uVar18;
            uStack_12c = uVar17;
            func_0x016decc0(auStack_128,&uStack_e0,0x48);
            UnityEngine_UI_Selectable__set_colors(lVar15,&uStack_138,0);
          }
          else {
            lVar15 = UnityEngine_Component__get_transform(lVar15,0);
            if ((lVar15 == 0) || (lVar15 = UnityEngine_Transform__get_parent(lVar15,0), lVar15 == 0)
               ) goto LAB_00c5371c;
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar15,&plStack_88,_Method_UnityEngine_Component_GetComponent_Image___);
            plVar6 = plStack_88;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar8 = UnityEngine_Object__op_Inequality(plVar6,0,0);
            if ((uVar8 & 1) != 0) {
              if (plVar6 == (long *)0x0) goto LAB_00c5371c;
              bVar7 = this.EECHHPBBMAG != '\0';
              lVar15 = 0x6c;
              if (bVar7) {
                lVar15 = 0x7c;
              }
              lVar1 = 0x70;
              if (bVar7) {
                lVar1 = 0x80;
              }
              lVar2 = 0x74;
              if (bVar7) {
                lVar2 = 0x84;
              }
              lVar3 = 0x78;
              if (bVar7) {
                lVar3 = 0x88;
              }
              (**(code **)(*plVar6 + 0x2a8))
                        (*(undefined4 *)((long)__this + lVar15),
                         *(undefined4 *)((long)__this + lVar1),*(undefined4 *)((long)__this + lVar2)
                         ,*(undefined4 *)((long)__this + lVar3),plVar6,
                         *(undefined8 *)(*plVar6 + 0x2b0));
            }
          }
        }
        uVar4 = *(uint *)(lVar9 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar4);
    }
  }
  GamePadController__HFPFJNKNJND(__this);
  if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = System_Boolean__ToString(&this.EECHHPBBMAG,0);
  uVar5 = _Str_ChangeButtonSelectedColor__IsGamePadInpu;
  uVar14 = _Str___gui_object__;
  if (plVar10 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  uVar14 = System_String__Concat(uVar5,uVar11,uVar14,uVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  return;
}


// ==== public void BBNJMJMLBCA() { }   @0xb56b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__BBNJMJMLBCA(void *__this)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  void *__this_00;
  undefined8 uVar9;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam00000000019171a7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_SaveLastGarageButton__);
    bRam00000000019171a7 = 1;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar5 == 0) {
LAB_00c56c94:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x40);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (lVar5 == 0) goto LAB_00c56c94;
  plVar7 = *(long **)(lVar5 + 0x40);
  this.HMDGOKKIOHJ = plVar7;
  uVar9 = _Str_SaveLastGarageButton__;
  if (plVar7 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  }
  plVar7 = (long *)System_String__Concat(uVar9,uVar8,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
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
  UnityEngine_Debug__Log(plVar7,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
  uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
  lVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  if (lVar5 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar9,0,0);
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
     (lVar3 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar5 + 0x1e8) == 0) goto LAB_00c16768;
    uVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x1e8),0);
    if ((*(long *)(lVar5 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar4 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar8,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar5 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar7 = *(long **)(lVar5 + 0x1e8);
  lVar5 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar5 + 0x20) = uVar8, uVar1 != 1 &&
         (*(undefined8 *)(lVar5 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar5 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar5 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar8 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar8 = System_String__Format(_Str__0_f2_,uVar8,0);
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar5 + 0x40) = uVar8, uVar1 != 5)) &&
         (*(undefined8 *)(lVar5 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar5 + 0x50) = uVar9;
        uVar9 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x58) = uVar9;
          uVar9 = System_String__Concat(lVar5,0);
          (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0x5b0));
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


// ==== public void AGMBMNONINL() { }   @0xb56c98

/* WARNING: Possible PIC construction at 0x00c76cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00c76cf8) */
/* WARNING: Removing unreachable block (ram,0x00c76e58) */
/* WARNING: Removing unreachable block (ram,0x00c76cfc) */
/* WARNING: Removing unreachable block (ram,0x00c76d00) */
/* WARNING: Removing unreachable block (ram,0x00c76e8c) */
/* WARNING: Removing unreachable block (ram,0x00c76ea0) */
/* WARNING: Removing unreachable block (ram,0x00c76d04) */
/* WARNING: Removing unreachable block (ram,0x00c76ee8) */
/* WARNING: Removing unreachable block (ram,0x00c76f18) */
/* WARNING: Removing unreachable block (ram,0x00c76f1c) */
/* WARNING: Removing unreachable block (ram,0x00c76d14) */
/* WARNING: Removing unreachable block (ram,0x00c76d1c) */
/* WARNING: Removing unreachable block (ram,0x00c76d54) */
/* WARNING: Removing unreachable block (ram,0x00c76da4) */
/* WARNING: Removing unreachable block (ram,0x00c76da8) */
/* WARNING: Removing unreachable block (ram,0x00c76dd8) */
/* WARNING: Removing unreachable block (ram,0x00c76de0) */
/* WARNING: Removing unreachable block (ram,0x00c76e24) */
/* WARNING: Removing unreachable block (ram,0x00c76f24) */
/* WARNING: Removing unreachable block (ram,0x00c76f44) */
/* WARNING: Removing unreachable block (ram,0x00c76f4c) */
/* WARNING: Removing unreachable block (ram,0x00c76f98) */
/* WARNING: Removing unreachable block (ram,0x00c76f50) */
/* WARNING: Removing unreachable block (ram,0x00c76fb8) */
/* WARNING: Removing unreachable block (ram,0x00c76fd4) */
/* WARNING: Removing unreachable block (ram,0x00c77010) */
/* WARNING: Removing unreachable block (ram,0x00c77018) */
/* WARNING: Removing unreachable block (ram,0x00c77040) */
/* WARNING: Removing unreachable block (ram,0x00c77098) */
/* WARNING: Removing unreachable block (ram,0x00c770a0) */
/* WARNING: Removing unreachable block (ram,0x00c770cc) */
/* WARNING: Removing unreachable block (ram,0x00c77128) */
/* WARNING: Removing unreachable block (ram,0x00c77138) */
/* WARNING: Removing unreachable block (ram,0x00c770a4) */
/* WARNING: Removing unreachable block (ram,0x00c77390) */
/* WARNING: Removing unreachable block (ram,0x00c773c0) */
/* WARNING: Removing unreachable block (ram,0x00c773c8) */
/* WARNING: Removing unreachable block (ram,0x00c774ec) */
/* WARNING: Removing unreachable block (ram,0x00c773cc) */
/* WARNING: Removing unreachable block (ram,0x00c77524) */
/* WARNING: Removing unreachable block (ram,0x00c77538) */
/* WARNING: Removing unreachable block (ram,0x00c773d4) */
/* WARNING: Removing unreachable block (ram,0x00c773e4) */
/* WARNING: Removing unreachable block (ram,0x00c77470) */
/* WARNING: Removing unreachable block (ram,0x00c77478) */
/* WARNING: Removing unreachable block (ram,0x00c773e8) */
/* WARNING: Removing unreachable block (ram,0x00c774b8) */
/* WARNING: Removing unreachable block (ram,0x00c7751c) */
/* WARNING: Removing unreachable block (ram,0x00c7757c) */
/* WARNING: Removing unreachable block (ram,0x00c773f8) */
/* WARNING: Removing unreachable block (ram,0x00c774a4) */
/* WARNING: Removing unreachable block (ram,0x00c77400) */
/* WARNING: Removing unreachable block (ram,0x00c77410) */
/* WARNING: Removing unreachable block (ram,0x00c77414) */
/* WARNING: Removing unreachable block (ram,0x00c7741c) */
/* WARNING: Removing unreachable block (ram,0x00c77420) */
/* WARNING: Removing unreachable block (ram,0x00c77430) */
/* WARNING: Removing unreachable block (ram,0x00c77434) */
/* WARNING: Removing unreachable block (ram,0x00c77584) */
/* WARNING: Removing unreachable block (ram,0x00c77440) */
/* WARNING: Removing unreachable block (ram,0x00ccc6ac) */
/* WARNING: Removing unreachable block (ram,0x00ccc6d8) */
/* WARNING: Removing unreachable block (ram,0x00ccc6f0) */
/* WARNING: Removing unreachable block (ram,0x00ccc704) */
/* WARNING: Removing unreachable block (ram,0x00ccc718) */
/* WARNING: Removing unreachable block (ram,0x00ccc71c) */
/* WARNING: Removing unreachable block (ram,0x00ccc724) */
/* WARNING: Removing unreachable block (ram,0x00ccc728) */
/* WARNING: Removing unreachable block (ram,0x00c7701c) */
/* WARNING: Removing unreachable block (ram,0x00c771f4) */
/* WARNING: Removing unreachable block (ram,0x00c7721c) */
/* WARNING: Removing unreachable block (ram,0x00c77224) */
/* WARNING: Removing unreachable block (ram,0x00c772c0) */
/* WARNING: Removing unreachable block (ram,0x00c77228) */
/* WARNING: Removing unreachable block (ram,0x00c772f4) */
/* WARNING: Removing unreachable block (ram,0x00c77308) */
/* WARNING: Removing unreachable block (ram,0x00c77230) */
/* WARNING: Removing unreachable block (ram,0x00c77350) */
/* WARNING: Removing unreachable block (ram,0x00c77380) */
/* WARNING: Removing unreachable block (ram,0x00c77384) */
/* WARNING: Removing unreachable block (ram,0x00c77240) */
/* WARNING: Removing unreachable block (ram,0x00c772b0) */
/* WARNING: Removing unreachable block (ram,0x00c77248) */
/* WARNING: Removing unreachable block (ram,0x00c77258) */
/* WARNING: Removing unreachable block (ram,0x00c7725c) */
/* WARNING: Removing unreachable block (ram,0x00c77264) */
/* WARNING: Removing unreachable block (ram,0x00c77268) */
/* WARNING: Removing unreachable block (ram,0x00c77278) */
/* WARNING: Removing unreachable block (ram,0x00c7727c) */
/* WARNING: Removing unreachable block (ram,0x00c7738c) */
/* WARNING: Removing unreachable block (ram,0x00c77288) */
/* WARNING: Removing unreachable block (ram,0x00cca6e0) */
/* WARNING: Removing unreachable block (ram,0x00cca708) */
/* WARNING: Removing unreachable block (ram,0x00cca71c) */
/* WARNING: Removing unreachable block (ram,0x00cca730) */
/* WARNING: Removing unreachable block (ram,0x00cca734) */
/* WARNING: Removing unreachable block (ram,0x00cca750) */
/* WARNING: Removing unreachable block (ram,0x00cca75c) */
/* WARNING: Removing unreachable block (ram,0x00cca81c) */
/* WARNING: Removing unreachable block (ram,0x00cca760) */
/* WARNING: Removing unreachable block (ram,0x00cca76c) */
/* WARNING: Removing unreachable block (ram,0x00cca774) */
/* WARNING: Removing unreachable block (ram,0x00cca79c) */
/* WARNING: Removing unreachable block (ram,0x00cca780) */
/* WARNING: Removing unreachable block (ram,0x00cca78c) */
/* WARNING: Removing unreachable block (ram,0x00cca7a8) */
/* WARNING: Removing unreachable block (ram,0x00cca7d8) */
/* WARNING: Removing unreachable block (ram,0x00cca7dc) */
/* WARNING: Removing unreachable block (ram,0x00cca7e4) */
/* WARNING: Removing unreachable block (ram,0x00cca7e8) */
/* WARNING: Removing unreachable block (ram,0x00c76f54) */
/* WARNING: Removing unreachable block (ram,0x00c76f64) */
/* WARNING: Removing unreachable block (ram,0x00c76f68) */
/* WARNING: Removing unreachable block (ram,0x00c76f70) */
/* WARNING: Removing unreachable block (ram,0x00c76f74) */
/* WARNING: Removing unreachable block (ram,0x00ccab7c) */
/* WARNING: Removing unreachable block (ram,0x00ccaba8) */
/* WARNING: Removing unreachable block (ram,0x00ccabb4) */
/* WARNING: Removing unreachable block (ram,0x00ccabc4) */
/* WARNING: Removing unreachable block (ram,0x00ccabc8) */
/* WARNING: Removing unreachable block (ram,0x00ccabd0) */
/* WARNING: Removing unreachable block (ram,0x00ccabd4) */
/* WARNING: Removing unreachable block (ram,0x00ccabe0) */
/* WARNING: Removing unreachable block (ram,0x00ccabe4) */
/* WARNING: Removing unreachable block (ram,0x00c76e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__AGMBMNONINL(void *__this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar5;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 in_x4;
  undefined8 unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  int iVar24;
  ulong unaff_x21;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar28;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  code *pcVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if ((bRam00000000019171a8 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA__Clear__);
    bRam00000000019171a8 = 1;
  }
  lVar28 = _Method_System_Collections_Generic_List_MLCNINCNANA__Clear__;
  lVar23 = this.DJMNPCHPFJO;
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  uVar9 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0xc0));
  if ((uVar9 & 1) == 0) {
    *(undefined4 *)(lVar23 + 0x18) = 0;
    return;
  }
  iVar6 = *(int *)(lVar23 + 0x18);
  *(undefined4 *)(lVar23 + 0x18) = 0;
  if (iVar6 < 1) {
    return;
  }
  puVar10 = *(undefined8 **)(lVar23 + 0x10);
  uVar9 = 0;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if (puVar10 == (undefined8 *)0x0) {
      func_0x00a67914(&System_ArgumentNullException_TypeInfo);
      uVar12 = func_0x00a67b44();
      uVar14 = func_0x00a67914(&Str_array);
      System_ArgumentNullException___ctor(uVar12,uVar14,0);
    }
    else {
      if (iVar6 < 0) {
        func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
        uVar12 = func_0x00a67b44();
        puVar13 = &Str_length___0;
      }
      else {
        iVar5 = func_0x00a5cb74(puVar10,0);
        unaff_x20 = puVar10;
        if ((int)uVar9 < iVar5) {
          func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
          uVar12 = func_0x00a67b44();
          puVar13 = &Str_index___lower_bound;
          unaff_x21 = uVar9;
        }
        else {
          uVar4 = (int)uVar9 - iVar5;
          iVar5 = System_Array__get_Length(puVar10);
          if ((int)uVar4 <= iVar5 - iVar6) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            iVar5 = func_0x016df200(*puVar10);
            puVar25 = (undefined1 *)((long)puVar10 + (long)iVar5 * (long)(int)uVar4 + 0x20);
            uVar9 = (ulong)(iVar5 * iVar6);
            goto SUB_016decb0;
          }
          func_0x00a67914(&System_IndexOutOfRangeException_TypeInfo);
          uVar12 = func_0x00a67b44();
          puVar13 = &Str_index___length___size;
          unaff_x21 = (ulong)uVar4;
        }
      }
      uVar14 = func_0x00a67914(puVar13);
      System_IndexOutOfRangeException___ctor(uVar12,uVar14,0);
    }
    uVar14 = func_0x00a67914(&Method_System_Array_Clear__);
    auVar30 = func_0x00a67a20(uVar12,uVar14);
    lVar23 = auVar30._8_8_;
    lVar28 = auVar30._0_8_;
    *(code **)((long)register0x00000008 + -0x40) = System_Array__System_Collections_IList_IndexOf;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = uVar12;
    if (lVar28 != 0) break;
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    System_ArgumentNullException___ctor(uVar14,uVar12,0);
    uVar12 = func_0x00a67914(&Method_System_Array_IndexOf__);
    puVar10 = (undefined8 *)func_0x00a67a20(uVar14,uVar12);
    puVar3 = (undefined8 *)((long)register0x00000008 + -0x60);
    *(code **)((long)register0x00000008 + -0x60) = System_Array__System_Collections_IList_Clear;
    *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar14;
    uVar9 = func_0x00a5cb74(puVar10,0);
    uVar9 = uVar9 & 0xffffffff;
    iVar6 = System_Array__get_Length(puVar10);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x30 = *puVar3;
  }
  uVar11 = func_0x00a5cb74(lVar28,0);
  uVar26 = uVar11 & 0xffffffff;
  uVar4 = System_Array__get_Length(lVar28);
  uVar20 = (ulong)uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x30) =
       *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar27 = 0x1918000;
  uVar9 = uVar26;
  uVar21 = uVar20;
  if ((bRam0000000001918524 & 1) == 0) {
    func_0x00a67900(&object___TypeInfo);
    bRam0000000001918524 = 1;
  }
  if (lVar28 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    uVar9 = 0;
    System_ArgumentNullException___ctor(uVar14,uVar12);
  }
  else {
    iVar6 = func_0x00a5cbb8(lVar28);
    if (iVar6 == 1) {
      uVar7 = func_0x00a5cb74(lVar28,0);
      uVar8 = (uint)uVar11;
      uVar1 = uVar7 - uVar8;
      unaff_x24 = (ulong)uVar1;
      if (uVar1 == 0 || (int)uVar7 < (int)uVar8) {
        uVar27 = (ulong)uVar7;
        iVar6 = System_Array__get_Length(lVar28);
        if ((int)(iVar6 + uVar7) < (int)uVar8) goto LAB_00f6a538;
        if ((-1 < (int)uVar4) &&
           (iVar6 = System_Array__get_Length(lVar28), (int)uVar4 <= (int)(uVar1 + iVar6))) {
          lVar15 = func_0x00a67a34(lVar28,_object___TypeInfo);
          iVar6 = uVar4 + uVar8;
          if (lVar15 == 0) {
            if ((int)uVar8 < iVar6) {
              do {
                plVar17 = (long *)System_Array__GetValue(lVar28,uVar26);
                if (plVar17 == (long *)0x0) {
                  if (lVar23 == 0) {
                    return;
                  }
                }
                else {
                  uVar9 = (**(code **)(*plVar17 + 0x138))
                                    (plVar17,lVar23,*(undefined8 *)(*plVar17 + 0x140));
                  if ((uVar9 & 1) != 0) {
                    return;
                  }
                }
                uVar4 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar4;
                uVar26 = (ulong)((int)uVar26 + 1);
              } while (uVar4 != 0);
            }
          }
          else if (lVar23 == 0) {
            if ((int)uVar8 < iVar6) {
              if (uVar8 <= *(uint *)(lVar15 + 0x18)) {
                uVar8 = *(uint *)(lVar15 + 0x18);
              }
              do {
                uVar4 = (uint)uVar26;
                if (uVar8 == uVar4) goto LAB_00f6a534;
                if (*(long *)(lVar15 + (long)(int)uVar4 * 8 + 0x20) == 0) {
                  return;
                }
                uVar1 = (int)uVar20 - 1;
                uVar20 = (ulong)uVar1;
                uVar26 = (ulong)(uVar4 + 1);
              } while (uVar1 != 0);
            }
          }
          else if ((int)uVar8 < iVar6) {
            plVar17 = (long *)(lVar15 + (long)(int)uVar8 * 8 + 0x20);
            lVar28 = (long)iVar6 - (long)(int)uVar8;
            do {
              if (*(uint *)(lVar15 + 0x18) <= (uint)uVar26) {
LAB_00f6a534:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              plVar16 = (long *)*plVar17;
              if ((plVar16 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar16 + 0x138))
                                    (plVar16,lVar23,*(undefined8 *)(*plVar16 + 0x140)),
                 (uVar9 & 1) != 0)) {
                return;
              }
              uVar26 = (ulong)((uint)uVar26 + 1);
              lVar28 = lVar28 + -1;
              plVar17 = plVar17 + 1;
            } while (lVar28 != 0);
          }
          return;
        }
        func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
        uVar14 = func_0x00a67b44();
        lVar23 = func_0x00a67914(&Str_count);
        puVar13 = &Str_Count_must_be_positive_and_count_must_re;
      }
      else {
LAB_00f6a538:
        func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
        uVar14 = func_0x00a67b44();
        lVar23 = func_0x00a67914(&Str_startIndex);
        puVar13 = &Str_Index_was_out_of_range__Must_be_non_nega;
      }
      uVar9 = func_0x00a67914(puVar13);
      uVar21 = 0;
      System_ArgumentOutOfRangeException___ctor(uVar14,lVar23);
    }
    else {
      func_0x00a67914(&System_RankException_TypeInfo);
      uVar14 = func_0x00a67b44();
      uVar12 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
      System_RankException___ctor(uVar14,uVar12);
    }
  }
  uVar12 = func_0x00a67914(&Method_System_Array_IndexOf__);
  auVar30 = func_0x00a67a20(uVar14,uVar12);
  lVar15 = auVar30._0_8_;
  *(code **)((long)register0x00000008 + -0x90) = System_Array__Reverse;
  *(ulong *)((long)register0x00000008 + -0x80) = uVar20;
  *(ulong *)((long)register0x00000008 + -0x78) = uVar27;
  *(long *)((long)register0x00000008 + -0x70) = lVar23;
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar14;
  uVar20 = 0x1918000;
  uVar11 = uVar9 & 0xffffffff;
  uVar26 = auVar30._8_8_ & 0xffffffff;
  if ((bRam0000000001918525 & 1) == 0) {
    func_0x00a67900(&Method_System_Array_Reverse_object___);
    func_0x00a67900(&object___TypeInfo);
    bRam0000000001918525 = 1;
  }
  if (lVar15 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar12 = func_0x00a67b44();
    uVar14 = func_0x00a67914(&Str_array);
    System_ArgumentNullException___ctor(uVar12,uVar14,0);
    goto LAB_00f6a854;
  }
  iVar6 = func_0x00a5cb74(lVar15,0);
  iVar24 = (int)uVar9;
  iVar5 = auVar30._8_4_;
  if (iVar24 < 0) {
LAB_00f6a788:
    puVar13 = &Str_index;
    if (iVar6 <= iVar5) {
      puVar13 = &Str_length;
    }
    uVar14 = func_0x00a67914(puVar13);
    func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
    lVar15 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_Non_negative_number_required_);
    uVar21 = 0;
    System_ArgumentOutOfRangeException___ctor(lVar15,uVar14,uVar12);
    uVar14 = func_0x00a67914(&Method_System_Array_Reverse__);
    func_0x00a67a20(lVar15,uVar14);
  }
  else {
    uVar4 = iVar6 - iVar5;
    uVar20 = (ulong)uVar4;
    if (uVar4 != 0 && iVar5 <= iVar6) goto LAB_00f6a788;
    iVar6 = System_Array__get_Length(lVar15);
    if (iVar24 <= (int)(uVar4 + iVar6)) {
      iVar6 = func_0x00a5cbb8(lVar15);
      if (iVar6 == 1) {
        lVar18 = func_0x00a67a34(lVar15,_object___TypeInfo);
        lVar23 = _Method_System_Array_Reverse_object___;
        if (lVar18 == 0) {
          iVar6 = iVar24 + iVar5 + -1;
          if (iVar5 < iVar6) {
            do {
              uVar14 = System_Array__GetValue(lVar15,uVar26);
              uVar12 = System_Array__GetValue(lVar15,iVar6);
              System_Array__SetValue(lVar15,uVar12,uVar26);
              System_Array__SetValue(lVar15,uVar14,iVar6);
              uVar4 = (int)uVar26 + 1;
              uVar26 = (ulong)uVar4;
              iVar6 = iVar6 + -1;
            } while ((int)uVar4 < iVar6);
          }
          return;
        }
        *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0x90) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x88) = lVar28;
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        lVar28 = tpidr_el0;
        *(long *)((long)register0x00000008 + -0xd0) = lVar28;
        *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(lVar28 + 0x28);
        lVar28 = *(long *)(_Method_System_Array_Reverse_object___ + 0x38);
        if (lVar28 == 0) {
          func_0x00a9e42c(_Method_System_Array_Reverse_object___,uVar26,uVar9 & 0xffffffff);
          lVar28 = *(long *)(lVar23 + 0x38);
        }
        uVar9 = (ulong)*(uint *)(*(long *)(lVar28 + 0x18) + 0xfc);
        puVar25 = (undefined1 *)
                  ((long)register0x00000008 + (uVar9 + 0xf & 0x1fffffff0) * -4 + -0xd0);
SUB_016decb0:
        memset(puVar25,0,uVar9);
        return;
      }
      func_0x00a67914(&System_RankException_TypeInfo);
      uVar12 = func_0x00a67b44();
      uVar14 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
      System_RankException___ctor(uVar12,uVar14);
      goto LAB_00f6a854;
    }
  }
  func_0x00a67914(&System_ArgumentException_TypeInfo);
  uVar12 = func_0x00a67b44();
  uVar14 = func_0x00a67914(&Str_Offset_and_length_were_out_of_bounds_for);
  System_ArgumentException___ctor(uVar12,uVar14,0);
LAB_00f6a854:
  auVar2._8_8_ = lVar15;
  auVar2._0_8_ = lVar28;
  uVar14 = func_0x00a67914(&Method_System_Array_Reverse__);
  auVar30 = func_0x00a67a20(uVar12,uVar14);
  lVar23 = auVar30._0_8_;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0xb0);
  *(code **)((long)register0x00000008 + -0xb0) = System_Array__Sort;
  *(ulong *)((long)register0x00000008 + -0xa8) = uVar11;
  *(long *)((long)register0x00000008 + -0xa0) = lVar15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar12;
  if (lVar23 == 0) {
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar14 = func_0x00a67b44();
    uVar12 = func_0x00a67914(&Str_array);
    uVar9 = 0;
    System_ArgumentNullException___ctor(uVar14,uVar12);
    uVar12 = func_0x00a67914(&Method_System_Array_Sort__);
    pcVar29 = System_Array__Sort;
    auVar31 = func_0x00a67a20(uVar14,uVar12);
    uVar26 = auVar31._8_8_;
    auVar30._8_8_ = in_x4;
    auVar30._0_8_ = auVar31._0_8_;
  }
  else {
    uVar9 = func_0x00a5cb74(lVar23,0);
    uVar9 = uVar9 & 0xffffffff;
    uVar21 = System_Array__get_Length(lVar23);
    uVar21 = uVar21 & 0xffffffff;
    auVar2._8_8_ = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x98);
    uVar26 = 0;
    pcVar29 = *(code **)((long)register0x00000008 + -0xb0);
    uVar11 = *(ulong *)((long)register0x00000008 + -0xa8);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x90);
  }
  do {
    uVar12 = auVar30._8_8_;
    lVar28 = auVar30._0_8_;
    *(code **)(puVar25 + -0x40) = pcVar29;
    *(ulong *)(puVar25 + -0x30) = unaff_x24;
    *(long *)(puVar25 + -0x28) = auVar2._0_8_;
    *(ulong *)(puVar25 + -0x20) = uVar20;
    *(ulong *)(puVar25 + -0x18) = uVar11;
    *(long *)(puVar25 + -0x10) = auVar2._8_8_;
    *(undefined8 *)(puVar25 + -8) = uVar14;
    if (lVar28 == 0) {
      func_0x00a67914(&System_ArgumentNullException_TypeInfo);
      uVar14 = func_0x00a67b44();
      uVar12 = func_0x00a67914(&Str_keys);
      uVar27 = 0;
      System_ArgumentNullException___ctor(uVar14,uVar12);
    }
    else {
      iVar6 = (int)uVar21;
      uVar11 = uVar9 & 0xffffffff;
      uVar27 = uVar9;
      uVar22 = uVar21;
      iVar5 = func_0x00a5cbb8();
      uVar20 = uVar26;
      if (iVar5 == 1) {
        if (uVar26 == 0) {
          uVar27 = func_0x00a5cb74(lVar28,0);
          unaff_x24 = uVar27 & 0xffffffff;
          if (iVar6 < 0) {
LAB_00f6aa84:
            puVar13 = &Str_length;
            if (-1 < iVar6) {
              puVar13 = &Str_index;
            }
            uVar14 = func_0x00a67914(puVar13);
            func_0x00a67914(&System_ArgumentOutOfRangeException_TypeInfo);
            uVar12 = func_0x00a67b44();
            uVar19 = func_0x00a67914(&Str_Non_negative_number_required_);
            uVar22 = 0;
            System_ArgumentOutOfRangeException___ctor(uVar12,uVar14,uVar19);
            uVar14 = func_0x00a67914(&Method_System_Array_Sort__);
            func_0x00a67a20(uVar12,uVar14);
            goto LAB_00f6aaf0;
          }
LAB_00f6a984:
          if ((int)uVar9 < (int)unaff_x24) goto LAB_00f6aa84;
          iVar5 = System_Array__get_Length(lVar28);
          uVar4 = (int)uVar9 - (int)unaff_x24;
          unaff_x24 = (ulong)uVar4;
          if ((iVar6 <= (int)(iVar5 - uVar4)) &&
             ((uVar26 == 0 ||
              (iVar5 = System_Array__get_Length(uVar26), (int)uVar4 <= iVar5 - iVar6)))) {
            if (1 < iVar6) {
              uVar9 = uVar9 & 0xffffffff;
              uVar21 = uVar21 & 0xffffffff;
              *(undefined8 *)(puVar25 + -0x40) = *(undefined8 *)(puVar25 + -0x40);
              *(undefined8 *)(puVar25 + -0x38) = unaff_x25;
              *(undefined8 *)(puVar25 + -0x30) = *(undefined8 *)(puVar25 + -0x30);
              *(undefined8 *)(puVar25 + -0x28) = *(undefined8 *)(puVar25 + -0x28);
              *(undefined8 *)(puVar25 + -0x20) = *(undefined8 *)(puVar25 + -0x20);
              *(undefined8 *)(puVar25 + -0x18) = *(undefined8 *)(puVar25 + -0x18);
              *(undefined8 *)(puVar25 + -0x10) = *(undefined8 *)(puVar25 + -0x10);
              *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
              if ((bRam000000000191852d & 1) == 0) {
                func_0x00a67900(&object___TypeInfo,uVar26,uVar9,uVar21);
                bRam000000000191852d = 1;
              }
              *(undefined8 *)(puVar25 + -0x58) = 0;
              *(undefined8 *)(puVar25 + -0x50) = 0;
              *(undefined8 *)(puVar25 + -0x48) = 0;
              *(undefined8 *)(puVar25 + -0x70) = 0;
              *(undefined8 *)(puVar25 + -0x68) = 0;
              *(undefined8 *)(puVar25 + -0x60) = 0;
              lVar23 = func_0x00a67a34(lVar28,_object___TypeInfo);
              if ((lVar23 == 0) ||
                 ((lVar15 = func_0x00a67a34(uVar26,_object___TypeInfo), uVar26 != 0 && (lVar15 == 0)
                  ))) {
                System_Array_SorterGenericArray___ctor(puVar25 + -0x70,lVar28,uVar26,uVar12);
                System_Array_SorterGenericArray__IntrospectiveSort(puVar25 + -0x70,uVar9,uVar21);
              }
              else {
                System_Array_SorterObjectArray___ctor(puVar25 + -0x58,lVar23,lVar15,uVar12);
                System_Array_SorterObjectArray__IntrospectiveSort(puVar25 + -0x58,uVar9,uVar21);
              }
              return;
            }
            return;
          }
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar14 = func_0x00a67b44();
          puVar13 = &Str_Offset_and_length_were_out_of_bounds_for;
        }
        else {
          iVar5 = func_0x00a5cbb8(uVar26);
          if (iVar5 != 1) goto LAB_00f6aa00;
          uVar4 = func_0x00a5cb74(lVar28,0);
          unaff_x24 = (ulong)uVar4;
          uVar8 = func_0x00a5cb74(uVar26,0);
          if (uVar4 == uVar8) {
            if (-1 < iVar6) goto LAB_00f6a984;
            goto LAB_00f6aa84;
          }
LAB_00f6aaf0:
          func_0x00a67914(&System_ArgumentException_TypeInfo);
          uVar14 = func_0x00a67b44();
          puVar13 = &Str_The_arrays__lower_bounds_must_be_identic;
        }
        auVar2._8_8_ = uVar12;
        auVar2._0_8_ = lVar28;
        uVar12 = func_0x00a67914(puVar13);
        uVar27 = 0;
        System_ArgumentException___ctor(uVar14,uVar12);
        uVar21 = uVar22;
      }
      else {
LAB_00f6aa00:
        uVar21 = uVar22;
        func_0x00a67914(&System_RankException_TypeInfo);
        uVar14 = func_0x00a67b44();
        uVar12 = func_0x00a67914(&Str_Only_single_dimension_arrays_are_support);
        System_RankException___ctor(uVar14,uVar12);
        auVar2 = auVar30;
      }
    }
    uVar12 = func_0x00a67914(&Method_System_Array_Sort__);
    pcVar29 = System_Array__Sort;
    auVar31 = func_0x00a67a20(uVar14,uVar12);
    auVar30._8_8_ = uVar21;
    auVar30._0_8_ = auVar31._0_8_;
    uVar21 = uVar27 & 0xffffffff;
    uVar9 = auVar31._8_8_ & 0xffffffff;
    uVar26 = 0;
    puVar25 = puVar25 + -0x40;
  } while( true );
}


// ==== public void OJPBPDDLDGB() { }   @0xb56d34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__OJPBPDDLDGB(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam00000000019171ac & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ac = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
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
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Menu.KECGFPHIEHF;
    if (((lVar3 != 0) && (lVar3/*Menu*/.ALPCPBBNEBA != 0)) &&
       (lVar4 = *(long *)(lVar3/*Menu*/.ALPCPBBNEBA + 0x560), lVar4 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (iVar1 == iVar5) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar6 = *(long *)(lVar4 + (long)iVar5 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_00c56ea8;
          if ((*(char *)(lVar6 + 0x70) == '\0') && (*(char *)(lVar6 + 0x68) != '\0')) {
            return;
          }
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = Menu.KECGFPHIEHF;
      }
      if ((lVar3 != 0) && (lVar3/*Menu*/.ONNBLPAKJHK != 0)) {
        *(undefined8 *)(lVar3/*Menu*/.ONNBLPAKJHK + 0x48) = 0;
        return;
      }
    }
  }
LAB_00c56ea8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb56eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019171ae & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_MLCNINCNANA___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_MLCNINCNANA__TypeInfo);
    bRam00000000019171ae = 1;
  }
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_MLCNINCNANA__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_MLCNINCNANA___ctor__);
  this.DJMNPCHPFJO = uVar1;
  *(undefined8 *)((long)__this + 100) = 0x3f8000003f400000;
  this.MMCFKCNGIOM = 0x3f4000003f400000;
  *(undefined8 *)((long)__this + 0x74) = 0x3f8000003f59db23;
  this.ELEMNDGENFO = 0x3f6be76d3f79f55a;
  *(undefined8 *)((long)__this + 0x84) = 0x3f8000003f228f5c;
  this.JKHICCBMIKB = 0x3f30a3d73f39b3d0;
  this.CGLADILALNN = 0x101;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void FNHCGKNKDNJ(Level MGKLJJHHEML) { }   @0xb56f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GamePadController__FNHCGKNKDNJ(void *__this,void *MGKLJJHHEML)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *__this_00;
  undefined8 uVar10;
  long *unaff_x25;
  
  if ((bRam00000000019171af & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_lvl_);
    func_0x00a67900(&Str_SaveLastLvl__);
    bRam00000000019171af = 1;
  }
  if (MGKLJJHHEML == (void *)0x0) {
    if (this.LMGKPMKNHCI != 0) {
      lVar7 = *(long *)(this.LMGKPMKNHCI + 0x10);
      if ((lVar7 == 0) || (lVar7 = UnityEngine_Object__get_name(lVar7,0), lVar7 == 0)) {
LAB_00c57168:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar8 = System_String__Contains(lVar7,_Str_lvl_,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Main.KECGFPHIEHF == 0) ||
           (lVar7 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar7 == 0))
        goto LAB_00c57168;
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar8 = 0;
          uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            __this_00 = *(void **)(lVar7 + 0x20 + uVar8 * 8);
            if (__this_00 != (void *)0x0) {
              pvVar6 = Level__get_gui(__this_00);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              uVar9 = UnityEngine_Object__op_Inequality(pvVar6,0,0);
              if ((uVar9 & 1) != 0) {
                pvVar6 = Level__get_gui(__this_00);
                if (pvVar6 == (void *)0x0) goto LAB_00c57168;
                uVar10 = UnityEngine_Component__get_gameObject(pvVar6,0);
                if (this.LMGKPMKNHCI == 0) goto LAB_00c57168;
                uVar5 = *(undefined8 *)(this.LMGKPMKNHCI + 0x10);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar9 = UnityEngine_Object__op_Equality(uVar10,uVar5,0);
                if ((uVar9 & 1) != 0) {
                  this.HKPINLCABOF = __this_00;
                }
              }
            }
            uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
      }
    }
  }
  else {
    this.HKPINLCABOF = MGKLJJHHEML;
  }
  uVar10 = _Str_SaveLastLvl__;
  plVar4 = this.HKPINLCABOF;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  plVar4 = (long *)System_String__Concat(uVar10,uVar5,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
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
  UnityEngine_Debug__Log(plVar4,0);
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
  if ((Menu.KECGFPHIEHF == 0) || (plVar4 == (long *)0x0)) goto LAB_00c590c8;
  lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
  uVar10 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  if (lVar7 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar10,0,0);
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
  plVar4 = *(long **)(lVar7 + 0x1e8);
  if ((plVar4 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar2 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar2 + 0x10)) {
    if (*(long *)(lVar7 + 0x1e8) == 0) goto LAB_00c16768;
    uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x1e8),0);
    if ((*(long *)(lVar7 + 0x1e8) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x1e8),0), lVar2 == 0))
    goto LAB_00c16768;
    uVar3 = UnityEngine_Transform__get_parent(lVar2,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar2 = UnityEngine_Object__Instantiate_object_
                      (uVar5,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar2 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar7 + 0x1e8) = unaff_x25;
    if (unaff_x25 == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*unaff_x25 + 0x5a8))(unaff_x25,_Str_,*(undefined8 *)(*unaff_x25 + 0x5b0));
  }
  plVar4 = *(long **)(lVar7 + 0x1e8);
  lVar7 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0)), lVar7 != 0))
  {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar7 + 0x20) = uVar5, uVar1 != 1 &&
         (*(undefined8 *)(lVar7 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar7 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar7 + 0x38) = _Str___;
      UnityEngine_Time__get_time(0);
      uVar5 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
      uVar5 = System_String__Format(_Str__0_f2_,uVar5,0);
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar7 + 0x40) = uVar5, uVar1 != 5)) &&
         (*(undefined8 *)(lVar7 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar7 + 0x50) = uVar10;
        uVar10 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x58) = uVar10;
          uVar10 = System_String__Concat(lVar7,0);
          (**(code **)(*plVar4 + 0x5a8))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x5b0));
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



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class Translate : MonoBehaviour // TypeDefIndex: 5203
{
	// Fields
	public static Translate KECGFPHIEHF; // 0x0
	public string PMDALDGOEKK; // 0x20
	public string OBFHPMAPGAM; // 0x28
	public SoundScript CCEPOBMNPFA; // 0x30
	public TextAsset LHIAELGGOEG; // 0x38
	public static Dictionary<string, string> LEAMIBBOEKD; // 0x8
	public Translate.Lang[] JJIFCBOGHHP; // 0x40

	// Methods

	public void OFLAMIIDAPI() { }

	public void IJFFLNNCGHI() { }

	private void Awake() { }

	public void PPPHBJFOJDK(string BKOFCJJMGIM) { }

	public string JJJNIPAKLJF(string FDOOLAIBBPL) { }

	public void NINJNGGDOJC() { }

	private static void .cctor() { }

	public void .ctor() { }

	private void BDEKKODPMCA(string EBBKDPPGDAK) { }

	public string BHBLPFCLNMA(string FDOOLAIBBPL) { }

	public void OGEJCBEMJLE() { }

	public void CCHEMMCPAOO() { }
}
*/

// ==== public string JJJNIPAKLJF(string FDOOLAIBBPL) { }   @0xb31e58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Translate__JJJNIPAKLJF(void *__this,void *FDOOLAIBBPL)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvStack_28;
  
  if ((bRam0000000001917112 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_error);
    bRam0000000001917112 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = Translate.LEAMIBBOEKD;
  if (lVar1 == 0) {
LAB_00c31f48:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                    (lVar1,FDOOLAIBBPL,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  pvVar3 = _Str_error;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = Translate.LEAMIBBOEKD;
    if (lVar1 == 0) goto LAB_00c31f48;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
              (lVar1,FDOOLAIBBPL,&pvStack_28,
               _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    pvVar3 = pvStack_28;
  }
  return pvVar3;
}


// ==== public void OGEJCBEMJLE() { }   @0xb3ad84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__OGEJCBEMJLE(void *__this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uStack_24;
  
  if ((bRam0000000001917118 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AudioClip_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str__4_too_slow);
    func_0x00a67900(&Str__2_that_hurts);
    func_0x00a67900(&Str__7_splatter_bonus);
    func_0x00a67900(&Str__5_sorry_bird);
    func_0x00a67900(&Str__3_wasted);
    func_0x00a67900(&Str__8_extra_style);
    func_0x00a67900(&Str__1_flip);
    func_0x00a67900(&Str__6_great_combo);
    bRam0000000001917118 = 1;
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
    uStack_24 = *(uint *)(lVar5 + 0x94);
    if ((uStack_24 & 0xfffffff7) != 0 && uStack_24 != 7) {
      uStack_24 = 0;
    }
    uVar6 = this.CCEPOBMNPFA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = this.CCEPOBMNPFA;
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = System_Int32__ToString(&uStack_24,0);
    uVar6 = System_String__Concat(uVar6,_Str__1_flip,0);
    plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
    if (lVar5 != 0) {
      if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
        SoundScript__PNPJEJLNGMF
                  (0x3f800000,lVar5,SoundScript.<statics> + 200,plVar4,0);
        lVar5 = this.CCEPOBMNPFA;
        uVar6 = System_Int32__ToString(&uStack_24,0);
        uVar6 = System_String__Concat(uVar6,_Str__2_that_hurts,0);
        plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
        if (lVar5 == 0) goto LAB_00c3b224;
        if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
          SoundScript__PNPJEJLNGMF
                    (0x3f800000,lVar5,SoundScript.<statics> + 0xd0,plVar4,0);
          lVar5 = this.CCEPOBMNPFA;
          uVar6 = System_Int32__ToString(&uStack_24,0);
          uVar6 = System_String__Concat(uVar6,_Str__3_wasted,0);
          plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
          if (lVar5 == 0) goto LAB_00c3b224;
          if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
            SoundScript__PNPJEJLNGMF
                      (0x3f800000,lVar5,SoundScript.<statics> + 0xd8,plVar4,0);
            lVar5 = this.CCEPOBMNPFA;
            uVar6 = System_Int32__ToString(&uStack_24,0);
            uVar6 = System_String__Concat(uVar6,_Str__4_too_slow,0);
            plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
            if (lVar5 == 0) goto LAB_00c3b224;
            if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
              SoundScript__PNPJEJLNGMF
                        (0x3f800000,lVar5,SoundScript.<statics> + 0xe0,plVar4,0);
              lVar5 = this.CCEPOBMNPFA;
              uVar6 = System_Int32__ToString(&uStack_24,0);
              uVar6 = System_String__Concat(uVar6,_Str__5_sorry_bird,0);
              plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
              if (lVar5 == 0) goto LAB_00c3b224;
              if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                SoundScript__PNPJEJLNGMF
                          (0x3f800000,lVar5,SoundScript.<statics> + 0xe8,plVar4,0)
                ;
                lVar5 = this.CCEPOBMNPFA;
                uVar6 = System_Int32__ToString(&uStack_24,0);
                uVar6 = System_String__Concat(uVar6,_Str__6_great_combo,0);
                plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                if (lVar5 == 0) goto LAB_00c3b224;
                if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                  SoundScript__PNPJEJLNGMF
                            (0x3f800000,lVar5,SoundScript.<statics> + 0xf0,plVar4,
                             0);
                  lVar5 = this.CCEPOBMNPFA;
                  uVar6 = System_Int32__ToString(&uStack_24,0);
                  uVar6 = System_String__Concat(uVar6,_Str__7_splatter_bonus,0);
                  plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                  if (lVar5 == 0) goto LAB_00c3b224;
                  if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                    SoundScript__PNPJEJLNGMF
                              (0x3f800000,lVar5,SoundScript.<statics> + 0xf8,
                               plVar4,0);
                    lVar5 = this.CCEPOBMNPFA;
                    uVar6 = System_Int32__ToString(&uStack_24,0);
                    uVar6 = System_String__Concat(uVar6,_Str__8_extra_style,0);
                    plVar4 = (long *)UnityEngine_Resources__Load(uVar6,0);
                    if (lVar5 == 0) goto LAB_00c3b224;
                    if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AudioClip_TypeInfo)) {
                      SoundScript__PNPJEJLNGMF
                                (0x3f800000,lVar5,SoundScript.<statics> + 0x100,
                                 plVar4,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      func_0x00a67eec(plVar4);
      if ((bRam0000000001917107 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Physics_TypeInfo);
        func_0x00a67900(&Str_zombie_parts);
        func_0x00a67900(&Str_zombie);
        func_0x00a67900(&Str_dynamic_obstacle);
        func_0x00a67900(&Str_dyn_obst_nofire);
        bRam0000000001917107 = 1;
      }
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie,0);
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
      }
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
      UnityEngine_Physics__IgnoreLayerCollision(uVar1,uVar2,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_dyn_obst_nofire,0);
      if ((bRam000000000191d3e8 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Physics_TypeInfo,uVar2,0);
        bRam000000000191d3e8 = 1;
      }
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (pcRam000000000191d3e0 == (code *)0x0) {
        pcRam000000000191d3e0 = (code *)func_0x00a678c4(&UNK_005b98a7);
      }
                    /* WARNING: Could not recover jumptable at 0x014cb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d3e0)(uVar1,uVar2,1);
      return;
    }
  }
LAB_00c3b224:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OFLAMIIDAPI() { }   @0xb3d474

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__OFLAMIIDAPI(void *__this)

{
  return;
}


// ==== public void IJFFLNNCGHI() { }   @0xb3d478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__IJFFLNNCGHI(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000191710f & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191710f = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
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
    lVar3 = Menu.KECGFPHIEHF;
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x8f0), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x18) < 2) {
        return;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = Menu.KECGFPHIEHF;
        if (lVar3 == 0) goto LAB_00c3d6f4;
      }
      if ((*(long *)(lVar3 + 0x20) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x8f0), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_00c3d6f8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        uVar5 = *(undefined8 *)(lVar3 + 0x28);
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
        if (((Menu.KECGFPHIEHF != 0) &&
            (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) &&
           (lVar3 = *(long *)(lVar3 + 0x8f0), lVar3 != 0)) {
          if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_00c3d6f8;
          if (*(long *)(lVar3 + 0x28) != 0) {
            uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar3 + 0x28),0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF != 0) &&
               (lVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar3 != 0)) {
              lVar3 = *(long *)(lVar3 + 0x8e8);
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
              if ((lVar4 != 0) && (lVar3 != 0)) {
                iVar1 = *(int *)(lVar4 + 0x94);
                if (pcRam000000000191c3f8 == (code *)0x0) {
                  pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
                }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam000000000191c3f8)(lVar3,iVar1 == 7);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00c3d6f4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb3d6fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__Awake(void *__this)

{
  if ((bRam0000000001917110 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917110 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Translate.KECGFPHIEHF = __this;
  return;
}


// ==== public void PPPHBJFOJDK(string BKOFCJJMGIM) { }   @0xb3d758

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__PPPHBJFOJDK(void *__this,void *BKOFCJJMGIM)

{
  long lVar1;
  undefined8 uVar2;
  void *__this_00;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((bRam0000000001917111 & 1) == 0) {
    func_0x00a67900(&DLOFHJEMLJG_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917111 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = Translate.LEAMIBBOEKD;
  if ((lVar1 != 0) &&
     (System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                (lVar1,_Method_System_Collections_Generic_Dictionary_string__string__Clear__),
     BKOFCJJMGIM != (void *)0x0)) {
    uVar2 = System_String__ToLower(BKOFCJJMGIM,0);
    __this_00 = (void *)func_0x00a67b44(_DLOFHJEMLJG_TypeInfo);
    DLOFHJEMLJG___ctor(__this_00,uVar2,0);
    if ((__this_00 != (void *)0x0) &&
       (pvVar3 = DLOFHJEMLJG__AOJEFKDJBNK(__this_00,BKOFCJJMGIM), pvVar3 != (void *)0x0)) {
      if (0 < (int)*(ulong *)((long)pvVar3 + 0x18)) {
        uVar6 = 0;
        uVar5 = *(ulong *)((long)pvVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          uVar2 = *(undefined8 *)((long)pvVar3 + uVar6 * 8 + 0x20);
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar1 = Translate.LEAMIBBOEKD;
          uVar4 = System_String__ToUpper(BKOFCJJMGIM,0);
          uVar4 = DLOFHJEMLJG__KGCOIHNNBDJ(__this_00,uVar4,uVar2,0);
          if (lVar1 == 0) goto LAB_00c3d8e8;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                    (lVar1,uVar2,uVar4,
                     _Method_System_Collections_Generic_Dictionary_string__string__Add__);
          uVar5 = (ulong)*(uint *)((long)pvVar3 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)((long)pvVar3 + 0x18));
      }
      return;
    }
  }
LAB_00c3d8e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void NINJNGGDOJC() { }   @0xb3d8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__NINJNGGDOJC(void *__this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001917113 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917113 = 1;
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
  if ((lVar8 != 0) && (this.JJIFCBOGHHP != 0)) {
    iVar7 = *(int *)(lVar8 + 0x94);
    iVar1 = this.JJIFCBOGHHP.Length;
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
      if (iVar7 < iVar1 + -1) {
        iVar7 = *(int *)(lVar8 + 0x94) + 1;
      }
      else {
        iVar7 = 0;
      }
      DAFNMLEKHAD__DGAGHJIDJEM(lVar8,iVar7,0);
      lVar8 = this.JJIFCBOGHHP;
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
      if ((lVar9 != 0) && (lVar8 != 0)) {
        uVar2 = lVar9/*DAFNMLEKHAD*/.KLKNEAIFCKG;
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar8 = *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        if (lVar8 != 0) {
          Translate__PPPHBJFOJDK(_Main_TypeInfo,*(undefined8 *)(lVar8 + 0x10));
          Translate__BDEKKODPMCA(__this);
          if ((bRam0000000001917118 & 1) == 0) {
            func_0x00a67900(&UnityEngine_AudioClip_TypeInfo);
            func_0x00a67900(&Main_TypeInfo);
            func_0x00a67900(&UnityEngine_Object_TypeInfo);
            func_0x00a67900(&SoundScript_TypeInfo);
            func_0x00a67900(&Str__4_too_slow);
            func_0x00a67900(&Str__2_that_hurts);
            func_0x00a67900(&Str__7_splatter_bonus);
            func_0x00a67900(&Str__5_sorry_bird);
            func_0x00a67900(&Str__3_wasted);
            func_0x00a67900(&Str__8_extra_style);
            func_0x00a67900(&Str__1_flip);
            func_0x00a67900(&Str__6_great_combo);
            bRam0000000001917118 = 1;
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
            uVar10 = this.CCEPOBMNPFA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lVar8 = this.CCEPOBMNPFA;
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
            uVar10 = System_String__Concat(uVar10,_Str__1_flip,0);
            plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
            if (lVar8 != 0) {
              if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                SoundScript__PNPJEJLNGMF
                          (0x3f800000,lVar8,SoundScript.<statics> + 200,plVar6,0);
                lVar8 = this.CCEPOBMNPFA;
                uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                uVar10 = System_String__Concat(uVar10,_Str__2_that_hurts,0);
                plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                if (lVar8 == 0) goto LAB_00c3b224;
                if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                  SoundScript__PNPJEJLNGMF
                            (0x3f800000,lVar8,SoundScript.<statics> + 0xd0,plVar6,
                             0);
                  lVar8 = this.CCEPOBMNPFA;
                  uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                  uVar10 = System_String__Concat(uVar10,_Str__3_wasted,0);
                  plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                  if (lVar8 == 0) goto LAB_00c3b224;
                  if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                    SoundScript__PNPJEJLNGMF
                              (0x3f800000,lVar8,SoundScript.<statics> + 0xd8,
                               plVar6,0);
                    lVar8 = this.CCEPOBMNPFA;
                    uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                    uVar10 = System_String__Concat(uVar10,_Str__4_too_slow,0);
                    plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                    if (lVar8 == 0) goto LAB_00c3b224;
                    if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                      SoundScript__PNPJEJLNGMF
                                (0x3f800000,lVar8,SoundScript.<statics> + 0xe0,
                                 plVar6,0);
                      lVar8 = this.CCEPOBMNPFA;
                      uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                      uVar10 = System_String__Concat(uVar10,_Str__5_sorry_bird,0);
                      plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                      if (lVar8 == 0) goto LAB_00c3b224;
                      if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                        SoundScript__PNPJEJLNGMF
                                  (0x3f800000,lVar8,SoundScript.<statics> + 0xe8,
                                   plVar6,0);
                        lVar8 = this.CCEPOBMNPFA;
                        uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                        uVar10 = System_String__Concat(uVar10,_Str__6_great_combo,0);
                        plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                        if (lVar8 == 0) goto LAB_00c3b224;
                        if ((plVar6 == (long *)0x0) || (*plVar6 == _UnityEngine_AudioClip_TypeInfo))
                        {
                          SoundScript__PNPJEJLNGMF
                                    (0x3f800000,lVar8,SoundScript.<statics> + 0xf0
                                     ,plVar6,0);
                          lVar8 = this.CCEPOBMNPFA;
                          uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                          uVar10 = System_String__Concat(uVar10,_Str__7_splatter_bonus,0);
                          plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                          if (lVar8 == 0) goto LAB_00c3b224;
                          if ((plVar6 == (long *)0x0) ||
                             (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                            SoundScript__PNPJEJLNGMF
                                      (0x3f800000,lVar8,
                                       SoundScript.<statics> + 0xf8,plVar6,0);
                            lVar8 = this.CCEPOBMNPFA;
                            uVar10 = System_Int32__ToString(&stack0xffffffffffffffdc,0);
                            uVar10 = System_String__Concat(uVar10,_Str__8_extra_style,0);
                            plVar6 = (long *)UnityEngine_Resources__Load(uVar10,0);
                            if (lVar8 == 0) goto LAB_00c3b224;
                            if ((plVar6 == (long *)0x0) ||
                               (*plVar6 == _UnityEngine_AudioClip_TypeInfo)) {
                              SoundScript__PNPJEJLNGMF
                                        (0x3f800000,lVar8,
                                         SoundScript.<statics> + 0x100,plVar6,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              func_0x00a67eec(plVar6);
              if ((bRam0000000001917107 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Physics_TypeInfo);
                func_0x00a67900(&Str_zombie_parts);
                func_0x00a67900(&Str_zombie);
                func_0x00a67900(&Str_dynamic_obstacle);
                func_0x00a67900(&Str_dyn_obst_nofire);
                bRam0000000001917107 = 1;
              }
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_zombie,0);
              if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
              }
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_dynamic_obstacle,0);
              UnityEngine_Physics__IgnoreLayerCollision(uVar3,uVar4,0);
              uVar3 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
              uVar4 = UnityEngine_LayerMask__NameToLayer(_Str_dyn_obst_nofire,0);
              if ((bRam000000000191d3e8 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Physics_TypeInfo,uVar4,0);
                bRam000000000191d3e8 = 1;
              }
              if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (pcRam000000000191d3e0 == (code *)0x0) {
                pcRam000000000191d3e0 = (code *)func_0x00a678c4(&UNK_005b98a7);
              }
                    /* WARNING: Could not recover jumptable at 0x014cb9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191d3e0)(uVar3,uVar4,1);
              return;
            }
          }
LAB_00c3b224:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void BDEKKODPMCA(string EBBKDPPGDAK) { }   @0xb3da90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__BDEKKODPMCA(void *__this,void *EBBKDPPGDAK)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = EBBKDPPGDAK;
  auVar2._0_8_ = __this;
  if ((bRam0000000001917116 & 1) == 0) {
    func_0x00a67900(&Str_HOUR_SHORT);
    auVar2 = func_0x00a67900(&Str_DAY_SHORT);
    bRam0000000001917116 = 1;
  }
  uVar1 = Translate__IJFFLNNCGHI(auVar2._0_8_,auVar2._8_8_);
  uVar1 = Translate__JJJNIPAKLJF(uVar1,_Str_DAY_SHORT);
  this.PMDALDGOEKK = uVar1;
  uVar1 = Translate__JJJNIPAKLJF(uVar1,_Str_HOUR_SHORT);
  this.OBFHPMAPGAM = uVar1;
  return;
}


// ==== private static void .cctor() { }   @0xb3db08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917114 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    func_0x00a67900(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001917114 = 1;
  }
  uVar1 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  Translate.LEAMIBBOEKD = uVar1;
  return;
}


// ==== public void .ctor() { }   @0xb3db94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917115 & 1) == 0) {
    func_0x00a67900(&Str_h);
    func_0x00a67900(&Str_d);
    bRam0000000001917115 = 1;
  }
  uVar1 = _Str_h;
  this.PMDALDGOEKK = _Str_d;
  this.OBFHPMAPGAM = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public string BHBLPFCLNMA(string FDOOLAIBBPL) { }   @0xb3dc04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Translate__BHBLPFCLNMA(void *__this,void *FDOOLAIBBPL)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lStack_28;
  
  if ((bRam0000000001917117 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_error);
    bRam0000000001917117 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = Translate.LEAMIBBOEKD;
  if (lVar1 != 0) {
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey
                      (lVar1,FDOOLAIBBPL,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    if ((uVar2 & 1) == 0) {
      return _Str_error;
    }
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar1 = Translate.LEAMIBBOEKD;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item
                (lVar1,FDOOLAIBBPL,&lStack_28,
                 _Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      uVar3 = System_Environment__get_NewLine(0);
      if (lStack_28 != 0) {
        pvVar4 = (void *)System_String__Replace(lStack_28,_Str__,uVar3,0);
        return pvVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void CCHEMMCPAOO() { }   @0xb3dd2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Translate__CCHEMMCPAOO(void *__this)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((bRam0000000001917119 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_SystemLanguage_TypeInfo);
    func_0x00a67900(&Str_Language__);
    bRam0000000001917119 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_48 = UnityEngine_Application__get_systemLanguage(0);
  uStack_58 = _UnityEngine_SystemLanguage_TypeInfo;
  uStack_50 = 0xffffffffffffffff;
  uVar2 = System_Enum__ToString(&uStack_58,0);
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
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar4 + 0x94) < 0) {
    lVar4 = this.JJIFCBOGHHP;
    if (lVar4 != 0) {
      uVar6 = 0;
      do {
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)uVar6) goto LAB_00c3dedc;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_00c3e0a0;
        lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
        if (lVar4 == 0) break;
        uVar3 = System_String__op_Equality(*(undefined8 *)(lVar4 + 0x10),uVar2,0);
        if ((uVar3 & 1) != 0) {
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
          if (lVar4 == 0) break;
          DAFNMLEKHAD__DGAGHJIDJEM(lVar4,uVar6 & 0xffffffff,0);
        }
        lVar4 = this.JJIFCBOGHHP;
        uVar6 = uVar6 + 1;
      } while (lVar4 != 0);
    }
    goto LAB_00c3ded4;
  }
LAB_00c3dedc:
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
  if (lVar4 == 0) goto LAB_00c3ded4;
  if (*(int *)(lVar4 + 0x94) < 0) {
LAB_00c3df8c:
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
    if (lVar4 == 0) goto LAB_00c3ded4;
    DAFNMLEKHAD__DGAGHJIDJEM(lVar4,0,0);
    lVar5 = this.JJIFCBOGHHP;
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
    if ((lVar4 == 0) || (lVar5 = this.JJIFCBOGHHP, lVar5 == 0)) goto LAB_00c3ded4;
    if (*(int *)(lVar5 + 0x18) <= *(int *)(lVar4 + 0x94)) goto LAB_00c3df8c;
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
  if ((lVar4 != 0) && (lVar5 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x94);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_00c3e0a0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar4 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x10);
      Translate__PPPHBJFOJDK(_Main_TypeInfo,uVar2);
      Translate__BDEKKODPMCA(__this);
      uVar2 = System_String__Concat(_Str_Language__,uVar2,0);
      Main__GEMDEAMAGPG(uVar2,0,0);
      return;
    }
  }
LAB_00c3ded4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



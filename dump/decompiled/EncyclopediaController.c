/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class EncyclopediaController : MonoBehaviour // TypeDefIndex: 5170
{
	// Fields
	public GameObject GBLDHHLDLAC; // 0x20
	public Transform NIKODPNBBNC; // 0x28
	public Text CAOBCAHKPAP; // 0x30
	public Image HEGBLDJJONJ; // 0x38
	public Text ADFMGNIDOFE; // 0x40
	public Text BMIGFIJBELD; // 0x48
	public Sprite FCLDIHJBMIM; // 0x50
	public RectTransform AAPPKNEOJLJ; // 0x58
	public Text OECKPMNIMBL; // 0x60
	public GameObject OCLLOMGGNND; // 0x68
	public Text PCFJHDGGFJP; // 0x70

	// Methods

	public void .ctor() { }

	private void OnEnable() { }

	public void FHBDLLGMOFN() { }

	private void HPAFDOMPACP() { }
}
*/

// ==== public void .ctor() { }   @0xb19798

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController___ctor(void *__this)

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


// ==== private void OnEnable() { }   @0xb197a0

/* WARNING: Removing unreachable block (ram,0x00c19f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController__OnEnable(void *__this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000001916fdb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIEncyclopediaItem___);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&UnityEngine_Transform_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str___color__);
    func_0x00a67900(&Str__color__78e938_);
    bRam0000000001916fdb = 1;
  }
  uStack_70 = 0;
  if (this.NIKODPNBBNC != 0) {
    plVar2 = (long *)UnityEngine_Transform__GetEnumerator(this.NIKODPNBBNC,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    do {
      lVar9 = *plVar2;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_00c198e0;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00c198e0:
      uVar13 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar13 & 1) == 0) {
        plVar2 = (long *)func_0x00a67a34(plVar2,_System_IDisposable_TypeInfo);
        if (plVar2 == (long *)0x0) goto LAB_00c19a18;
        lVar9 = *plVar2;
        uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar13 == 0) goto LAB_00c199f0;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_00c199d8;
      }
      lVar9 = *plVar2;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == _System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar9 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_00c19940;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00c19940:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) goto LAB_00c19f70;
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(_UnityEngine_Transform_TypeInfo + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo + 0x130) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo)) {
        func_0x00a67eec();
LAB_00c19f70:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar5 = UnityEngine_Component__get_gameObject(plVar4,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      UnityEngine_Object__Destroy(uVar5,0);
    } while( true );
  }
  goto LAB_00c19f64;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_00c199d8:
    if (*(long *)(piVar15 + -2) == _System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_00c19a0c;
    }
  }
LAB_00c199f0:
  puVar3 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00c19a0c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00c19a18:
  EncyclopediaController__HPAFDOMPACP(__this);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Main.KECGFPHIEHF != 0) {
    lVar9 = Main.KECGFPHIEHF.NNMCBNGFPHF;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (lVar9 != 0) {
      uVar12 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar12) {
        uVar8 = 0;
        do {
          if (uVar12 <= uVar8) goto LAB_00c19f68;
          iVar1 = *(int *)(lVar9 + (long)(int)uVar8 * 4 + 0x20);
          uVar12 = 0;
          lVar6 = _Main_TypeInfo;
          while( true ) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              func_0x00a67a30();
              lVar6 = _Main_TypeInfo;
            }
            if ((**(long **)(lVar6 + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x48), lVar10 == 0))
            goto LAB_00c19f64;
            if (*(int *)(lVar10 + 0x18) <= (int)uVar12) goto LAB_00c19df8;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              func_0x00a67a30();
              lVar6 = _Main_TypeInfo;
            }
            if ((**(long **)(lVar6 + 0xb8) == 0) ||
               (lVar10 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x48), lVar10 == 0))
            goto LAB_00c19f64;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_00c19f68;
            lVar17 = (long)(int)uVar12;
            lVar10 = *(long *)(lVar10 + lVar17 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_00c19f64;
            if (iVar1 == *(int *)(lVar10 + 0x10)) break;
            uVar12 = uVar12 + 1;
          }
          uVar5 = this.GBLDHHLDLAC;
          uVar7 = this.NIKODPNBBNC;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar6 = UnityEngine_Object__Instantiate_object_
                            (uVar5,uVar7,_Method_UnityEngine_Object_Instantiate_GameObject___);
          if (lVar6 == 0) goto LAB_00c19f64;
          UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                    (lVar6,&lStack_68,
                     _Method_UnityEngine_GameObject_GetComponent_GUIEncyclopediaItem___);
          lVar6 = lStack_68;
          uVar13 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar10 = _Main_TypeInfo;
            lVar11 = Main.KECGFPHIEHF;
            if ((lVar11 == 0) || (lVar14 = lVar11/*Main*/.NGBIFHJDNEC, lVar14 == 0))
            goto LAB_00c19f64;
            if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_00c19f68;
            lVar14 = *(long *)(lVar14 + lVar17 * 8 + 0x20);
            if ((lVar14 == 0) || (lVar6 == 0)) goto LAB_00c19f64;
            lVar16 = *(long *)(lVar6 + 0x28);
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x3c) < 1) {
              if (lVar16 == 0) goto LAB_00c19f64;
              UnityEngine_UI_Image__set_sprite(lVar16,this.FCLDIHJBMIM,0);
            }
            else {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                func_0x00a67a30();
                lVar11 = Main.KECGFPHIEHF;
                if (lVar11 == 0) goto LAB_00c19f64;
              }
              lVar10 = lVar11/*Main*/.NGBIFHJDNEC;
              if (lVar10 == 0) goto LAB_00c19f64;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_00c19f68:
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar10 = *(long *)(lVar10 + lVar17 * 8 + 0x20);
              if ((lVar10 == 0) || (lVar16 == 0)) goto LAB_00c19f64;
              UnityEngine_UI_Image__set_sprite(lVar16,*(undefined8 *)(lVar10 + 0x30),0);
              if ((Main.KECGFPHIEHF == 0) ||
                 (lVar10 = Main.KECGFPHIEHF.NGBIFHJDNEC, lVar10 == 0))
              goto LAB_00c19f64;
              if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_00c19f68;
              lVar10 = *(long *)(lVar10 + lVar17 * 8 + 0x20);
              if ((lVar10 == 0) || (*(long *)(lVar6 + 0x30) == 0)) goto LAB_00c19f64;
              UnityEngine_GameObject__SetActive
                        (*(long *)(lVar6 + 0x30),*(int *)(lVar10 + 0x3c) == 1,0);
            }
            if (uVar12 == 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar13 = Main__KCHOEBEIOCE(0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar10 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar10 == 0))
                goto LAB_00c19f64;
                if (*(char *)(lVar10 + 0x30) != '\0') {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = Menu.KECGFPHIEHF;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                  }
                  uVar13 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                  if ((uVar13 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (Menu.KECGFPHIEHF == 0) goto LAB_00c19f64;
                    uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar13 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                    if ((uVar13 & 1) != 0) {
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if ((Menu.KECGFPHIEHF == 0) ||
                         (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar10 == 0
                         )) goto LAB_00c19f64;
                      uVar5 = *(undefined8 *)(lVar10 + 0x180);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar13 = UnityEngine_Object__op_Inequality(uVar5,0,0);
                      if ((uVar13 & 1) != 0) {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if (((Menu.KECGFPHIEHF == 0) ||
                            (lVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA,
                            lVar10 == 0)) || (*(long *)(lVar6 + 0x28) == 0)) goto LAB_00c19f64;
                        lVar10 = *(long *)(lVar10 + 0x180);
                        uVar5 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x28),0);
                        if (lVar10 == 0) goto LAB_00c19f64;
                        *(undefined8 *)(lVar10 + 0x30) = uVar5;
                      }
                    }
                  }
                }
              }
              GUIEncyclopediaItem__ButtonShowItem(lVar6,0,0);
            }
          }
LAB_00c19df8:
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          uVar12 = *(uint *)(lVar9 + 0x18);
        } while ((int)uVar8 < (int)uVar12);
      }
      iVar1 = Encyclopedia__DFJMLAIHNDC(1,0);
      uStack_70 = CONCAT44(iVar1,(int)uStack_70);
      plVar2 = this.OECKPMNIMBL;
      uVar5 = System_Int32__ToString((long)&uStack_70 + 4,0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      if ((Main.KECGFPHIEHF != 0) &&
         (lVar9 = Main.KECGFPHIEHF.NGBIFHJDNEC, lVar9 != 0)) {
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)*(undefined8 *)(lVar9 + 0x18));
        uVar7 = System_Int32__ToString(&uStack_70,0);
        if (iVar1 < 1) {
          uVar5 = System_String__Concat(uVar5,_Str__,uVar7,0);
        }
        else {
          uVar5 = System_String__Concat(_Str__color__78e938_,uVar5,_Str___color__,uVar7,0);
        }
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0x5b0));
          iVar1 = uStack_70._4_4_;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Main.KECGFPHIEHF != 0) &&
              (lVar9 = Main.KECGFPHIEHF.NGBIFHJDNEC, lVar9 != 0)) &&
             (this.AAPPKNEOJLJ != 0)) {
            UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                      (((float)iVar1 / (float)*(int *)(lVar9 + 0x18)) * 232.0,
                       this.AAPPKNEOJLJ,0,0);
            return;
          }
        }
      }
    }
  }
LAB_00c19f64:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void HPAFDOMPACP() { }   @0xb1a03c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController__HPAFDOMPACP(void *__this)

{
  long lStack_18;
  
  if ((bRam0000000001916fdc & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916fdc = 1;
  }
  if (this.NIKODPNBBNC != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (this.NIKODPNBBNC,&lStack_18,
               _Method_UnityEngine_Component_GetComponent_RectTransform___);
    if (lStack_18 != 0) {
      UnityEngine_RectTransform__set_anchoredPosition(0,0,lStack_18,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FHBDLLGMOFN() { }   @0xb1a0ac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EncyclopediaController__FHBDLLGMOFN(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iStack_14;
  
  iStack_14 = Encyclopedia__DFJMLAIHNDC(0,0);
  if (iStack_14 < 1) {
    lVar2 = this.OCLLOMGGNND;
    if (lVar2 != 0) {
      uVar1 = 0;
LAB_00c1a118:
      UnityEngine_GameObject__SetActive(lVar2,uVar1,0);
      return;
    }
  }
  else {
    plVar3 = this.PCFJHDGGFJP;
    uVar1 = System_Int32__ToString(&iStack_14,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5a8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5b0));
      lVar2 = this.OCLLOMGGNND;
      if (lVar2 != 0) {
        uVar1 = 1;
        goto LAB_00c1a118;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



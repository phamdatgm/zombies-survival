/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class BackgroundController : MonoBehaviour // TypeDefIndex: 5275
{
	// Fields
	public BGObject[] IANCFCGAIDD; // 0x20
	public GFXDisabler[] GEAOJKJMEDB; // 0x28
	private int FAFINMGJJIM; // 0x30
	public GameObject LEPENIBNBPF; // 0x38
	public Texture2D[] LBLMPOOOFNI; // 0x40
	public GameObject NMJHAFFHHHP; // 0x48
	public GameObject LOAFEEFNCBP; // 0x50
	private GameObject CHEAAFHJIMI; // 0x58
	private GameObject NAEFMFLPAND; // 0x60

	// Methods

	public void .ctor() { }

	public void HAMLCJJANAJ() { }

	private void PGPEFBNBHHM(GameObject MIPKEALMBHI) { }

	private void Awake() { }

	public void DIMGJKDADNE() { }

	public void NNDOCLOMBPN() { }

	public void MLIIENHGIGK() { }
}
*/

// ==== public void .ctor() { }   @0xb57874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController___ctor(void *__this)

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


// ==== public void HAMLCJJANAJ() { }   @0xb5787c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__HAMLCJJANAJ(void *__this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam00000000019171b8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b8 = 1;
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
    lVar4 = this.GEAOJKJMEDB;
    if (lVar4 == 0) {
LAB_00c57a00:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (0 < (int)lVar4.Length) {
      uVar5 = 0;
      uVar1 = lVar4.Length & 0xffffffff;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar3 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((uVar1 & 1) != 0) {
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
          if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_00c57a00;
          GFXDisabler__DHEEBAEOLGF(lVar3,0 < lVar2/*DAFNMLEKHAD*/.CFDECDNFGJN,0);
        }
        uVar1 = (ulong)lVar4.Length;
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)lVar4.Length);
    }
  }
  return;
}


// ==== private void PGPEFBNBHHM(GameObject MIPKEALMBHI) { }   @0xb57a04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__PGPEFBNBHHM(void *__this,void *MIPKEALMBHI)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  void *__this_00;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  undefined8 in_d1;
  undefined8 uVar14;
  ulong in_d2;
  undefined8 in_d3;
  long lStack_28;
  
  if ((bRam00000000019171b9 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GFXDisabler___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171b9 = 1;
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
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(MIPKEALMBHI,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (MIPKEALMBHI == (void *)0x0) {
LAB_00c57b78:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (MIPKEALMBHI,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_GFXDisabler___);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lStack_28,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar11 = this.GEAOJKJMEDB;
    if (plVar11 == (long *)0x0) goto LAB_00c57b78;
    uVar13 = this.FAFINMGJJIM;
    uVar1 = *(uint *)(plVar11 + 3);
    if ((int)uVar1 <= (int)uVar13) {
      return;
    }
    if (lStack_28 != 0) {
      lVar4 = func_0x00a67a34(lStack_28,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar4 == 0) {
        uVar5 = func_0x00a67b74();
        __this_00 = (void *)func_0x00a67a20(uVar5,0);
        if ((bRam00000000019171ba & 1) == 0) {
          func_0x00a67900(&GFXDisabler___TypeInfo);
          func_0x00a67900(&UnityEngine_LightmapData___TypeInfo);
          func_0x00a67900(&UnityEngine_LightmapData_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam00000000019171ba = 1;
        }
        if (*(long *)((long)__this_00 + 0x20) == 0) goto LAB_00c57f08;
        uVar5 = func_0x00a679a0(_GFXDisabler___TypeInfo,
                                *(int *)(*(long *)((long)__this_00 + 0x20) + 0x18) + 1);
        *(undefined8 *)((long)__this_00 + 0x28) = uVar5;
        if (((*(long *)((long)__this_00 + 0x40) != 0) &&
            (*(long *)(*(long *)((long)__this_00 + 0x40) + 0x18) != 0)) &&
           (lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0), lVar4 != 0)) {
          lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0);
          if (lVar4 == 0) goto LAB_00c57f08;
          if (*(long *)(lVar4 + 0x18) == 0) {
            if (*(long *)((long)__this_00 + 0x40) != 0) {
              lVar4 = func_0x00a679a0(_UnityEngine_LightmapData___TypeInfo,
                                      *(undefined4 *)(*(long *)((long)__this_00 + 0x40) + 0x18));
              lVar8 = *(long *)((long)__this_00 + 0x40);
              if (lVar8 != 0) {
                lVar12 = 4;
                while( true ) {
                  uVar3 = lVar12 - 4;
                  if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar3) {
                    UnityEngine_LightmapSettings__set_lightmaps(lVar4,0);
                    goto LAB_00c57d14;
                  }
                  lVar8 = func_0x00a67b44(_UnityEngine_LightmapData_TypeInfo);
                  UnityEngine_LightmapData___ctor(lVar8,0);
                  lVar9 = *(long *)((long)__this_00 + 0x40);
                  if (lVar9 == 0) break;
                  if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_00c57f0c;
                  if ((lVar8 == 0) ||
                     (UnityEngine_LightmapData__set_lightmapColor
                                (lVar8,*(undefined8 *)(lVar9 + lVar12 * 8),0), lVar4 == 0)) break;
                  if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_00c57f0c;
                  *(long *)(lVar4 + lVar12 * 8) = lVar8;
                  lVar8 = *(long *)((long)__this_00 + 0x40);
                  lVar12 = lVar12 + 1;
                  if (lVar8 == 0) break;
                }
              }
            }
            goto LAB_00c57f08;
          }
        }
LAB_00c57d14:
        lVar4 = *(long *)((long)__this_00 + 0x20);
        if (lVar4 == 0) {
LAB_00c57f08:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            if (uVar1 <= uVar13) {
LAB_00c57f0c:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar8 = *(long *)(lVar4 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_00c57f08;
            uVar10 = *(undefined8 *)(lVar8 + 0x10);
            uVar3 = in_d2;
            uVar5 = in_d3;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              uVar3 = in_d2;
              uVar5 = in_d3;
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            in_d2 = uVar3;
            in_d3 = uVar5;
            if ((uVar6 & 1) != 0) {
              lVar12 = *(long *)(lVar8 + 0x10);
              if (*(float *)(lVar8 + 0x18) == 0.0) {
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                  in_d2 = uVar3;
                  in_d3 = uVar5;
                }
                pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                           (lVar12,
                                            _Method_UnityEngine_Object_Instantiate_GameObject___);
              }
              else {
                if ((lVar12 == 0) ||
                   (lVar9 = UnityEngine_GameObject__get_transform(lVar12,0), lVar9 == 0))
                goto LAB_00c57f08;
                uVar10 = UnityEngine_Transform__get_position(lVar9,0);
                if ((*(long *)(lVar8 + 0x10) == 0) ||
                   (lVar9 = UnityEngine_GameObject__get_transform(*(long *)(lVar8 + 0x10),0),
                   lVar9 == 0)) goto LAB_00c57f08;
                UnityEngine_Transform__get_position(lVar9,0);
                if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c57f08;
                in_d2 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar14 = in_d1;
                lVar8 = UnityEngine_GameObject__get_transform(*(long *)(lVar8 + 0x10),0);
                if (lVar8 == 0) goto LAB_00c57f08;
                in_d3 = UnityEngine_Transform__get_rotation(lVar8,0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                           (uVar10,in_d1,in_d2,in_d3,uVar14,uVar3,uVar5,lVar12,
                                            _Method_UnityEngine_Object_Instantiate_GameObject___);
              }
              BackgroundController__PGPEFBNBHHM(__this_00,pvVar7);
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar1);
        }
        uVar5 = *(undefined8 *)((long)__this_00 + 0x38);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = *(undefined8 *)((long)__this_00 + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          pvVar7 = (void *)UnityEngine_Object__Instantiate_object_
                                     (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
          BackgroundController__PGPEFBNBHHM(__this_00,pvVar7);
        }
        BackgroundController__MLIIENHGIGK(__this_00);
        BackgroundController__NNDOCLOMBPN();
        BackgroundController__HAMLCJJANAJ(__this_00);
        if ((bRam00000000019171bb & 1) == 0) {
          func_0x00a67900(&Main_TypeInfo);
          func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam00000000019171bb = 1;
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
          uVar5 = *(undefined8 *)((long)__this_00 + 0x50);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
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
            if (lVar4 == 0) {
LAB_00c582e4:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            iVar2 = *(int *)(lVar4 + 0x90);
            uVar5 = *(undefined8 *)((long)__this_00 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
            if ((uVar3 & 1) == 0) {
              if (*(long *)((long)__this_00 + 0x58) == 0) goto LAB_00c582e4;
              uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this_00 + 0x58),0);
              if (iVar2 < 1) {
                if ((uVar3 & 1) != 0) {
                  lVar4 = *(long *)((long)__this_00 + 0x58);
                  if (lVar4 != 0) {
                    uVar5 = 0;
                    goto LAB_00c582c0;
                  }
                  goto LAB_00c582e4;
                }
              }
              else if ((uVar3 & 1) == 0) {
                lVar4 = *(long *)((long)__this_00 + 0x58);
                if (lVar4 != 0) {
                  uVar5 = 1;
LAB_00c582c0:
                  if (pcRam000000000191c3f8 == (code *)0x0) {
                    pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
                  }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191c3f8)(lVar4,uVar5);
                  return;
                }
                goto LAB_00c582e4;
              }
            }
            else if (0 < iVar2) {
              uVar5 = *(undefined8 *)((long)__this_00 + 0x50);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__Instantiate_object_
                                (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
              *(undefined8 *)((long)__this_00 + 0x58) = uVar5;
            }
          }
        }
        return;
      }
      uVar1 = *(uint *)(plVar11 + 3);
    }
    if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    plVar11[(long)(int)uVar13 + 4] = lStack_28;
    this.FAFINMGJJIM = this.FAFINMGJJIM + 1;
  }
  return;
}


// ==== private void Awake() { }   @0xb57b8c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__Awake(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  ulong in_d2;
  undefined8 in_d3;
  
  if ((bRam00000000019171ba & 1) == 0) {
    func_0x00a67900(&GFXDisabler___TypeInfo);
    func_0x00a67900(&UnityEngine_LightmapData___TypeInfo);
    func_0x00a67900(&UnityEngine_LightmapData_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171ba = 1;
  }
  if (this.IANCFCGAIDD == 0) goto LAB_00c57f08;
  uVar3 = func_0x00a679a0(_GFXDisabler___TypeInfo,
                          this.IANCFCGAIDD.Length + 1);
  this.GEAOJKJMEDB = uVar3;
  if (((this.LBLMPOOOFNI != 0) &&
      (this.LBLMPOOOFNI.Length != 0)) &&
     (lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0), lVar4 != 0)) {
    lVar4 = UnityEngine_LightmapSettings__get_lightmaps(0);
    if (lVar4 == 0) goto LAB_00c57f08;
    if (*(long *)(lVar4 + 0x18) == 0) {
      if (this.LBLMPOOOFNI != 0) {
        lVar4 = func_0x00a679a0(_UnityEngine_LightmapData___TypeInfo,
                                this.LBLMPOOOFNI.Length);
        lVar6 = this.LBLMPOOOFNI;
        if (lVar6 != 0) {
          lVar9 = 4;
          while( true ) {
            uVar11 = lVar9 - 4;
            if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar11) {
              UnityEngine_LightmapSettings__set_lightmaps(lVar4,0);
              goto LAB_00c57d14;
            }
            lVar6 = func_0x00a67b44(_UnityEngine_LightmapData_TypeInfo);
            UnityEngine_LightmapData___ctor(lVar6,0);
            lVar7 = this.LBLMPOOOFNI;
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_00c57f0c;
            if ((lVar6 == 0) ||
               (UnityEngine_LightmapData__set_lightmapColor
                          (lVar6,*(undefined8 *)(lVar7 + lVar9 * 8),0), lVar4 == 0)) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_00c57f0c;
            *(long *)(lVar4 + lVar9 * 8) = lVar6;
            lVar6 = this.LBLMPOOOFNI;
            lVar9 = lVar9 + 1;
            if (lVar6 == 0) break;
          }
        }
      }
      goto LAB_00c57f08;
    }
  }
LAB_00c57d14:
  lVar4 = this.IANCFCGAIDD;
  if (lVar4 == 0) {
LAB_00c57f08:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) {
LAB_00c57f0c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar6 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_00c57f08;
      uVar8 = *(undefined8 *)(lVar6 + 0x10);
      uVar11 = in_d2;
      uVar3 = in_d3;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        uVar11 = in_d2;
        uVar3 = in_d3;
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      in_d2 = uVar11;
      in_d3 = uVar3;
      if ((uVar5 & 1) != 0) {
        lVar9 = *(long *)(lVar6 + 0x10);
        if (*(float *)(lVar6 + 0x18) == 0.0) {
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            in_d2 = uVar11;
            in_d3 = uVar3;
          }
          uVar3 = UnityEngine_Object__Instantiate_object_
                            (lVar9,_Method_UnityEngine_Object_Instantiate_GameObject___);
        }
        else {
          if ((lVar9 == 0) || (lVar7 = UnityEngine_GameObject__get_transform(lVar9,0), lVar7 == 0))
          goto LAB_00c57f08;
          uVar8 = UnityEngine_Transform__get_position(lVar7,0);
          if ((*(long *)(lVar6 + 0x10) == 0) ||
             (lVar7 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0), lVar7 == 0))
          goto LAB_00c57f08;
          UnityEngine_Transform__get_position(lVar7,0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c57f08;
          in_d2 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar12 = in_d1;
          lVar6 = UnityEngine_GameObject__get_transform(*(long *)(lVar6 + 0x10),0);
          if (lVar6 == 0) goto LAB_00c57f08;
          in_d3 = UnityEngine_Transform__get_rotation(lVar6,0);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar3 = UnityEngine_Object__Instantiate_object_
                            (uVar8,in_d1,in_d2,in_d3,uVar12,uVar11,uVar3,lVar9,
                             _Method_UnityEngine_Object_Instantiate_GameObject___);
        }
        BackgroundController__PGPEFBNBHHM(__this,uVar3);
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  }
  uVar3 = this.LEPENIBNBPF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar11 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar11 & 1) != 0) {
    uVar3 = this.LEPENIBNBPF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    BackgroundController__PGPEFBNBHHM(__this,uVar3);
  }
  BackgroundController__MLIIENHGIGK(__this);
  BackgroundController__NNDOCLOMBPN();
  BackgroundController__HAMLCJJANAJ(__this);
  if ((bRam00000000019171bb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171bb = 1;
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
    uVar3 = this.LOAFEEFNCBP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar11 & 1) != 0) {
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
LAB_00c582e4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar2 = *(int *)(lVar4 + 0x90);
      uVar3 = this.CHEAAFHJIMI;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar11 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar11 & 1) == 0) {
        if (this.CHEAAFHJIMI == 0) goto LAB_00c582e4;
        uVar11 = UnityEngine_GameObject__get_activeSelf(this.CHEAAFHJIMI,0);
        if (iVar2 < 1) {
          if ((uVar11 & 1) != 0) {
            lVar4 = this.CHEAAFHJIMI;
            if (lVar4 != 0) {
              uVar3 = 0;
              goto LAB_00c582c0;
            }
            goto LAB_00c582e4;
          }
        }
        else if ((uVar11 & 1) == 0) {
          lVar4 = this.CHEAAFHJIMI;
          if (lVar4 != 0) {
            uVar3 = 1;
LAB_00c582c0:
            if (pcRam000000000191c3f8 == (code *)0x0) {
              pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
            }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c3f8)(lVar4,uVar3);
            return;
          }
          goto LAB_00c582e4;
        }
      }
      else if (0 < iVar2) {
        uVar3 = this.LOAFEEFNCBP;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__Instantiate_object_
                          (uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
        this.CHEAAFHJIMI = uVar3;
      }
    }
  }
  return;
}


// ==== public void MLIIENHGIGK() { }   @0xb57f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__MLIIENHGIGK(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam00000000019171bd & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171bd = 1;
  }
  uVar3 = this.NMJHAFFHHHP;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = this.NAEFMFLPAND;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = this.NAEFMFLPAND;
      if (lVar2 != 0) {
        if (pcRam000000000191c3f8 == (code *)0x0) {
          pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
        }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c3f8)(lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar4 = this.NMJHAFFHHHP;
    uVar3 = UnityEngine_Component__get_transform(__this,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar3,_Method_UnityEngine_Object_Instantiate_GameObject___);
    this.NAEFMFLPAND = uVar3;
  }
  return;
}


// ==== public void NNDOCLOMBPN() { }   @0xb58010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__NNDOCLOMBPN(void *__this)

{
  int iVar1;
  long lVar2;
  
  if ((bRam00000000019171bc & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019171bc = 1;
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
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 != 0) {
    iVar1 = lVar2/*DAFNMLEKHAD*/.CFDECDNFGJN;
    if (pcRam000000000191bcb0 == (code *)0x0) {
      pcRam000000000191bcb0 = (code *)func_0x00a678c4(&UNK_0059e800);
    }
                    /* WARNING: Could not recover jumptable at 0x01472fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191bcb0)(0 < iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void DIMGJKDADNE() { }   @0xb58104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BackgroundController__DIMGJKDADNE(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam00000000019171bb & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019171bb = 1;
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
    uVar4 = this.LOAFEEFNCBP;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
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
      if (lVar3 == 0) {
LAB_00c582e4:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      iVar1 = *(int *)(lVar3 + 0x90);
      uVar4 = this.CHEAAFHJIMI;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (this.CHEAAFHJIMI == 0) goto LAB_00c582e4;
        uVar2 = UnityEngine_GameObject__get_activeSelf(this.CHEAAFHJIMI,0);
        if (iVar1 < 1) {
          if ((uVar2 & 1) != 0) {
            lVar3 = this.CHEAAFHJIMI;
            if (lVar3 != 0) {
              uVar4 = 0;
              goto LAB_00c582c0;
            }
            goto LAB_00c582e4;
          }
        }
        else if ((uVar2 & 1) == 0) {
          lVar3 = this.CHEAAFHJIMI;
          if (lVar3 != 0) {
            uVar4 = 1;
LAB_00c582c0:
            if (pcRam000000000191c3f8 == (code *)0x0) {
              pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
            }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam000000000191c3f8)(lVar3,uVar4);
            return;
          }
          goto LAB_00c582e4;
        }
      }
      else if (0 < iVar1) {
        uVar4 = this.LOAFEEFNCBP;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__Instantiate_object_
                          (uVar4,_Method_UnityEngine_Object_Instantiate_GameObject___);
        this.CHEAAFHJIMI = uVar4;
      }
    }
  }
  return;
}



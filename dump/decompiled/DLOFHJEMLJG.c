/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class DLOFHJEMLJG // TypeDefIndex: 5085
{
	// Fields
	private Hashtable KEMNMOIEOMP; // 0x10
	private ArrayList DGOGEBIOLMO; // 0x18

	// Methods

	public void .ctor(string DGGEHNEECCD) { }

	public string KGCOIHNNBDJ(string HNJBEDNKJFJ, string OLINJKAMCPG) { }

	public string[] AOJEFKDJBNK(string HNJBEDNKJFJ) { }
}
*/

// ==== public void .ctor(string DGGEHNEECCD) { }   @0xae6b0c

/* WARNING: Removing unreachable block (ram,0x00be6f6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void DLOFHJEMLJG___ctor(void *__this,void *DGGEHNEECCD)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001916e4b & 1) == 0) {
    func_0x00a67900(&System_Collections_ArrayList_TypeInfo);
    func_0x00a67900(&char___TypeInfo);
    func_0x00a67900(&System_Collections_Hashtable_TypeInfo);
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_IO_StringReader_TypeInfo);
    func_0x00a67900(&UnityEngine_TextAsset_var);
    func_0x00a67900(&UnityEngine_TextAsset_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str_ROOT);
    func_0x00a67900(&Str_);
    bRam0000000001916e4b = 1;
  }
  uVar2 = func_0x00a67b44(_System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor(uVar2,0);
  this.KEMNMOIEOMP = uVar2;
  uVar2 = func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(uVar2,0);
  this.DGOGEBIOLMO = uVar2;
  System_Object___ctor(__this,0);
  uVar2 = _UnityEngine_TextAsset_var;
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  plVar3 = (long *)UnityEngine_Resources__Load(DGGEHNEECCD,uVar2,0);
  if (plVar3 == (long *)0x0) {
LAB_00be6ca8:
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar4 = UnityEngine_Object__op_Inequality(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar3 != (long *)0x0) {
        uVar2 = UnityEngine_TextAsset__get_text(plVar3,0);
        plVar3 = (long *)func_0x00a67b44(_System_IO_StringReader_TypeInfo);
        System_IO_StringReader___ctor(plVar3,uVar2,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
        lVar8 = 0;
        do {
          if (lVar5 == 0) {
            (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
            return;
          }
          uVar4 = System_String__op_Inequality(lVar5,_Str_,0);
          lVar6 = lVar8;
          if ((uVar4 & 1) != 0) {
            iVar1 = System_String__IndexOf(lVar5,0x5b,0,0);
            if ((iVar1 == 0) && (iVar1 = System_String__IndexOf(lVar5,0x5d,0,0), 0 < iVar1)) {
              lVar8 = System_String__Substring(lVar5,1,*(int *)(lVar5 + 0x10) + -2,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar6 = System_String__ToUpper(lVar8,0);
              plVar9 = this.DGOGEBIOLMO;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              (**(code **)(*plVar9 + 0x308))(plVar9,lVar6,*(undefined8 *)(*plVar9 + 0x310));
            }
            else {
              lVar5 = System_String__Replace(lVar5,_Str____,_Str__,0);
              lVar6 = func_0x00a679a0(_char___TypeInfo,1);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              *(undefined2 *)(lVar6 + 0x20) = 0x3d;
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              lVar5 = System_String__Split(lVar5,lVar6,2,0);
              lVar6 = _Str_ROOT;
              if (lVar8 != 0) {
                lVar6 = lVar8;
              }
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              if (*(int *)(lVar5 + 0x18) < 2) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(undefined8 *)(lVar5 + 0x28);
              }
              uStack_68 = *(undefined8 *)(lVar5 + 0x20);
              plVar9 = this.KEMNMOIEOMP;
              lStack_70 = lVar6;
              uVar7 = func_0x00a67a38(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo,&lStack_70);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50(uVar7,uVar7);
              }
              (**(code **)(*plVar9 + 0x298))(plVar9,uVar7,uVar2,*(undefined8 *)(*plVar9 + 0x2a0));
            }
          }
          lVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
          lVar8 = lVar6;
        } while( true );
      }
      goto LAB_00be6f68;
    }
    func_0x00a67914(&System_IO_FileNotFoundException_TypeInfo);
    plVar3 = (long *)func_0x00a67b44();
    uVar2 = func_0x00a67914(&Str_Unable_to_locate__translate);
    System_IO_FileNotFoundException___ctor(plVar3,uVar2,0);
    uVar2 = func_0x00a67914(&Method_DLOFHJEMLJG__ctor__);
    func_0x00a67a20(plVar3,uVar2);
  }
  else if ((*(byte *)(_UnityEngine_TextAsset_TypeInfo + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
          (*(long *)(*(long *)(*plVar3 + 200) +
                     (ulong)*(byte *)(_UnityEngine_TextAsset_TypeInfo + 0x130) * 8 + -8) ==
           _UnityEngine_TextAsset_TypeInfo)) goto LAB_00be6ca8;
  func_0x00a67eec(plVar3);
LAB_00be6f68:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string KGCOIHNNBDJ(string HNJBEDNKJFJ, string OLINJKAMCPG) { }   @0xae70dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DLOFHJEMLJG__KGCOIHNNBDJ(void *__this,void *HNJBEDNKJFJ,void *OLINJKAMCPG)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  void *pvStack_40;
  void *pvStack_38;
  
  if ((bRam0000000001916e4c & 1) == 0) {
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916e4c = 1;
  }
  plVar11 = this.KEMNMOIEOMP;
  pvStack_40 = HNJBEDNKJFJ;
  pvStack_38 = OLINJKAMCPG;
  uVar2 = func_0x00a67a38(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo,&pvStack_40);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  plVar11 = (long *)(**(code **)(*plVar11 + 0x2f8))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x300))
  ;
  if ((plVar11 == (long *)0x0) || (*plVar11 == _string_TypeInfo)) {
    return plVar11;
  }
  auVar12 = func_0x00a67eec();
  if ((bRam0000000001916e4d & 1) == 0) {
    func_0x00a67900(&System_Collections_ArrayList_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&string_var);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001916e4d = 1;
  }
  plVar11 = (long *)func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(plVar11,0);
  if (auVar12._8_8_ != 0) {
    uVar2 = System_String__ToUpper(auVar12._8_8_,0);
    plVar6 = *(long **)(auVar12._0_8_ + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370)),
       plVar6 != (long *)0x0)) {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerable_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_00be72c8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerable_TypeInfo,0);
LAB_00be72c8:
      plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_00be7340;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00be7340:
        uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          lVar7 = 0;
          goto LAB_00be7408;
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_00be73a0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00be73a0:
        plVar4 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (*(long *)(*plVar4 + 0x40) != *(long *)(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo + 0x40)) {
          func_0x00a67eec();
LAB_00be7500:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        puVar3 = (undefined8 *)func_0x00a67a3c();
        uVar1 = puVar3[1];
        uVar9 = System_String__op_Equality(*puVar3,uVar2,0);
        if ((uVar9 & 1) != 0) {
          if (plVar11 == (long *)0x0) goto LAB_00be7500;
          (**(code **)(*plVar11 + 0x308))(plVar11,uVar1,*(undefined8 *)(*plVar11 + 0x310));
        }
      } while( true );
    }
  }
LAB_00be7504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00be7408:
  plVar6 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00be7468;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar6,_System_IDisposable_TypeInfo,0);
LAB_00be7468:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  uVar2 = _string_var;
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar7);
  }
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (plVar11 == (long *)0x0) goto LAB_00be7504;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x428))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x430))
  ;
  plVar6 = _string___TypeInfo;
  pvVar5 = (void *)0x0;
  if ((plVar11 == (long *)0x0) ||
     (pvVar5 = (void *)func_0x00a67a34(plVar11,_string___TypeInfo), pvVar5 != (void *)0x0)) {
    return pvVar5;
  }
  auVar13 = func_0x00a67eec(plVar11,plVar6);
  if (auVar13._8_4_ != 1) goto LAB_00be7560;
  plVar4 = (long *)func_0x016dec50();
  lVar7 = *plVar4;
  func_0x016dec60();
  goto LAB_00be7408;
LAB_00be7560:
  plVar11 = (long *)func_0x00a67a34(plVar6,_System_IDisposable_TypeInfo);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00be75c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00a9e6c4(plVar11,_System_IDisposable_TypeInfo,0);
LAB_00be75c0:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
  }
  func_0x00b65214(auVar13._0_8_);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}


// ==== public string[] AOJEFKDJBNK(string HNJBEDNKJFJ) { }   @0xae7194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * DLOFHJEMLJG__AOJEFKDJBNK(void *__this,void *HNJBEDNKJFJ)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 auVar12 [12];
  
  if ((bRam0000000001916e4d & 1) == 0) {
    func_0x00a67900(&System_Collections_ArrayList_TypeInfo);
    func_0x00a67900(&System_IDisposable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerable_TypeInfo);
    func_0x00a67900(&System_Collections_IEnumerator_TypeInfo);
    func_0x00a67900(&DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&string_var);
    func_0x00a67900(&System_Type_TypeInfo);
    bRam0000000001916e4d = 1;
  }
  plVar2 = (long *)func_0x00a67b44(_System_Collections_ArrayList_TypeInfo);
  System_Collections_ArrayList___ctor(plVar2,0);
  if (HNJBEDNKJFJ != (void *)0x0) {
    uVar3 = System_String__ToUpper(HNJBEDNKJFJ,0);
    plVar7 = this.KEMNMOIEOMP;
    if ((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370)),
       plVar7 != (long *)0x0)) {
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_00be72c8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerable_TypeInfo,0);
LAB_00be72c8:
      plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      do {
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_00be7340;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,0);
LAB_00be7340:
        uVar10 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          lVar8 = 0;
          goto LAB_00be7408;
        }
        lVar8 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_00be73a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_Collections_IEnumerator_TypeInfo,1);
LAB_00be73a0:
        plVar5 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        if (*(long *)(*plVar5 + 0x40) != *(long *)(_DLOFHJEMLJG_ODHHFNEAGPM_TypeInfo + 0x40)) {
          func_0x00a67eec();
LAB_00be7500:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        puVar4 = (undefined8 *)func_0x00a67a3c();
        uVar1 = puVar4[1];
        uVar10 = System_String__op_Equality(*puVar4,uVar3,0);
        if ((uVar10 & 1) != 0) {
          if (plVar2 == (long *)0x0) goto LAB_00be7500;
          (**(code **)(*plVar2 + 0x308))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x310));
        }
      } while( true );
    }
  }
LAB_00be7504:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00be7408:
  plVar7 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00be7468;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00a9e6c4(plVar7,_System_IDisposable_TypeInfo,0);
LAB_00be7468:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  uVar3 = _string_var;
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b48(lVar8);
  }
  if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  if (plVar2 == (long *)0x0) goto LAB_00be7504;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x428))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x430));
  plVar7 = _string___TypeInfo;
  pvVar6 = (void *)0x0;
  if ((plVar2 == (long *)0x0) ||
     (pvVar6 = (void *)func_0x00a67a34(plVar2,_string___TypeInfo), pvVar6 != (void *)0x0)) {
    return pvVar6;
  }
  auVar12 = func_0x00a67eec(plVar2,plVar7);
  if (auVar12._8_4_ != 1) goto LAB_00be7560;
  plVar5 = (long *)func_0x016dec50();
  lVar8 = *plVar5;
  func_0x016dec60();
  goto LAB_00be7408;
LAB_00be7560:
  plVar2 = (long *)func_0x00a67a34(plVar7,_System_IDisposable_TypeInfo);
  if (plVar2 != (long *)0x0) {
    lVar8 = *plVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00be75c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00a9e6c4(plVar2,_System_IDisposable_TypeInfo,0);
LAB_00be75c0:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  func_0x00b65214(auVar12._0_8_);
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b48(0);
}



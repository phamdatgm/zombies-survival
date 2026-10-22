/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class LightingSetting : MonoBehaviour // TypeDefIndex: 5186
{
	// Fields
	public LMSetting[] NNIDLHJCCHH; // 0x20

	// Methods

	private void DDLHBBKFAKB() { }

	public void .ctor() { }

	private void Awake() { }

	public void BAGDFDNHDEJ() { }

	private void PAIDHOGONLO() { }
}
*/

// ==== private void DDLHBBKFAKB() { }   @0xb2ed94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__DDLHBBKFAKB(void *__this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 uStack_48;
  
  if ((bRam00000000019170b8 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    func_0x00a67900(&LMSetting___TypeInfo);
    func_0x00a67900(&LMSetting_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    func_0x00a67900(&System_Collections_Generic_List_MeshRenderer__TypeInfo);
    func_0x00a67900(&Str_baked);
    bRam00000000019170b8 = 1;
  }
  lVar4 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar4 != 0) {
    lVar4 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                      (lVar4,_Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___)
    ;
    lVar5 = func_0x00a67b44(_System_Collections_Generic_List_MeshRenderer__TypeInfo);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
              (lVar5,_Method_System_Collections_Generic_List_MeshRenderer___ctor__);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) goto LAB_00c2f018;
          plVar10 = (long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          lVar6 = *plVar10;
          if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
          goto LAB_00c2effc;
          iVar2 = UnityEngine_GameObject__get_layer(lVar6,0);
          iVar3 = UnityEngine_LayerMask__NameToLayer(_Str_baked,0);
          if (iVar2 == iVar3) {
            if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_00c2f018;
            if (lVar5 == 0) goto LAB_00c2effc;
            func_0x00b7fe44(lVar5,*plVar10,
                            _Method_System_Collections_Generic_List_MeshRenderer__Add__);
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      if (lVar5 != 0) {
        plVar10 = (long *)func_0x00a679a0(_LMSetting___TypeInfo,*(undefined4 *)(lVar5 + 0x18));
        this.NNIDLHJCCHH = plVar10;
        if (*(int *)(lVar5 + 0x18) < 1) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar5,0,&uStack_48,
                   _Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
        uVar8 = uStack_48;
        lVar4 = func_0x00a67b44(_LMSetting_TypeInfo);
        LMSetting___ctor(lVar4,uVar8,0);
        if (plVar10 != (long *)0x0) {
          lVar6 = 4;
          do {
            if ((lVar4 != 0) &&
               (lVar7 = func_0x00a67a34(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
              uVar8 = func_0x00a67b74();
              func_0x00a67a20(uVar8,0);
              if ((bRam000000000191c370 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
                bRam000000000191c370 = 1;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              return;
            }
            if ((ulong)*(uint *)(plVar10 + 3) <= lVar6 - 4U) {
LAB_00c2f018:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar10[lVar6] = lVar4;
            if ((long)*(int *)(lVar5 + 0x18) <= lVar6 + -3) {
              return;
            }
            plVar10 = this.NNIDLHJCCHH;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                      (lVar5,(int)lVar6 + -3,&uStack_48,
                       _Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
            uVar8 = uStack_48;
            lVar4 = func_0x00a67b44(_LMSetting_TypeInfo);
            LMSetting___ctor(lVar4,uVar8,0);
            lVar6 = lVar6 + 1;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
LAB_00c2effc:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb2f028

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting___ctor(void *__this)

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


// ==== private void Awake() { }   @0xb2f030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__Awake(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam00000000019170ba & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170ba = 1;
  }
  lVar4 = this.NNIDLHJCCHH;
  if (lVar4 != 0) {
    uVar1 = lVar4.Length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c2f10c;
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapIndex
                    (*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18),0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapScaleOffset
                    (*(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                     *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),
                     *(long *)(lVar6 + 0x10),0);
        }
        uVar1 = lVar4.Length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c2f10c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void PAIDHOGONLO() { }   @0xb2f034

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__PAIDHOGONLO(void *__this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam00000000019170ba & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170ba = 1;
  }
  lVar4 = this.NNIDLHJCCHH;
  if (lVar4 != 0) {
    uVar1 = lVar4.Length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_00c2f10c;
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapIndex
                    (*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18),0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00c2f10c;
          UnityEngine_Renderer__set_lightmapScaleOffset
                    (*(undefined4 *)(lVar6 + 0x1c),*(undefined4 *)(lVar6 + 0x20),
                     *(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x28),
                     *(long *)(lVar6 + 0x10),0);
        }
        uVar1 = lVar4.Length;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_00c2f10c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BAGDFDNHDEJ() { }   @0xb2f114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LightingSetting__BAGDFDNHDEJ(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  if ((bRam00000000019170b9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170b9 = 1;
  }
  lVar5 = this.NNIDLHJCCHH;
  if (lVar5 != 0) {
    uVar1 = lVar5.Length;
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar7 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00c2f1f0;
        uVar4 = *(undefined8 *)(lVar7 + 0x10);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c2f1f0;
          uVar2 = UnityEngine_Renderer__get_lightmapIndex(*(long *)(lVar7 + 0x10),0);
          *(undefined4 *)(lVar7 + 0x18) = uVar2;
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_00c2f1f0;
          uVar2 = UnityEngine_Renderer__get_lightmapScaleOffset(*(long *)(lVar7 + 0x10),0);
          *(undefined4 *)(lVar7 + 0x1c) = uVar2;
          *(undefined4 *)(lVar7 + 0x20) = in_s1;
          *(undefined4 *)(lVar7 + 0x24) = in_s2;
          *(undefined4 *)(lVar7 + 0x28) = in_s3;
        }
        uVar1 = lVar5.Length;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    return;
  }
LAB_00c2f1f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



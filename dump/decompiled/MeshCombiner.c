/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
public class MeshCombiner : MonoBehaviour // TypeDefIndex: 5242
{
	// Methods

	private void Start() { }

	public void .ctor() { }
}
*/

// ==== private void Start() { }   @0xb4c084

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MeshCombiner__Start(void *__this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000191716f & 1) == 0) {
    func_0x00a67900(&UnityEngine_CombineInstance___TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponentsInChildren_MeshFilter___);
    func_0x00a67900(&UnityEngine_Mesh_TypeInfo);
    bRam000000000191716f = 1;
  }
  lVar2 = UnityEngine_Component__GetComponentsInChildren___Il2CppFullySharedGenericType_
                    (__this,_Method_UnityEngine_Component_GetComponentsInChildren_MeshFilter___);
  if (lVar2 != 0) {
    lVar3 = func_0x00a679a0(_UnityEngine_CombineInstance___TypeInfo,*(undefined4 *)(lVar2 + 0x18));
    lVar4 = UnityEngine_Component__get_transform(__this,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__get_worldToLocalMatrix(&lStack_c0,lVar4,0);
      uStack_78 = uStack_b8;
      lStack_80 = lStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_48 = uStack_88;
      uStack_50 = uStack_90;
      uVar7 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar7) {
        if (lVar3 == 0) goto LAB_00c4c354;
        lVar9 = 0;
        lVar4 = lVar3 + 0x20;
        lVar1 = lVar2 + 0x20;
        do {
          uVar8 = (uint)lVar9;
          if (uVar7 <= uVar8) {
LAB_00c4c350:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar5 = *(long *)(lVar1 + lVar9 * 8);
          if (lVar5 == 0) goto LAB_00c4c354;
          uVar6 = UnityEngine_MeshFilter__get_sharedMesh(lVar5,0);
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_00c4c350;
          UnityEngine_CombineInstance__set_mesh(lVar4,uVar6,0);
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          uStack_88 = uStack_48;
          uStack_90 = uStack_50;
          uStack_b8 = uStack_78;
          lStack_c0 = lStack_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_00c4c350;
          lVar5 = *(long *)(lVar1 + lVar9 * 8);
          if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar5,0), lVar5 == 0))
          goto LAB_00c4c354;
          UnityEngine_Transform__get_localToWorldMatrix(&uStack_100,lVar5,0);
          uStack_1b8 = uStack_f8;
          uStack_1c0 = uStack_100;
          uStack_1a8 = uStack_e8;
          uStack_1b0 = uStack_f0;
          uStack_198 = uStack_d8;
          uStack_1a0 = uStack_e0;
          uStack_188 = uStack_c8;
          uStack_190 = uStack_d0;
          uStack_178 = uStack_b8;
          lStack_180 = lStack_c0;
          uStack_168 = uStack_a8;
          uStack_170 = uStack_b0;
          uStack_158 = uStack_98;
          uStack_160 = uStack_a0;
          uStack_148 = uStack_88;
          uStack_150 = uStack_90;
          UnityEngine_Matrix4x4__op_Multiply(&uStack_140,&lStack_180,&uStack_1c0,0);
          uStack_f8 = uStack_138;
          uStack_100 = uStack_140;
          uStack_e8 = uStack_128;
          uStack_f0 = uStack_130;
          uStack_d8 = uStack_118;
          uStack_e0 = uStack_120;
          uStack_c8 = uStack_108;
          uStack_d0 = uStack_110;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_00c4c350;
          uStack_1f8 = uStack_138;
          uStack_200 = uStack_140;
          uStack_1e8 = uStack_128;
          uStack_1f0 = uStack_130;
          uStack_1d8 = uStack_118;
          uStack_1e0 = uStack_120;
          uStack_1c8 = uStack_108;
          uStack_1d0 = uStack_110;
          UnityEngine_CombineInstance__set_transform(lVar4,&uStack_200,0);
          if (*(uint *)(lVar2 + 0x18) <= uVar8) goto LAB_00c4c350;
          lVar5 = *(long *)(lVar1 + lVar9 * 8);
          if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0))
          goto LAB_00c4c354;
          UnityEngine_GameObject__SetActive(lVar5,0,0);
          uVar7 = *(uint *)(lVar2 + 0x18);
          lVar9 = lVar9 + 1;
          lVar4 = lVar4 + 0x68;
        } while ((int)lVar9 < (int)uVar7);
      }
      lVar2 = UnityEngine_Component__get_transform(__this,0);
      if (lVar2 != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&lStack_c0,_Method_UnityEngine_Component_GetComponent_MeshFilter___);
        lVar2 = lStack_c0;
        uVar6 = func_0x00a67b44(_UnityEngine_Mesh_TypeInfo);
        UnityEngine_Mesh___ctor(uVar6,0);
        if (lVar2 != 0) {
          UnityEngine_MeshFilter__set_mesh(lVar2,uVar6,0);
          lVar2 = UnityEngine_Component__get_transform(__this,0);
          if (lVar2 != 0) {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                      (lVar2,&lStack_c0,_Method_UnityEngine_Component_GetComponent_MeshFilter___);
            if ((lStack_c0 != 0) &&
               (lVar2 = UnityEngine_MeshFilter__get_mesh(lStack_c0,0), lVar2 != 0)) {
              UnityEngine_Mesh__CombineMeshes(lVar2,lVar3,0);
              lVar2 = UnityEngine_Component__get_transform(__this,0);
              if ((lVar2 != 0) &&
                 (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 != 0)) {
                UnityEngine_GameObject__SetActive(lVar2,1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00c4c354:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb4c358

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MeshCombiner___ctor(void *__this)

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



// ==== public void HMEFLNGHPDI() { }   @0xad6eb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Zombie__HMEFLNGHPDI(void *__this)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001916e04 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_zombie_parts);
    bRam0000000001916e04 = 1;
  }
  uVar4 = *(undefined8 *)((long)__this + 0x98);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)((long)__this + 0xa8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)((long)__this + 0xa0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *(long *)((long)__this + 0x98);
        uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_zombie_parts,0);
        if (lVar5 != 0) {
          UnityEngine_GameObject__set_layer(lVar5,uVar2,0);
          if (*(long *)((long)__this + 0xa0) != 0) {
            UnityEngine_Collider__set_enabled(*(long *)((long)__this + 0xa0),1,0);
            if (*(long *)((long)__this + 0xa8) != 0) {
              UnityEngine_Transform__set_parent(*(long *)((long)__this + 0xa8),0,0);
              if (*(long *)((long)__this + 0x98) != 0) {
                lVar5 = UnityEngine_GameObject__AddComponent_object_
                                  (*(long *)((long)__this + 0x98),
                                   _Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30(_UnityEngine_Object_TypeInfo);
                }
                uVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                if ((uVar3 & 1) != 0) {
                  if (lVar5 == 0) goto LAB_00bd7198;
                  UnityEngine_Rigidbody__set_interpolation(lVar5,1,0);
                }
                iVar1 = *(int *)((long)__this + 0xb0);
                if (iVar1 < 1) {
                  return;
                }
                if (*(long *)((long)__this + 0x90) != 0) {
                  UnityEngine_Transform__get_position(*(long *)((long)__this + 0x90),0);
                  if (cRam0000000001916e66 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e66 = '\x01';
                  }
                  if (cRam0000000001916e68 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e68 = '\x01';
                  }
                  if (cRam0000000001916e65 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e65 = '\x01';
                  }
                  if (lVar5 != 0) {
                    NEON_fmov(0x40800000,4);
                    NEON_fmov(0xc0400000,4);
                    if (pcRam000000000191d4f8 == (code *)0x0) {
                      pcRam000000000191d4f8 = (code *)func_0x00a678c4(&UNK_005b14e9,0);
                    }
                    (*pcRam000000000191d4f8)
                              ((float)iVar1,0x42c80000,0,lVar5,&stack0xffffffffffffffb0,0);
                    return;
                  }
                }
              }
            }
          }
        }
LAB_00bd7198:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
  return;
}



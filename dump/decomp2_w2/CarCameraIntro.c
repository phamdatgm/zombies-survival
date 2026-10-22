// ==== private void KHDFDGMBOIJ() { }   @0xb5ccc4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCameraIntro__KHDFDGMBOIJ(void *__this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_d1;
  float fVar8;
  undefined8 in_d2;
  
  if ((bRam00000000019171fe & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam00000000019171fe = 1;
  }
  uVar5 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    uVar5 = *(undefined8 *)(*(long *)((long)__this + 0x28) + 0x30);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)((long)__this + 0x28);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + 0x3fd) = 1;
      *(undefined4 *)(lVar3 + 0x38) = 2;
      CarCamera__KHDFDGMBOIJ(lVar3,0);
      if (*(long *)((long)__this + 0x28) != 0) {
        CarCamera__BGKJCAIHANB(*(long *)((long)__this + 0x28),0);
        if (*(void **)((long)__this + 0x28) != (void *)0x0) {
          CarCamera__IDBHFAEMGOB(*(void **)((long)__this + 0x28));
          uVar5 = UnityEngine_Component__get_transform(__this,0);
          *(undefined8 *)((long)__this + 0x38) = uVar5;
          if ((*(long *)((long)__this + 0x28) != 0) &&
             (lVar3 = *(long *)(*(long *)((long)__this + 0x28) + 0x20), lVar3 != 0)) {
            lVar4 = *(long *)((long)__this + 0x40);
            lVar1 = *(long *)((long)__this + 0x48);
            uVar5 = UnityEngine_Transform__get_position(lVar3,0);
            if ((lVar1 != 0) && (UnityEngine_Transform__set_position(lVar1,0), lVar4 != 0)) {
              UnityEngine_Transform__set_position(uVar5,in_d1,in_d2,lVar4,0);
              fVar8 = (float)in_d2;
              fVar7 = (float)in_d1;
              lVar3 = *(long *)((long)__this + 0x48);
              if (lVar3 != 0) {
                fVar6 = (float)UnityEngine_Transform__get_position(lVar3,0);
                if (cRam0000000001916e65 == '\0') {
                  func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                  cRam0000000001916e65 = '\x01';
                }
                lVar4 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                fVar7 = fVar7 - *(float *)(lVar4 + 0x4c) * 21.0;
                fVar8 = fVar8 - *(float *)(lVar4 + 0x50) * 21.0;
                UnityEngine_Transform__set_position
                          (fVar6 - *(float *)(lVar4 + 0x48) * 21.0,fVar7,fVar8,lVar3,0);
                lVar3 = *(long *)((long)__this + 0x48);
                if (lVar3 != 0) {
                  fVar6 = (float)UnityEngine_Transform__get_position(lVar3,0);
                  if (cRam0000000001916e66 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e66 = '\x01';
                  }
                  lVar4 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                  UnityEngine_Transform__set_position
                            (fVar6 + *(float *)(lVar4 + 0x3c) * 3.0,
                             fVar7 + *(float *)(lVar4 + 0x40) * 3.0,
                             fVar8 + *(float *)(lVar4 + 0x44) * 3.0,lVar3,0);
                  if (*(long *)((long)__this + 0x48) != 0) {
                    lVar3 = *(long *)((long)__this + 0x38);
                    UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
                    if (lVar3 != 0) {
                      UnityEngine_Transform__set_position(lVar3,0);
                      if (*(long *)((long)__this + 0x48) != 0) {
                        lVar3 = *(long *)((long)__this + 0x38);
                        UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x48),0);
                        if (lVar3 != 0) {
                          UnityEngine_Transform__set_rotation(lVar3,0);
                          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                            func_0x00a67a30();
                          }
                          SoundScript__GIGBLEBBIEK
                                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x20)
                                    );
                          *(undefined1 *)((long)__this + 0x20) = 1;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



// ==== private void Start() { }   @0xad407c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__Start(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float in_s2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000001916dcf & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_CarController___);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_float__Add__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__Clear__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    func_0x00a67900(&Str_);
    bRam0000000001916dcf = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (*(char *)((long)__this + 0x30) == '\0') {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_88,_Method_UnityEngine_Component_GetComponent_CarController___);
    *(undefined8 *)((long)__this + 0x20) = uStack_88;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Clear__;
    lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x18);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      uVar4 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0xc0));
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
      }
      **(undefined8 **)(_CarReplay_TypeInfo + 0xb8) = _Str_;
      return;
    }
  }
  else {
    uVar3 = UnityEngine_Component__get_transform(__this,0);
    *(undefined8 *)((long)__this + 0x28) = uVar3;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Clear__;
    lVar5 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      uVar4 = func_0x00a68544(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0xc0));
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        }
      }
      if (*(long *)((long)__this + 0x70) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (*(long *)((long)__this + 0x70),&uStack_88,
                   _Method_System_Collections_Generic_List_Transform__GetEnumerator__);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        uStack_60 = uStack_78;
        while( true ) {
          uVar4 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                            (&uStack_70,
                             _Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__
                            );
          if ((uVar4 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                      (&uStack_70,
                       _Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
            return;
          }
          func_0x00b947ec(&uStack_70,&uStack_58,
                          _Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__
                         );
          lVar2 = CONCAT44(uStack_54,uStack_58);
          if (lVar2 == 0) break;
          lVar5 = *(long *)((long)__this + 0x78);
          UnityEngine_Transform__get_localPosition(lVar2,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          func_0x00b7fe44(lVar5,&uStack_58,_Method_System_Collections_Generic_List_float__Add__);
          if ((*(float *)((long)__this + 0x90) <= 0.0) ||
             (UnityEngine_Transform__get_localPosition(lVar2,0), 0.0 <= in_s2)) {
            if (*(long *)((long)__this + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uStack_58 = *(undefined4 *)((long)__this + 0x8c);
            func_0x00b7fe44(*(long *)((long)__this + 0x80),&uStack_58,
                            _Method_System_Collections_Generic_List_float__Add__);
          }
          else {
            if (*(long *)((long)__this + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uStack_58 = *(undefined4 *)((long)__this + 0x90);
            func_0x00b7fe44(*(long *)((long)__this + 0x80),&uStack_58,
                            _Method_System_Collections_Generic_List_float__Add__);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DKBKANHKBND() { }   @0xad4798

/* WARNING: Removing unreachable block (ram,0x00bd48cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__DKBKANHKBND(void *__this)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float in_s1;
  float in_s2;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  if ((bRam0000000001916dd3 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Transform__GetEnumerator__);
    bRam0000000001916dd3 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  fVar3 = (float)UnityEngine_Time__get_timeScale(0);
  if ((fVar3 <= 0.0) || (fVar3 = (float)UnityEngine_Time__get_deltaTime(0), fVar3 <= 0.0)) {
    return;
  }
  if (*(long *)((long)__this + 0x28) != 0) {
    fVar3 = (float)UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
    uVar6 = *(undefined8 *)((long)__this + 0x44);
    *(float *)((long)__this + 0x50) = fVar3;
    *(float *)((long)__this + 0x54) = in_s1;
    *(float *)((long)__this + 0x58) = in_s2;
    fVar7 = in_s2 - *(float *)((long)__this + 0x4c);
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar3 = (fVar3 - (float)uVar6) / fVar4;
    *(float *)((long)__this + 100) = fVar7 / fVar4;
    *(ulong *)((long)__this + 0x5c) =
         CONCAT44((in_s1 - (float)((ulong)uVar6 >> 0x20)) / fVar4,fVar3);
    *(undefined8 *)((long)__this + 0x44) = *(undefined8 *)((long)__this + 0x50);
    *(undefined4 *)((long)__this + 0x4c) = *(undefined4 *)((long)__this + 0x58);
    if (*(long *)((long)__this + 0x28) != 0) {
      uVar5 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
      fVar4 = *(float *)((long)__this + 0x68);
      *(undefined4 *)((long)__this + 0x50) = uVar5;
      *(float *)((long)__this + 0x54) = fVar3;
      *(float *)((long)__this + 0x58) = in_s2;
      fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar4 = fVar4 + fVar3 * *(float *)((long)__this + 100) * 50.0;
      fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      *(float *)((long)__this + 0x68) = fVar4;
      if (*(long *)((long)__this + 0x70) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (*(long *)((long)__this + 0x70),&uStack_58,
                   _Method_System_Collections_Generic_List_Transform__GetEnumerator__);
        while( true ) {
          uVar2 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                            (&uStack_58,
                             _Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext__
                            );
          if ((uVar2 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                      (&uStack_58,
                       _Method_System_Collections_Generic_List_Enumerator_Transform__Dispose__);
            return;
          }
          func_0x00b947ec(&uStack_58,&lStack_28,
                          _Method_System_Collections_Generic_List_Enumerator_Transform__get_Current__
                         );
          lVar1 = lStack_28;
          UnityEngine_Quaternion__Internal_FromEulerRad
                    (*(float *)((long)__this + 0x68) * 0.017453292,0,0,0);
          if (lVar1 == 0) break;
          UnityEngine_Transform__set_localRotation(lVar1,0);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private float NLILMCLNPKF(Vector3 FMFMNIAFLOO, Vector3 OGJMFGEPEKP, Vector3 HHBEOLHLEKB) { }   @0xad5230

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CarReplay__NLILMCLNPKF
                (void *__this,float FMFMNIAFLOO_x,float FMFMNIAFLOO_y,float FMFMNIAFLOO_z,
                float OGJMFGEPEKP_x,float OGJMFGEPEKP_y,float OGJMFGEPEKP_z,float HHBEOLHLEKB_x,
                float HHBEOLHLEKB_y,float HHBEOLHLEKB_z)

{
  float fVar1;
  float fVar2;
  float in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = (float)func_0x016ded10(FMFMNIAFLOO_z * OGJMFGEPEKP_z +
                                 FMFMNIAFLOO_x * OGJMFGEPEKP_x + FMFMNIAFLOO_y * OGJMFGEPEKP_y);
  fVar2 = -fVar1;
  if (in_stack_00000008 * (FMFMNIAFLOO_x * OGJMFGEPEKP_y - FMFMNIAFLOO_y * OGJMFGEPEKP_x) +
      HHBEOLHLEKB_z * (FMFMNIAFLOO_y * OGJMFGEPEKP_z - FMFMNIAFLOO_z * OGJMFGEPEKP_y) +
      in_stack_00000004 * (FMFMNIAFLOO_z * OGJMFGEPEKP_x - FMFMNIAFLOO_x * OGJMFGEPEKP_z) <= 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 * 57.29578 + 360.0;
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  fVar2 = fVar1;
  if (360.0 < fVar1) {
    fVar2 = 360.0;
  }
  if (fVar1 < 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}



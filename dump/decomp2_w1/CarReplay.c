// ==== public void .ctor() { }   @0xad441c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916dd0 & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_float___ctor__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Transform___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_float__TypeInfo);
    func_0x00a67900(&System_Collections_Generic_List_Transform__TypeInfo);
    bRam0000000001916dd0 = 1;
  }
  *(undefined4 *)((long)__this + 0x38) = 5;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_Transform___ctor__);
  *(undefined8 *)((long)__this + 0x70) = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_float___ctor__);
  *(undefined8 *)((long)__this + 0x78) = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_float___ctor__);
  *(undefined8 *)((long)__this + 0x80) = uVar1;
  *(undefined4 *)((long)__this + 0x94) = 0xffffffff;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void CDECHFLJBOI() { }   @0xad4a18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__CDECHFLJBOI(void *__this)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong in_d1;
  ulong uVar13;
  float fVar14;
  float fVar15;
  ulong in_d2;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  float fStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000001916dd4 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_Transform__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Transform__get_Item__);
    func_0x00a67900(&Method_System_Collections_Generic_List_float__get_Item__);
    func_0x00a67900(&UnityEngine_Physics_TypeInfo);
    bRam0000000001916dd4 = 1;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  fVar5 = (float)UnityEngine_Time__get_timeScale(0);
  if ((fVar5 <= 0.0) || (fVar5 = (float)UnityEngine_Time__get_deltaTime(0), fVar5 <= 0.0)) {
    return;
  }
  lVar2 = *(long *)((long)__this + 0x70);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (lVar2,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_Transform__get_Item__);
      if (CONCAT44(uStack_44,fStack_48) == 0) break;
      uVar6 = UnityEngine_Transform__get_localPosition(CONCAT44(uStack_44,fStack_48),0);
      if (*(long *)((long)__this + 0x78) == 0) break;
      uVar13 = in_d1;
      uVar16 = in_d2;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x78),iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar5 = fStack_48;
      if (*(long *)((long)__this + 0x70) == 0) break;
      fVar19 = *(float *)((long)__this + 0x88);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x70),iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_Transform__get_Item__);
      if (CONCAT44(uStack_44,fStack_48) == 0) break;
      uVar11 = UnityEngine_Transform__get_position(CONCAT44(uStack_44,fStack_48),0);
      if (*(long *)((long)__this + 0x28) == 0) break;
      uVar3 = uVar13;
      uVar17 = uVar16;
      fVar7 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x28),0);
      if (*(long *)((long)__this + 0x80) == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x80),iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar14 = fStack_48;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = *(uint *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x14);
      if (*(int *)(_UnityEngine_Physics_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Physics_TypeInfo);
      }
      fVar18 = (fVar5 - fVar19) + 0.025;
      uVar3 = UnityEngine_Physics__Raycast
                        (uVar11,uVar13,uVar16,-fVar7,-(float)uVar3,-(float)uVar17,fVar14 + 0.15,
                         &uStack_c0,1 << (ulong)(uVar1 & 0x1f),0);
      fVar7 = (float)uVar16;
      fVar19 = (float)uVar13;
      fVar5 = fVar18;
      if ((uVar3 & 1) != 0) {
        if (*(long *)((long)__this + 0x70) == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (*(long *)((long)__this + 0x70),iVar4,&fStack_48,
                   _Method_System_Collections_Generic_List_Transform__get_Item__);
        if (CONCAT44(uStack_44,fStack_48) == 0) break;
        fVar8 = (float)UnityEngine_Transform__get_position(CONCAT44(uStack_44,fStack_48),0);
        fVar5 = fVar19;
        fVar14 = fVar7;
        fVar9 = (float)UnityEngine_RaycastHit__get_point(&uStack_c0,0);
        if (*(long *)((long)__this + 0x28) == 0) break;
        fVar12 = fVar5;
        fVar15 = fVar14;
        fVar10 = (float)UnityEngine_Transform__get_up(*(long *)((long)__this + 0x28),0);
        if (*(long *)((long)__this + 0x80) == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (*(long *)((long)__this + 0x80),iVar4,&fStack_48,
                   _Method_System_Collections_Generic_List_float__get_Item__);
        fVar5 = (float)in_d1 -
                (((fVar7 - fVar14) * fVar15 + (fVar8 - fVar9) * fVar10 + (fVar19 - fVar5) * fVar12)
                - fStack_48);
      }
      if (*(long *)((long)__this + 0x78) == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x78),iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar19 = fStack_48 + *(float *)((long)__this + 0x88) + 0.1;
      if (fVar5 <= fVar19) {
        fVar19 = fVar5;
      }
      if (fVar5 < fVar18) {
        fVar19 = fVar18;
      }
      in_d1 = (ulong)(uint)fVar19;
      if (*(long *)((long)__this + 0x70) == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (*(long *)((long)__this + 0x70),iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_Transform__get_Item__);
      if (CONCAT44(uStack_44,fStack_48) == 0) break;
      in_d2 = in_d2 & 0xffffffff;
      UnityEngine_Transform__set_localPosition(uVar6,CONCAT44(uStack_44,fStack_48),0);
      lVar2 = *(long *)((long)__this + 0x70);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xad5318

/* WARNING: Removing unreachable block (ram,0x00bd48cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__Update(void *__this)

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
  
  if (*(char *)((long)__this + 0x30) != '\0') {
    CarReplay__APIAJKNHKCK(__this);
    CarReplay__CDECHFLJBOI(__this);
  }
  if (*(char *)((long)__this + 0x3c) == '\0') {
    return;
  }
  CarReplay__OFAPJCDIEIO(__this);
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
  if ((0.0 < fVar3) && (fVar3 = (float)UnityEngine_Time__get_deltaTime(0), 0.0 < fVar3)) {
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
  return;
}



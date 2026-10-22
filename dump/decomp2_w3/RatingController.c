// ==== private void PLCDDDDLCBB() { }   @0xaf68d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__PLCDDDDLCBB(void *__this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lStack_68;
  
  if ((bRam0000000001916ee2 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_GUIRating___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__100);
    bRam0000000001916ee2 = 1;
  }
  lVar8 = *(long *)((long)__this + 0xb0);
  if (lVar8 == 0) {
    return;
  }
  if (*(uint *)((long)__this + 0x48) < **(uint **)(lVar8 + 0x10)) {
    lVar10 = *(long *)(*(uint **)(lVar8 + 0x10) + 4);
    if (*(uint *)((long)__this + 0x60) < (uint)lVar10) {
      lVar8 = *(long *)(lVar8 + ((long)(int)*(uint *)((long)__this + 0x60) +
                                lVar10 * (int)*(uint *)((long)__this + 0x48)) * 8 + 0x20);
      if (lVar8 == 0) {
        return;
      }
      if (*(long *)(lVar8 + 0x18) == 0) {
        return;
      }
      RatingController__HPAFDOMPACP(__this);
      RatingController__GGOIKHNAIJB(__this,1);
      if (*(int *)(lVar8 + 0x18) < 1) {
        return;
      }
      uVar15 = 0;
      lVar10 = lVar8 + 0x20;
      while( true ) {
        uVar5 = *(undefined8 *)((long)__this + 0x88);
        uVar2 = *(undefined8 *)((long)__this + 0x90);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = UnityEngine_Object__Instantiate_object_
                          (uVar2,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
        if (lVar4 == 0) goto LAB_00bf6cfc;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar4,&lStack_68,_Method_UnityEngine_GameObject_GetComponent_GUIRating___);
        lVar4 = lStack_68;
        uVar14 = (uint)uVar15;
        if ((uVar15 & 1) == 0) {
          if ((lStack_68 == 0) || (*(long *)(lStack_68 + 0x20) == 0)) goto LAB_00bf6cfc;
          UnityEngine_Behaviour__set_enabled(*(long *)(lStack_68 + 0x20),1,0);
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) || (lVar4 == 0)) goto LAB_00bf6cfc;
        piVar1 = (int *)(lVar9 + 0x10);
        plVar11 = *(long **)(lVar4 + 0x28);
        if (*piVar1 == -1) {
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          lVar9 = *plVar11;
          uVar5 = _Str__100;
        }
        else {
          uVar5 = System_Int32__ToString(piVar1,0);
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          lVar9 = *plVar11;
        }
        (**(code **)(lVar9 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(lVar9 + 0x5b0));
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00bf6cfc;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) ||
           (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x50), lVar6 == 0))
        goto LAB_00bf6cfc;
        uVar5 = BridgePHP__GetCountryTextureFromID(lVar6,*(undefined4 *)(lVar9 + 0x20),0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar7 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(lVar4 + 0x30) == 0) goto LAB_00bf6cfc;
          UnityEngine_UI_Image__set_sprite(*(long *)(lVar4 + 0x30),uVar5,0);
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if ((lVar9 == 0) || (plVar11 = *(long **)(lVar4 + 0x38), plVar11 == (long *)0x0))
        goto LAB_00bf6cfc;
        (**(code **)(*plVar11 + 0x5a8))
                  (plVar11,*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(*plVar11 + 0x5b0));
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if (lVar9 == 0) goto LAB_00bf6cfc;
        plVar11 = *(long **)(lVar4 + 0x50);
        uVar5 = System_Int32__ToString(lVar9 + 0x24,0);
        if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
        (**(code **)(*plVar11 + 0x5a8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5b0));
        if (*(uint *)(lVar8 + 0x18) <= uVar14) break;
        lVar9 = *(long *)(lVar10 + uVar15 * 8);
        if (lVar9 == 0) goto LAB_00bf6cfc;
        if (*(int *)(lVar9 + 0x10) == -1) {
LAB_00bf6c18:
          plVar11 = *(long **)(lVar4 + 0x20);
          if (plVar11 == (long *)0x0) {
LAB_00bf6cfc:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          (**(code **)(*plVar11 + 0x2a8))
                    (*(undefined4 *)((long)__this + 0x98),*(undefined4 *)((long)__this + 0x9c),
                     *(undefined4 *)((long)__this + 0xa0),*(undefined4 *)((long)__this + 0xa4),
                     plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
          if (*(long *)(lVar4 + 0x20) == 0) goto LAB_00bf6cfc;
          UnityEngine_Behaviour__set_enabled(*(long *)(lVar4 + 0x20),1,0);
          plVar11 = *(long **)(lVar4 + 0x50);
          if (plVar11 == (long *)0x0) goto LAB_00bf6cfc;
          plVar12 = *(long **)(lVar4 + 0x28);
          plVar13 = *(long **)(lVar4 + 0x38);
          (**(code **)(*plVar11 + 0x2a8))
                    (0,0,0,0x3f800000,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
          if ((plVar13 == (long *)0x0) ||
             ((**(code **)(*plVar13 + 0x2a8))
                        (0,0,0,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)),
             plVar12 == (long *)0x0)) goto LAB_00bf6cfc;
          (**(code **)(*plVar12 + 0x2a8))
                    (0,0,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
        }
        else {
          iVar3 = *(int *)(lVar9 + 0x14);
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
          lVar9 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
          if (lVar9 == 0) goto LAB_00bf6cfc;
          if (iVar3 == *(int *)(lVar9 + 0x10)) goto LAB_00bf6c18;
        }
        uVar15 = uVar15 + 1;
        if (*(int *)(lVar8 + 0x18) <= (int)uVar15) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== public IEnumerator LDGNMLFKAKM() { }   @0xaf7280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * RatingController__LDGNMLFKAKM(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916ee5 & 1) == 0) {
    func_0x00a67900(&RatingController_MPMOFDOCDBD_TypeInfo);
    bRam0000000001916ee5 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_RatingController_MPMOFDOCDBD_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public void SegmentOnChangeToggle(int type) { }   @0xaf7424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__SegmentOnChangeToggle(void *__this,int type)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lStack_58;
  
  if ((bRam0000000001916ee6 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916ee6 = 1;
  }
  if (*(char *)((long)__this + 0x30) == '\0') {
    lVar6 = *(long *)((long)__this + 0x68);
    if (lVar6 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar4 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar4,0), lVar2 == 0))
        goto LAB_00bf75f0;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                  (lVar2,&lStack_58,_Method_UnityEngine_GameObject_GetComponent_RectTransform___);
        lVar2 = lStack_58;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar2 == 0) goto LAB_00bf75f0;
          uVar8 = UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
          uVar9 = 0;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            uVar9 = 0xc1200000;
          }
          UnityEngine_RectTransform__set_anchoredPosition(uVar8,uVar9,lVar2,0);
        }
        uVar5 = *(undefined8 *)((long)__this + 0x78);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)((long)__this + 0x78) == 0) goto LAB_00bf75f0;
          uVar9 = 0xc2680000;
          if (*(char *)(lVar4 + 0x120) != '\0') {
            uVar9 = 0x42680000;
          }
          UnityEngine_RectTransform__set_anchoredPosition
                    (uVar9,0xc1a00000,*(long *)((long)__this + 0x78),0);
        }
        if ((type == uVar7) && (*(char *)(lVar4 + 0x120) != '\0')) {
          lVar4 = UnityEngine_Component__get_transform(lVar4,0);
          if (lVar4 == 0) goto LAB_00bf75f0;
          UnityEngine_Transform__SetAsLastSibling(lVar4,0);
          *(int *)((long)__this + 0x60) = type;
          RatingController__OJBAJGILIJN(__this,*(undefined4 *)((long)__this + 0x48),type);
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
  }
  return;
}


// ==== public void IELAOINFAPI() { }   @0xaf778c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RatingController__IELAOINFAPI(void *__this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lStack_58;
  
  if (*(long *)((long)__this + 0x58) != 0) {
    uVar4 = UnityEngine_GameObject__get_activeSelf(*(long *)((long)__this + 0x58),0);
    if ((((uVar4 & 1) == 0) || (*(char *)((long)__this + 0x30) != '\0')) ||
       (*(int *)((long)__this + 0x60) < 1)) {
      return;
    }
    lVar5 = *(long *)((long)__this + 0x68);
    *(undefined4 *)((long)__this + 0x60) = 0;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      if (*(long *)(lVar5 + 0x20) != 0) {
        UnityEngine_UI_Toggle__set_isOn(*(long *)(lVar5 + 0x20),1,0);
        uVar2 = *(uint *)((long)__this + 0x60);
        if ((bRam0000000001916ee6 & 1) == 0) {
          func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
          func_0x00a67900(&UnityEngine_Object_TypeInfo);
          bRam0000000001916ee6 = 1;
        }
        if (*(char *)((long)__this + 0x30) == '\0') {
          lVar5 = *(long *)((long)__this + 0x68);
          if (lVar5 == 0) {
LAB_00bf75f0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (0 < (int)uVar1) {
            uVar8 = 0;
            do {
              if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b58();
              }
              lVar6 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
              if ((lVar6 == 0) ||
                 (lVar3 = UnityEngine_Component__get_gameObject(lVar6,0), lVar3 == 0))
              goto LAB_00bf75f0;
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                        (lVar3,&lStack_58,
                         _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
              lVar3 = lStack_58;
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
              if ((uVar4 & 1) != 0) {
                if (lVar3 == 0) goto LAB_00bf75f0;
                uVar9 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                uVar10 = 0;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0xc1200000;
                }
                UnityEngine_RectTransform__set_anchoredPosition(uVar9,uVar10,lVar3,0);
              }
              uVar7 = *(undefined8 *)((long)__this + 0x78);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
              if ((uVar4 & 1) != 0) {
                if (*(long *)((long)__this + 0x78) == 0) goto LAB_00bf75f0;
                uVar10 = 0xc2680000;
                if (*(char *)(lVar6 + 0x120) != '\0') {
                  uVar10 = 0x42680000;
                }
                UnityEngine_RectTransform__set_anchoredPosition
                          (uVar10,0xc1a00000,*(long *)((long)__this + 0x78),0);
              }
              if ((uVar2 == uVar8) && (*(char *)(lVar6 + 0x120) != '\0')) {
                lVar6 = UnityEngine_Component__get_transform(lVar6,0);
                if (lVar6 == 0) goto LAB_00bf75f0;
                UnityEngine_Transform__SetAsLastSibling(lVar6,0);
                *(uint *)((long)__this + 0x60) = uVar2;
                RatingController__OJBAJGILIJN(__this,*(undefined4 *)((long)__this + 0x48),uVar2);
              }
              uVar1 = *(uint *)(lVar5 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)uVar1);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



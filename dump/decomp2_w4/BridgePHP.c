// ==== public void SetServerStatusIcon(Color col) { }   @0xad9a74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SetServerStatusIcon(void *__this,float col_r,float col_g,float col_b,float col_a)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  
  if ((bRam0000000001916e0d & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916e0d = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
LAB_00bd9c70:
      *(float *)((long)__this + 0x90) = col_r;
      *(float *)((long)__this + 0x94) = col_g;
      *(float *)((long)__this + 0x98) = col_b;
      *(float *)((long)__this + 0x9c) = col_a;
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3a0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar1 & 1) == 0) goto LAB_00bd9c70;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = System_String__op_Inequality
                        (*(undefined8 *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x10),_Str_,0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(int **)(_BridgePHP_TypeInfo + 0xb8) != 0xb) goto LAB_00bd9c70;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
          (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) &&
         (plVar2 = *(long **)(lVar3 + 0x3a0), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x2a8))
                  (CONCAT44(in_register_00005004,col_r),CONCAT44(in_register_00005024,col_g),
                   CONCAT44(in_register_00005044,col_b),CONCAT44(in_register_00005064,col_a),plVar2,
                   *(undefined8 *)(*plVar2 + 0x2b0));
        if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
            (lVar3 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar3 != 0)) &&
           ((lVar3 = *(long *)(lVar3 + 0x3a0), lVar3 != 0 &&
            (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 != 0)))) {
          UnityEngine_GameObject__SetActive(lVar3,1,0);
          goto LAB_00bd9c70;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void UnlockAchievement(string achievID) { }   @0xadaedc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__UnlockAchievement(void *__this,void *achievID)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e12 & 1) == 0) {
    func_0x00a67900(&System_Action_bool__TypeInfo);
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_ILocalUser_TypeInfo);
    func_0x00a67900(&Method_BridgePHP___c__UnlockAchievement_b__52_0__);
    func_0x00a67900(&BridgePHP___c_TypeInfo);
    bRam0000000001916e12 = 1;
  }
  if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Application__get_isEditor(0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)UnityEngine_Social__get_localUser(0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ILocalUser_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00bdafd0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)
             func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ILocalUser_TypeInfo,0);
LAB_00bdafd0:
    uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x2b) != '\0') {
        if (*(int *)(_BridgePHP___c_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = *(long *)(*(long *)(_BridgePHP___c_TypeInfo + 0xb8) + 8);
        if (lVar4 == 0) {
          if (*(int *)(_BridgePHP___c_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = **(undefined8 **)(_BridgePHP___c_TypeInfo + 0xb8);
          lVar4 = func_0x00a67b44(_System_Action_bool__TypeInfo);
          System_Action___Il2CppFullySharedGenericType____ctor
                    (lVar4,uVar7,_Method_BridgePHP___c__UnlockAchievement_b__52_0__,0);
          *(long *)(*(long *)(_BridgePHP___c_TypeInfo + 0xb8) + 8) = lVar4;
        }
        if ((bRam000000000191cc8c & 1) == 0) {
          func_0x00a67900(&UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,lVar4,0);
          bRam000000000191cc8c = 1;
        }
        plVar2 = (long *)UnityEngine_SocialPlatforms_ActivePlatform__get_Instance();
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        lVar5 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_014a5ad0;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)
                 func_0x00a9e6c4(plVar2,_UnityEngine_SocialPlatforms_ISocialPlatform_TypeInfo,1);
LAB_014a5ad0:
                    /* WARNING: Could not recover jumptable at 0x014a5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(0x4059000000000000,plVar2,achievID,lVar4,puVar3[1]);
        return;
      }
    }
  }
  return;
}


// ==== public void StopServerConnect() { }   @0xadb0ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__StopServerConnect(void *__this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_3c;
  long *aplStack_38 [2];
  
  if ((bRam0000000001916e16 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Coroutine_stopped_);
    func_0x00a67900(&Str_server_coroutine_is_NULL);
    bRam0000000001916e16 = 1;
  }
  if (*(long *)((long)__this + 0x68) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_server_coroutine_is_NULL,0);
  }
  else {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,*(long *)((long)__this + 0x68),0);
  }
  *(undefined2 *)((long)__this + 0x78) = 0;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = _Str_Coroutine_stopped_;
  if ((bRam0000000001917206 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917206 = 1;
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
  lVar6 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar6 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = DAFNMLEKHAD__LLEFEIHEJDE(lVar6,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_Debug__Log(plVar2,0);
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) == 0) goto LAB_00c590c8;
  uVar8 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) || (plVar2 == (long *)0x0)) goto LAB_00c590c8;
  lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
  uVar8 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  if (lVar6 == 0) goto LAB_00c590c8;
  if ((bRam0000000001916fbb & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar8,0,0);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&float_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str____color___);
    func_0x00a67900(&Str__FF4E4A);
    func_0x00a67900(&Str__0_f2_);
    func_0x00a67900(&Str___);
    func_0x00a67900(&Str__78e938);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str__color_);
    bRam0000000001916fbb = 1;
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  if ((plVar2 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar3 == 0))
  goto LAB_00c16768;
  if (10000 < *(int *)(lVar3 + 0x10)) {
    if (*(long *)(lVar6 + 0x1e8) == 0) goto LAB_00c16768;
    uVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar6 + 0x1e8),0);
    if ((*(long *)(lVar6 + 0x1e8) == 0) ||
       (lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar6 + 0x1e8),0), lVar3 == 0))
    goto LAB_00c16768;
    uVar5 = UnityEngine_Transform__get_parent(lVar3,0);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    lVar3 = UnityEngine_Object__Instantiate_object_
                      (uVar4,uVar5,_Method_UnityEngine_Object_Instantiate_GameObject___);
    if (lVar3 == 0) goto LAB_00c16768;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar3,aplStack_38,_Method_UnityEngine_GameObject_GetComponent_Text___);
    *(long **)(lVar6 + 0x1e8) = aplStack_38[0];
    if (aplStack_38[0] == (long *)0x0) goto LAB_00c16768;
    (**(code **)(*aplStack_38[0] + 0x5a8))
              (aplStack_38[0],_Str_,*(undefined8 *)(*aplStack_38[0] + 0x5b0));
  }
  plVar2 = *(long **)(lVar6 + 0x1e8);
  lVar6 = func_0x00a679a0(_string___TypeInfo,8);
  if ((plVar2 != (long *)0x0) &&
     (uVar4 = (**(code **)(*plVar2 + 0x598))(plVar2,*(undefined8 *)(*plVar2 + 0x5a0)), lVar6 != 0))
  {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((uVar1 != 0) &&
       (((*(undefined8 *)(lVar6 + 0x20) = uVar4, uVar1 != 1 &&
         (*(undefined8 *)(lVar6 + 0x28) = _Str__color_, 2 < uVar1)) &&
        (*(undefined8 *)(lVar6 + 0x30) = _Str__78e938, uVar1 != 3)))) {
      *(undefined8 *)(lVar6 + 0x38) = _Str___;
      uStack_3c = UnityEngine_Time__get_time(0);
      uVar4 = func_0x00a67a38(_float_TypeInfo,&uStack_3c);
      uVar4 = System_String__Format(_Str__0_f2_,uVar4,0);
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (((4 < uVar1) && (*(undefined8 *)(lVar6 + 0x40) = uVar4, uVar1 != 5)) &&
         (*(undefined8 *)(lVar6 + 0x48) = _Str____color___, 6 < uVar1)) {
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar8 = System_Environment__get_NewLine(0);
        if (7 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x58) = uVar8;
          uVar8 = System_String__Concat(lVar6,0);
          (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar8,*(undefined8 *)(*plVar2 + 0x5b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void ResetCheckEventTimer() { }   @0xadb880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__ResetCheckEventTimer(void *__this)

{
  float fVar1;
  
  if ((bRam0000000001916e1b & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916e1b = 1;
  }
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (*(char *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x5c) != '\0') {
    fVar1 = (float)UnityEngine_Time__get_time(0);
    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    *(float *)(*(long *)(_BridgePHP_TypeInfo + 0xb8) + 0x58) = fVar1 + 5.0;
  }
  return;
}


// ==== private void SiteLock() { }   @0xadc4b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP__SiteLock(void *__this)

{
  bool bVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001916e20 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_SiteLock_);
    bRam0000000001916e20 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
        (lVar6 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar6 != 0)) &&
       (pvVar3 = *(void **)(lVar6 + 0x168), pvVar3 != (void *)0x0)) {
      GUIWindow__HEGIHOAJOKK(pvVar3,false);
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
      pvVar3 = *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (pvVar3 != (void *)0x0) {
        bVar1 = DAFNMLEKHAD__LKKDIBOKNMJ(pvVar3);
        if (bVar1) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (*(char *)(*(long *)(_Menu_TypeInfo + 0xb8) + 0xc) != '\0') {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
            if (lVar6 == 0) goto LAB_00bdc748;
            uVar2 = UnityEngine_AudioSource__get_isPlaying(lVar6,0);
            if ((uVar2 & 1) != 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar6 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x98);
              if (lVar6 == 0) goto LAB_00bdc748;
              UnityEngine_AudioSource__Stop(lVar6,0);
            }
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_SiteLock_,false);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
          uVar7 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((**(long **)(_Menu_TypeInfo + 0xb8) != 0) &&
             (*(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40) != 0)) {
            uVar7 = *(undefined8 *)((long)__this + 0x80);
            uVar5 = *(undefined8 *)((long)__this + 0x88);
            if ((bRam0000000001916ebd & 1) == 0) {
              func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object__Add__,
                              uVar7,uVar5,0);
              func_0x00a67900(&Method_System_Collections_Generic_Dictionary_string__object___ctor__)
              ;
              func_0x00a67900(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
              func_0x00a67900(&Main_TypeInfo);
              func_0x00a67900(&Str_parent);
              func_0x00a67900(&Str_ANALYTICS__SiteLockActivated__);
              func_0x00a67900(&Str___);
              func_0x00a67900(&Str_SiteLockActivated);
              func_0x00a67900(&Str_frame);
              bRam0000000001916ebd = 1;
            }
            pvVar3 = (void *)System_String__Concat
                                       (_Str_ANALYTICS__SiteLockActivated__,uVar7,_Str___,uVar5,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__GEMDEAMAGPG(pvVar3,false);
            lVar6 = func_0x00a67b44(_System_Collections_Generic_Dictionary_string__object__TypeInfo)
            ;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                      (lVar6,_Method_System_Collections_Generic_Dictionary_string__object___ctor__);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar6,_Str_frame,uVar7,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add
                      (lVar6,_Str_parent,uVar5,
                       _Method_System_Collections_Generic_Dictionary_string__object__Add__);
            uVar7 = _Str_SiteLockActivated;
            if ((bRam000000000191f039 & 1) == 0) {
              func_0x00a67900(&UnityEngine_Analytics_CustomEventData_TypeInfo,lVar6,0);
              bRam000000000191f039 = 1;
            }
            uVar2 = System_String__IsNullOrEmpty(uVar7,0);
            if ((uVar2 & 1) == 0) {
              if (pcRam000000000191f018 == (code *)0x0) {
                pcRam000000000191f018 = (code *)func_0x00a678c4(&UNK_005b33ed);
              }
              uVar2 = (*pcRam000000000191f018)();
              if ((uVar2 & 1) != 0) {
                if (lVar6 == 0) {
                  if (pcRam000000000191f028 == (code *)0x0) {
                    pcRam000000000191f028 = (code *)func_0x00a678c4(&UNK_005a1d8e);
                  }
                    /* WARNING: Could not recover jumptable at 0x016d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam000000000191f028)(uVar7);
                  return;
                }
                lVar4 = func_0x00a67b44(_UnityEngine_Analytics_CustomEventData_TypeInfo);
                UnityEngine_Analytics_CustomEventData___ctor(lVar4,uVar7);
                if (lVar4 == 0) goto LAB_016d9194;
                UnityEngine_Analytics_CustomEventData__AddDictionary(lVar4,lVar6);
                if (pcRam000000000191f030 == (code *)0x0) {
                  pcRam000000000191f030 = (code *)func_0x00a678c4(&UNK_005a0017);
                }
                (*pcRam000000000191f030)(lVar4);
                UnityEngine_Analytics_CustomEventData__Dispose(lVar4);
              }
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar7 = func_0x00a67b44();
            uVar5 = func_0x00a67914(&Str_Cannot_set_custom_event_name_to_an_empty);
            System_ArgumentException___ctor(uVar7,uVar5,0);
            uVar5 = func_0x00a67914(&Method_UnityEngine_Analytics_Analytics_CustomEvent__);
            func_0x00a67a20(uVar7,uVar5);
LAB_016d9194:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
        }
      }
    }
  }
LAB_00bdc748:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void <SyncAchievements>b__54_0(IAchievement[] soc_achievements) { }   @0xadece8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BridgePHP___SyncAchievements_b__54_0(void *__this,void *soc_achievements)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uStack_80;
  byte abStack_74 [4];
  undefined8 uStack_70;
  uint uStack_64;
  
  if ((bRam0000000001916e24 & 1) == 0) {
    func_0x00a67900(&bool_TypeInfo);
    func_0x00a67900(&System_DateTime_TypeInfo);
    func_0x00a67900(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_SOCIAL__My_achievements__);
    func_0x00a67900(&Str_SOCIAL__Got_);
    func_0x00a67900(&Str_SOCIAL__No_achievements_returned);
    func_0x00a67900(&Str_SOCIAL__);
    func_0x00a67900(&Str__achievement_instances);
    bRam0000000001916e24 = 1;
  }
  uStack_70 = 0;
  abStack_74[0] = 0;
  uStack_80 = 0;
  if (soc_achievements != (void *)0x0) {
    uStack_64 = (uint)*(undefined8 *)((long)soc_achievements + 0x18);
    uVar1 = System_Int32__ToString(&uStack_64,0);
    pvVar2 = (void *)System_String__Concat(_Str_SOCIAL__Got_,uVar1,_Str__achievement_instances,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Main_TypeInfo);
    }
    Main__GEMDEAMAGPG(pvVar2,false);
    if (**(long **)(_Main_TypeInfo + 0xb8) != 0) {
      lVar10 = *(long *)(**(long **)(_Main_TypeInfo + 0xb8) + 0x40);
      uStack_64 = 0;
      if (lVar10 != 0) {
        uVar7 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar7) {
          do {
            if (uVar7 <= uStack_64) goto LAB_00bdf430;
            lVar11 = *(long *)(lVar10 + (long)(int)uStack_64 * 8 + 0x20);
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
            if ((lVar11 == 0) ||
               (lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8), lVar3 == 0))
            goto LAB_00bdf434;
            uVar4 = DAFNMLEKHAD__HIFFBAOPBGD(lVar3,*(undefined4 *)(lVar11 + 0x10),0);
            if ((uVar4 & 1) == 0) {
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
              lVar3 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
              if (lVar3 == 0) goto LAB_00bdf434;
              uVar4 = DAFNMLEKHAD__OFOJMCJAGFD(lVar3,*(undefined4 *)(lVar11 + 0x10),0);
              if ((uVar4 & 1) != 0) goto LAB_00bdef2c;
            }
            else {
LAB_00bdef2c:
              uVar7 = *(uint *)((long)soc_achievements + 0x18);
              if (0 < (int)uVar7) {
                uVar12 = 0;
                do {
                  if (uVar7 <= uVar12) goto LAB_00bdf430;
                  plVar9 = *(long **)((long)soc_achievements + (long)(int)uVar12 * 8 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_00bdf434;
                  lVar3 = *plVar9;
                  uVar1 = *(undefined8 *)(lVar11 + 0x18);
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                        puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_00bdefa0;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar5 = (undefined8 *)
                           func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo
                                           ,0);
LAB_00bdefa0:
                  uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                  uVar4 = System_String__op_Equality(uVar1,uVar6,0);
                  if ((uVar4 & 1) != 0) {
                    lVar3 = *plVar9;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) ==
                            _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                          goto LAB_00bdf010;
                        }
                        uVar4 = uVar4 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar5 = (undefined8 *)
                             func_0x00a9e6c4(plVar9,
                                             _UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_00bdf010:
                    uVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                    if ((uVar4 & 1) == 0) {
                      lVar3 = *plVar9;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) ==
                              _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_00bdf06c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar5 = (undefined8 *)
                               func_0x00a9e6c4(plVar9,
                                               _UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0)
                      ;
LAB_00bdf06c:
                      pvVar2 = (void *)(*(code *)*puVar5)(plVar9,puVar5[1]);
                      BridgePHP__UnlockAchievement(pvVar2,pvVar2);
                    }
                  }
                  uVar7 = *(uint *)((long)soc_achievements + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)uVar7);
              }
            }
            uStack_64 = uStack_64 + 1;
            uVar7 = *(uint *)(lVar10 + 0x18);
          } while ((int)uStack_64 < (int)uVar7);
        }
        uVar4 = *(ulong *)((long)soc_achievements + 0x18);
        if (uVar4 == 0) {
          pvVar2 = _Str_SOCIAL__No_achievements_returned;
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            pvVar2 = _Str_SOCIAL__No_achievements_returned;
          }
        }
        else {
          uStack_64 = 0;
          uVar1 = _Str_SOCIAL__My_achievements__;
          if (0 < (int)uVar4) {
LAB_00bdf0f4:
            if ((uint)uVar4 <= uStack_64) {
LAB_00bdf430:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            plVar9 = *(long **)((long)soc_achievements + (long)(int)uStack_64 * 8 + 0x20);
            lVar10 = func_0x00a679a0(_string___TypeInfo,10);
            if (lVar10 == 0) goto LAB_00bdf434;
            if ((*(int *)(lVar10 + 0x18) == 0) ||
               (*(undefined8 *)(lVar10 + 0x20) = uVar1, *(int *)(lVar10 + 0x18) == 1))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x28) = _Str__;
            if (plVar9 == (long *)0x0) goto LAB_00bdf434;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_00bdf18c;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0);
LAB_00bdf18c:
            uVar1 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if ((*(uint *)(lVar10 + 0x18) < 3) ||
               (*(undefined8 *)(lVar10 + 0x30) = uVar1, *(uint *)(lVar10 + 0x18) == 3))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x38) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_00bdf208;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,1);
LAB_00bdf208:
            uStack_70 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            uVar1 = System_Double__ToString(&uStack_70,0);
            if ((*(uint *)(lVar10 + 0x18) < 5) ||
               (*(undefined8 *)(lVar10 + 0x40) = uVar1, *(uint *)(lVar10 + 0x18) == 5))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x48) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                  goto LAB_00bdf294;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_00bdf294:
            abStack_74[0] = (*(code *)*puVar5)(plVar9,puVar5[1]);
            abStack_74[0] = abStack_74[0] & 1;
            if (*(int *)(_bool_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_bool_TypeInfo);
            }
            uVar1 = System_Boolean__ToString(abStack_74,0);
            if ((*(uint *)(lVar10 + 0x18) < 7) ||
               (*(undefined8 *)(lVar10 + 0x50) = uVar1, *(uint *)(lVar10 + 0x18) == 7))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x58) = _Str__;
            lVar11 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_00bdf338;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar5 = (undefined8 *)
                     func_0x00a9e6c4(plVar9,_UnityEngine_SocialPlatforms_IAchievement_TypeInfo,3);
LAB_00bdf338:
            uStack_80 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (*(int *)(_System_DateTime_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_System_DateTime_TypeInfo);
            }
            uVar1 = System_DateTime__ToString(&uStack_80,0);
            if ((*(uint *)(lVar10 + 0x18) < 9) ||
               (*(undefined8 *)(lVar10 + 0x60) = uVar1, *(uint *)(lVar10 + 0x18) == 9))
            goto LAB_00bdf430;
            *(undefined8 *)(lVar10 + 0x68) = _Str__;
            uVar1 = System_String__Concat(lVar10,0);
            uStack_64 = uStack_64 + 1;
            uVar4 = (ulong)*(uint *)((long)soc_achievements + 0x18);
            if ((int)uStack_64 < (int)*(uint *)((long)soc_achievements + 0x18)) goto LAB_00bdf0f4;
          }
          pvVar2 = (void *)System_String__Concat(_Str_SOCIAL__,uVar1,0);
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Main_TypeInfo);
          }
        }
        Main__GEMDEAMAGPG(pvVar2,false);
        return;
      }
    }
  }
LAB_00bdf434:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



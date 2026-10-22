// ==== public static bool OBEOCBNIFNF(string MCPCPOKDOMH) { }   @0xb5da18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Main__OBEOCBNIFNF(void *MCPCPOKDOMH)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int extraout_w1;
  long lVar8;
  bool bVar9;
  int iVar10;
  float fStack_98;
  int iStack_94;
  code *pcStack_90;
  long *plStack_88;
  void *pvStack_78;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000001917201 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_Call_int___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_Get_string___);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&Str_getInstalledPackages);
    func_0x00a67900(&Str_packageName);
    func_0x00a67900(&Str_size);
    func_0x00a67900(&Str_com_unity3d_player_UnityPlayer);
    func_0x00a67900(&Str_get);
    func_0x00a67900(&Str_getPackageManager);
    func_0x00a67900(&Str_currentActivity);
    bRam0000000001917201 = 1;
  }
  lVar4 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(lVar4,_Str_com_unity3d_player_UnityPlayer,0);
  if (lVar4 != 0) {
    UnityEngine_AndroidJavaObject__GetStatic___Il2CppFullySharedGenericType_
              (lVar4,_Str_currentActivity,&iStack_68,
               _Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    lVar5 = _Method_System_Array_Empty_object___;
    lVar4 = CONCAT44(uStack_64,iStack_68);
    lVar8 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
    if (lVar8 == 0) {
      func_0x00a9e42c(_Method_System_Array_Empty_object___);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x00a9e3d0();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x00a9e3d0();
    }
    if (lVar4 != 0) {
      UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType_
                (lVar4,_Str_getPackageManager,**(undefined8 **)(lVar5 + 0xb8),&iStack_68,
                 _Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
      lVar4 = CONCAT44(uStack_64,iStack_68);
      plVar6 = (long *)func_0x00a679a0(_object___TypeInfo,1);
      iStack_6c = 0;
      lVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_6c);
      if (plVar6 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar8 = func_0x00a67a34(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_00c5ddec:
          uVar7 = func_0x00a67b74();
          iVar3 = func_0x00a67a20(uVar7,0);
          pcStack_90 = Main__HIIJGDANAIK;
          iStack_94 = iVar3;
          plStack_88 = plVar6;
          pvStack_78 = MCPCPOKDOMH;
          if ((bRam0000000001917202 & 1) == 0) {
            func_0x00a67900(&Str_F1);
            bRam0000000001917202 = 1;
          }
          fStack_98 = 0.0;
          if (extraout_w1 == 5) {
            fStack_98 = (float)iVar3 / 10.0;
            uVar1 = System_Single__ToString(&fStack_98,_Str_F1,0);
          }
          else {
            uVar1 = System_Int32__ToString(&iStack_94,0);
          }
          return (bool)uVar1;
        }
        if ((int)plVar6[3] == 0) {
LAB_00c5dde8:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        plVar6[4] = lVar5;
        if (lVar4 != 0) {
          UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType_
                    (lVar4,_Str_getInstalledPackages,plVar6,&iStack_68,
                     _Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
          lVar5 = _Method_System_Array_Empty_object___;
          lVar4 = CONCAT44(uStack_64,iStack_68);
          lVar8 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
          if (lVar8 == 0) {
            func_0x00a9e42c(_Method_System_Array_Empty_object___);
            lVar8 = *(long *)(lVar5 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = func_0x00a9e3d0();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = func_0x00a9e3d0();
          }
          if (lVar4 != 0) {
            UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType_
                      (lVar4,_Str_size,**(undefined8 **)(lVar5 + 0xb8),&iStack_68,
                       _Method_UnityEngine_AndroidJavaObject_Call_int___);
            iVar3 = iStack_68;
            if (iStack_68 < 1) {
              bVar9 = false;
            }
            else {
              iVar10 = 0;
              bVar9 = true;
              do {
                plVar6 = (long *)func_0x00a679a0(_object___TypeInfo,1);
                iStack_6c = iVar10;
                lVar5 = func_0x00a67a38(_int_TypeInfo,&iStack_6c);
                if (plVar6 == (long *)0x0) goto LAB_00c5dde4;
                if ((lVar5 != 0) &&
                   (lVar8 = func_0x00a67a34(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_00c5ddec;
                if ((int)plVar6[3] == 0) goto LAB_00c5dde8;
                plVar6[4] = lVar5;
                UnityEngine_AndroidJavaObject__Call___Il2CppFullySharedGenericType_
                          (lVar4,_Str_get,plVar6,&iStack_68,
                           _Method_UnityEngine_AndroidJavaObject_Call_AndroidJavaObject___);
                if (CONCAT44(uStack_64,iStack_68) == 0) goto LAB_00c5dde4;
                UnityEngine_AndroidJavaObject__Get___Il2CppFullySharedGenericType_
                          (CONCAT44(uStack_64,iStack_68),_Str_packageName,&iStack_68,
                           _Method_UnityEngine_AndroidJavaObject_Get_string___);
                if (CONCAT44(uStack_64,iStack_68) == 0) goto LAB_00c5dde4;
                iVar2 = System_String__CompareTo(CONCAT44(uStack_64,iStack_68),MCPCPOKDOMH,0);
                if (iVar2 == 0) {
                  return bVar9;
                }
                iVar10 = iVar10 + 1;
                bVar9 = iVar10 < iVar3;
              } while (iVar3 != iVar10);
            }
            return bVar9;
          }
        }
      }
    }
  }
LAB_00c5dde4:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void JIBOFEPNLIB() { }   @0xb5df10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__JIBOFEPNLIB(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001917205 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917205 = 1;
  }
  lVar3 = *(long *)((long)__this + 0x40);
  if (lVar3 == 0) {
LAB_00c5e0a8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      lVar5 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
      if (iVar1 == 8) {
LAB_00c5e030:
        if (lVar5 == 0) goto LAB_00c5e0a8;
        *(undefined4 *)(lVar5 + 0x30) = 500;
      }
      else {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar1 == 9) goto LAB_00c5e030;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar1 == 0xb) goto LAB_00c5e030;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar1 == 0xc) goto LAB_00c5e030;
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          iVar1 = **(int **)(_BridgePHP_TypeInfo + 0xb8);
        }
        if (iVar1 == 0xd) goto LAB_00c5e030;
        if (lVar5 == 0) goto LAB_00c5e0a8;
        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) * 0x1e;
      }
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x4c) =
       *(int *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x4c) * 0x1e;
  return;
}


// ==== public IEnumerator PHHOKLGPEEG(AudioSource OFELMIBEHHO, float GMFAMFJABMJ, MCBLACFGKKK PPBAKHIEGAD) { }   @0xb5e2fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main__PHHOKLGPEEG(void *__this,void *OFELMIBEHHO,float GMFAMFJABMJ,int PPBAKHIEGAD)

{
  void *pvVar1;
  
  if ((bRam000000000191720a & 1) == 0) {
    func_0x00a67900(&Main_NEFHOJFJODH_TypeInfo);
    bRam000000000191720a = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_Main_NEFHOJFJODH_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x28) = OFELMIBEHHO;
  *(float *)((long)pvVar1 + 0x30) = GMFAMFJABMJ;
  *(int *)((long)pvVar1 + 0x20) = PPBAKHIEGAD;
  return pvVar1;
}


// ==== public void .ctor() { }   @0xb5e81c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main___ctor(void *__this)

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


// ==== public static int FAOGGIELDDF() { }   @0xb5eae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Main__FAOGGIELDDF(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iStack_14;
  
  if ((bRam0000000001917210 & 1) == 0) {
    func_0x00a67900(&Str_API_);
    bRam0000000001917210 = 1;
  }
  lVar2 = UnityEngine_SystemInfo__get_operatingSystem(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar1 = System_String__IndexOf(lVar2,_Str_API_,0);
  if (iVar1 < 1) {
    iStack_14 = -1;
  }
  else {
    uVar3 = System_String__Substring(lVar2,iVar1 + 4,2,0);
    iStack_14 = 0;
    uVar4 = System_Int32__TryParse(uVar3,&iStack_14,0);
    if ((uVar4 & 1) == 0) {
      iStack_14 = -1;
    }
  }
  return iStack_14;
}



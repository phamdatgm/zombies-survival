// ==== private void CKGMJNMBGJN(string FHOFNGHGNGF) { }   @0xb4d014

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__CKGMJNMBGJN(void *__this,void *FHOFNGHGNGF)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [12];
  long lStack_38;
  
  if ((bRam0000000001917178 & 1) == 0) {
    func_0x00a67900(&UnityEngine_AndroidJavaClass_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject___);
    func_0x00a67900(&Method_System_Array_Empty_object___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&object___TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_startSensorListening);
    func_0x00a67900(&Str_getInstance);
    func_0x00a67900(&Str_UnitySensorPlugin_is_null_);
    func_0x00a67900(&Str_jp_kshoji_unity_sensor_UnitySensorPlugin);
    func_0x00a67900(&Str_Accelerometer_problem__);
    func_0x00a67900(&Str_accelerometer);
    bRam0000000001917178 = 1;
  }
  uVar2 = System_String__Concat(_Str_Accelerometer_problem__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(uVar2,0);
  lVar3 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(lVar3,_Str_jp_kshoji_unity_sensor_UnitySensorPlugin,0);
  lVar4 = _Method_System_Array_Empty_object___;
  lVar10 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar10 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar10 = *(long *)(lVar4 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = func_0x00a9e3d0();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
            (lVar3,_Str_getInstance,**(undefined8 **)(lVar4 + 0xb8),&lStack_38,
             _Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject___);
  if (lStack_38 == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_UnitySensorPlugin_is_null_,0);
  }
  else {
    plVar5 = (long *)func_0x00a679a0(_object___TypeInfo,1);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((_Str_accelerometer == 0) ||
       (lVar4 = func_0x00a67a34(_Str_accelerometer,*(undefined8 *)(*plVar5 + 0x40)), lVar4 != 0)) {
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b58();
      }
      plVar5[4] = _Str_accelerometer;
      UnityEngine_AndroidJavaObject__Call(lStack_38,_Str_startSensorListening,plVar5,0);
    }
    else {
      uVar2 = func_0x00a67b74();
      auVar11 = func_0x00a67a20(uVar2,0);
      uVar2 = auVar11._0_8_;
      if (auVar11._8_4_ != 1) {
LAB_00c4d450:
        func_0x00b65214(uVar2);
        lVar4 = func_0x009bbf58();
        *(undefined1 *)(lVar4 + 0x2c) = 1;
        *(undefined4 *)(lVar4 + 0x30) = 0;
        if (pcRam000000000191c328 == (code *)0x0) {
          pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
        }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c328)(lVar4,1);
        return;
      }
      puVar7 = (undefined8 *)func_0x016dec50(uVar2);
      uVar2 = func_0x00a67914(&System_Exception_TypeInfo);
      uVar6 = func_0x00a67f7c(uVar2,*(undefined8 *)*puVar7);
      if ((uVar6 & 1) == 0) {
        puVar9 = (undefined8 *)func_0x016dec80(8);
        *puVar9 = *puVar7;
        uVar2 = func_0x016dec90(puVar9,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__016e4f48,0);
        func_0x016dec60();
        goto LAB_00c4d450;
      }
      plVar5 = (long *)*puVar7;
      func_0x016dec60();
      if (plVar5 == (long *)0x0) goto LAB_00c4d424;
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      uVar8 = func_0x00a67914(&Str_UnitySensorPlugin_problem__);
      uVar2 = System_String__Concat(uVar8,uVar2,0);
      lVar4 = func_0x00a67914(&Main_TypeInfo);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        func_0x00a67a30();
      }
      Main__EEKNCFLMGDP(uVar2,0);
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = **(undefined8 **)(_Menu_TypeInfo + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
    uVar2 = *(undefined8 *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_Menu_TypeInfo + 0xb8) != 0) {
      lVar4 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x40);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = Main__FAOGGIELDDF(0);
      if (lVar4 != 0) {
        AnalyticsController__CBPJCFHKMLE(lVar4,FHOFNGHGNGF,uVar1,0);
        return;
      }
    }
  }
LAB_00c4d424:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



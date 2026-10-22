/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class AccelerometerFix : MonoBehaviour // TypeDefIndex: 5252
{
	// Fields
	private bool MLDPNGLBMHG; // 0x20
	private float OPHGIBHAFEJ; // 0x24
	private float CNAGLGLEJMC; // 0x28
	private bool PIBBFFAOGKB; // 0x2C
	private float NBPPLGKCHIP; // 0x30

	// Methods

	private void CKGMJNMBGJN(string FHOFNGHGNGF) { }

	public void GLNOJMCENOE() { }

	private void Update() { }

	public void .ctor() { }

	public void EIOGCAFFGKO() { }
}
*/

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
  uVar2 = Menu.KECGFPHIEHF;
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
  if (Menu.KECGFPHIEHF != 0) {
    uVar2 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
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
    if (Menu.KECGFPHIEHF != 0) {
      lVar4 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
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


// ==== public void GLNOJMCENOE() { }   @0xb4d45c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__GLNOJMCENOE(void *__this)

{
  this.PIBBFFAOGKB = 1;
  this.NBPPLGKCHIP = 0;
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,1);
  return;
}


// ==== private void Update() { }   @0xb4d474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__Update(void *__this)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000001917179 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Accelerometer_checked__OK);
    func_0x00a67900(&Str_by_time);
    bRam0000000001917179 = 1;
  }
  if (this.MLDPNGLBMHG != '\0') {
    if (3.0 <= this.CNAGLGLEJMC) {
      this.MLDPNGLBMHG = 0;
      uVar1 = UnityEngine_Behaviour__set_enabled(__this,0,0);
      AccelerometerFix__CKGMJNMBGJN(uVar1,_Str_by_time);
    }
    else {
      fVar2 = (float)UnityEngine_Input__get_acceleration(0);
      if (fVar2 != this.OPHGIBHAFEJ) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main__GEMDEAMAGPG(_Str_Accelerometer_checked__OK,0,0);
        this.MLDPNGLBMHG = 0;
        UnityEngine_Behaviour__set_enabled(__this,0,0);
      }
    }
    fVar3 = this.CNAGLGLEJMC;
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    this.CNAGLGLEJMC = fVar3 + fVar2;
  }
  if (this.PIBBFFAOGKB != '\0') {
    fVar2 = this.NBPPLGKCHIP;
    if (0.7 < fVar2) {
      this.PIBBFFAOGKB = 0;
      AccelerometerFix__EIOGCAFFGKO(__this);
      fVar2 = this.NBPPLGKCHIP;
    }
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    this.NBPPLGKCHIP = fVar2 + fVar3;
  }
  return;
}


// ==== public void EIOGCAFFGKO() { }   @0xb4d5b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix__EIOGCAFFGKO(void *__this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  void *unaff_x19;
  void *FHOFNGHGNGF;
  void *__this_00;
  long *plVar11;
  undefined8 unaff_x20;
  long *unaff_x21;
  code *unaff_x30;
  undefined4 uVar12;
  undefined1 auVar13 [12];
  undefined1 auStack_40 [8];
  long alStack_38 [2];
  
  if ((bRam000000000191717a & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Str_Accelerometer__Checking___);
    func_0x00a67900(&Str_event_zero);
    bRam000000000191717a = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  Main__GEMDEAMAGPG(_Str_Accelerometer__Checking___,false);
  iVar2 = UnityEngine_Input__get_accelerationEventCount(0);
  FHOFNGHGNGF = _Str_event_zero;
  if (iVar2 != 0) {
    uVar12 = UnityEngine_Input__get_acceleration(0);
    this.OPHGIBHAFEJ = uVar12;
    this.CNAGLGLEJMC = 0;
    this.MLDPNGLBMHG = 1;
    puVar1 = (undefined1 *)register0x00000008;
    FHOFNGHGNGF = unaff_x19;
    goto UnityEngine_Behaviour__set_enabled;
  }
  puVar1 = auStack_40;
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
  uVar3 = System_String__Concat(_Str_Accelerometer_problem__,FHOFNGHGNGF,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__EEKNCFLMGDP(uVar3,0);
  lVar4 = func_0x00a67b44(_UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(lVar4,_Str_jp_kshoji_unity_sensor_UnitySensorPlugin,0);
  lVar5 = _Method_System_Array_Empty_object___;
  lVar10 = *(long *)(_Method_System_Array_Empty_object___ + 0x38);
  if (lVar10 == 0) {
    func_0x00a9e42c(_Method_System_Array_Empty_object___);
    lVar10 = *(long *)(lVar5 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x00a9e3d0();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = func_0x00a9e3d0();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  UnityEngine_AndroidJavaObject__CallStatic___Il2CppFullySharedGenericType_
            (lVar4,_Str_getInstance,**(undefined8 **)(lVar5 + 0xb8),alStack_38,
             _Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject___);
  if (alStack_38[0] == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_UnitySensorPlugin_is_null_,0);
  }
  else {
    unaff_x21 = (long *)func_0x00a679a0(_object___TypeInfo,1);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if ((_Str_accelerometer != 0) &&
       (lVar5 = func_0x00a67a34(_Str_accelerometer,*(undefined8 *)(*unaff_x21 + 0x40)), lVar5 == 0))
    {
      uVar3 = func_0x00a67b74();
      auVar13 = func_0x00a67a20(uVar3,0);
      unaff_x20 = auVar13._0_8_;
      if (auVar13._8_4_ == 1) {
        puVar7 = (undefined8 *)func_0x016dec50(unaff_x20);
        uVar3 = func_0x00a67914(&System_Exception_TypeInfo);
        uVar6 = func_0x00a67f7c(uVar3,*(undefined8 *)*puVar7);
        if ((uVar6 & 1) != 0) {
          plVar11 = (long *)*puVar7;
          func_0x016dec60();
          if (plVar11 == (long *)0x0) goto LAB_00c4d424;
          uVar3 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          uVar8 = func_0x00a67914(&Str_UnitySensorPlugin_problem__);
          uVar3 = System_String__Concat(uVar8,uVar3,0);
          lVar5 = func_0x00a67914(&Main_TypeInfo);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            func_0x00a67a30();
          }
          Main__EEKNCFLMGDP(uVar3,0);
          goto LAB_00c4d25c;
        }
        puVar9 = (undefined8 *)func_0x016dec80(8);
        *puVar9 = *puVar7;
        unaff_x20 = func_0x016dec90(puVar9,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__016e4f48,0
                                   );
        func_0x016dec60();
      }
      func_0x00b65214(unaff_x20);
      unaff_x30 = AccelerometerFix__GLNOJMCENOE;
      __this = (void *)func_0x009bbf58();
      this.PIBBFFAOGKB = 1;
      this.NBPPLGKCHIP = 0;
UnityEngine_Behaviour__set_enabled:
      *(code **)(puVar1 + -0x20) = unaff_x30;
      *(long **)(puVar1 + -0x18) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x10) = unaff_x20;
      *(void **)(puVar1 + -8) = FHOFNGHGNGF;
      if (pcRam000000000191c328 == (code *)0x0) {
        pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
      }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c328)(__this,1);
      return;
    }
    if ((int)unaff_x21[3] == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    unaff_x21[4] = _Str_accelerometer;
    UnityEngine_AndroidJavaObject__Call(alStack_38[0],_Str_startSensorListening,unaff_x21,0);
  }
LAB_00c4d25c:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar3 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF != 0) {
      __this_00 = Menu.KECGFPHIEHF.OJJAEEGGHJM;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      iVar2 = Main__FAOGGIELDDF(0);
      if (__this_00 != (void *)0x0) {
        AnalyticsController__CBPJCFHKMLE(__this_00,FHOFNGHGNGF,iVar2);
        return;
      }
    }
  }
LAB_00c4d424:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb4d67c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AccelerometerFix___ctor(void *__this)

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



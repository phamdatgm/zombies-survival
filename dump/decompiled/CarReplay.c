/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class CarReplay : MonoBehaviour // TypeDefIndex: 5059
{
	// Fields
	private CarController PEEMAHNEIHI; // 0x20
	public Transform LIEHBGFFHFF; // 0x28
	public bool EMDCJLCBJFJ; // 0x30
	public static string GJHAKPEMGCF; // 0x0
	public static Replay LHNOLEHPJON; // 0x8
	public static List<DDOBJBEDGLL> MNHJLEBDHHK; // 0x10
	public static List<DDOBJBEDGLL> HJPPNJKDEKF; // 0x18
	private int LIKGCKLECCK; // 0x34
	private int JFMDNCCPHMN; // 0x38
	private bool DKNMNCHBFBO; // 0x3C
	private bool PLECNHEEKBK; // 0x3D
	private bool LNNMJCIFMGH; // 0x3E
	private bool JJGGCNKJJNO; // 0x3F
	private float CDKJIPAIACE; // 0x40
	private Vector3 JHCCDJFEBCC; // 0x44
	private Vector3 IPHIIEPHGCC; // 0x50
	private Vector3 EBDAKFPLPPP; // 0x5C
	private float KJILHEDCDFO; // 0x68
	public List<Transform> LFNBGBNOLOA; // 0x70
	public List<float> NAMCKDFDAHE; // 0x78
	public List<float> BLMKFIOGALM; // 0x80
	public float JMFFPEBJCCE; // 0x88
	public float JCKILBMALPM; // 0x8C
	public float JIPIHNCHBPP; // 0x90
	private int MIGMJBBGOEB; // 0x94
	private float POBPHBKJMFG; // 0x98

	// Methods

	public void ABMNHLOGIIB() { }

	private void Start() { }

	public void .ctor() { }

	private static void .cctor() { }

	private void APIAJKNHKCK() { }

	public static bool DJKMCIEIAMH() { }

	private void DKBKANHKBND() { }

	private void CDECHFLJBOI() { }

	private void FixedUpdate() { }

	public void JNJNCPAAAAA() { }

	private void MKOCKANJLLP() { }

	private float NLILMCLNPKF(Vector3 FMFMNIAFLOO, Vector3 OGJMFGEPEKP, Vector3 HHBEOLHLEKB) { }

	private void Update() { }

	private void OFAPJCDIEIO() { }

	public void FIOKLNLIDNH() { }
}
*/

// ==== public void ABMNHLOGIIB() { }   @0xad406c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__ABMNHLOGIIB(void *__this)

{
  this.LIKGCKLECCK = 0;
  this.PLECNHEEKBK = 1;
  return;
}


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
  if (this.EMDCJLCBJFJ == '\0') {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_88,_Method_UnityEngine_Component_GetComponent_CarController___);
    this.PEEMAHNEIHI = uStack_88;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Clear__;
    lVar5 = CarReplay.HJPPNJKDEKF;
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
      CarReplay.GJHAKPEMGCF = _Str_;
      return;
    }
  }
  else {
    uVar3 = UnityEngine_Component__get_transform(__this,0);
    this.LIEHBGFFHFF = uVar3;
    if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Clear__;
    lVar5 = CarReplay.MNHJLEBDHHK;
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
      if (this.LFNBGBNOLOA != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (this.LFNBGBNOLOA,&uStack_88,
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
          lVar5 = this.NAMCKDFDAHE;
          UnityEngine_Transform__get_localPosition(lVar2,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          func_0x00b7fe44(lVar5,&uStack_58,_Method_System_Collections_Generic_List_float__Add__);
          if ((this.JIPIHNCHBPP <= 0.0) ||
             (UnityEngine_Transform__get_localPosition(lVar2,0), 0.0 <= in_s2)) {
            if (this.BLMKFIOGALM == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uStack_58 = this.JCKILBMALPM;
            func_0x00b7fe44(this.BLMKFIOGALM,&uStack_58,
                            _Method_System_Collections_Generic_List_float__Add__);
          }
          else {
            if (this.BLMKFIOGALM == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
            uStack_58 = this.JIPIHNCHBPP;
            func_0x00b7fe44(this.BLMKFIOGALM,&uStack_58,
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
  this.JFMDNCCPHMN = 5;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_Transform___ctor__);
  this.LFNBGBNOLOA = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_float___ctor__);
  this.NAMCKDFDAHE = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_float___ctor__);
  this.BLMKFIOGALM = uVar1;
  this.MIGMJBBGOEB = 0xffffffff;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private static void .cctor() { }   @0xad4508

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001916dd1 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
    func_0x00a67900(&System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
    func_0x00a67900(&Str_);
    bRam0000000001916dd1 = 1;
  }
  CarReplay.GJHAKPEMGCF = _Str_;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
  CarReplay.MNHJLEBDHHK = uVar1;
  uVar1 = func_0x00a67b44(_System_Collections_Generic_List_DDOBJBEDGLL__TypeInfo);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor
            (uVar1,_Method_System_Collections_Generic_List_DDOBJBEDGLL___ctor__);
  CarReplay.HJPPNJKDEKF = uVar1;
  return;
}


// ==== private void APIAJKNHKCK() { }   @0xad45d8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__APIAJKNHKCK(void *__this)

{
  long lVar1;
  float fVar2;
  undefined8 in_d1;
  float fVar3;
  
  if (this.JJGGCNKJJNO == '\0') {
    fVar3 = this.CDKJIPAIACE;
    if (0.05 < fVar3) {
      this.JJGGCNKJJNO = 1;
      lVar1 = UnityEngine_Component__get_transform(__this,0);
      if (lVar1 == 0) {
LAB_00bd4674:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar3 = (float)UnityEngine_Transform__get_position(lVar1,0);
      lVar1 = UnityEngine_Component__get_transform(__this,0);
      if (lVar1 == 0) goto LAB_00bd4674;
      UnityEngine_Transform__set_position(fVar3 + 0.05,in_d1,0,lVar1,0);
      fVar3 = this.CDKJIPAIACE;
    }
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    this.CDKJIPAIACE = fVar3 + fVar2;
  }
  return;
}


// ==== public static bool DJKMCIEIAMH() { }   @0xad4678

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool CarReplay__DJKMCIEIAMH(void)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001916dd2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916dd2 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Main.NMDEEOMHAGP;
  if (lVar2 != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar2 = Main.NMDEEOMHAGP;
      if (lVar2 == 0) goto LAB_00bd4794;
    }
    uVar1 = Level__get_IsEvent(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = Main.NMDEEOMHAGP;
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x60) == 0) {
          return false;
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = Main.NMDEEOMHAGP;
          if (lVar2 == 0) goto LAB_00bd4794;
        }
        if (*(long *)(lVar2 + 0x60) != 0) {
          if (*(long *)(*(long *)(lVar2 + 0x60) + 0x38) == 0) {
            return false;
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar2 = Main.NMDEEOMHAGP;
            if (lVar2 == 0) goto LAB_00bd4794;
          }
          if ((*(long *)(lVar2 + 0x60) != 0) &&
             (lVar2 = *(long *)(*(long *)(lVar2 + 0x60) + 0x38), lVar2 != 0)) {
            return 0 < *(int *)(lVar2 + 0x10);
          }
        }
      }
LAB_00bd4794:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return false;
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
  if (this.LIEHBGFFHFF != 0) {
    fVar3 = (float)UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
    uVar6 = this.JHCCDJFEBCC;
    this.IPHIIEPHGCC = fVar3;
    *(float *)((long)__this + 0x54) = in_s1;
    *(float *)((long)__this + 0x58) = in_s2;
    fVar7 = in_s2 - *(float *)((long)__this + 0x4c);
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar3 = (fVar3 - (float)uVar6) / fVar4;
    *(float *)((long)__this + 100) = fVar7 / fVar4;
    this.EBDAKFPLPPP =
         CONCAT44((in_s1 - (float)((ulong)uVar6 >> 0x20)) / fVar4,fVar3);
    this.JHCCDJFEBCC = this.IPHIIEPHGCC;
    *(undefined4 *)((long)__this + 0x4c) = *(undefined4 *)((long)__this + 0x58);
    if (this.LIEHBGFFHFF != 0) {
      uVar5 = UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      fVar4 = this.KJILHEDCDFO;
      this.IPHIIEPHGCC = uVar5;
      *(float *)((long)__this + 0x54) = fVar3;
      *(float *)((long)__this + 0x58) = in_s2;
      fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar4 = fVar4 + fVar3 * *(float *)((long)__this + 100) * 50.0;
      fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      this.KJILHEDCDFO = fVar4;
      if (this.LFNBGBNOLOA != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                  (this.LFNBGBNOLOA,&uStack_58,
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
                    (this.KJILHEDCDFO * 0.017453292,0,0,0);
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
  lVar2 = this.LFNBGBNOLOA;
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
      if (this.NAMCKDFDAHE == 0) break;
      uVar13 = in_d1;
      uVar16 = in_d2;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (this.NAMCKDFDAHE,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar5 = fStack_48;
      if (this.LFNBGBNOLOA == 0) break;
      fVar19 = this.JMFFPEBJCCE;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (this.LFNBGBNOLOA,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_Transform__get_Item__);
      if (CONCAT44(uStack_44,fStack_48) == 0) break;
      uVar11 = UnityEngine_Transform__get_position(CONCAT44(uStack_44,fStack_48),0);
      if (this.LIEHBGFFHFF == 0) break;
      uVar3 = uVar13;
      uVar17 = uVar16;
      fVar7 = (float)UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
      if (this.BLMKFIOGALM == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (this.BLMKFIOGALM,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar14 = fStack_48;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = CarController.GGDLOPNIKOB;
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
        if (this.LFNBGBNOLOA == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (this.LFNBGBNOLOA,iVar4,&fStack_48,
                   _Method_System_Collections_Generic_List_Transform__get_Item__);
        if (CONCAT44(uStack_44,fStack_48) == 0) break;
        fVar8 = (float)UnityEngine_Transform__get_position(CONCAT44(uStack_44,fStack_48),0);
        fVar5 = fVar19;
        fVar14 = fVar7;
        fVar9 = (float)UnityEngine_RaycastHit__get_point(&uStack_c0,0);
        if (this.LIEHBGFFHFF == 0) break;
        fVar12 = fVar5;
        fVar15 = fVar14;
        fVar10 = (float)UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
        if (this.BLMKFIOGALM == 0) break;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (this.BLMKFIOGALM,iVar4,&fStack_48,
                   _Method_System_Collections_Generic_List_float__get_Item__);
        fVar5 = (float)in_d1 -
                (((fVar7 - fVar14) * fVar15 + (fVar8 - fVar9) * fVar10 + (fVar19 - fVar5) * fVar12)
                - fStack_48);
      }
      if (this.NAMCKDFDAHE == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (this.NAMCKDFDAHE,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_float__get_Item__);
      fVar19 = fStack_48 + this.JMFFPEBJCCE + 0.1;
      if (fVar5 <= fVar19) {
        fVar19 = fVar5;
      }
      if (fVar5 < fVar18) {
        fVar19 = fVar18;
      }
      in_d1 = (ulong)(uint)fVar19;
      if (this.LFNBGBNOLOA == 0) break;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                (this.LFNBGBNOLOA,iVar4,&fStack_48,
                 _Method_System_Collections_Generic_List_Transform__get_Item__);
      if (CONCAT44(uStack_44,fStack_48) == 0) break;
      in_d2 = in_d2 & 0xffffffff;
      UnityEngine_Transform__set_localPosition(uVar6,CONCAT44(uStack_44,fStack_48),0);
      lVar2 = this.LFNBGBNOLOA;
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void FixedUpdate() { }   @0xad4dac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__FixedUpdate(void *__this)

{
  if (this.PLECNHEEKBK != '\0') {
    CarReplay__MKOCKANJLLP(__this);
  }
  this.LIKGCKLECCK = this.LIKGCKLECCK + 1;
  return;
}


// ==== private void MKOCKANJLLP() { }   @0xad4dd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__MKOCKANJLLP(void *__this)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 ****ppppuStack_70;
  long lStack_68;
  
  if ((bRam0000000001916dd6 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&DDOBJBEDGLL_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__);
    bRam0000000001916dd6 = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (CarController.MKEGHDPIIFK == '\0') {
    iVar2 = this.JFMDNCCPHMN;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = this.LIKGCKLECCK / iVar2;
    }
    if (this.LIKGCKLECCK == iVar4 * iVar2) {
      if ((this.PEEMAHNEIHI != 0) &&
         (lVar6 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar6 != 0)) {
        uVar17 = UnityEngine_Transform__get_forward(lVar6,0);
        if (cRam0000000001916e65 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916e65 = '\x01';
        }
        lVar6 = UnityEngine_Vector3.<statics>;
        uVar20 = *(undefined4 *)(lVar6 + 0x48);
        uVar19 = *(undefined4 *)(lVar6 + 0x4c);
        uVar18 = *(undefined4 *)(lVar6 + 0x50);
        if (cRam0000000001916e66 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916e66 = '\x01';
        }
        fVar16 = (float)CarReplay__NLILMCLNPKF(uVar17,in_d1,in_d2,uVar20,uVar19,uVar18);
        uVar19 = (undefined4)in_d2;
        uVar18 = (undefined4)in_d1;
        pppppuVar7 = (undefined8 *****)func_0x00a67b44(_DDOBJBEDGLL_TypeInfo);
        DDOBJBEDGLL___ctor(pppppuVar7,0);
        if (((this.PEEMAHNEIHI != 0) &&
            (lVar6 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar6 != 0)) &&
           (UnityEngine_Transform__get_position(lVar6,0), pppppuVar7 != (undefined8 *****)0x0)) {
          *(undefined4 *)(pppppuVar7 + 2) = uVar18;
          if ((this.PEEMAHNEIHI != 0) &&
             (lVar6 = this.PEEMAHNEIHI.BHDKJIINJNL, lVar6 != 0)) {
            UnityEngine_Transform__get_position(lVar6,0);
            uVar1 = 0;
            if (fVar16 != INFINITY) {
              uVar1 = (short)(int)fVar16;
            }
            *(undefined4 *)((long)pppppuVar7 + 0x14) = uVar19;
            *(undefined2 *)(pppppuVar7 + 3) = uVar1;
            if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar6 = _Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__;
            lVar8 = CarReplay.HJPPNJKDEKF;
            if (lVar8 != 0) {
              lVar5 = tpidr_el0;
              lStack_68 = *(long *)(lVar5 + 0x28);
              lVar14 = *(long *)(_Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__ + 0x20);
              lVar13 = *(long *)(lVar14 + 0xc0);
              uVar10 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + 0xfc);
              uVar9 = uVar10 + 0xf & 0x1fffffff0;
              plVar11 = (long *)((long)&ppppuStack_70 - uVar9);
              lVar12 = (long)plVar11 - uVar9;
              plVar15 = *(long **)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              ppppuStack_70 = pppppuVar7;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_throw_967b50();
              }
              uVar3 = *(uint *)(lVar8 + 0x18);
              if (uVar3 < *(uint *)(plVar15 + 3)) {
                *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
                  pppppuVar7 = &ppppuStack_70;
                }
                func_0x016decc0(plVar11,pppppuVar7,uVar10);
                func_0x016decc0((long)plVar15 +
                                (ulong)*(uint *)(*plVar15 + 0x104) * (long)(int)uVar3 + 0x20,plVar11
                                ,uVar10);
                if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x48) + 0x135)
                    & 1) == 0) {
                  func_0x00a9e3d0();
                }
                if (*(uint *)(plVar15 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
              }
              else {
                iVar2 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
                if (-1 < iVar2) {
                  pppppuVar7 = &ppppuStack_70;
                }
                func_0x016decc0(plVar11,pppppuVar7,uVar10);
                if (iVar2 < 0) {
                  func_0x016decc0(lVar12,plVar11,uVar10);
                  lVar13 = *(long *)(lVar14 + 0xc0);
                }
                else {
                  lVar12 = *plVar11;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize
                          (lVar8,lVar12,*(undefined8 *)(lVar13 + 0x70));
              }
              if (*(long *)(lVar5 + 0x28) == lStack_68) {
                return;
              }
              func_0x016dec70();
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
  }
  return;
}


// ==== public void JNJNCPAAAAA() { }   @0xad5004

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__JNJNCPAAAAA(void *__this)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000001916dd5 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&DDOBJBEDGLL_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__);
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916dd5 = 1;
  }
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = CarReplay__DJKMCIEIAMH();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = Main.NMDEEOMHAGP;
    if ((((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) ||
        (lVar4 = *(long *)(lVar4 + 0x38), lVar4 == 0)) ||
       (lVar4 = System_String__Split(lVar4,0x69,0,0), lVar4 == 0)) {
LAB_00bd522c:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    lVar5 = *(long *)(lVar4 + 0x18);
    if (((lVar5 != 0) && ((int)lVar5 * -0x55555555 + 0x2aaaaaaaU < 0x55555555)) && (0 < (int)lVar5))
    {
      uVar2 = 0;
      do {
        if ((uint)((int)uVar2 * -0x55555555) < 0x55555556) {
          lVar5 = func_0x00a67b44(_DDOBJBEDGLL_TypeInfo);
          DDOBJBEDGLL___ctor(lVar5,0);
          if (*(uint *)(lVar4 + 0x18) <= uVar2) {
LAB_00bd5228:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          uVar6 = System_Single__Parse(*(undefined8 *)(lVar4 + uVar2 * 8 + 0x20),0);
          if (lVar5 == 0) goto LAB_00bd522c;
          *(undefined4 *)(lVar5 + 0x10) = uVar6;
          if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar2 + 1) goto LAB_00bd5228;
          uVar6 = System_Single__Parse(*(undefined8 *)(lVar4 + (uVar2 + 1) * 8 + 0x20),0);
          *(undefined4 *)(lVar5 + 0x14) = uVar6;
          if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar2 + 2) goto LAB_00bd5228;
          uVar1 = System_Int16__Parse(*(undefined8 *)
                                       (lVar4 + ((long)(uVar2 + 2 << 0x20) >> 0x1d) + 0x20),0);
          *(undefined2 *)(lVar5 + 0x18) = uVar1;
          if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar3 = CarReplay.MNHJLEBDHHK;
          if (lVar3 == 0) goto LAB_00bd522c;
          func_0x00b7fe44(lVar3,lVar5,_Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__);
          lVar5 = *(long *)(lVar4 + 0x18);
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)lVar5);
    }
    this.LIKGCKLECCK = 0;
    this.DKNMNCHBFBO = 1;
  }
  return;
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
  
  if (this.EMDCJLCBJFJ != '\0') {
    CarReplay__APIAJKNHKCK(__this);
    CarReplay__CDECHFLJBOI(__this);
  }
  if (this.DKNMNCHBFBO == '\0') {
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
    if (this.LIEHBGFFHFF != 0) {
      fVar3 = (float)UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
      uVar6 = this.JHCCDJFEBCC;
      this.IPHIIEPHGCC = fVar3;
      *(float *)((long)__this + 0x54) = in_s1;
      *(float *)((long)__this + 0x58) = in_s2;
      fVar7 = in_s2 - *(float *)((long)__this + 0x4c);
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar3 = (fVar3 - (float)uVar6) / fVar4;
      *(float *)((long)__this + 100) = fVar7 / fVar4;
      this.EBDAKFPLPPP =
           CONCAT44((in_s1 - (float)((ulong)uVar6 >> 0x20)) / fVar4,fVar3);
      this.JHCCDJFEBCC = this.IPHIIEPHGCC;
      *(undefined4 *)((long)__this + 0x4c) = *(undefined4 *)((long)__this + 0x58);
      if (this.LIEHBGFFHFF != 0) {
        uVar5 = UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
        fVar4 = this.KJILHEDCDFO;
        this.IPHIIEPHGCC = uVar5;
        *(float *)((long)__this + 0x54) = fVar3;
        *(float *)((long)__this + 0x58) = in_s2;
        fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
        fVar4 = fVar4 + fVar3 * *(float *)((long)__this + 100) * 50.0;
        fVar4 = fVar4 - (float)(int)(fVar4 / 360.0) * 360.0;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        this.KJILHEDCDFO = fVar4;
        if (this.LFNBGBNOLOA != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                    (this.LFNBGBNOLOA,&uStack_58,
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
                      (this.KJILHEDCDFO * 0.017453292,0,0,0);
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


// ==== private void OFAPJCDIEIO() { }   @0xad535c

/* WARNING: Removing unreachable block (ram,0x00bd54f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__OFAPJCDIEIO(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lStack_38;
  ulong uVar14;
  
  if ((bRam0000000001916dd7 & 1) == 0) {
    func_0x00a67900(&CarReplay_TypeInfo);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Count__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
    bRam0000000001916dd7 = 1;
  }
  fVar11 = (float)this.JFMDNCCPHMN;
  uVar4 = (ulong)(uint)fVar11;
  fVar13 = (float)(this.JFMDNCCPHMN + this.LIKGCKLECCK);
  uVar14 = (ulong)(uint)fVar13;
  fVar13 = fVar13 / fVar11;
  iVar1 = -0x80000000;
  if (fVar13 != INFINITY) {
    iVar1 = (int)fVar13;
  }
  if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar5 = CarReplay.MNHJLEBDHHK;
  if (lVar5 != 0) {
    if (iVar1 < *(int *)(lVar5 + 0x18)) {
      iVar2 = iVar1 + -1;
      if (0 < iVar1) {
        lVar7 = this.LIEHBGFFHFF;
        if (*(int *)(_CarReplay_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar5 = CarReplay.MNHJLEBDHHK;
          if (lVar5 == 0) goto LAB_00bd5678;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                  (lVar5,iVar2,&lStack_38,
                   _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
        if ((lStack_38 != 0) &&
           (lVar5 = CarReplay.MNHJLEBDHHK, lVar5 != 0)) {
          fVar11 = *(float *)(lStack_38 + 0x10);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                    (lVar5,iVar2,&lStack_38,
                     _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
          if ((lStack_38 != 0) &&
             (lVar5 = CarReplay.MNHJLEBDHHK, lVar5 != 0)) {
            fVar17 = *(float *)(lStack_38 + 0x14);
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                      (lVar5,iVar1,&lStack_38,
                       _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
            if ((lStack_38 != 0) &&
               (lVar5 = CarReplay.MNHJLEBDHHK, lVar5 != 0)) {
              fVar18 = *(float *)(lStack_38 + 0x10);
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                        (lVar5,iVar1,&lStack_38,
                         _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
              if (lStack_38 != 0) {
                fVar3 = fVar13 - (float)iVar1;
                if (fVar13 - (float)iVar1 < 0.0) {
                  fVar3 = 0.0;
                }
                if (lVar7 != 0) {
                  fVar13 = *(float *)(lStack_38 + 0x14) - fVar17;
                  uVar4 = (ulong)(uint)fVar13;
                  UnityEngine_Transform__set_position
                            (fVar3 * 0.0 + 0.0,fVar11 + fVar3 * (fVar18 - fVar11),
                             fVar17 + fVar3 * fVar13,lVar7,0);
                  lVar5 = CarReplay.MNHJLEBDHHK;
                  if (lVar5 != 0) {
                    lVar7 = this.LIEHBGFFHFF;
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                              (lVar5,iVar2,&lStack_38,
                               _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__);
                    if (lStack_38 != 0) {
                      uVar10 = 0;
                      uVar15 = 0;
                      uVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                                        ((float)(int)*(short *)(lStack_38 + 0x18) * 0.017453292,0,0,
                                         0);
                      lVar5 = CarReplay.MNHJLEBDHHK;
                      if ((lVar5 != 0) &&
                         (uVar14 = uVar4,
                         System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item
                                   (lVar5,iVar1,&lStack_38,
                                    _Method_System_Collections_Generic_List_DDOBJBEDGLL__get_Item__)
                         , lStack_38 != 0)) {
                        uVar12 = 0;
                        uVar16 = 0;
                        uVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                                          ((float)(int)*(short *)(lStack_38 + 0x18) * 0.017453292,0,
                                           0,0);
                        UnityEngine_Quaternion__Lerp
                                  (uVar8,uVar10,uVar15,uVar4,uVar9,uVar12,uVar16,uVar14,0);
                        if (lVar7 != 0) {
                          UnityEngine_Transform__set_rotation(lVar7,0);
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
        goto LAB_00bd5678;
      }
    }
    else if (this.LNNMJCIFMGH == '\0') {
      this.LNNMJCIFMGH = 1;
      if ((bRam0000000001916dd8 & 1) == 0) {
        func_0x00a67900(&CarController_TypeInfo);
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Str_FX_SmokeGhost);
        bRam0000000001916dd8 = 1;
      }
      uVar8 = UnityEngine_Resources__Load(_Str_FX_SmokeGhost,0);
      if (this.LIEHBGFFHFF != 0) {
        uVar10 = UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
        if (cRam000000000191678a == '\0') {
          func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
          cRam000000000191678a = '\x01';
        }
        puVar6 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
        uVar22 = *puVar6;
        uVar21 = puVar6[1];
        uVar20 = puVar6[2];
        uVar19 = puVar6[3];
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        UnityEngine_Object__Instantiate(uVar10,uVar4,uVar14,uVar22,uVar21,uVar20,uVar19,uVar8,0);
        uVar8 = UnityEngine_Component__get_gameObject(__this,0);
        UnityEngine_Object__Destroy(uVar8,0);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality
                          (CarController.KECGFPHIEHF,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (CarController.KECGFPHIEHF != 0) {
          uVar8 = CarController.KECGFPHIEHF.CDDOBCENBOG;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar8,0,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF != 0) &&
             (lVar5 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar5 != 0)) {
            if ((bRam000000000191721b & 1) == 0) {
              func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
              bRam000000000191721b = 1;
            }
            lVar5 = *(long *)(lVar5 + 0x1b0);
            if (lVar5 != 0) {
              uVar8 = UnityEngine_Component__get_gameObject(lVar5,0);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30(_UnityEngine_Object_TypeInfo);
              }
              if ((bRam000000000191c518 & 1) == 0) {
                func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
                bRam000000000191c518 = 1;
              }
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (pcRam000000000191c510 == (code *)0x0) {
                pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
              }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c510)(0,uVar8);
              return;
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
LAB_00bd5678:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FIOKLNLIDNH() { }   @0xad567c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__FIOKLNLIDNH(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000001916dd8 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_FX_SmokeGhost);
    bRam0000000001916dd8 = 1;
  }
  uVar1 = UnityEngine_Resources__Load(_Str_FX_SmokeGhost,0);
  if (this.LIEHBGFFHFF != 0) {
    uVar5 = UnityEngine_Transform__get_position(this.LIEHBGFFHFF,0);
    if (cRam000000000191678a == '\0') {
      func_0x00a67900(&UnityEngine_Quaternion_TypeInfo);
      cRam000000000191678a = '\x01';
    }
    puVar4 = *(undefined4 **)(_UnityEngine_Quaternion_TypeInfo + 0xb8);
    uVar9 = *puVar4;
    uVar8 = puVar4[1];
    uVar7 = puVar4[2];
    uVar6 = puVar4[3];
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Object__Instantiate(uVar5,in_d1,in_d2,uVar9,uVar8,uVar7,uVar6,uVar1,0);
    uVar1 = UnityEngine_Component__get_gameObject(__this,0);
    UnityEngine_Object__Destroy(uVar1,0);
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(CarController.KECGFPHIEHF,0,0)
    ;
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF != 0) {
      uVar1 = CarController.KECGFPHIEHF.CDDOBCENBOG;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF != 0) &&
         (lVar3 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar3 != 0)) {
        if ((bRam000000000191721b & 1) == 0) {
          func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
          bRam000000000191721b = 1;
        }
        lVar3 = *(long *)(lVar3 + 0x1b0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b50();
        }
        uVar1 = UnityEngine_Component__get_gameObject(lVar3,0);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        if ((bRam000000000191c518 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
          bRam000000000191c518 = 1;
        }
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (pcRam000000000191c510 == (code *)0x0) {
          pcRam000000000191c510 = (code *)func_0x00a678c4(&UNK_005ae57b);
        }
                    /* WARNING: Could not recover jumptable at 0x0148f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c510)(0,uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



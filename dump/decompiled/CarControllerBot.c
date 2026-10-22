/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class CarControllerBot : MonoBehaviour // TypeDefIndex: 5219
{
	// Fields
	private Transform BHDKJIINJNL; // 0x20
	private Rigidbody NIIFDMDCOCF; // 0x28
	private Transform CIALNADBDDB; // 0x30
	private Transform MFILOBNJBLD; // 0x38
	private Transform MIAMAMEGMHK; // 0x40
	private Transform HALOAIOMEPG; // 0x48
	public GameObject[] NNGMCDMNECH; // 0x50
	public ParticleSystem[] KDCKKOMAGJC; // 0x58
	public ParticleSystem FMDPMCFCCCI; // 0x60
	private int ELCJDFHCLBG; // 0x68
	public float JMFFPEBJCCE; // 0x6C
	public float CHGMPFEHCDF; // 0x70
	public float EHPJLJCBMIJ; // 0x74
	public float JCKILBMALPM; // 0x78
	public float CABOCNMMFEK; // 0x7C
	private float ONLPPKCMCDJ; // 0x80
	public float FINKJLKLFIG; // 0x84
	private float MDJKIMNDFLI; // 0x88
	public float ILHEBLCMAIJ; // 0x8C
	public Vector3 EOMPPDDACJM; // 0x90
	private float IIIAKHJPNOH; // 0x9C
	private float LOCDELNAGPO; // 0xA0
	private float KKBLFPCHEIH; // 0xA4
	private bool AJNDJCBPMFI; // 0xA8
	private bool BHOGONFNKJI; // 0xA9
	private bool CICKKCCHEIG; // 0xAA
	private float EHCBKMHOBKP; // 0xAC
	private float PMFPGPPPAPA; // 0xB0
	private int NOKEAHFEJAE; // 0xB4
	private bool JOFOGIDGMNA; // 0xB8
	public CarControllerBot.OMKEEHNKHPA[] OLHONOOFKPP; // 0xC0

	// Methods

	private void PPIBCCLIDMH() { }

	private void Start() { }

	private void LOPCCLDAPAE() { }

	public void HBLIIBFNKIE(float HCILEAABENL) { }

	private void Update() { }

	private void HMMPAIOPBJI() { }

	private void OnCollisionEnter(Collision PNKAOOKHBAI) { }

	private void KIDOGHJAMDM() { }

	private CarControllerBot.OMKEEHNKHPA DCPJJNIFCBM(Transform DDHKDIEBPDH, GNOCGPDGKAE PLPKOBBAAJM) { }

	private void DFNPFBNJGBF(int OMDEMNKOGIG) { }

	public void .ctor() { }
}
*/

// ==== private void PPIBCCLIDMH() { }   @0xb43190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__PPIBCCLIDMH(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  void *__this_00;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float in_s1;
  float fVar16;
  float in_s2;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  if ((bRam0000000001917136 & 1) == 0) {
    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA___TypeInfo);
    bRam0000000001917136 = 1;
  }
  lVar12 = this.NNGMCDMNECH;
  if (lVar12 == 0) goto LAB_00c43424;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c43428:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  if (*(long *)(lVar12 + 0x20) != 0) {
    uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x20),0);
    lVar12 = this.NNGMCDMNECH;
    this.CIALNADBDDB = uVar3;
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_00c43428;
      if (*(long *)(lVar12 + 0x28) != 0) {
        uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x28),0);
        lVar12 = this.NNGMCDMNECH;
        this.MFILOBNJBLD = uVar3;
        if (lVar12 != 0) {
          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_00c43428;
          if (*(long *)(lVar12 + 0x30) != 0) {
            uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x30),0);
            lVar12 = this.NNGMCDMNECH;
            this.MIAMAMEGMHK = uVar3;
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_00c43428;
              if (*(long *)(lVar12 + 0x38) != 0) {
                uVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar12 + 0x38),0);
                this.HALOAIOMEPG = uVar3;
                plVar4 = (long *)func_0x00a679a0(_CarControllerBot_OMKEEHNKHPA___TypeInfo,
                                                 this.ELCJDFHCLBG);
                this.OLHONOOFKPP = plVar4;
                uVar11 = 1;
                lVar12 = CarControllerBot__DCPJJNIFCBM(__this,this.CIALNADBDDB);
                if (plVar4 != (long *)0x0) {
                  if ((lVar12 == 0) ||
                     (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0))
                  {
                    if ((int)plVar4[3] == 0) goto LAB_00c43428;
                    plVar4[4] = lVar12;
                    plVar4 = this.OLHONOOFKPP;
                    uVar11 = 1;
                    lVar12 = CarControllerBot__DCPJJNIFCBM
                                       (__this,this.MFILOBNJBLD);
                    if (plVar4 == (long *)0x0) goto LAB_00c43424;
                    if ((lVar12 == 0) ||
                       (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar5 != 0)
                       ) {
                      if (*(uint *)(plVar4 + 3) < 2) goto LAB_00c43428;
                      plVar4[5] = lVar12;
                      plVar4 = this.OLHONOOFKPP;
                      uVar11 = 2;
                      lVar12 = CarControllerBot__DCPJJNIFCBM
                                         (__this,this.MIAMAMEGMHK);
                      if (plVar4 == (long *)0x0) goto LAB_00c43424;
                      if ((lVar12 == 0) ||
                         (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar5 != 0)) {
                        if (*(uint *)(plVar4 + 3) < 3) goto LAB_00c43428;
                        plVar4[6] = lVar12;
                        plVar4 = this.OLHONOOFKPP;
                        uVar11 = 2;
                        lVar12 = CarControllerBot__DCPJJNIFCBM
                                           (__this,this.HALOAIOMEPG);
                        if (plVar4 == (long *)0x0) goto LAB_00c43424;
                        if ((lVar12 == 0) ||
                           (lVar5 = func_0x00a67a34(lVar12,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar5 != 0)) {
                          if (*(uint *)(plVar4 + 3) < 4) goto LAB_00c43428;
                          plVar4[7] = lVar12;
                          lVar12 = this.OLHONOOFKPP;
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar12 + 0x18);
                            if (0 < (int)uVar1) {
                              uVar13 = 0;
                              do {
                                if (uVar1 <= uVar13) goto LAB_00c43428;
                                lVar5 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
                                if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
                                goto LAB_00c43424;
                                UnityEngine_WheelCollider__set_suspensionDistance
                                          (this.JMFFPEBJCCE,lVar5,0);
                                UnityEngine_WheelCollider__get_suspensionSpring(lVar5,0);
                                UnityEngine_WheelCollider__set_suspensionSpring
                                          (this.CHGMPFEHCDF,
                                           this.EHPJLJCBMIJ,0x3e800000,lVar5,0);
                                UnityEngine_WheelCollider__set_mass
                                          (this.FINKJLKLFIG,lVar5,0);
                                UnityEngine_WheelCollider__set_radius
                                          (this.JCKILBMALPM,lVar5,0);
                                uVar1 = *(uint *)(lVar12 + 0x18);
                                uVar13 = uVar13 + 1;
                              } while ((int)uVar13 < (int)uVar1);
                            }
                            return;
                          }
                          goto LAB_00c43424;
                        }
                      }
                    }
                  }
                  uVar3 = func_0x00a67b74();
                  auVar19 = func_0x00a67a20(uVar3,0);
                  lVar5 = auVar19._8_8_;
                  lVar12 = auVar19._0_8_;
                  if ((bRam000000000191713e & 1) == 0) {
                    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
                    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA_TypeInfo);
                    func_0x00a67900(&UnityEngine_Object_TypeInfo);
                    func_0x00a67900(&System_Type_TypeInfo);
                    func_0x00a67900(&UnityEngine_WheelCollider_var);
                    func_0x00a67900(&UnityEngine_WheelCollider_TypeInfo);
                    func_0x00a67900(&Str_car);
                    func_0x00a67900(&Str_wheel);
                    func_0x00a67900(&Str_WheelCollider);
                    bRam000000000191713e = 1;
                  }
                  uStack_b0 = 0;
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
                  if ((uVar6 & 1) == 0) {
                    lVar7 = func_0x00a67b44(_CarControllerBot_OMKEEHNKHPA_TypeInfo);
                    System_Object___ctor(lVar7,0);
                    if (lVar5 != 0) {
                      lVar8 = UnityEngine_Component__get_gameObject(lVar5,0);
                      uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
                      if (lVar8 != 0) {
                        UnityEngine_GameObject__set_layer(lVar8,uVar2,0);
                        uVar3 = UnityEngine_Object__get_name(lVar5,0);
                        uVar3 = System_String__Concat(_Str_WheelCollider,uVar3,0);
                        lVar8 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
                        UnityEngine_GameObject___ctor(lVar8,uVar3,0);
                        uVar2 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
                        if (lVar8 != 0) {
                          UnityEngine_GameObject__set_layer(lVar8,uVar2,0);
                          lVar9 = UnityEngine_GameObject__get_transform(lVar8,0);
                          if (lVar9 != 0) {
                            UnityEngine_Transform__SetParent(lVar9,*(undefined8 *)(lVar12 + 0x20),0)
                            ;
                            lVar9 = UnityEngine_GameObject__get_transform(lVar8,0);
                            fVar14 = (float)UnityEngine_Transform__get_position(lVar5,0);
                            if ((*(long *)(lVar12 + 0x20) != 0) &&
                               (fVar16 = in_s1, fVar17 = in_s2,
                               fVar15 = (float)UnityEngine_Transform__get_up
                                                         (*(long *)(lVar12 + 0x20),0), lVar9 != 0))
                            {
                              fVar18 = *(float *)(lVar12 + 0x6c);
                              in_s2 = in_s2 + fVar17 * fVar18 * 0.5;
                              in_s1 = in_s1 + fVar16 * fVar18 * 0.5;
                              UnityEngine_Transform__set_position
                                        (fVar14 + fVar15 * fVar18 * 0.5,lVar9,0);
                              uVar3 = _UnityEngine_WheelCollider_var;
                              if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
                                func_0x00a67a30();
                              }
                              uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
                              plVar4 = (long *)UnityEngine_GameObject__AddComponent(lVar8,uVar3,0);
                              if (plVar4 != (long *)0x0) {
                                if ((*(byte *)(*plVar4 + 0x130) <
                                     *(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130)) ||
                                   (*(long *)(*(long *)(*plVar4 + 200) +
                                              (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo +
                                                              0x130) * 8 + -8) !=
                                    _UnityEngine_WheelCollider_TypeInfo)) {
                                  func_0x00a67eec(plVar4);
                                  goto LAB_00c437e0;
                                }
                                UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,plVar4,0);
                                UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,plVar4,0)
                                ;
                                if (lVar7 != 0) {
                                  *(long *)(lVar7 + 0x10) = lVar5;
                                  *(long *)(lVar7 + 0x18) = lVar8;
                                  *(long **)(lVar7 + 0x20) = plVar4;
                                  uVar3 = UnityEngine_Component__get_transform(plVar4,0);
                                  *(undefined8 *)(lVar7 + 0x28) = uVar3;
                                  lVar5 = UnityEngine_GameObject__get_transform(lVar8,0);
                                  if (lVar5 != 0) {
                                    uVar2 = UnityEngine_Transform__get_localPosition(lVar5,0);
                                    *(undefined4 *)(lVar7 + 0x30) = uVar2;
                                    *(float *)(lVar7 + 0x34) = in_s1;
                                    *(float *)(lVar7 + 0x38) = in_s2;
                                    *(int *)(lVar7 + 0x40) = (int)uVar11;
                                    UnityEngine_WheelCollider__get_forwardFriction
                                              (&uStack_c8,plVar4,0);
                                    uStack_a8 = uStack_c0;
                                    uStack_b0 = uStack_c8;
                                    uStack_a0 = uStack_b8;
                                    UnityEngine_WheelFrictionCurve__set_stiffness
                                              (*(undefined4 *)(lVar12 + 0x8c),&uStack_b0,0);
                                    uStack_d8 = uStack_a8;
                                    uStack_e0 = uStack_b0;
                                    uStack_d0 = uStack_a0;
                                    UnityEngine_WheelCollider__set_forwardFriction
                                              (plVar4,&uStack_e0,0);
                                    return;
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
LAB_00c437e0:
                  func_0x00a67914(&System_Exception_TypeInfo);
                  uVar3 = func_0x00a67b44();
                  uVar10 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
                  System_Exception___ctor(uVar3,uVar10,0);
                  uVar10 = func_0x00a67914(&Method_CarControllerBot_DCPJJNIFCBM__);
                  __this_00 = (void *)func_0x00a67a20(uVar3,uVar10);
                  pcStack_100 = CarControllerBot__Start;
                  lStack_f8 = lVar5;
                  uStack_f0 = uVar11 & 0xffffffff;
                  uStack_e8 = uVar3;
                  if ((bRam0000000001917137 & 1) == 0) {
                    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
                    bRam0000000001917137 = 1;
                  }
                  uVar3 = UnityEngine_Component__get_transform(__this_00,0);
                  *(undefined8 *)((long)__this_00 + 0x20) = uVar3;
                  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                            (__this_00,&uStack_108,
                             _Method_UnityEngine_Component_GetComponent_Rigidbody___);
                  *(undefined8 *)((long)__this_00 + 0x28) = uStack_108;
                  CarControllerBot__PPIBCCLIDMH(__this_00);
                  CarControllerBot__LOPCCLDAPAE();
                  CarControllerBot__KIDOGHJAMDM();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00c43424:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private CarControllerBot.OMKEEHNKHPA DCPJJNIFCBM(Transform DDHKDIEBPDH, GNOCGPDGKAE PLPKOBBAAJM) { }   @0xb43438

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarControllerBot__DCPJJNIFCBM(void *__this,void *DDHKDIEBPDH,int PLPKOBBAAJM)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float in_s2;
  float fVar12;
  float fVar13;
  undefined8 uStack_d8;
  code *pcStack_d0;
  void *pvStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam000000000191713e & 1) == 0) {
    func_0x00a67900(&UnityEngine_GameObject_TypeInfo);
    func_0x00a67900(&CarControllerBot_OMKEEHNKHPA_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Type_TypeInfo);
    func_0x00a67900(&UnityEngine_WheelCollider_var);
    func_0x00a67900(&UnityEngine_WheelCollider_TypeInfo);
    func_0x00a67900(&Str_car);
    func_0x00a67900(&Str_wheel);
    func_0x00a67900(&Str_WheelCollider);
    bRam000000000191713e = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Equality(DDHKDIEBPDH,0,0);
  if ((uVar2 & 1) == 0) {
    pvVar3 = (void *)func_0x00a67b44(_CarControllerBot_OMKEEHNKHPA_TypeInfo);
    System_Object___ctor(pvVar3,0);
    if (DDHKDIEBPDH != (void *)0x0) {
      lVar4 = UnityEngine_Component__get_gameObject(DDHKDIEBPDH,0);
      uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
      if (lVar4 != 0) {
        UnityEngine_GameObject__set_layer(lVar4,uVar1,0);
        uVar5 = UnityEngine_Object__get_name(DDHKDIEBPDH,0);
        uVar5 = System_String__Concat(_Str_WheelCollider,uVar5,0);
        lVar4 = func_0x00a67b44(_UnityEngine_GameObject_TypeInfo);
        UnityEngine_GameObject___ctor(lVar4,uVar5,0);
        uVar1 = UnityEngine_LayerMask__NameToLayer(_Str_wheel,0);
        if (lVar4 != 0) {
          UnityEngine_GameObject__set_layer(lVar4,uVar1,0);
          lVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
          if (lVar6 != 0) {
            UnityEngine_Transform__SetParent(lVar6,this.BHDKJIINJNL,0);
            lVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
            fVar9 = (float)UnityEngine_Transform__get_position(DDHKDIEBPDH,0);
            if ((this.BHDKJIINJNL != 0) &&
               (fVar11 = in_s1, fVar12 = in_s2,
               fVar10 = (float)UnityEngine_Transform__get_up(this.BHDKJIINJNL,0),
               lVar6 != 0)) {
              fVar13 = this.JMFFPEBJCCE;
              in_s2 = in_s2 + fVar12 * fVar13 * 0.5;
              in_s1 = in_s1 + fVar11 * fVar13 * 0.5;
              UnityEngine_Transform__set_position(fVar9 + fVar10 * fVar13 * 0.5,lVar6,0);
              uVar5 = _UnityEngine_WheelCollider_var;
              if (*(int *)(_System_Type_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
              plVar7 = (long *)UnityEngine_GameObject__AddComponent(lVar4,uVar5,0);
              if (plVar7 != (long *)0x0) {
                if ((*(byte *)(*plVar7 + 0x130) <
                     *(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130)) ||
                   (*(long *)(*(long *)(*plVar7 + 200) +
                              (ulong)*(byte *)(_UnityEngine_WheelCollider_TypeInfo + 0x130) * 8 + -8
                             ) != _UnityEngine_WheelCollider_TypeInfo)) {
                  func_0x00a67eec(plVar7);
                  goto LAB_00c437e0;
                }
                UnityEngine_WheelCollider__set_motorTorque(0x3727c5ac,plVar7,0);
                UnityEngine_WheelCollider__set_wheelDampingRate(0x40a00000,plVar7,0);
                if (pvVar3 != (void *)0x0) {
                  *(void **)((long)pvVar3 + 0x10) = DDHKDIEBPDH;
                  *(long *)((long)pvVar3 + 0x18) = lVar4;
                  *(long **)((long)pvVar3 + 0x20) = plVar7;
                  uVar5 = UnityEngine_Component__get_transform(plVar7,0);
                  *(undefined8 *)((long)pvVar3 + 0x28) = uVar5;
                  lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
                  if (lVar4 != 0) {
                    uVar1 = UnityEngine_Transform__get_localPosition(lVar4,0);
                    *(undefined4 *)((long)pvVar3 + 0x30) = uVar1;
                    *(float *)((long)pvVar3 + 0x34) = in_s1;
                    *(float *)((long)pvVar3 + 0x38) = in_s2;
                    *(int *)((long)pvVar3 + 0x40) = PLPKOBBAAJM;
                    UnityEngine_WheelCollider__get_forwardFriction(&uStack_98,plVar7,0);
                    uStack_78 = uStack_90;
                    uStack_80 = uStack_98;
                    uStack_70 = uStack_88;
                    UnityEngine_WheelFrictionCurve__set_stiffness
                              (this.ILHEBLCMAIJ,&uStack_80,0);
                    uStack_a8 = uStack_78;
                    uStack_b0 = uStack_80;
                    uStack_a0 = uStack_70;
                    UnityEngine_WheelCollider__set_forwardFriction(plVar7,&uStack_b0,0);
                    return pvVar3;
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
LAB_00c437e0:
  func_0x00a67914(&System_Exception_TypeInfo);
  uVar5 = func_0x00a67b44();
  uVar8 = func_0x00a67914(&Str_wheel_not_connected_to_script_);
  System_Exception___ctor(uVar5,uVar8,0);
  uVar8 = func_0x00a67914(&Method_CarControllerBot_DCPJJNIFCBM__);
  lVar4 = func_0x00a67a20(uVar5,uVar8);
  pcStack_d0 = CarControllerBot__Start;
  pvStack_c8 = DDHKDIEBPDH;
  uStack_c0 = (ulong)(uint)PLPKOBBAAJM;
  uStack_b8 = uVar5;
  if ((bRam0000000001917137 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    bRam0000000001917137 = 1;
  }
  uVar5 = UnityEngine_Component__get_transform(lVar4,0);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (lVar4,&uStack_d8,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  *(undefined8 *)(lVar4 + 0x28) = uStack_d8;
  CarControllerBot__PPIBCCLIDMH(lVar4);
  CarControllerBot__LOPCCLDAPAE();
  pvVar3 = (void *)CarControllerBot__KIDOGHJAMDM();
  return pvVar3;
}


// ==== private void Start() { }   @0xb43828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__Start(void *__this)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000001917137 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    bRam0000000001917137 = 1;
  }
  uVar1 = UnityEngine_Component__get_transform(__this,0);
  this.BHDKJIINJNL = uVar1;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  this.NIIFDMDCOCF = uStack_28;
  CarControllerBot__PPIBCCLIDMH(__this);
  CarControllerBot__LOPCCLDAPAE();
  CarControllerBot__KIDOGHJAMDM();
  return;
}


// ==== private void LOPCCLDAPAE() { }   @0xb438a8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__LOPCCLDAPAE(void *__this)

{
  if ((bRam0000000001917138 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917138 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void KIDOGHJAMDM() { }   @0xb438f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__KIDOGHJAMDM(void *__this)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000191713d & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191713d = 1;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar3 = CarController.KECGFPHIEHF;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x488) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = CarController.KECGFPHIEHF;
        if (lVar3 == 0) goto LAB_00c43bd8;
      }
      if (*(long *)(lVar3 + 0x488) == 0) goto LAB_00c43bd8;
      if (*(long *)(*(long *)(lVar3 + 0x488) + 0x18) != 0) {
        lVar3 = 4;
        do {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = CarController.KECGFPHIEHF;
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x488) == 0)) goto LAB_00c43bd8;
          uVar1 = lVar3 - 4;
          if ((long)*(int *)(*(long *)(lVar4 + 0x488) + 0x18) <= (long)uVar1) break;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar4 = CarController.KECGFPHIEHF;
            if (lVar4 == 0) goto LAB_00c43bd8;
          }
          lVar4 = *(long *)(lVar4 + 0x488);
          if (lVar4 == 0) goto LAB_00c43bd8;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
          uVar5 = *(undefined8 *)(lVar4 + lVar3 * 8);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar4 = CarController.KECGFPHIEHF.CCHOFMFMCJL, lVar4 == 0))
            goto LAB_00c43bd8;
            if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_00c43bdc:
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar4 + lVar3 * 8);
            if (lVar4 == 0) goto LAB_00c43bd8;
            UnityEngine_Transform__get_localScale(lVar4,0);
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar4 = CarController.KECGFPHIEHF.CCHOFMFMCJL, lVar4 == 0))
            goto LAB_00c43bd8;
            if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
            lVar4 = *(long *)(lVar4 + lVar3 * 8);
            if (lVar4 == 0) goto LAB_00c43bd8;
            if (lVar3 == 4) {
              UnityEngine_Transform__set_localScale(0x40800000,lVar4,0);
            }
            else {
              UnityEngine_Transform__set_localScale(0x40a00000,lVar4,0);
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar4 = CarController.KECGFPHIEHF.CCHOFMFMCJL, lVar4 == 0
                 )) goto LAB_00c43bd8;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
              lVar4 = *(long *)(lVar4 + lVar3 * 8);
              if (lVar4 == 0) goto LAB_00c43bd8;
              UnityEngine_Transform__get_localPosition(lVar4,0);
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar4 = CarController.KECGFPHIEHF.CCHOFMFMCJL, lVar4 == 0
                 )) goto LAB_00c43bd8;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00c43bdc;
              lVar4 = *(long *)(lVar4 + lVar3 * 8);
              if (lVar4 == 0) goto LAB_00c43bd8;
              UnityEngine_Transform__set_localPosition(0x3ecccccd,lVar4,0);
            }
          }
          lVar3 = lVar3 + 1;
        } while( true );
      }
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((CarController.KECGFPHIEHF != 0) &&
       (lVar3 = CarController.KECGFPHIEHF.NIIFDMDCOCF, lVar3 != 0)) {
      if (pcRam000000000191d460 == (code *)0x0) {
        pcRam000000000191d460 = (code *)func_0x00a678c4(&UNK_005a9438);
      }
                    /* WARNING: Could not recover jumptable at 0x014ce608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191d460)(0x43fa0000,lVar3);
      return;
    }
  }
LAB_00c43bd8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void HBLIIBFNKIE(float HCILEAABENL) { }   @0xb43be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__HBLIIBFNKIE(void *__this,float HCILEAABENL)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000001917139 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    bRam0000000001917139 = 1;
  }
  uStack_a0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  fVar9 = (float)UnityEngine_Time__get_fixedDeltaTime(0);
  fVar17 = HCILEAABENL;
  if (HCILEAABENL < 0.0) {
    this.ONLPPKCMCDJ = this.CABOCNMMFEK * 0.5;
    fVar17 = 0.0;
  }
  lVar6 = this.OLHONOOFKPP;
  if (lVar6 != 0) {
    uVar1 = lVar6.Length;
    fVar10 = fVar9 * 3.0;
    fVar22 = fVar10;
    if (1.0 < fVar10) {
      fVar22 = 1.0;
    }
    fVar26 = 0.0;
    if (fVar10 < 0.0) {
      fVar22 = 0.0;
    }
    if (0 < (int)uVar1) {
      uVar7 = 0;
      fVar26 = 0.0;
      do {
        if (uVar1 <= uVar7) goto LAB_00c44010;
        lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar4 = *(long *)(lVar8 + 0x20), lVar4 == 0)) goto LAB_00c4400c;
        UnityEngine_WheelCollider__GetWorldPose(lVar4,&uStack_100,&uStack_f0,0);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
        UnityEngine_Transform__set_position
                  (uStack_100 & 0xffffffff,uStack_100._4_4_,uStack_f8,*(long *)(lVar8 + 0x10),0);
        fVar18 = (float)(uStack_f0 >> 0x20);
        fVar19 = (float)uStack_e8;
        fVar10 = (float)UnityEngine_Quaternion__Internal_ToEulerRad
                                  (uStack_f0 & 0xffffffff,uStack_f0 >> 0x20,uStack_e8 & 0xffffffff,
                                   uStack_e8._4_4_,0);
        fVar18 = fVar18 * 57.29578;
        uVar24 = (ulong)(uint)(fVar19 * 57.29578);
        fVar10 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar10 * 57.29578,0);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
        uVar25 = uVar24;
        fVar19 = fVar18;
        UnityEngine_Transform__get_localPosition(*(long *)(lVar8 + 0x10),0);
        if (0.0 < (float)uVar25) {
          fVar18 = fVar18 + this.MDJKIMNDFLI;
        }
        lVar5 = *(long *)(lVar8 + 0x10);
        if (this.BHOGONFNKJI == '\0') {
LAB_00c43d94:
          fVar19 = fVar18 * 0.017453292;
          uVar25 = (ulong)(uint)((float)uVar24 * 0.017453292);
          UnityEngine_Quaternion__Internal_FromEulerRad(fVar10 * 0.017453292,fVar19,0);
          if (lVar5 == 0) goto LAB_00c4400c;
          UnityEngine_Transform__set_rotation(lVar5,0);
        }
        else {
          if (lVar5 == 0) goto LAB_00c4400c;
          UnityEngine_Transform__get_position(lVar5,0);
          if (1.0 < fVar19) {
            lVar5 = *(long *)(lVar8 + 0x10);
            goto LAB_00c43d94;
          }
        }
        fVar10 = (float)UnityEngine_WheelCollider__get_rpm(lVar4,0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC == '\0') {
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
          uVar16 = UnityEngine_Transform__get_localPosition(*(long *)(lVar8 + 0x10),0);
          uVar24 = uVar25;
          fVar18 = fVar19;
          uVar2 = UnityEngine_WheelCollider__GetGroundHit(lVar4,&uStack_e0,0);
          fVar27 = (float)uVar24;
          if ((uVar2 & 1) == 0) {
            fVar18 = this.JMFFPEBJCCE;
            uVar3 = 0;
            *(undefined1 *)(lVar8 + 0x45) = 0;
            fVar19 = fVar19 + fVar22 * ((*(float *)(lVar8 + 0x34) - fVar18) - fVar19);
          }
          else {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
            fVar11 = (float)UnityEngine_Transform__get_position(*(long *)(lVar8 + 0x10),0);
            fVar20 = fVar18;
            fVar21 = fVar27;
            fVar12 = (float)UnityEngine_WheelHit__get_point(&uStack_e0,0);
            if (this.BHDKJIINJNL == 0) goto LAB_00c4400c;
            fVar27 = fVar27 - fVar21;
            fVar18 = fVar18 - fVar20;
            fVar13 = (float)UnityEngine_Transform__get_up(this.BHDKJIINJNL,0);
            fVar14 = (float)UnityEngine_WheelCollider__get_radius(lVar4,0);
            uVar25 = uVar25 & 0xffffffff;
            uVar16 = uVar16 & 0xffffffff;
            fVar19 = fVar19 - ((fVar27 * fVar21 + (fVar11 - fVar12) * fVar13 + fVar18 * fVar20) -
                              fVar14);
            uVar3 = 1;
          }
          *(undefined1 *)(lVar8 + 0x44) = uVar3;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00c4400c;
          UnityEngine_Transform__set_localPosition(uVar16,fVar19,uVar25,*(long *)(lVar8 + 0x10),0);
        }
        uVar1 = lVar6.Length;
        uVar7 = uVar7 + 1;
        fVar26 = fVar26 + fVar10;
      } while ((int)uVar7 < (int)uVar1);
      fVar26 = fVar26 * 10.0;
    }
    fVar26 = ABS(fVar26);
    lVar6 = this.OLHONOOFKPP;
    fVar22 = this.KKBLFPCHEIH + fVar9 * this.IIIAKHJPNOH;
    fVar9 = this.KKBLFPCHEIH - fVar9 * this.LOCDELNAGPO;
    if (fVar26 <= fVar22) {
      fVar22 = fVar26;
    }
    if (fVar26 < fVar9) {
      fVar22 = fVar9;
    }
    this.KKBLFPCHEIH = fVar22;
    if (lVar6 != 0) {
      uVar1 = lVar6.Length;
      if (0 < (int)uVar1) {
        fVar9 = this.CABOCNMMFEK;
        iVar23 = this.ELCJDFHCLBG;
        uVar7 = 0;
        do {
          if (uVar1 <= uVar7) {
LAB_00c44010:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_00c4400c;
          UnityEngine_WheelCollider__set_motorTorque
                    (fVar17 * ((fVar17 * ((fVar9 * 3040.0) / 5000.0)) / (float)iVar23),
                     *(long *)(lVar8 + 0x20),0);
          uVar15 = 0;
          if (HCILEAABENL < 0.0) {
            uVar15 = this.ONLPPKCMCDJ;
          }
          if (*(long *)(lVar8 + 0x20) == 0) goto LAB_00c4400c;
          UnityEngine_WheelCollider__set_brakeTorque(uVar15,*(long *)(lVar8 + 0x20),0);
          uVar1 = lVar6.Length;
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar1);
      }
      return;
    }
  }
LAB_00c4400c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb44014

/* WARNING: Removing unreachable block (ram,0x00c44120) */
/* WARNING: Removing unreachable block (ram,0x01494090) */
/* WARNING: Removing unreachable block (ram,0x014940b4) */
/* WARNING: Removing unreachable block (ram,0x014940c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__Update(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float in_s2;
  float fVar10;
  float fVar11;
  
  if ((bRam000000000191713a & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191713a = 1;
  }
  if (this.CICKKCCHEIG == '\0') {
    if (this.BHDKJIINJNL == 0) goto LAB_00c444a0;
    fVar4 = (float)UnityEngine_Transform__get_position(this.BHDKJIINJNL,0);
    fVar9 = 14.0;
    if (fVar4 < 14.0) {
      CarControllerBot__HMMPAIOPBJI(__this);
      this.CICKKCCHEIG = 1;
      uVar5 = UnityEngine_Time__get_time(0);
      this.EHCBKMHOBKP = uVar5;
    }
  }
  else {
    fVar4 = (float)UnityEngine_Time__get_time(0);
    fVar9 = this.EHCBKMHOBKP;
    in_s2 = 1.2;
    fVar4 = fVar4 - fVar9;
    if (fVar4 < 1.2) {
      if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = SoundScript.IMKHCBJCJNB;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar2 = SoundScript.IMKHCBJCJNB;
        if (lVar2 == 0) goto LAB_00c444a0;
        in_s2 = 0.8;
        fVar9 = fVar4;
        if (fVar4 < 0.0) {
          fVar9 = 0.0;
        }
        UnityEngine_AudioSource__set_volume
                  (fVar9 * SoundScript.OJMNAEKLGHK * 0.8 + 0.0,
                   lVar2,0);
      }
    }
  }
  if ((this.BHOGONFNKJI == '\0') && (0.0 < this.PMFPGPPPAPA)) {
    fVar4 = (float)UnityEngine_Time__get_time(0);
    fVar9 = this.PMFPGPPPAPA;
    if (fVar9 < fVar4) {
      if (this.FMDPMCFCCCI == 0) goto LAB_00c444a0;
      UnityEngine_ParticleSystem__Play(this.FMDPMCFCCCI,0);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar2 = CarController.KECGFPHIEHF.ICNPJPLFCBA, lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__set_startSize(0x3f800000,lVar2,0);
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar2 = CarController.KECGFPHIEHF.ICNPJPLFCBA, lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__set_startLifetime(0x40400000,lVar2,0);
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar2 = CarController.KECGFPHIEHF.ICNPJPLFCBA, lVar2 == 0))
      goto LAB_00c444a0;
      UnityEngine_ParticleSystem__Play(lVar2,0);
      CarController.HCILEAABENL = 0xbf800000;
      this.BHOGONFNKJI = 1;
    }
  }
  if (this.JOFOGIDGMNA != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (((uVar1 & 1) != 0) && (0.0 < this.PMFPGPPPAPA)) {
      if (cRam0000000001916e66 == '\0') {
        func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
        cRam0000000001916e66 = '\x01';
      }
      lVar2 = UnityEngine_Vector3.<statics>;
      fVar10 = *(float *)(lVar2 + 0x3c);
      fVar11 = *(float *)(lVar2 + 0x40);
      fVar4 = *(float *)(lVar2 + 0x44);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar2 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar2 == 0)) {
LAB_00c444a0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      fVar6 = (float)UnityEngine_Transform__get_forward(lVar2,0);
      if (cRam0000000001916aa2 == '\0') {
        func_0x00a67900(&System_Math_TypeInfo);
        cRam0000000001916aa2 = '\x01';
      }
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar7 = SQRT((fVar4 * fVar4 + fVar10 * fVar10 + fVar11 * fVar11) *
                   (in_s2 * in_s2 + fVar6 * fVar6 + fVar9 * fVar9));
      if (1e-15 <= fVar7) {
        fVar7 = ((fVar9 * -fVar11 - fVar10 * fVar6) - fVar4 * in_s2) / fVar7;
        fVar9 = fVar7;
        if (1.0 < fVar7) {
          fVar9 = 1.0;
        }
        if (fVar7 < -1.0) {
          fVar9 = -1.0;
        }
        if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        dVar8 = (double)func_0x016decf0((double)fVar9);
        if (40.0 < (float)dVar8 * 57.29578) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF != 0) &&
             (lVar2 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar2 != 0)) {
            fVar9 = (float)UnityEngine_Transform__get_up(lVar2,0);
            fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
            UnityEngine_Quaternion__Internal_FromEulerRad(fVar4 * fVar9 * -70.0 * 0.017453292);
            UnityEngine_Transform__get_localRotation();
            if (pcRam000000000191c8b0 == (code *)0x0) {
              pcRam000000000191c8b0 = (code *)func_0x00a678c4(&UNK_005abcc5);
            }
            (*pcRam000000000191c8b0)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
          goto LAB_00c444a0;
        }
      }
      this.JOFOGIDGMNA = 0;
    }
  }
  return;
}


// ==== private void HMMPAIOPBJI() { }   @0xb444a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__HMMPAIOPBJI(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191713b & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam000000000191713b = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = SoundScript.IMKHCBJCJNB;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = SoundScript.IMKHCBJCJNB;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_AudioSource__set_volume(0,lVar2,0);
    SoundScript__GIGBLEBBIEK(SoundScript.IMKHCBJCJNB,0);
    this.CICKKCCHEIG = 1;
  }
  return;
}


// ==== private void OnCollisionEnter(Collision PNKAOOKHBAI) { }   @0xb44588

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__OnCollisionEnter(void *__this,void *PNKAOOKHBAI)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_s2;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uStack_48;
  
  if ((bRam000000000191713c & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&Str_car);
    bRam000000000191713c = 1;
  }
  uStack_48 = 0;
  if (this.AJNDJCBPMFI == '\0') {
    return;
  }
  if ((PNKAOOKHBAI != (void *)0x0) &&
     (lVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0), lVar3 != 0)) {
    iVar1 = UnityEngine_GameObject__get_layer(lVar3,0);
    iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
    if (iVar1 != iVar2) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF != 0) {
      CarController.KECGFPHIEHF.GLEPFMJIDHF = 0;
      fVar7 = (float)UnityEngine_Time__get_time(0);
      fVar11 = 1.55;
      uVar16 = 0x3fc66666;
      lVar3 = this.KDCKKOMAGJC;
      this.AJNDJCBPMFI = 0;
      this.PMFPGPPPAPA = fVar7 + 1.55;
      if (lVar3 != 0) {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar6 = 0;
          uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar5 = *(long *)(lVar3 + 0x20 + uVar6 * 8);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if (lVar5 == 0) goto LAB_00c449f0;
              uStack_48 = UnityEngine_ParticleSystem__get_emission(lVar5,0);
              UnityEngine_ParticleSystem_EmissionModule__set_enabled(&uStack_48,0,0);
            }
            fVar11 = (float)uVar16;
            uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        this.MDJKIMNDFLI = 0;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = CarController.KECGFPHIEHF;
        *(undefined4 *)(*(long **)(_CarController_TypeInfo + 0xb8) + 2) = 0;
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
          fVar7 = (float)UnityEngine_Rigidbody__get_velocity(lVar3,0);
          if ((CarController.KECGFPHIEHF != 0) &&
             (lVar5 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar5 != 0)) {
            fVar13 = in_s2;
            fVar10 = fVar11;
            fVar8 = (float)UnityEngine_Transform__get_forward(lVar5,0);
            if ((CarController.KECGFPHIEHF != 0) &&
               (lVar5 = CarController.KECGFPHIEHF.NIIFDMDCOCF, lVar5 != 0))
            {
              fVar15 = fVar13;
              fVar12 = fVar10;
              fVar9 = (float)UnityEngine_Rigidbody__get_velocity(lVar5,0);
              if ((CarController.KECGFPHIEHF != 0) &&
                 (lVar5 = CarController.KECGFPHIEHF.BHDKJIINJNL, lVar5 != 0)
                 ) {
                fVar13 = fVar13 * fVar15;
                fVar8 = fVar13 + fVar8 * fVar9 + fVar10 * fVar12;
                fVar10 = (float)UnityEngine_Transform__get_forward(lVar5,0);
                fVar11 = fVar11 - fVar8 * fVar13 * 0.5;
                in_s2 = in_s2 - fVar8 * fVar15 * 0.5;
                UnityEngine_Rigidbody__set_velocity
                          (fVar7 - fVar8 * fVar10 * 0.5,fVar11,in_s2,lVar3,0);
                if (CarController.KECGFPHIEHF != 0) {
                  lVar3 = CarController.KECGFPHIEHF.NIIFDMDCOCF;
                  if (cRam0000000001916e66 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e66 = '\x01';
                  }
                  lVar5 = UnityEngine_Vector3.<statics>;
                  fVar7 = *(float *)(lVar5 + 0x3c);
                  fVar13 = *(float *)(lVar5 + 0x40);
                  fVar10 = *(float *)(lVar5 + 0x44);
                  lVar5 = UnityEngine_Collision__get_transform(PNKAOOKHBAI,0);
                  if (lVar5 != 0) {
                    fVar8 = (float)UnityEngine_Transform__get_position(lVar5,0);
                    if (cRam0000000001916e68 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                      cRam0000000001916e68 = '\x01';
                    }
                    lVar5 = UnityEngine_Vector3.<statics>;
                    uVar16 = *(undefined8 *)(lVar5 + 0x18);
                    fVar15 = *(float *)(lVar5 + 0x20);
                    if (cRam0000000001916e66 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                      cRam0000000001916e66 = '\x01';
                      lVar5 = UnityEngine_Vector3.<statics>;
                    }
                    if (lVar3 != 0) {
                      uVar14 = NEON_fmov(0x3fc00000,4);
                      fVar11 = fVar11 + (float)((ulong)uVar16 >> 0x20) * 1.8 +
                               (float)((ulong)*(undefined8 *)(lVar5 + 0x3c) >> 0x20) *
                               (float)((ulong)uVar14 >> 0x20);
                      UnityEngine_Rigidbody__AddForceAtPosition
                                (fVar7 * -700.0,fVar13 * -700.0,fVar10 * -700.0,
                                 CONCAT44(fVar11,fVar8 + (float)uVar16 * 1.8 +
                                                 (float)*(undefined8 *)(lVar5 + 0x3c) *
                                                 (float)uVar14),fVar11,
                                 in_s2 + fVar15 * 1.8 + *(float *)(lVar5 + 0x44) * 1.5,lVar3,1,0);
                      if ((CarController.KECGFPHIEHF != 0) &&
                         (lVar3 = CarController.KECGFPHIEHF.ECBLNBNGONF,
                         lVar3 != 0)) {
                        uVar16 = CarCamera__OIKFBMHJDBN(lVar3,0);
                        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar16,0);
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        lVar3 = SoundScript.IMKHCBJCJNB;
                        if (lVar3 != 0) {
                          UnityEngine_AudioSource__Stop(lVar3,0);
                          SoundScript__GIGBLEBBIEK
                                    (SoundScript.KOFBPJBKFNP
                                     ,0);
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
LAB_00c449f0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DFNPFBNJGBF(int OMDEMNKOGIG) { }   @0xb44a00

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot__DFNPFBNJGBF(void *__this,int OMDEMNKOGIG)

{
  long lVar1;
  float fVar2;
  
  if (this.BHDKJIINJNL != 0) {
    UnityEngine_Transform__get_rotation(this.BHDKJIINJNL,0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    fVar2 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar2 * 57.29578,0);
    UnityEngine_Time__get_deltaTime(0);
    lVar1 = this.BHDKJIINJNL;
    UnityEngine_Quaternion__Internal_FromEulerRad(fVar2 * 0.017453292,0);
    if (lVar1 != 0) {
      if (pcRam000000000191c8a0 == (code *)0x0) {
        pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
      }
      (*pcRam000000000191c8a0)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb44ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarControllerBot___ctor(void *__this)

{
  this.EHPJLJCBMIJ = 0x3f8000003c23d70a;
  this.JMFFPEBJCCE = 0x400000003e4ccccd;
  this.ELCJDFHCLBG = 4;
  *(undefined8 *)((long)__this + 0x94) = 0xbe800000;
  this.ILHEBLCMAIJ = 0x3f4ccccd;
  this.FINKJLKLFIG = 0x41c8000040400000;
  this.CABOCNMMFEK = 0x447a0000440c0000;
  this.AJNDJCBPMFI = 1;
  this.NOKEAHFEJAE = 10;
  this.IIIAKHJPNOH = 0x447a000043fa0000;
  this.JOFOGIDGMNA = 1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



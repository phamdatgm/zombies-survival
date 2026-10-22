/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TramplinBarrel : MonoBehaviour // TypeDefIndex: 5194
{
	// Fields
	public TramplinBarrelPlatform IFBAFGOKIIA; // 0x20
	public int KPCMPKFIJDA; // 0x28
	public GameObject PLEGAOMEBJO; // 0x30

	// Methods

	public void MJODMEOIAIJ() { }

	public void NNIADFNMHGB() { }

	private void Start() { }

	public void .ctor() { }
}
*/

// ==== public void MJODMEOIAIJ() { }   @0xb32364

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__MJODMEOIAIJ(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float in_s1;
  float fVar8;
  
  if ((bRam00000000019170cc & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170cc = 1;
  }
  if (this.KPCMPKFIJDA == 1) {
    uVar5 = this.IFBAFGOKIIA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = this.IFBAFGOKIIA;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar5 = 0;
      lVar6 = lVar3/*TramplinBarrelPlatform*/.IDLKGCBIGEB;
      lVar4 = lVar3;
      if (lVar6 != 0) {
        uVar7 = UnityEngine_Transform__get_position(lVar6,0);
        lVar4 = 0;
        uVar5 = extraout_x1;
        if (lVar3/*TramplinBarrelPlatform*/.IDLKGCBIGEB != 0) {
          UnityEngine_Transform__get_position(lVar3/*TramplinBarrelPlatform*/.IDLKGCBIGEB,0);
          lVar4 = 0;
          uVar5 = extraout_x1_00;
          if (lVar3/*TramplinBarrelPlatform*/.APLIHFFEANG != 0) {
            fVar8 = in_s1;
            UnityEngine_Transform__get_position(lVar3/*TramplinBarrelPlatform*/.APLIHFFEANG,0);
            lVar4 = 0;
            uVar5 = extraout_x1_01;
            if (lVar3/*TramplinBarrelPlatform*/.IDLKGCBIGEB != 0) {
              UnityEngine_Transform__get_position(lVar3/*TramplinBarrelPlatform*/.IDLKGCBIGEB,0);
              UnityEngine_Transform__set_position(uVar7,(in_s1 + fVar8) / 2.5,lVar6,0);
              iVar1 = lVar3/*TramplinBarrelPlatform*/.HKNEBOHOKCI;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              lVar3/*TramplinBarrelPlatform*/.HKNEBOHOKCI = iVar1 >> 1;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50(lVar4,uVar5);
    }
  }
  return;
}


// ==== public void NNIADFNMHGB() { }   @0xb323f4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__NNIADFNMHGB(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000019170cd & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Tramplin_error_1_);
    bRam00000000019170cd = 1;
  }
  uVar2 = this.IFBAFGOKIIA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    Main__EEKNCFLMGDP(_Str_Tramplin_error_1_,0);
    uVar2 = 0;
  }
  else {
    __this = this.IFBAFGOKIIA;
    if (__this == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = 1;
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,uVar2);
  return;
}


// ==== private void Start() { }   @0xb324c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel__Start(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam00000000019170ce & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170ce = 1;
  }
  if (this.KPCMPKFIJDA == 2) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = CarController.KECGFPHIEHF;
      if (lVar2 == 0) {
LAB_00c325d0:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (0 < lVar2/*CarController*/.IICGKJFAHFB) {
        lVar4 = this.IFBAFGOKIIA;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar2 = CarController.KECGFPHIEHF;
          if (lVar2 == 0) goto LAB_00c325d0;
        }
        if (lVar4 == 0) goto LAB_00c325d0;
        TramplinBarrelPlatform__BPABDCCIAGL(lVar4,lVar2/*CarController*/.IICGKJFAHFB,0);
      }
    }
  }
  if (pcRam000000000191c328 == (code *)0x0) {
    pcRam000000000191c328 = (code *)func_0x00a678c4(&UNK_005a9022);
  }
                    /* WARNING: Could not recover jumptable at 0x014883b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c328)(__this,0);
  return;
}


// ==== public void .ctor() { }   @0xb325d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrel___ctor(void *__this)

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



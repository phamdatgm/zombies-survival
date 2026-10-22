/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[RequireComponent(typeof(ParticleSystem))]
public class AutoDestructShuriken : MonoBehaviour // TypeDefIndex: 5158
{
	// Fields
	public Transform LIEHBGFFHFF; // 0x20
	public ParticleSystem KPFIPEBINCA; // 0x28
	public bool HHGIPCGNNOK; // 0x30
	private float CNAGLGLEJMC; // 0x34
	private float ACBDHBLLEEK; // 0x38

	// Methods

	public void .ctor() { }

	public void BLNLIDHOLOJ() { }

	private void Update() { }

	private void Start() { }
}
*/

// ==== public void .ctor() { }   @0xb19204

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken___ctor(void *__this)

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


// ==== public void BLNLIDHOLOJ() { }   @0xb1920c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken__BLNLIDHOLOJ(void *__this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_18;
  
  this.CNAGLGLEJMC = 0;
  if (this.KPFIPEBINCA != 0) {
    uStack_18 = UnityEngine_ParticleSystem__get_main(this.KPFIPEBINCA,0);
    uVar2 = UnityEngine_ParticleSystem_MainModule__get_duration(&uStack_18,0);
    this.ACBDHBLLEEK = uVar2;
    lVar1 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if (this.KPFIPEBINCA != 0) {
        UnityEngine_ParticleSystem__Play(this.KPFIPEBINCA,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Update() { }   @0xb19280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken__Update(void *__this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000001916fd7 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd7 = 1;
  }
  fVar4 = this.CNAGLGLEJMC;
  fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar4 = fVar4 + fVar3;
  this.CNAGLGLEJMC = fVar4;
  if (fVar4 <= this.ACBDHBLLEEK) {
    return;
  }
  cVar1 = this.HHGIPCGNNOK;
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (cVar1 == '\0') {
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
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
    (*pcRam000000000191c510)(0,lVar2);
    return;
  }
  if (lVar2 != 0) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xb1934c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AutoDestructShuriken__Start(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000001916fd8 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916fd8 = 1;
  }
  uStack_30 = 0;
  uVar3 = this.KPFIPEBINCA;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lStack_28 = this.KPFIPEBINCA;
  }
  else {
    lVar2 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar2 == 0) goto LAB_00c19420;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    this.KPFIPEBINCA = lStack_28;
  }
  if (lStack_28 != 0) {
    uStack_30 = UnityEngine_ParticleSystem__get_main(lStack_28,0);
    uVar4 = UnityEngine_ParticleSystem_MainModule__get_duration(&uStack_30,0);
    this.ACBDHBLLEEK = uVar4;
    return;
  }
LAB_00c19420:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



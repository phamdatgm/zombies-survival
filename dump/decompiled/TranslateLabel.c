/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class TranslateLabel : MonoBehaviour // TypeDefIndex: 5145
{
	// Fields
	public string CPPHDOFMDEN; // 0x20
	private Text HGBEHJCIMCO; // 0x28

	// Methods

	private void Awake() { }

	public void JJJNIPAKLJF() { }

	public void .ctor() { }

	private void OnEnable() { }
}
*/

// ==== private void Awake() { }   @0xb074f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__Awake(void *__this)

{
  undefined8 uStack_28;
  
  if ((bRam0000000001916f50 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Text___);
    bRam0000000001916f50 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Text___);
  this.HGBEHJCIMCO = uStack_28;
  return;
}


// ==== public void JJJNIPAKLJF() { }   @0xb07550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__JJJNIPAKLJF(void *__this)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001916f51 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001916f51 = 1;
  }
  uVar4 = this.HGBEHJCIMCO;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((void *)Translate.KECGFPHIEHF != (void *)0x0) {
      pvVar2 = Translate__JJJNIPAKLJF
                         ((void *)Translate.KECGFPHIEHF,
                          this.CPPHDOFMDEN);
      plVar3 = this.HGBEHJCIMCO;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c07610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x5a8))(plVar3,pvVar2,*(undefined8 *)(*plVar3 + 0x5b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  return;
}


// ==== public void .ctor() { }   @0xb07624

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel___ctor(void *__this)

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


// ==== private void OnEnable() { }   @0xb0762c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TranslateLabel__OnEnable(void *__this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f52 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    bRam0000000001916f52 = 1;
  }
  uVar3 = this.HGBEHJCIMCO;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = Translate.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if ((bRam0000000001916f51 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Object_TypeInfo);
        func_0x00a67900(&Translate_TypeInfo);
        bRam0000000001916f51 = 1;
      }
      uVar3 = this.HGBEHJCIMCO;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Translate.KECGFPHIEHF != 0) {
          uVar3 = Translate__JJJNIPAKLJF
                            (Translate.KECGFPHIEHF,
                             this.CPPHDOFMDEN,0);
          plVar2 = this.HGBEHJCIMCO;
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c07610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x5a8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5b0));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      return;
    }
  }
  return;
}



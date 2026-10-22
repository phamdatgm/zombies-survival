/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class GUITutorialArrowAnim : MonoBehaviour // TypeDefIndex: 5146
{
	// Fields
	private Transform FJKBPAHAIDA; // 0x20
	private RectTransform LIEHBGFFHFF; // 0x28
	private Vector2 EDPJENMOOGC; // 0x30
	private Vector2 DGBENOFIJDK; // 0x38
	private float GMFAMFJABMJ; // 0x40
	private float JFLPNAABHNP; // 0x44

	// Methods

	private void OnEnable() { }

	private void Awake() { }

	private void INFJJBJJFKC() { }

	public void .ctor() { }

	private void Update() { }
}
*/

// ==== private void OnEnable() { }   @0xb076fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__OnEnable(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = UnityEngine_Time__get_realtimeSinceStartup(0);
  this.GMFAMFJABMJ = uVar4;
  if ((bRam0000000001916f54 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f54 = 1;
  }
  uVar3 = this.LIEHBGFFHFF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (this.FJKBPAHAIDA != 0) {
    UnityEngine_Transform__TransformPoint
              (this.EDPJENMOOGC,this.FJKBPAHAIDA,0);
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
      UnityEngine_Time__get_realtimeSinceStartup(0);
      lVar2 = this.LIEHBGFFHFF;
      if (lVar2 != 0) {
        if (pcRam000000000191c880 == (code *)0x0) {
          pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531,0);
        }
        (*pcRam000000000191c880)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void INFJJBJJFKC() { }   @0xb0771c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__INFJJBJJFKC(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f54 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f54 = 1;
  }
  uVar3 = this.LIEHBGFFHFF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (this.FJKBPAHAIDA != 0) {
    UnityEngine_Transform__TransformPoint
              (this.EDPJENMOOGC,this.FJKBPAHAIDA,0);
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
      UnityEngine_Time__get_realtimeSinceStartup(0);
      lVar2 = this.LIEHBGFFHFF;
      if (lVar2 != 0) {
        if (pcRam000000000191c880 == (code *)0x0) {
          pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531,0);
        }
        (*pcRam000000000191c880)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Awake() { }   @0xb07874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__Awake(void *__this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  long lStack_28;
  
  if ((bRam0000000001916f53 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
    bRam0000000001916f53 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_28,_Method_UnityEngine_Component_GetComponent_RectTransform___);
  this.LIEHBGFFHFF = lStack_28;
  if (lStack_28 != 0) {
    uVar1 = UnityEngine_Transform__get_parent(lStack_28,0);
    this.FJKBPAHAIDA = uVar1;
    if (this.LIEHBGFFHFF != 0) {
      uVar2 = UnityEngine_Transform__get_localPosition(this.LIEHBGFFHFF,0);
      this.EDPJENMOOGC = uVar2;
      *(undefined4 *)((long)__this + 0x34) = in_s1;
      if (this.LIEHBGFFHFF != 0) {
        uVar2 = UnityEngine_RectTransform__get_anchoredPosition(this.LIEHBGFFHFF,0);
        this.DGBENOFIJDK = uVar2;
        *(undefined4 *)((long)__this + 0x3c) = in_s1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb07914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim___ctor(void *__this)

{
  this.JFLPNAABHNP = 0x42040000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== private void Update() { }   @0xb07924

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUITutorialArrowAnim__Update(void *__this)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001916f54 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f54 = 1;
  }
  uVar3 = this.LIEHBGFFHFF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (this.FJKBPAHAIDA != 0) {
    UnityEngine_Transform__TransformPoint
              (this.EDPJENMOOGC,this.FJKBPAHAIDA,0);
    if (this.LIEHBGFFHFF != 0) {
      UnityEngine_Transform__get_up(this.LIEHBGFFHFF,0);
      UnityEngine_Time__get_realtimeSinceStartup(0);
      lVar2 = this.LIEHBGFFHFF;
      if (lVar2 != 0) {
        if (pcRam000000000191c880 == (code *)0x0) {
          pcRam000000000191c880 = (code *)func_0x00a678c4(&UNK_005a8531,0);
        }
        (*pcRam000000000191c880)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



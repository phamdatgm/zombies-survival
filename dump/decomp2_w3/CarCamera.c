// ==== public void KHDFDGMBOIJ() { }   @0xb01a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__KHDFDGMBOIJ(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float in_s1;
  float in_s2;
  undefined8 uStack_28;
  
  if ((bRam0000000001916f31 & 1) == 0) {
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f31 = 1;
  }
  uVar2 = *(undefined8 *)((long)__this + 0x20);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = UnityEngine_Component__get_transform(__this,0);
    *(undefined8 *)((long)__this + 0x20) = uVar2;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    *(undefined8 *)((long)__this + 0x28) = uStack_28;
    if (*(long *)((long)__this + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    UnityEngine_Transform__get_rotation(*(long *)((long)__this + 0x20),0);
    fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(0);
    in_s1 = in_s1 * 57.29578;
    in_s2 = in_s2 * 57.29578;
    uVar4 = UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,0);
    *(undefined4 *)((long)__this + 0x80) = uVar4;
    *(float *)((long)__this + 0x84) = in_s1;
    *(float *)((long)__this + 0x88) = in_s2;
    CarCamera__GFOMIMMNDBH(__this);
    uVar4 = UnityEngine_Screen__get_height(0);
    *(undefined4 *)((long)__this + 0xa8) = uVar4;
    uVar4 = UnityEngine_Screen__get_width(0);
    *(undefined4 *)((long)__this + 0xac) = uVar4;
  }
  return;
}


// ==== public IEnumerator OIKFBMHJDBN() { }   @0xb02104

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CarCamera__OIKFBMHJDBN(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001916f33 & 1) == 0) {
    func_0x00a67900(&CarCamera_FPKDIMHPBPM_TypeInfo);
    bRam0000000001916f33 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CarCamera_FPKDIMHPBPM_TypeInfo);
  CarCamera_FPKDIMHPBPM___ctor(pvVar1,0,0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)pvVar1 + 0x20) = __this;
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



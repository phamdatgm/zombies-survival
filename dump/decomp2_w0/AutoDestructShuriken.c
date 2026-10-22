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
  uVar3 = *(undefined8 *)((long)__this + 0x28);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lStack_28 = *(long *)((long)__this + 0x28);
  }
  else {
    lVar2 = UnityEngine_Component__get_gameObject(__this,0);
    if (lVar2 == 0) goto LAB_00c19420;
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
              (lVar2,&lStack_28,_Method_UnityEngine_GameObject_GetComponent_ParticleSystem___);
    *(long *)((long)__this + 0x28) = lStack_28;
  }
  if (lStack_28 != 0) {
    uStack_30 = UnityEngine_ParticleSystem__get_main(lStack_28,0);
    uVar4 = UnityEngine_ParticleSystem_MainModule__get_duration(&uStack_30,0);
    *(undefined4 *)((long)__this + 0x38) = uVar4;
    return;
  }
LAB_00c19420:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



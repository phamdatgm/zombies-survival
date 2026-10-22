// ==== public void LNNIKMAEIEI() { }   @0xb51b5c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__LNNIKMAEIEI(void *__this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float in_s1;
  float fVar4;
  
  lVar2 = *(long *)((long)__this + 0x48);
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Transform__get_position(lVar2,0);
    if (*(long *)((long)__this + 0x48) != 0) {
      UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
      if (*(long *)((long)__this + 0x58) != 0) {
        fVar4 = in_s1;
        UnityEngine_Transform__get_position(*(long *)((long)__this + 0x58),0);
        if (*(long *)((long)__this + 0x48) != 0) {
          UnityEngine_Transform__get_position(*(long *)((long)__this + 0x48),0);
          UnityEngine_Transform__set_position(uVar3,(in_s1 + fVar4) / 2.5,lVar2,0);
          iVar1 = *(int *)((long)__this + 0x3c);
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          *(int *)((long)__this + 0x3c) = iVar1 >> 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void OnCollisionEnter(Collision PNKAOOKHBAI) { }   @0xb51f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void TramplinBarrelPlatform__OnCollisionEnter(void *__this,void *PNKAOOKHBAI)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001917195 & 1) == 0) {
    func_0x00a67900(&Str_car);
    bRam0000000001917195 = 1;
  }
  if (*(long *)((long)__this + 0x20) != 0) {
    if (*(int *)(*(long *)((long)__this + 0x20) + 0x28) == 2) {
      if ((PNKAOOKHBAI == (void *)0x0) ||
         (lVar3 = UnityEngine_Collision__get_gameObject(PNKAOOKHBAI,0), lVar3 == 0))
      goto LAB_00c52008;
      iVar1 = UnityEngine_GameObject__get_layer(lVar3,0);
      iVar2 = UnityEngine_LayerMask__NameToLayer(_Str_car,0);
      if (iVar1 == iVar2) {
        *(undefined1 *)((long)__this + 0x44) = 1;
      }
    }
    return;
  }
LAB_00c52008:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



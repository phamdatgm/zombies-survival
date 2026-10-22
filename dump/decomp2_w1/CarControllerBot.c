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
  *(undefined8 *)((long)__this + 0x20) = uVar1;
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Rigidbody___);
  *(undefined8 *)((long)__this + 0x28) = uStack_28;
  CarControllerBot__PPIBCCLIDMH(__this);
  CarControllerBot__LOPCCLDAPAE();
  CarControllerBot__KIDOGHJAMDM();
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
  if (*(char *)((long)__this + 0xa8) == '\0') {
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
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x44c) = 0;
      fVar7 = (float)UnityEngine_Time__get_time(0);
      fVar11 = 1.55;
      uVar16 = 0x3fc66666;
      lVar3 = *(long *)((long)__this + 0x58);
      *(undefined1 *)((long)__this + 0xa8) = 0;
      *(float *)((long)__this + 0xb0) = fVar7 + 1.55;
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
        *(undefined4 *)((long)__this + 0x88) = 0;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar3 = **(long **)(_CarController_TypeInfo + 0xb8);
        *(undefined4 *)(*(long **)(_CarController_TypeInfo + 0xb8) + 2) = 0;
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
          fVar7 = (float)UnityEngine_Rigidbody__get_velocity(lVar3,0);
          if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
             (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar5 != 0)) {
            fVar13 = in_s2;
            fVar10 = fVar11;
            fVar8 = (float)UnityEngine_Transform__get_forward(lVar5,0);
            if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
               (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x40), lVar5 != 0))
            {
              fVar15 = fVar13;
              fVar12 = fVar10;
              fVar9 = (float)UnityEngine_Rigidbody__get_velocity(lVar5,0);
              if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
                 (lVar5 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x38), lVar5 != 0)
                 ) {
                fVar13 = fVar13 * fVar15;
                fVar8 = fVar13 + fVar8 * fVar9 + fVar10 * fVar12;
                fVar10 = (float)UnityEngine_Transform__get_forward(lVar5,0);
                fVar11 = fVar11 - fVar8 * fVar13 * 0.5;
                in_s2 = in_s2 - fVar8 * fVar15 * 0.5;
                UnityEngine_Rigidbody__set_velocity
                          (fVar7 - fVar8 * fVar10 * 0.5,fVar11,in_s2,lVar3,0);
                if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
                  lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x40);
                  if (cRam0000000001916e66 == '\0') {
                    func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                    cRam0000000001916e66 = '\x01';
                  }
                  lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
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
                    lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
                    uVar16 = *(undefined8 *)(lVar5 + 0x18);
                    fVar15 = *(float *)(lVar5 + 0x20);
                    if (cRam0000000001916e66 == '\0') {
                      func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
                      cRam0000000001916e66 = '\x01';
                      lVar5 = *(long *)(_UnityEngine_Vector3_TypeInfo + 0xb8);
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
                      if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
                         (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x28),
                         lVar3 != 0)) {
                        uVar16 = CarCamera__OIKFBMHJDBN(lVar3,0);
                        UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar16,0);
                        if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        lVar3 = *(long *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x70);
                        if (lVar3 != 0) {
                          UnityEngine_AudioSource__Stop(lVar3,0);
                          SoundScript__GIGBLEBBIEK
                                    (*(undefined8 *)(*(long *)(_SoundScript_TypeInfo + 0xb8) + 0x80)
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



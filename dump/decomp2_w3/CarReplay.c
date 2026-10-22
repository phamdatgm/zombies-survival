// ==== private void APIAJKNHKCK() { }   @0xad45d8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarReplay__APIAJKNHKCK(void *__this)

{
  long lVar1;
  float fVar2;
  undefined8 in_d1;
  float fVar3;
  
  if (*(char *)((long)__this + 0x3f) == '\0') {
    fVar3 = *(float *)((long)__this + 0x40);
    if (0.05 < fVar3) {
      *(undefined1 *)((long)__this + 0x3f) = 1;
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
      fVar3 = *(float *)((long)__this + 0x40);
    }
    fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
    *(float *)((long)__this + 0x40) = fVar3 + fVar2;
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
    lVar4 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x40);
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
          lVar3 = *(long *)(*(long *)(_CarReplay_TypeInfo + 0xb8) + 0x10);
          if (lVar3 == 0) goto LAB_00bd522c;
          func_0x00b7fe44(lVar3,lVar5,_Method_System_Collections_Generic_List_DDOBJBEDGLL__Add__);
          lVar5 = *(long *)(lVar4 + 0x18);
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)lVar5);
    }
    *(undefined4 *)((long)__this + 0x34) = 0;
    *(undefined1 *)((long)__this + 0x3c) = 1;
  }
  return;
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
  if (*(long *)((long)__this + 0x28) != 0) {
    uVar5 = UnityEngine_Transform__get_position(*(long *)((long)__this + 0x28),0);
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
    uVar2 = UnityEngine_Object__op_Inequality(**(undefined8 **)(_CarController_TypeInfo + 0xb8),0,0)
    ;
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      uVar1 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
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
      if ((**(long **)(_CarController_TypeInfo + 0xb8) != 0) &&
         (lVar3 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar3 != 0)) {
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



// ==== private void Update() { }   @0xaf5110

/* WARNING: Removing unreachable block (ram,0x00bf52f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__Update(void *__this)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long *plStack_78;
  
  if ((bRam0000000001916eda & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Image___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916eda = 1;
  }
  if (*(char *)((long)__this + 0x6c) == '\0') {
    return;
  }
  fVar8 = (float)UnityEngine_Time__get_time(0);
  uVar13 = (ulong)(uint)*(float *)((long)__this + 0x38);
  fVar8 = (fVar8 - *(float *)((long)__this + 0x38)) * 1.5;
  switch(*(undefined4 *)((long)__this + 0x20)) {
  case 0:
    if (*(long *)((long)__this + 0x30) == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x30),0);
    fVar11 = *(float *)((long)__this + 0x3c);
    fVar9 = 1.2;
    break;
  case 1:
    if (0.3 < fVar8 / *(float *)((long)__this + 0x24)) {
      fVar10 = *(float *)((long)__this + 0x58);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      plVar2 = *(long **)((long)__this + 0x28);
      *(float *)((long)__this + 0x58) = fVar10 + fVar9 * -2.5;
      if (plVar2 == (long *)0x0) goto code_r0x00bf5758;
      (**(code **)(*plVar2 + 0x2a8))
                (*(undefined4 *)((long)__this + 0x4c),*(undefined4 *)((long)__this + 0x50),
                 *(undefined4 *)((long)__this + 0x54),plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    }
    lVar4 = *(long *)((long)__this + 0x30);
    if (cRam0000000001916c7f == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916c7f = '\x01';
    }
    uVar6 = *(undefined8 *)(*(long *)(_UnityEngine_Vector2_TypeInfo + 0xb8) + 0x10);
    fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar4 == 0) goto code_r0x00bf5758;
    UnityEngine_Transform__Translate
              ((float)uVar6 * fVar9 * -40.0,(float)((ulong)uVar6 >> 0x20) * fVar9 * -40.0,0,lVar4,0)
    ;
    goto LAB_00bf56fc;
  case 2:
    if (*(long *)((long)__this + 0x30) == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x30),0);
    fVar11 = *(float *)((long)__this + 0x3c);
    fVar9 = 1.4;
    break;
  case 3:
    fVar9 = fVar8 * 1.5 * -0.5 + 1.5;
    if (fVar8 * 1.5 < 0.0) {
      fVar9 = 1.5;
    }
    if (*(long *)((long)__this + 0x30) != 0) {
      UnityEngine_Transform__set_localScale(fVar9,fVar9,0x3f800000,*(long *)((long)__this + 0x30),0)
      ;
      fVar10 = *(float *)((long)__this + 0x58);
      fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar10 = fVar10 + fVar9 * 2.5;
      *(float *)((long)__this + 0x58) = fVar10;
      *(float *)((long)__this + 0x68) = fVar10;
      if ((*(long *)((long)__this + 0x30) != 0) &&
         (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                    (*(long *)((long)__this + 0x30),&plStack_78,
                     _Method_UnityEngine_Component_GetComponent_Image___), plStack_78 != (long *)0x0
         )) {
        (**(code **)(*plStack_78 + 0x2a8))
                  (*(undefined4 *)((long)__this + 0x5c),*(undefined4 *)((long)__this + 0x60),
                   *(undefined4 *)((long)__this + 100),*(undefined4 *)((long)__this + 0x68),
                   plStack_78,*(undefined8 *)(*plStack_78 + 0x2b0));
        plVar2 = *(long **)((long)__this + 0x28);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x2a8))
                    (*(undefined4 *)((long)__this + 0x4c),*(undefined4 *)((long)__this + 0x50),
                     *(undefined4 *)((long)__this + 0x54),*(undefined4 *)((long)__this + 0x58),
                     plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
          goto LAB_00bf56fc;
        }
      }
    }
    goto code_r0x00bf5758;
  case 4:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (**(long **)(_CarController_TypeInfo + 0xb8) != 0) {
      uVar6 = *(undefined8 *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if ((uVar3 & 1) == 0) goto LAB_00bf56fc;
      uVar7 = 0;
      while( true ) {
        fVar9 = (float)uVar13;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) ||
           (lVar5 = *(long *)(*(long *)(lVar4 + 0x30) + 800), lVar5 == 0)) break;
        if (*(int *)(lVar5 + 0x18) <= (int)uVar7) goto LAB_00bf56fc;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = **(long **)(_CarController_TypeInfo + 0xb8);
          if (lVar4 == 0) break;
        }
        if ((*(long *)(lVar4 + 0x30) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 800), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
code_r0x00bf575c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar5 = (long)(int)uVar7;
        lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
        if (lVar4 == 0) break;
        fVar10 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
        fVar11 = fVar8 * 0.4 * ((float)(int)uVar7 / 3.0 + 1.0);
        bVar1 = fVar11 < 0.0;
        if (1.0 < fVar11) {
          fVar11 = 1.0;
        }
        if (bVar1) {
          fVar11 = 0.0;
        }
        uVar13 = (ulong)(uint)(fVar9 + fVar11 * (169.0 - fVar9));
        UnityEngine_RectTransform__set_anchoredPosition
                  (fVar10 + fVar11 * (67.0 - fVar10),uVar13,lVar4,0);
        if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
            (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0)) ||
           (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
        lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
        if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
        break;
        uVar3 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
              (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
             || (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
          lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
          if (lVar4 == 0) break;
          fVar9 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar4,0);
          uVar13 = 0x428a0000;
          if ((fVar9 < 69.0) || (*(float *)((long)__this + 0x24) < fVar8)) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0))
               || (lVar4 = *(long *)(lVar4 + 800), lVar4 == 0)) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x00bf575c;
            lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
            if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)
               ) break;
            UnityEngine_GameObject__SetActive(lVar4,0,0);
            if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
               ((lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0
                || (*(long *)(lVar4 + 0x310) == 0)))) break;
            GUICoins__ICMOCEHIFOI();
            if (uVar7 == 5) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((**(long **)(_CarController_TypeInfo + 0xb8) == 0) ||
                 (lVar4 = *(long *)(**(long **)(_CarController_TypeInfo + 0xb8) + 0x30), lVar4 == 0)
                 ) break;
              uVar6 = GUIGameplay__JLHJOJHINPC(lVar4,*(undefined8 *)(lVar4 + 0x278),0);
              UnityEngine_MonoBehaviour__StartCoroutine(__this,uVar6,0);
            }
          }
        }
        uVar7 = uVar7 + 1;
      }
    }
    goto code_r0x00bf5758;
  case 5:
    if (*(long *)((long)__this + 0x30) == 0) goto code_r0x00bf5758;
    fVar10 = (float)UnityEngine_Transform__get_localScale(*(long *)((long)__this + 0x30),0);
    fVar9 = *(float *)((long)__this + 0x3c) * 1.2;
    if (0.2 <= fVar8) {
      fVar9 = *(float *)((long)__this + 0x3c);
    }
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar12 = 17.0;
    goto code_r0x00bf56c0;
  default:
    goto LAB_00bf56fc;
  }
  fVar9 = fVar11 * fVar9;
  if (0.2 <= fVar8) {
    fVar9 = fVar11;
  }
  fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar12 = 10.0;
code_r0x00bf56c0:
  fVar11 = fVar11 * fVar12;
  fVar12 = fVar11;
  if (1.0 < fVar11) {
    fVar12 = 1.0;
  }
  if (fVar11 < 0.0) {
    fVar12 = 0.0;
  }
  if (*(long *)((long)__this + 0x30) == 0) {
code_r0x00bf5758:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar10 = fVar10 + (fVar9 - fVar10) * fVar12;
  UnityEngine_Transform__set_localScale(fVar10,fVar10,0x3f800000,*(long *)((long)__this + 0x30),0);
LAB_00bf56fc:
  if (*(float *)((long)__this + 0x24) < fVar8) {
    *(undefined1 *)((long)__this + 0x6c) = 0;
    if (*(int *)((long)__this + 0x20) == 1) {
      GUICoins__LEOCFHHFANH(__this);
    }
    UnityEngine_Behaviour__set_enabled(__this,0,0);
  }
  return;
}



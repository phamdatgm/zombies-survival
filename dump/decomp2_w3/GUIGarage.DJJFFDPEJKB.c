// ==== private bool MoveNext() { }   @0xb18588

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool GUIGarage_DJJFFDPEJKB__MoveNext(void *__this)

{
  long lVar1;
  void *__this_00;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 in_s1;
  float fVar5;
  
  if ((bRam0000000001916fd3 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001916fd3 = 1;
  }
  __this_00 = *(void **)((long)__this + 0x20);
  if (*(int *)((long)__this + 0x10) == 1) {
    fVar5 = *(float *)((long)__this + 0x2c);
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar5 = fVar5 + fVar4 * 2.8;
    *(float *)((long)__this + 0x2c) = fVar5;
  }
  else {
    if (*(int *)((long)__this + 0x10) != 0) {
      return false;
    }
    *(undefined4 *)((long)__this + 0x10) = 0xffffffff;
    if (__this_00 == (void *)0x0) goto LAB_00c18794;
    *(undefined1 *)((long)__this_00 + 0x250) = 1;
    *(undefined4 *)((long)__this + 0x2c) = 0;
    if ((*(long *)((long)__this_00 + 0x278) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x278),0),
       lVar1 == 0)) goto LAB_00c18794;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    if (*(int *)((long)__this + 0x28) == 1) {
      GUIGarage__NJHAGLAALCJ(__this_00,false);
    }
    if (*(long *)((long)__this_00 + 0x278) == 0) goto LAB_00c18794;
    uVar2 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this_00 + 0x278),0);
    *(undefined4 *)((long)__this + 0x30) = uVar2;
    *(undefined4 *)((long)__this + 0x34) = in_s1;
    lVar1 = 0x260;
    if (*(int *)((long)__this + 0x28) != 0) {
      lVar1 = 0x264;
    }
    iVar3 = *(int *)((long)__this_00 + lVar1);
    *(float *)((long)__this + 0x30) = (float)iVar3;
    *(float *)((long)__this + 0x38) = (float)iVar3;
    if (*(long *)((long)__this_00 + 0x278) == 0) goto LAB_00c18794;
    UnityEngine_RectTransform__set_anchoredPosition(*(long *)((long)__this_00 + 0x278),0);
    fVar5 = *(float *)((long)__this + 0x2c);
  }
  iVar3 = *(int *)((long)__this + 0x28);
  if (1.0 <= fVar5) {
    if (iVar3 == 1) {
      if (((__this_00 == (void *)0x0) || (*(long *)((long)__this_00 + 0x278) == 0)) ||
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)((long)__this_00 + 0x278),0),
         lVar1 == 0)) goto LAB_00c18794;
      UnityEngine_GameObject__SetActive(lVar1,0,0);
      iVar3 = *(int *)((long)__this + 0x28);
    }
    if (iVar3 == 0) {
      if (__this_00 != (void *)0x0) {
        GUIGarage__NJHAGLAALCJ(__this_00,true);
        goto LAB_00c18764;
      }
    }
    else if (__this_00 != (void *)0x0) {
LAB_00c18764:
      *(undefined1 *)((long)__this_00 + 0x250) = 0;
      if (*(int *)((long)__this + 0x28) == 1) {
        GUIGarage__BECFMMKIPHJ(__this_00);
        return false;
      }
      return false;
    }
  }
  else if (__this_00 != (void *)0x0) {
    if (iVar3 == 0) {
      iVar3 = *(int *)((long)__this_00 + 0x264);
    }
    else {
      iVar3 = *(int *)((long)__this_00 + 0x260);
    }
    uVar2 = *(undefined4 *)((long)__this + 0x38);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar2 = Main__BKPNLKDKAKA((float)iVar3,uVar2,fVar5,0);
    *(undefined4 *)((long)__this + 0x30) = uVar2;
    if (*(long *)((long)__this_00 + 0x278) != 0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (uVar2,*(undefined4 *)((long)__this + 0x34),*(long *)((long)__this_00 + 0x278),0);
      *(undefined8 *)((long)__this + 0x18) = 0;
      *(undefined4 *)((long)__this + 0x10) = 1;
      return true;
    }
  }
LAB_00c18794:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



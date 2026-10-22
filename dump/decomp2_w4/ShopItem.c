// ==== public int OKADMIPJHCA(int LGAALFBLPLP) { }   @0xad5b78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ShopItem__OKADMIPJHCA(void *__this,int LGAALFBLPLP)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dStack_28;
  
  if (*(long *)((long)__this + 0x30) == 0) {
LAB_00bd5cf8:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(*(long *)((long)__this + 0x30) + 0x18) <= LGAALFBLPLP) {
    return 0;
  }
  uVar2 = ShopItem__MLHKDEGPJGI(__this,LGAALFBLPLP);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)((long)__this + 0x30);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)LGAALFBLPLP) {
LAB_00bd5cfc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    iVar1 = *(int *)(lVar3 + (long)LGAALFBLPLP * 4 + 0x20);
    lVar3 = Car__get_Current(0);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    fVar6 = *(float *)(lVar3 + 0x28) * (float)iVar1;
    iVar1 = -0x80000000;
    if (fVar6 != INFINITY) {
      iVar1 = (int)fVar6;
    }
  }
  else if (*(char *)((long)__this + 0x70) == '\0') {
    lVar3 = Car__get_Current(0);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    iVar1 = *(int *)(lVar3 + 0x34);
  }
  else {
    lVar3 = *(long *)((long)__this + 0x30);
    if (lVar3 == 0) goto LAB_00bd5cf8;
    if (*(uint *)(lVar3 + 0x18) <= (uint)LGAALFBLPLP) goto LAB_00bd5cfc;
    iVar1 = *(int *)(lVar3 + (long)LGAALFBLPLP * 4 + 0x20);
  }
  fVar6 = (float)iVar1 * 0.1;
  dVar5 = (double)func_0x016dece0((double)fVar6,&dStack_28);
  if (0.0 <= fVar6) {
    if (dVar5 != 0.5) {
      fVar4 = (float)(int)(fVar6 + 0.5);
      goto LAB_00bd5cc4;
    }
    fVar6 = 1.0;
  }
  else {
    if (dVar5 != -0.5) {
      fVar4 = (float)(int)(fVar6 + -0.5);
      goto LAB_00bd5cc4;
    }
    fVar6 = -1.0;
  }
  fVar4 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar4 = (float)dStack_28 + fVar6;
  }
LAB_00bd5cc4:
  iVar1 = -0x80000000;
  if (fVar4 * 10.0 != INFINITY) {
    iVar1 = (int)(fVar4 * 10.0);
  }
  return iVar1;
}


// ==== public void KGOOJPBMMBK() { }   @0xad6168

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ShopItem__KGOOJPBMMBK(void *__this)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  int iVar18;
  int iStack_84;
  
  if ((bRam0000000001916e02 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_FREE_SHORT);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_MAX);
    bRam0000000001916e02 = 1;
  }
  iStack_84 = 0;
  uVar10 = *(undefined8 *)((long)__this + 0x48);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)((long)__this + 0x48);
    fVar17 = *(float *)((long)__this + 0x80);
    iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
    if ((*(long *)((long)__this + 0x30) == 0) || (lVar11 == 0)) goto LAB_00bd6d28;
    uVar7 = (ulong)*(uint *)((long)__this + 0x84);
    uVar16 = (ulong)(uint)(float)iVar5;
    UnityEngine_RectTransform__set_sizeDelta
              (fVar17 * ((float)iVar5 / (float)*(int *)(*(long *)((long)__this + 0x30) + 0x18)),
               uVar7,lVar11,0);
    if (*(char *)((long)__this + 0x58) == '\0') {
      if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bd6d28;
      iVar5 = (int)*(undefined8 *)(*(long *)((long)__this + 0x30) + 0x18);
      if (1 < iVar5) {
        if (0 < iVar5 + -1) {
          iVar5 = 0;
          do {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
               (lVar11 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar11 == 0))
            goto LAB_00bd6d28;
            uVar12 = *(undefined8 *)(lVar11 + 0x570);
            uVar10 = UnityEngine_Component__get_transform(__this,0);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_UnityEngine_Object_TypeInfo);
            }
            lVar11 = UnityEngine_Object__Instantiate_object_
                               (uVar12,uVar10,_Method_UnityEngine_Object_Instantiate_GameObject___);
            if ((lVar11 == 0) ||
               (lVar8 = UnityEngine_GameObject__get_transform(lVar11,0), lVar8 == 0))
            goto LAB_00bd6d28;
            UnityEngine_Transform__get_localPosition(lVar8,0);
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bd6d28;
            fVar17 = *(float *)((long)__this + 0x88);
            iVar18 = *(int *)(*(long *)((long)__this + 0x30) + 0x18);
            lVar11 = UnityEngine_GameObject__get_transform(lVar11,0);
            if (lVar11 == 0) goto LAB_00bd6d28;
            iVar5 = iVar5 + 1;
            fVar14 = (float)iVar5 / (float)iVar18;
            fVar15 = fVar14;
            if (1.0 < fVar14) {
              fVar15 = 1.0;
            }
            if (fVar14 < 0.0) {
              fVar15 = 0.0;
            }
            UnityEngine_Transform__set_localPosition
                      ((fVar17 + fVar17) * fVar15 - fVar17,uVar7,uVar16,lVar11,0);
            if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bd6d28;
          } while (iVar5 < *(int *)(*(long *)((long)__this + 0x30) + 0x18) + -1);
        }
        *(undefined1 *)((long)__this + 0x58) = 1;
      }
    }
  }
  if (*(char *)((long)__this + 0x70) != '\0') {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      iVar5 = *(int *)((long)__this + 0x74);
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = **(long **)(_CarController_TypeInfo + 0xb8);
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x470) == 0)) goto LAB_00bd6d28;
      if (iVar5 < *(int *)(*(long *)(lVar11 + 0x470) + 0x18)) {
        plVar13 = *(long **)((long)__this + 0x60);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar11 = **(long **)(_CarController_TypeInfo + 0xb8);
          if (lVar11 == 0) goto LAB_00bd6d28;
        }
        lVar11 = *(long *)(lVar11 + 0x470);
        if (lVar11 == 0) goto LAB_00bd6d28;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)((long)__this + 0x74)) goto LAB_00bd6d2c;
        lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)((long)__this + 0x74) * 8 + 0x20);
        if ((lVar11 == 0) || (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
        (**(code **)(*plVar13 + 0x2a8))
                  (*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                   *(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),plVar13,
                   *(undefined8 *)(*plVar13 + 0x2b0));
      }
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
    if (lVar11 == 0) goto LAB_00bd6d28;
    lVar11 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,0xffffffff,1,0);
    if (lVar11 != 0) {
      lVar11 = *(long *)((long)__this + 0x78);
      iVar5 = *(int *)((long)__this + 0x74);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
      if (((lVar8 == 0) || (lVar8 = DAFNMLEKHAD__DKJLCJPBPPN(lVar8,0xffffffff,1,0), lVar8 == 0)) ||
         (iVar18 = MKCBGHDANLA__BGFAMABFPHC(lVar8,0), lVar11 == 0)) goto LAB_00bd6d28;
      UnityEngine_GameObject__SetActive(lVar11,iVar5 == iVar18,0);
    }
    if ((*(char *)((long)__this + 0x70) != '\0') && (*(int *)((long)__this + 0x74) < 1))
    goto LAB_00bd68e4;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
  if (lVar11 == 0) goto LAB_00bd6d28;
  lVar11 = DAFNMLEKHAD__DKJLCJPBPPN(lVar11,0xffffffff,1,0);
  if (lVar11 == 0) {
    *(undefined1 *)((long)__this + 0x68) = 0;
    if (*(char *)((long)__this + 0x70) == '\0') {
      plVar13 = *(long **)((long)__this + 0x60);
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
      if (*(char *)((long)__this + 0x70) != '\0') goto LAB_00bd67b0;
    }
    else {
LAB_00bd67b0:
      if (*(long *)((long)__this + 0x78) == 0) goto LAB_00bd6d28;
      UnityEngine_GameObject__SetActive(*(long *)((long)__this + 0x78),0,0);
    }
    plVar13 = *(long **)((long)__this + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
    (**(code **)(*plVar13 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0)
              );
    plVar13 = *(long **)((long)__this + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
    (**(code **)(*plVar13 + 0x5a8))(plVar13,_Str__,*(undefined8 *)(*plVar13 + 0x5b0));
  }
  else {
    if (*(char *)((long)__this + 0x70) != '\0') {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar10 = **(undefined8 **)(_CarController_TypeInfo + 0xb8);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((uVar7 & 1) != 0) {
        iVar5 = *(int *)((long)__this + 0x74);
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = **(long **)(_CarController_TypeInfo + 0xb8);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x470) == 0)) goto LAB_00bd6d28;
        if (iVar5 < *(int *)(*(long *)(lVar11 + 0x470) + 0x18)) {
          plVar13 = *(long **)((long)__this + 0x60);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
            lVar11 = **(long **)(_CarController_TypeInfo + 0xb8);
            if (lVar11 == 0) goto LAB_00bd6d28;
          }
          lVar11 = *(long *)(lVar11 + 0x470);
          if (lVar11 == 0) goto LAB_00bd6d28;
          if (*(uint *)(lVar11 + 0x18) <= *(uint *)((long)__this + 0x74)) {
LAB_00bd6d2c:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b58();
          }
          lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)((long)__this + 0x74) * 8 + 0x20);
          if ((lVar11 == 0) || (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
          (**(code **)(*plVar13 + 0x2a8))
                    (*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                     *(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),plVar13,
                     *(undefined8 *)(*plVar13 + 0x2b0));
        }
      }
    }
    iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
    if (*(long *)((long)__this + 0x30) == 0) goto LAB_00bd6d28;
    if (iVar5 < *(int *)(*(long *)((long)__this + 0x30) + 0x18)) {
      cVar3 = *(char *)((long)__this + 0x70);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar11 = **(long **)(_Menu_TypeInfo + 0xb8);
      if (cVar3 == '\0') {
        if (lVar11 == 0) goto LAB_00bd6d28;
        bVar4 = Menu__LDBOEHFLNFA(lVar11,__this,0);
      }
      else {
        if (lVar11 == 0) goto LAB_00bd6d28;
        bVar4 = Menu__POLNAJBPECM(lVar11,*(undefined4 *)((long)__this + 0x74),0);
      }
      lVar11 = *(long *)((long)__this + 0x40);
      if (lVar11 != 0) {
        if ((bVar4 & 1) == 0) {
          UnityEngine_Behaviour__set_enabled(lVar11,1,0);
          plVar13 = *(long **)((long)__this + 0x38);
          iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
          iStack_84 = ShopItem__OKADMIPJHCA(__this,iVar5);
          uVar10 = System_Int32__ToString(&iStack_84,0);
        }
        else {
          UnityEngine_Behaviour__set_enabled(lVar11,0,0);
          plVar13 = *(long **)((long)__this + 0x38);
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8) == (void *)0x0) ||
             (pvVar9 = Translate__JJJNIPAKLJF
                                 ((void *)**(undefined8 **)(_Translate_TypeInfo + 0xb8),
                                  _Str_FREE_SHORT), pvVar9 == (void *)0x0)) goto LAB_00bd6d28;
          uVar10 = System_String__ToUpper(pvVar9,0);
        }
        if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
        (**(code **)(*plVar13 + 0x5a8))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x5b0));
        lVar11 = *(long *)((long)__this + 0x40);
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Menu_TypeInfo);
        }
        if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
            (lVar8 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar8 == 0)) ||
           (lVar11 == 0)) goto LAB_00bd6d28;
        lVar2 = 0x388;
        if ((uVar7 & 1) == 0) {
          lVar2 = 0x378;
        }
        UnityEngine_UI_Image__set_sprite(lVar11,*(undefined8 *)(lVar8 + lVar2),0);
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar11 = *(long *)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
        if (lVar11 == 0) goto LAB_00bd6d28;
        if ((uVar7 & 1) == 0) {
          iVar5 = DAFNMLEKHAD__LOCFCFJIAIH(lVar11,0);
        }
        else {
          iVar5 = DAFNMLEKHAD__HPDEBBJNCIK();
        }
        iVar18 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        iVar18 = ShopItem__OKADMIPJHCA(__this,iVar18);
        if ((iVar5 < iVar18 & (bVar4 ^ 0xff)) == 0) {
          if (*(char *)((long)__this + 0x70) == '\0') {
            if (*(char *)((long)__this + 0x68) == '\0') {
              plVar13 = *(long **)((long)__this + 0x60);
              if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
              (**(code **)(*plVar13 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                         *(undefined8 *)(*plVar13 + 0x2b0));
            }
            *(undefined1 *)((long)__this + 0x68) = 1;
          }
          uVar10 = *(undefined8 *)((long)__this + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if ((uVar7 & 1) != 0) {
            plVar13 = *(long **)((long)__this + 0x38);
            if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
        }
        else {
          if (*(char *)((long)__this + 0x70) == '\0') {
            plVar13 = *(long **)((long)__this + 0x60);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar11 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar11 == 0)) ||
               (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (*(undefined4 *)(lVar11 + 0x598),*(undefined4 *)(lVar11 + 0x59c),
                       *(undefined4 *)(lVar11 + 0x5a0),*(undefined4 *)(lVar11 + 0x5a4),plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
          uVar10 = *(undefined8 *)((long)__this + 0x38);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if ((uVar7 & 1) != 0) {
            plVar13 = *(long **)((long)__this + 0x38);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((**(long **)(_Menu_TypeInfo + 0xb8) == 0) ||
                (lVar11 = *(long *)(**(long **)(_Menu_TypeInfo + 0xb8) + 0x20), lVar11 == 0)) ||
               (plVar13 == (long *)0x0)) goto LAB_00bd6d28;
            (**(code **)(*plVar13 + 0x2a8))
                      (*(undefined4 *)(lVar11 + 0x598),*(undefined4 *)(lVar11 + 0x59c),
                       *(undefined4 *)(lVar11 + 0x5a0),*(undefined4 *)(lVar11 + 0x5a4),plVar13,
                       *(undefined8 *)(*plVar13 + 0x2b0));
          }
          *(undefined1 *)((long)__this + 0x68) = 0;
        }
        uVar6 = ShopItem__HJICMDCENKN(__this,0xffffffff);
        uVar7 = ShopItem__MLHKDEGPJGI(__this,uVar6);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          iVar5 = *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48);
          if (iVar5 != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar5 = *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48);
            }
            iVar18 = ShopItem__HJICMDCENKN(__this,0xffffffff);
            iVar18 = ShopItem__OKADMIPJHCA(__this,iVar18);
            if (iVar5 <= iVar18) goto LAB_00bd68e4;
          }
          iVar5 = ShopItem__HJICMDCENKN(__this,0xffffffff);
          iVar5 = ShopItem__OKADMIPJHCA(__this,iVar5);
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_CarController_TypeInfo);
          }
          *(int *)(*(long *)(_CarController_TypeInfo + 0xb8) + 0x48) = iVar5;
        }
        goto LAB_00bd68e4;
      }
      goto LAB_00bd6d28;
    }
    *(undefined1 *)((long)__this + 0x68) = 0;
    if (*(char *)((long)__this + 0x70) == '\0') {
      plVar13 = *(long **)((long)__this + 0x60);
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
    }
    uVar10 = *(undefined8 *)((long)__this + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar7 & 1) != 0) {
      plVar13 = *(long **)((long)__this + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      (**(code **)(*plVar13 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                 *(undefined8 *)(*plVar13 + 0x2b0));
      plVar13 = *(long **)((long)__this + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_00bd6d28;
      puVar1 = (undefined8 *)&Str_MAX;
      if (*(char *)((long)__this + 0x70) != '\0') {
        puVar1 = (undefined8 *)&Str_;
      }
      (**(code **)(*plVar13 + 0x5a8))(plVar13,*puVar1,*(undefined8 *)(*plVar13 + 0x5b0));
    }
  }
  if (*(long *)((long)__this + 0x40) != 0) {
    UnityEngine_Behaviour__set_enabled(*(long *)((long)__this + 0x40),0,0);
LAB_00bd68e4:
    ShopItem__BGNPJIHMIMI(__this,0);
    return;
  }
LAB_00bd6d28:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



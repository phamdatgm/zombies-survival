// ==== public void IDBHFAEMGOB() { }   @0xb018f4

/* WARNING: Removing unreachable block (ram,0x00c01930) */
/* WARNING: Removing unreachable block (ram,0x00c01958) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__IDBHFAEMGOB(void *__this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar3 = *(float *)((long)__this + 0x54);
  fVar4 = *(float *)((long)__this + 0x44) - fVar3;
  fVar2 = 0.0;
  if (fVar3 != *(float *)((long)__this + 0x5c)) {
    fVar6 = fVar4 / (*(float *)((long)__this + 0x5c) - fVar3);
    fVar2 = 0.0;
    if (0.0 <= fVar6) {
      fVar2 = fVar6;
    }
  }
  *(float *)((long)__this + 0x98) = fVar2;
  fVar6 = 0.0;
  if ((fVar3 != *(float *)((long)__this + 0x58)) &&
     (fVar4 = fVar4 / (*(float *)((long)__this + 0x58) - fVar3), 0.0 <= fVar4)) {
    fVar6 = fVar4;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar5 = (float)*(int *)((long)__this + 0x78);
  *(float *)((long)__this + 0x9c) = fVar6;
  *(float *)((long)__this + 0xa0) =
       *(float *)((long)__this + 0x60) +
       fVar2 * (*(float *)((long)__this + 100) - *(float *)((long)__this + 0x60));
  fVar3 = fVar6 * ((float)*(int *)((long)__this + 0x74) - (float)*(int *)((long)__this + 0x70)) +
          (float)*(int *)((long)__this + 0x70);
  lVar1 = *(long *)((long)__this + 0x20);
  *(float *)((long)__this + 0xa4) =
       *(float *)((long)__this + 0x68) +
       fVar2 * (*(float *)((long)__this + 0x6c) - *(float *)((long)__this + 0x68));
  fVar2 = fVar6 * ((float)*(int *)((long)__this + 0x7c) - fVar5) + fVar5;
  *(float *)((long)__this + 0x80) = fVar3;
  *(float *)((long)__this + 0x84) = fVar2;
  fVar2 = fVar2 * 0.017453292;
  fVar4 = *(float *)((long)__this + 0x88) * 0.017453292;
  uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad(fVar3 * 0.017453292,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fStack_2c = fVar2;
  fStack_28 = fVar4;
  fStack_24 = fVar5;
  if (pcRam000000000191c8a0 == (code *)0x0) {
    pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb,0);
  }
  (*pcRam000000000191c8a0)(lVar1,&uStack_30);
  return;
}


// ==== private void GFOMIMMNDBH() { }   @0xb01b0c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CarCamera__GFOMIMMNDBH(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar3 = (float)iVar1 / (float)iVar2;
  if (fVar3 <= 1.26) {
    *(undefined4 *)((long)__this + 0xb8) = 0x3fd9999a;
    *(undefined8 *)((long)__this + 0x54) = 0x4180000041200000;
    *(undefined8 *)((long)__this + 0x68) = 0x40866666402ccccd;
    *(undefined8 *)((long)__this + 0x60) = 0x4089999a40000000;
    *(undefined8 *)((long)__this + 0x78) = 0xffffffcaffffffc8;
    *(undefined8 *)((long)__this + 0x70) = 0x300000003;
    uVar4 = 0x41a00000;
  }
  else if (fVar3 <= 1.34) {
    *(undefined8 *)((long)__this + 0x54) = 0x4168000041100000;
    *(undefined8 *)((long)__this + 0x68) = 0x4020000040066666;
    *(undefined8 *)((long)__this + 0x60) = 0x408666663fc00000;
    *(undefined8 *)((long)__this + 0x78) = 0xffffffc8ffffffc6;
    *(undefined8 *)((long)__this + 0x70) = 0x500000003;
    *(undefined4 *)((long)__this + 0xb8) = 0x40000000;
    uVar4 = 0x41940000;
  }
  else if (fVar3 <= 1.51) {
    *(undefined4 *)((long)__this + 0xb8) = 0x3fc00000;
    *(undefined8 *)((long)__this + 0x54) = 0x4150000040e00000;
    *(undefined8 *)((long)__this + 0x68) = 0x400000003fb9999a;
    *(undefined8 *)((long)__this + 0x60) = 0x407333333fa00000;
    *(undefined8 *)((long)__this + 0x78) = 0xffffffc8ffffffc3;
    *(undefined8 *)((long)__this + 0x70) = 0x700000003;
    uVar4 = 0x41880000;
  }
  else if (1.61 <= fVar3) {
    if (1.8 <= fVar3) {
      if (2.0 <= fVar3) {
        uVar4 = 0x416b3333;
        *(undefined8 *)((long)__this + 0x54) = 0x412b333340c9999a;
        *(undefined8 *)((long)__this + 0x68) = 0xbf0000003f000000;
        *(undefined8 *)((long)__this + 0x60) = 0x406000003faccccd;
        *(undefined8 *)((long)__this + 0x78) = 0xffffffbfffffffb9;
        *(undefined8 *)((long)__this + 0x70) = 0xa00000007;
        goto LAB_00c01cc0;
      }
      uVar5 = 0x4130000040d00000;
      uVar7 = 0xbf0000003f000000;
      uVar6 = 0x406000003faccccd;
      uVar9 = 0xffffffbfffffffb9;
      uVar8 = 0xa00000007;
    }
    else {
      uVar5 = 0x4130000040c00000;
      uVar7 = 0x3fa00000;
      uVar6 = 0x408000003f99999a;
      uVar9 = 0xffffffc5ffffffbf;
      uVar8 = 0xa00000003;
    }
    *(undefined8 *)((long)__this + 0x54) = uVar5;
    *(undefined8 *)((long)__this + 0x68) = uVar7;
    *(undefined8 *)((long)__this + 0x60) = uVar6;
    *(undefined8 *)((long)__this + 0x78) = uVar9;
    *(undefined8 *)((long)__this + 0x70) = uVar8;
    uVar4 = 0x41700000;
  }
  else {
    *(undefined8 *)((long)__this + 0x54) = 0x4140000040e00000;
    uVar4 = 0x41800000;
    *(undefined8 *)((long)__this + 0x68) = 0x3f19999a3fa00000;
    *(undefined8 *)((long)__this + 0x60) = 0x4084cccd3fa00000;
    *(undefined8 *)((long)__this + 0x78) = 0xffffffc7ffffffc2;
    *(undefined8 *)((long)__this + 0x70) = 0xa00000003;
  }
LAB_00c01cc0:
  *(undefined4 *)((long)__this + 0x5c) = uVar4;
  return;
}



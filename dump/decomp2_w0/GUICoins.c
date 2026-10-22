// ==== public void ICMOCEHIFOI(int ALLBGCHDGNC, Color EFOGAOHIGOE, float FACIBICJINE) { }   @0xaf57c4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void GUICoins__ICMOCEHIFOI
               (void *__this,int ALLBGCHDGNC,float EFOGAOHIGOE_r,float EFOGAOHIGOE_g,
               float EFOGAOHIGOE_b,float EFOGAOHIGOE_a,float FACIBICJINE)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 in_register_00005004;
  undefined8 uVar3;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  int iStack_34;
  
  *(float *)((long)__this + 0x24) = FACIBICJINE;
  iStack_34 = ALLBGCHDGNC;
  uVar2 = UnityEngine_Time__get_time(0);
  *(undefined4 *)((long)__this + 0x38) = uVar2;
  *(undefined1 *)((long)__this + 0x6c) = 1;
  UnityEngine_Behaviour__set_enabled(__this,1,0);
  if (*(int *)((long)__this + 0x20) != 1) {
    return;
  }
  plVar1 = *(long **)((long)__this + 0x28);
  *(float *)((long)__this + 0x4c) = EFOGAOHIGOE_r;
  *(float *)((long)__this + 0x50) = EFOGAOHIGOE_g;
  *(float *)((long)__this + 0x54) = EFOGAOHIGOE_b;
  *(float *)((long)__this + 0x58) = EFOGAOHIGOE_a;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))
              (CONCAT44(in_register_00005004,EFOGAOHIGOE_r),
               CONCAT44(in_register_00005024,EFOGAOHIGOE_g),
               CONCAT44(in_register_00005044,EFOGAOHIGOE_b),
               CONCAT44(in_register_00005064,EFOGAOHIGOE_a),plVar1,*(undefined8 *)(*plVar1 + 0x2b0))
    ;
    if (*(long *)((long)__this + 0x30) != 0) {
      uVar3 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)((long)__this + 0x30),0);
      if (*(long *)((long)__this + 0x30) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (uVar3,*(undefined4 *)((long)__this + 0x44),*(long *)((long)__this + 0x30),0);
        plVar1 = *(long **)((long)__this + 0x28);
        uVar3 = System_Int32__ToString(&iStack_34,0);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x5a8))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x5b0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



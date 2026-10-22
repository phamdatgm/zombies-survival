// ==== public void EPHPBNKKJLE(Vector3 EDPJENMOOGC, Vector3 PACCGKKFCDM) { }   @0xaf3178

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void objDestructorTrail__EPHPBNKKJLE
               (void *__this,float EDPJENMOOGC_x,float EDPJENMOOGC_y,float EDPJENMOOGC_z,
               float PACCGKKFCDM_x,float PACCGKKFCDM_y,float PACCGKKFCDM_z)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  
  if ((bRam0000000001916ece & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo);
    bRam0000000001916ece = 1;
  }
  lVar3 = *(long *)((long)__this + 0x28);
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar1 = *(long *)(_CarController_TypeInfo + 0xb8);
  UnityEngine_Quaternion__LookRotation
            (*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
             *(undefined4 *)(lVar1 + 0x30),0);
  if (lVar3 != 0) {
    UnityEngine_Transform__set_rotation(lVar3,0);
    if (*(long *)((long)__this + 0x28) != 0) {
      UnityEngine_Transform__set_position
                (CONCAT44(in_register_00005004,EDPJENMOOGC_x),
                 CONCAT44(in_register_00005024,EDPJENMOOGC_y),
                 CONCAT44(in_register_00005044,EDPJENMOOGC_z),*(long *)((long)__this + 0x28),0);
      *(float *)((long)__this + 0x38) = PACCGKKFCDM_x;
      *(float *)((long)__this + 0x3c) = PACCGKKFCDM_y;
      *(float *)((long)__this + 0x40) = PACCGKKFCDM_z;
      *(undefined4 *)((long)__this + 0x24) = 0;
      lVar3 = UnityEngine_Component__get_gameObject(__this,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        lVar3 = *(long *)((long)__this + 0x30);
        if (cRam0000000001916789 == '\0') {
          func_0x00a67900(&UnityEngine_Vector3_TypeInfo);
          cRam0000000001916789 = '\x01';
        }
        if (lVar3 != 0) {
          puVar2 = *(undefined4 **)(_UnityEngine_Vector3_TypeInfo + 0xb8);
          UnityEngine_Rigidbody__set_velocity(*puVar2,puVar2[1],puVar2[2],lVar3,0);
          lVar3 = *(long *)((long)__this + 0x30);
          UnityEngine_Random__Range(0x12c0,0x13ec,0);
          if (lVar3 != 0) {
            if (pcRam000000000191d4e0 == (code *)0x0) {
              pcRam000000000191d4e0 = (code *)func_0x00a678c4(&UNK_005b1494,0);
            }
            (*pcRam000000000191d4e0)(lVar3,&stack0xffffffffffffffd0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



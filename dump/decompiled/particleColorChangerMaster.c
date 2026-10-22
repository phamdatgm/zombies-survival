/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[ExecuteInEditMode]
public class particleColorChangerMaster : MonoBehaviour // TypeDefIndex: 5075
{
	// Fields
	public float CHNPGBKGGKO; // 0x20
	public particleColorChangerMaster.colorChange[] CHECIBBOEFO; // 0x28
	public bool HFENOMJKMEN; // 0x30
	public bool POBEBPNPHAB; // 0x31

	// Methods

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void Update() { }   @0xae4218

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void particleColorChangerMaster__Update(void *__this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if ((this.HFENOMJKMEN != '\0') || (this.POBEBPNPHAB != '\0')) {
    lVar2 = this.CHECIBBOEFO;
    if (lVar2 == 0) {
LAB_00be4398:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    if (0 < (int)uVar3) {
      uVar5 = 0;
      do {
        if ((uint)uVar3 <= uVar5) {
LAB_00be439c:
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar6 = (long)(int)uVar5;
        uVar7 = 0xffffffff;
        while( true ) {
          lVar4 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
          if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_00be4398;
          uVar1 = uVar7 + 1;
          if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar1) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00be439c;
          lVar2 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_00be4398;
          uStack_28 = UnityEngine_ParticleSystem__get_colorOverLifetime(lVar2,0);
          lVar2 = this.CHECIBBOEFO;
          if (lVar2 == 0) goto LAB_00be4398;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_00be439c;
          lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_00be4398;
          UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit
                    (&uStack_68,*(undefined8 *)(lVar2 + 0x20),0);
          uStack_98 = uStack_60;
          uStack_a0 = uStack_68;
          uStack_88 = uStack_50;
          uStack_90 = uStack_58;
          uStack_78 = uStack_40;
          uStack_80 = uStack_48;
          uStack_70 = uStack_38;
          UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color(&uStack_28,&uStack_a0,0);
          lVar2 = this.CHECIBBOEFO;
          if (lVar2 == 0) goto LAB_00be4398;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_00be439c;
          lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) goto LAB_00be4398;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_00be439c;
          lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_00be4398;
          UnityEngine_ParticleSystem__set_playbackSpeed
                    (this.CHNPGBKGGKO,lVar2,0);
          lVar2 = this.CHECIBBOEFO;
          if (lVar2 == 0) goto LAB_00be4398;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_00be439c;
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar3);
    }
    this.HFENOMJKMEN = 0;
  }
  return;
}


// ==== public void .ctor() { }   @0xae43a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void particleColorChangerMaster___ctor(void *__this)

{
  this.CHNPGBKGGKO = 0x3f800000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class RotateObject : MonoBehaviour // TypeDefIndex: 5288
{
	// Fields
	private Transform LIEHBGFFHFF; // 0x20
	public int MDMIMOJPECH; // 0x28
	public int JNPPMDHCFAG; // 0x2C
	public bool KKKAJAJFIEN; // 0x30

	// Methods

	private void Start() { }

	private void Update() { }

	public void .ctor() { }
}
*/

// ==== private void Start() { }   @0xb5d32c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RotateObject__Start(void *__this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = UnityEngine_Component__get_transform(__this,0);
  this.LIEHBGFFHFF = uVar2;
  if (this.KKKAJAJFIEN != '\0') {
    uVar1 = UnityEngine_Random__Range
                      (this.MDMIMOJPECH,this.JNPPMDHCFAG,0);
    this.MDMIMOJPECH = uVar1;
  }
  return;
}


// ==== private void Update() { }   @0xb5d360

/* WARNING: Removing unreachable block (ram,0x01493ecc) */
/* WARNING: Removing unreachable block (ram,0x01493ef0) */
/* WARNING: Removing unreachable block (ram,0x01493f04) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RotateObject__Update(void *__this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  lVar1 = this.LIEHBGFFHFF;
  if (lVar1 != 0) {
    fVar2 = (float)UnityEngine_Transform__get_forward(lVar1,0);
    iVar4 = this.MDMIMOJPECH;
    fVar3 = (float)UnityEngine_Time__get_deltaTime(0);
    UnityEngine_Quaternion__Internal_FromEulerRad
              (fVar3 * fVar2 * (float)iVar4 * 0.017453292,lVar1,0,0);
    UnityEngine_Transform__get_rotation(lVar1);
    UnityEngine_Transform__get_rotation(lVar1);
    UnityEngine_Quaternion__Inverse();
    UnityEngine_Transform__get_rotation(lVar1);
    if (pcRam000000000191c8a0 == (code *)0x0) {
      pcRam000000000191c8a0 = (code *)func_0x00a678c4(&UNK_005b89bb);
    }
    (*pcRam000000000191c8a0)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb5d3d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void RotateObject___ctor(void *__this)

{
  this.MDMIMOJPECH = 0x3200000032;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



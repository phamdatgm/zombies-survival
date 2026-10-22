/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class FPSCounter : MonoBehaviour // TypeDefIndex: 5301
{
	// Fields
	public float OOOGBGANBFB; // 0x20
	public Text NPKIOHCDAGI; // 0x28
	private float FGFBLIKOBLO; // 0x30
	private int DLDBFDBCOAP; // 0x34
	[CompilerGenerated]
	private int <HOKIBKIFPNL>k__BackingField; // 0x38

	// Properties
	public int OPLGMANKCMF { get; set; }

	// Methods

	private void Update() { }

	public void .ctor() { }

	[CompilerGenerated]
	public int FAAFMFNBAGJ() { }

	[CompilerGenerated]
	protected void DLKGKCPFLHI(int ALLBGCHDGNC) { }
}
*/

// ==== private void Update() { }   @0xb686ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FPSCounter__Update(void *__this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  int iStack_34;
  double dStack_18;
  
  iStack_34 = 0;
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (fVar6 - this.FGFBLIKOBLO < this.OOOGBGANBFB) {
    return;
  }
  fVar6 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  fVar8 = this.FGFBLIKOBLO;
  iVar2 = UnityEngine_Time__get_frameCount(0);
  iVar1 = this.DLDBFDBCOAP;
  if (cRam00000000019168a8 == '\0') {
    func_0x00a67900(&System_Math_TypeInfo);
    cRam00000000019168a8 = '\x01';
  }
  fVar6 = (float)(iVar2 - iVar1) / (fVar6 - fVar8);
  if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  dVar9 = (double)fVar6;
  dVar7 = (double)func_0x016dece0(dVar9,&dStack_18);
  if (0.0 <= fVar6) {
    if (dVar7 != 0.5) {
      dStack_18 = (double)(long)(dVar9 + 0.5);
      goto LAB_00c687ac;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      dStack_18 = (double)(long)(dVar9 + -0.5);
      goto LAB_00c687ac;
    }
    dVar7 = -1.0;
  }
  if (((long)dStack_18 & 1U) != 0) {
    dStack_18 = dStack_18 + dVar7;
  }
LAB_00c687ac:
  plVar5 = this.NPKIOHCDAGI;
  iStack_34 = -0x80000000;
  if (dStack_18 != INFINITY) {
    iStack_34 = (int)dStack_18;
  }
  *(int *)((long)__this + 0x38) = iStack_34;
  uVar4 = System_Int32__ToString(&iStack_34,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x5b0));
    uVar3 = UnityEngine_Time__get_frameCount(0);
    this.DLDBFDBCOAP = uVar3;
    uVar3 = UnityEngine_Time__get_realtimeSinceStartup(0);
    this.FGFBLIKOBLO = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb68828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FPSCounter___ctor(void *__this)

{
  this.OOOGBGANBFB = 0x3f000000;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public int FAAFMFNBAGJ() { }   @0xb68838

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FPSCounter__FAAFMFNBAGJ(void *__this)

{
  return *(int *)((long)__this + 0x38);
}


// ==== protected void DLKGKCPFLHI(int ALLBGCHDGNC) { }   @0xb68840

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FPSCounter__DLKGKCPFLHI(void *__this,int ALLBGCHDGNC)

{
  *(int *)((long)__this + 0x38) = ALLBGCHDGNC;
  return;
}



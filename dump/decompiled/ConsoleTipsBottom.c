/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ConsoleTipsBottom : MonoBehaviour // TypeDefIndex: 5241
{
	// Fields
	public GameObject JNHECJCKCGN; // 0x20
	public TranslateLabel NHKIAPHMOFF; // 0x28
	public Image ONCJBBJOKDD; // 0x30
	public GameObject LJLPKOOGOBI; // 0x38
	public TranslateLabel JFPHDBHDHNC; // 0x40
	public Image HBBGOHCFNLN; // 0x48
	public GameObject LPLHEDAJICJ; // 0x50
	public Image MEFAOIHGLAJ; // 0x58
	public RectTransform KIMPLIODKPG; // 0x60
	private IEnumerator MODGLFPMPGA; // 0x68
	public bool BPMJFJMEKLM; // 0x70
	private bool NJCPHGPEBEK; // 0x71

	// Methods

	public void ABIEFKKDOGK() { }

	public void EGAHKHBBFEM(bool NOBGKIBHCEN) { }

	public void .ctor() { }

	private IEnumerator GEMPILJFGGI(bool NOBGKIBHCEN) { }
}
*/

// ==== public void ABIEFKKDOGK() { }   @0xb4bcf0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom__ABIEFKKDOGK(void *__this)

{
  return;
}


// ==== public void EGAHKHBBFEM(bool NOBGKIBHCEN) { }   @0xb4bcf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom__EGAHKHBBFEM(void *__this,bool NOBGKIBHCEN)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float in_s1;
  undefined1 auVar5 [16];
  
  if ((NOBGKIBHCEN) && (this.NJCPHGPEBEK != '\0')) {
    if (this.KIMPLIODKPG == 0) goto LAB_00c4bd94;
    UnityEngine_RectTransform__get_anchoredPosition(this.KIMPLIODKPG,0);
    if (-60.0 <= in_s1) {
      return;
    }
  }
  if (this.MODGLFPMPGA != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(__this,this.MODGLFPMPGA,0);
  }
  uVar1 = ConsoleTipsBottom__GEMPILJFGGI(__this,NOBGKIBHCEN);
  this.MODGLFPMPGA = uVar1;
  lVar2 = UnityEngine_Component__get_gameObject(__this,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    lVar2 = this.MODGLFPMPGA;
    if (lVar2 == 0) {
      func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_routine_is_null);
      System_NullReferenceException___ctor(uVar4,uVar1,0);
    }
    else {
      if (pcRam000000000191c478 == (code *)0x0) {
        pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
      }
      uVar3 = (*pcRam000000000191c478)(__this);
      if ((uVar3 & 1) != 0) {
        if (pcRam000000000191c488 == (code *)0x0) {
          pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
        }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000191c488)(__this,lVar2);
        return;
      }
      func_0x00a67914(&System_ArgumentException_TypeInfo);
      uVar4 = func_0x00a67b44();
      uVar1 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
      System_ArgumentException___ctor(uVar4,uVar1,0);
    }
    uVar1 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
    auVar5 = func_0x00a67a20(uVar4,uVar1);
    if (pcRam000000000191c488 == (code *)0x0) {
      pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
    }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c488)(auVar5._0_8_,auVar5._8_8_);
    return;
  }
LAB_00c4bd94:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private IEnumerator GEMPILJFGGI(bool NOBGKIBHCEN) { }   @0xb4bd98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * ConsoleTipsBottom__GEMPILJFGGI(void *__this,bool NOBGKIBHCEN)

{
  void *pvVar1;
  
  if ((bRam000000000191716d & 1) == 0) {
    func_0x00a67900(&ConsoleTipsBottom_DHAADBBKHAG_TypeInfo);
    bRam000000000191716d = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_ConsoleTipsBottom_DHAADBBKHAG_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  *(bool *)((long)pvVar1 + 0x28) = NOBGKIBHCEN;
  return pvVar1;
}


// ==== public void .ctor() { }   @0xb4be0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ConsoleTipsBottom___ctor(void *__this)

{
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}



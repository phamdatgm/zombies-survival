/* ---- class definition (Il2CppDumper) ----

// Namespace: Assets.SimpleAndroidNotifications.Helpers
public class Popup : MonoBehaviour // TypeDefIndex: 5234
{
	// Fields
	public CanvasGroup EFCLHINCAJK; // 0x20
	public Text MKDCFKMFIJH; // 0x28
	public static Popup JCINAFGHFFN; // 0x0

	// Methods

	public void GLNFGKNJBHH(string HOGMBEOJKPM, object[] OHOAJCLLPDH) { }

	public void .ctor() { }

	public void Awake() { }

	public void JGDCBENNDFO() { }
}
*/

// ==== public void GLNFGKNJBHH(string HOGMBEOJKPM, object[] OHOAJCLLPDH) { }   @0xb49c78

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__GLNFGKNJBHH
               (void *__this,void *HOGMBEOJKPM,void *OHOAJCLLPDH)

{
  long *plVar1;
  long lVar2;
  
  if (OHOAJCLLPDH != (void *)0x0) {
    if (*(long *)((long)OHOAJCLLPDH + 0x18) != 0) {
      HOGMBEOJKPM = (void *)System_String__Format(HOGMBEOJKPM,OHOAJCLLPDH,0);
    }
    plVar1 = this.MKDCFKMFIJH;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x5a8))(plVar1,HOGMBEOJKPM,*(undefined8 *)(*plVar1 + 0x5b0));
      if (this.EFCLHINCAJK != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts(this.EFCLHINCAJK,1,0);
        lVar2 = this.EFCLHINCAJK;
        if (lVar2 != 0) {
          if (pcRam000000000191ebe0 == (code *)0x0) {
            pcRam000000000191ebe0 = (code *)func_0x00a678c4(&UNK_0059ee37);
          }
                    /* WARNING: Could not recover jumptable at 0x016a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191ebe0)(0x3f800000,lVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb49ce8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup___ctor(void *__this)

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


// ==== public void Awake() { }   @0xb49cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__Awake(void *__this)

{
  if ((bRam000000000191715b & 1) == 0) {
    func_0x00a67900(&Assets_SimpleAndroidNotifications_Helpers_Popup_TypeInfo);
    bRam000000000191715b = 1;
  }
  **(undefined8 **)(_Assets_SimpleAndroidNotifications_Helpers_Popup_TypeInfo + 0xb8) = __this;
  return;
}


// ==== public void JGDCBENNDFO() { }   @0xb49d3c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_Popup__JGDCBENNDFO(void *__this)

{
  long lVar1;
  
  if (this.EFCLHINCAJK != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(this.EFCLHINCAJK,0,0);
    lVar1 = this.EFCLHINCAJK;
    if (lVar1 != 0) {
      if (pcRam000000000191ebe0 == (code *)0x0) {
        pcRam000000000191ebe0 = (code *)func_0x00a678c4(&UNK_0059ee37);
      }
                    /* WARNING: Could not recover jumptable at 0x016a8ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191ebe0)(0,lVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: FSG
public class AndroidSecuritySettings : ScriptableObject // TypeDefIndex: 5058
{
	// Fields
	public const string SETTINGS_NAME = "AndroidSecuritySettings";
	public byte[] signature; // 0x18
	public bool lockAsset; // 0x20
	public bool autoImportSignature; // 0x21

	// Properties
	public string keystoreSignature { get; }
	public string error { get; }

	// Methods

	public string get_keystoreSignature() { }

	public string get_error() { }

	public void .ctor() { }
}
*/

// ==== public string get_keystoreSignature() { }   @0xad3fcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * FSG_AndroidSecuritySettings__get_keystoreSignature(void *__this)

{
  if ((bRam0000000001916dcd & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916dcd = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}


// ==== public string get_error() { }   @0xad4014

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * FSG_AndroidSecuritySettings__get_error(void *__this)

{
  if ((bRam0000000001916dce & 1) == 0) {
    func_0x00a67900(&string_TypeInfo);
    bRam0000000001916dce = 1;
  }
  return (void *)**(undefined8 **)(_string_TypeInfo + 0xb8);
}


// ==== public void .ctor() { }   @0xad405c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FSG_AndroidSecuritySettings___ctor(void *__this)

{
  this.autoImportSignature = 1;
  if ((bRam000000000191c4b8 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c4b8 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  System_Object___ctor(__this,0);
  if (pcRam000000000191c4c0 == (code *)0x0) {
    pcRam000000000191c4c0 = (code *)func_0x00a678c4(&UNK_005b8838);
  }
                    /* WARNING: Could not recover jumptable at 0x0148ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000191c4c0)(__this);
  return;
}



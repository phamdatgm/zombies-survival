/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ICHLJPPJDAI // TypeDefIndex: 5092
{
	// Fields
	private static byte[] IPEEOHDPDPD; // 0x0
	private static int[] OCKABFGIHJP; // 0x8
	private static int DJBBLEPCHOA; // 0x10
	public static readonly bool BGIKBNIMAPF; // 0x14

	// Methods

	private static void .cctor() { }

	public void .ctor() { }
}
*/

// ==== private static void .cctor() { }   @0xaebcec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ICHLJPPJDAI___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001916e98 & 1) == 0) {
    func_0x00a67900(&System_Convert_TypeInfo);
    func_0x00a67900(&ICHLJPPJDAI_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__572FB9AFE2DE58D0BA7CF1D33E71747894489B119DD
                   );
    func_0x00a67900(&Str_X_lqwjlUlq5ft8cCn8Oa6HemCpuFtir6_fo_9ZOI);
    bRam0000000001916e98 = 1;
  }
  if (*(int *)(_System_Convert_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = System_Convert__FromBase64String(_Str_X_lqwjlUlq5ft8cCn8Oa6HemCpuFtir6_fo_9ZOI,0);
  ICHLJPPJDAI.IPEEOHDPDPD = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0x2d);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (uVar1,_Field__PrivateImplementationDetails__572FB9AFE2DE58D0BA7CF1D33E71747894489B119DD
             ,0);
  lVar2 = ICHLJPPJDAI.<statics>;
  *(undefined8 *)(lVar2 + 8) = uVar1;
  *(undefined4 *)(lVar2 + 0x10) = 0x52;
  *(undefined1 *)(lVar2 + 0x14) = 1;
  return;
}


// ==== public void .ctor() { }   @0xaebde0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ICHLJPPJDAI___ctor(void *__this)

{
  return;
}



// ==== public static DHLBGHCGAKB ECDNDENGEOH() { }   @0xb5d81c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Main__ECDNDENGEOH(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000001917200 & 1) == 0) {
    func_0x00a67900(&Str_opengl);
    func_0x00a67900(&Str_3_2);
    func_0x00a67900(&Str_vulkan);
    bRam0000000001917200 = 1;
  }
  iVar1 = UnityEngine_SystemInfo__get_systemMemorySize(0);
  lVar2 = UnityEngine_SystemInfo__get_graphicsDeviceVersion(0);
  if (lVar2 != 0) {
    lVar2 = System_String__ToLower(lVar2,0);
    if (100 < iVar1) {
      if (iVar1 < 0x514) {
        return 0;
      }
      iVar1 = UnityEngine_SystemInfo__get_systemMemorySize(0);
      if (0xd48 < iVar1) {
        if (lVar2 == 0) goto LAB_00c5d918;
        uVar3 = System_String__Contains(lVar2,_Str_opengl,0);
        if ((((uVar3 & 1) != 0) &&
            (uVar3 = System_String__Contains(lVar2,_Str_3_2,0), (uVar3 & 1) != 0)) ||
           (uVar3 = System_String__Contains(lVar2,_Str_vulkan,0), (uVar3 & 1) != 0)) {
          return 2;
        }
      }
    }
    return 1;
  }
LAB_00c5d918:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DFMNNPNGNKO() { }   @0xb5de84

/* WARNING: Possible PIC construction at 0x00fadaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00fadae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00fadab0) */
/* WARNING: Removing unreachable block (ram,0x00fadab8) */
/* WARNING: Removing unreachable block (ram,0x00fadac8) */
/* WARNING: Removing unreachable block (ram,0x00fadacc) */
/* WARNING: Removing unreachable block (ram,0x00fadafc) */
/* WARNING: Removing unreachable block (ram,0x00fadb08) */
/* WARNING: Removing unreachable block (ram,0x00fadb84) */
/* WARNING: Removing unreachable block (ram,0x00ccec54) */
/* WARNING: Removing unreachable block (ram,0x00ccec9c) */
/* WARNING: Removing unreachable block (ram,0x00ccecb0) */
/* WARNING: Removing unreachable block (ram,0x00ccece4) */
/* WARNING: Removing unreachable block (ram,0x00cced10) */
/* WARNING: Removing unreachable block (ram,0x00cced18) */
/* WARNING: Removing unreachable block (ram,0x00cced58) */
/* WARNING: Removing unreachable block (ram,0x00cceec4) */
/* WARNING: Removing unreachable block (ram,0x00ccee94) */
/* WARNING: Removing unreachable block (ram,0x00ccee9c) */
/* WARNING: Removing unreachable block (ram,0x00cceea8) */
/* WARNING: Removing unreachable block (ram,0x00cceeec) */
/* WARNING: Removing unreachable block (ram,0x00ccef54) */
/* WARNING: Removing unreachable block (ram,0x00ccef10) */
/* WARNING: Removing unreachable block (ram,0x00ccef28) */
/* WARNING: Removing unreachable block (ram,0x00ccef34) */
/* WARNING: Removing unreachable block (ram,0x00ccef88) */
/* WARNING: Removing unreachable block (ram,0x00ccefec) */
/* WARNING: Removing unreachable block (ram,0x00ccf07c) */
/* WARNING: Removing unreachable block (ram,0x00ccefe4) */
/* WARNING: Removing unreachable block (ram,0x00ccf010) */
/* WARNING: Removing unreachable block (ram,0x00ccf014) */
/* WARNING: Removing unreachable block (ram,0x00ccf098) */
/* WARNING: Removing unreachable block (ram,0x00ccf034) */
/* WARNING: Removing unreachable block (ram,0x00ccf09c) */
/* WARNING: Removing unreachable block (ram,0x00ccf05c) */
/* WARNING: Removing unreachable block (ram,0x00cced40) */
/* WARNING: Removing unreachable block (ram,0x00fadae0) */
/* WARNING: Removing unreachable block (ram,0x00fadae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__DFMNNPNGNKO(void *__this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001917203 & 1) == 0) {
    func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
    func_0x00a67900(&Str_en_US);
    bRam0000000001917203 = 1;
  }
  lVar1 = func_0x00a67b44(_System_Globalization_CultureInfo_TypeInfo);
  System_Globalization_CultureInfo___ctor(lVar1,_Str_en_US,0,0);
  if (*(int *)(_System_Globalization_CultureInfo_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = System_Threading_Thread__get_CurrentThread(0,0);
  if (lVar2 != 0) {
    if ((bRam00000000019187cf & 1) == 0) {
      func_0x00a67900(&System_Action_AsyncLocalValueChangedArgs_CultureInfo___TypeInfo,lVar1,0);
      func_0x00a67900(&System_AppContextSwitches_TypeInfo);
      func_0x00a67900(&Method_System_Threading_AsyncLocal_CultureInfo___ctor__);
      func_0x00a67900(&Method_System_Threading_AsyncLocal_CultureInfo__set_Value__);
      func_0x00a67900(&System_Threading_AsyncLocal_CultureInfo__TypeInfo);
      func_0x00a67900(&System_Globalization_CultureInfo_TypeInfo);
      func_0x00a67900(&Method_System_Threading_Thread_AsyncLocalSetCurrentCulture__);
      func_0x00a67900(&System_Threading_Thread_TypeInfo);
      bRam00000000019187cf = 1;
    }
    if (lVar1 != 0) {
      func_0x016df170(*puRam000000000191f9e8);
      return;
    }
    func_0x00a67914(&System_ArgumentNullException_TypeInfo);
    uVar3 = func_0x00a67b44();
    uVar4 = func_0x00a67914(&Str_value);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = func_0x00a67914(&Method_System_Threading_Thread_set_CurrentCulture__);
    func_0x00a67a20(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void Start() { }   @0xb5e0ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Main__Start(void *__this)

{
  if ((bRam0000000001917207 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam0000000001917207 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  *(undefined1 *)(*(long *)(_Main_TypeInfo + 0xb8) + 0x20) = 1;
  return;
}


// ==== public static DAFNMLEKHAD INDLECIBMOB() { }   @0xb5e714

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Main__INDLECIBMOB(void)

{
  if ((bRam000000000191720c & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191720c = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return *(void **)(*(long *)(_Main_TypeInfo + 0xb8) + 8);
}


// ==== public static float BKPNLKDKAKA(float JGBIHEGEMJP, float HPHJFKDLPKG, float ALLBGCHDGNC) { }   @0xb5e948

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float Main__BKPNLKDKAKA(float JGBIHEGEMJP,float HPHJFKDLPKG,float ALLBGCHDGNC)

{
  float fVar1;
  
  fVar1 = (float)func_0x016ded50(ALLBGCHDGNC * -10.0);
  return (HPHJFKDLPKG - JGBIHEGEMJP) * (1.0 - fVar1) + JGBIHEGEMJP;
}



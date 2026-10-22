/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class CameraGarage : MonoBehaviour // TypeDefIndex: 5210
{
	// Fields
	private Transform LIEHBGFFHFF; // 0x20
	public Transform LOENHIOALIO; // 0x28
	public CatGarage EJBDOAADILD; // 0x30
	public float DNGCKJMGBPI; // 0x38
	public float MCMIJDNMMEC; // 0x3C
	public float EAGLNJLLKIL; // 0x40
	public static int[] HOJJLFJFOAE; // 0x0
	public static int[] AIAFBIAFIJI; // 0x8
	public float MGFMNPNPBJO; // 0x44
	public float CGBMLGOHHAO; // 0x48
	public float ALNBGFBLINB; // 0x4C
	public float DLAOJKAPHBO; // 0x50
	public float MMCJPAFDKPO; // 0x54
	public static float EEDHGFMOCFO; // 0x10
	public static float OLCNKJJGCJA; // 0x14
	public static float DLIKNENKJHG; // 0x18
	private float FLHLDIMKJMH; // 0x58
	private float BCPCBFAGAAG; // 0x5C
	public static float NNIIAKELHON; // 0x1C
	private bool FCOFECAJPJA; // 0x60
	private bool MEHDJFDHKNE; // 0x61
	private int ONOEAEDLANH; // 0x64
	private int AKEFMNGNIFJ; // 0x68
	private int PCIELBPDKBH; // 0x6C
	private Camera EIKILFDFMFB; // 0x70
	private float IGMCNCFECPC; // 0x78
	private const float BHKLGNGKFCK = -5.9;
	private float APFHDPAINHB; // 0x7C
	public float JEGANKKGHDC; // 0x80
	public float HNAIPBGPAKK; // 0x84

	// Methods

	private void ADGKBFDJPFH() { }

	private static void HIHMJIDCNEC() { }

	private static void EFCAPPJJBNE() { }

	private void DIMEPBAOOAD(int KDPHGADNELJ) { }

	public void .ctor() { }

	public static float LJOIIPPOEBG(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }

	private void PHMMMLBENKN() { }

	private void Update() { }

	private void GFOMIMMNDBH() { }

	public IEnumerator OIKFBMHJDBN() { }

	public static void IKDKLJMPOKM(EHKCLJKMBLO KENMLPFOLCH) { }

	private void Start() { }

	private static void .cctor() { }

	public static float HAAFHAFPABK(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }

	private void LBPODLFBDIK() { }

	private static void KDCDGKBJAMB() { }
}
*/

// ==== private void ADGKBFDJPFH() { }   @0xb3e0bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__ADGKBFDJPFH(void *__this)

{
  int iVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam000000000191711b & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    bRam000000000191711b = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  UnityEngine_Input__GetTouch(auStack_c8,0,0);
  func_0x016decc0(&uStack_80,auStack_c8,0x44);
  iVar1 = UnityEngine_Input__get_touchCount(0);
  if (iVar1 == 1) {
    CameraGarage__PHMMMLBENKN(__this);
    iVar1 = UnityEngine_Touch__get_phase(&uStack_80,0);
    if (iVar1 == 1) {
      fVar2 = (float)UnityEngine_Touch__get_deltaPosition(&uStack_80,0);
      fVar4 = this.JEGANKKGHDC;
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      fVar3 = Main.MFMCEKDMIBH;
      fVar2 = fVar2 * 0.003 * fVar3 + this.HNAIPBGPAKK;
      this.JEGANKKGHDC = fVar4 + in_s1 * 0.003 * fVar3;
      this.HNAIPBGPAKK = fVar2;
      if (fVar2 != 0.0) {
        fVar2 = this.CGBMLGOHHAO;
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        CameraGarage.EEDHGFMOCFO =
             fVar2 + (fVar2 - CameraGarage.OLCNKJJGCJA) *
                     this.MCMIJDNMMEC * 2.5;
      }
    }
  }
  return;
}


// ==== private void PHMMMLBENKN() { }   @0xb3e224

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__PHMMMLBENKN(void *__this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = this.JEGANKKGHDC;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar5 = this.HNAIPBGPAKK;
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar6 = this.EAGLNJLLKIL;
  if (bVar1) {
    fVar2 = 0.0;
  }
  this.JEGANKKGHDC = fVar4 + (0.0 - fVar4) * fVar2;
  fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar4 = fVar4 + fVar4;
  fVar2 = fVar4;
  if (1.0 < fVar4) {
    fVar2 = 1.0;
  }
  fVar3 = 0.0;
  if (fVar6 != 0.0) {
    fVar3 = *(float *)(&UNK_0059ca68 + (ulong)(0.0 <= fVar5) * 4);
  }
  if (fVar4 < 0.0) {
    fVar2 = 0.0;
  }
  this.HNAIPBGPAKK = fVar5 + (fVar3 - fVar5) * fVar2;
  return;
}


// ==== private static void HIHMJIDCNEC() { }   @0xb3e2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__HIHMJIDCNEC(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam000000000191711c & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711c = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_00c3e408:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    fVar5 = *(float *)((long)plVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x20);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar3 = *plVar2;
      if (lVar3 == 0) goto LAB_00c3e408;
      fVar6 = *(float *)((long)plVar2 + 0x14);
    }
    if (1 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x24);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto LAB_00c3e408;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (1 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x24);
          goto LAB_00c3e3e4;
        }
      }
      else if (*(uint *)(lVar3 + 0x18) != 0) {
        piVar1 = (int *)(lVar3 + 0x20);
LAB_00c3e3e4:
        iVar4 = *piVar1;
        *(float *)(plVar2 + 2) = (float)iVar4;
        *(float *)((long)plVar2 + 0x14) = (float)iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private static void EFCAPPJJBNE() { }   @0xb3e40c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__EFCAPPJJBNE(void)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam000000000191711d & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711d = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
LAB_00c3e54c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (2 < *(uint *)(lVar3 + 0x18)) {
    fVar5 = *(float *)((long)plVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x28);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar3 = *plVar2;
      if (lVar3 == 0) goto LAB_00c3e54c;
      fVar6 = *(float *)((long)plVar2 + 0x14);
    }
    if (3 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x2c);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar2 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar3 = *plVar2;
        if (lVar3 == 0) goto LAB_00c3e54c;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (3 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x2c);
          goto LAB_00c3e528;
        }
      }
      else if (2 < *(uint *)(lVar3 + 0x18)) {
        piVar1 = (int *)(lVar3 + 0x28);
LAB_00c3e528:
        iVar4 = *piVar1;
        *(float *)(plVar2 + 2) = (float)iVar4;
        *(float *)((long)plVar2 + 0x14) = (float)iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void DIMEPBAOOAD(int KDPHGADNELJ) { }   @0xb3e550

/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__DIMEPBAOOAD(void *__this,int KDPHGADNELJ)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar3 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar2 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x278), lVar2 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar2,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar2);
      UnityEngine_RectTransform__get_anchorMax(lVar2);
      UnityEngine_RectTransform__get_anchorMin(lVar2);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar2,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb3e688

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage___ctor(void *__this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  this.MGFMNPNPBJO = uVar1;
  this.ALNBGFBLINB = 0xbf800000;
  this.MMCJPAFDKPO = 0xc0800000;
  this.BCPCBFAGAAG = 0x41f00000;
  this.FCOFECAJPJA = 1;
  this.DNGCKJMGBPI = 0x400000003e99999a;
  *(undefined4 *)((long)__this + 100) = 0x37;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public static float LJOIIPPOEBG(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }   @0xb3e6cc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CameraGarage__LJOIIPPOEBG(float BIECADNFNCH,float CHNHFDOHLKB,float FPMAPKMIPKO)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BIECADNFNCH + 360.0;
  if (-360.0 <= BIECADNFNCH) {
    fVar1 = BIECADNFNCH;
  }
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 360.0) {
    fVar2 = fVar1;
  }
  if (fVar2 <= FPMAPKMIPKO) {
    FPMAPKMIPKO = fVar2;
  }
  if (fVar2 < CHNHFDOHLKB) {
    FPMAPKMIPKO = CHNHFDOHLKB;
  }
  return FPMAPKMIPKO;
}


// ==== private void Update() { }   @0xb3e708

/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Removing unreachable block (ram,0x00c3ed0c) */
/* WARNING: Removing unreachable block (ram,0x00c3efa0) */
/* WARNING: Removing unreachable block (ram,0x00c3eb58) */
/* WARNING: Removing unreachable block (ram,0x00c3edc0) */
/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__Update(void *__this)

{
  void *pvVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam000000000191711f & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str_Mouse_Y);
    func_0x00a67900(&Str_Mouse_X);
    bRam000000000191711f = 1;
  }
  uVar9 = this.EJBDOAADILD;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (this.EJBDOAADILD == (void *)0x0) goto LAB_00c3f014;
    CatGarage__DPMNCABIAJA(this.EJBDOAADILD);
  }
  pvVar10 = __this;
  if (this.MEHDJFDHKNE == '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar9 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    pvVar1 = __this;
    if ((uVar6 & 1) == 0) {
      pvVar1 = (void *)0x0;
    }
    if ((uVar6 & 1) == 0) {
joined_r0x00c3e978:
      bVar3 = 0;
    }
    else {
      uVar9 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0))
      goto LAB_00c3f014;
      uVar12 = *(undefined8 *)(lVar7 + 0x60);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar12,0);
      if ((uVar6 & 1) == 0) {
        uVar9 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0))
        goto LAB_00c3f014;
        uVar12 = *(undefined8 *)(lVar7 + 0x78);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Equality(uVar9,uVar12,0);
        pvVar10 = pvVar1;
        if ((uVar6 & 1) == 0) goto joined_r0x00c3e978;
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 == 0)) ||
         (lVar7 = *(long *)(lVar7 + 0x1b0), lVar7 == 0)) goto LAB_00c3f014;
      bVar3 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
      bVar3 = ~bVar3 & 1;
    }
    if (pvVar10 == (void *)0x0) goto LAB_00c3f014;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((long)pvVar10 + 0x60) = bVar3;
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Main.HLCBMDDBLNE == '\0') {
    uVar6 = UnityEngine_Input__GetMouseButton(0,0);
    if (((uVar6 & 1) == 0) || (this.FCOFECAJPJA == '\0')) goto LAB_00c3ea1c;
    uVar6 = UnityEngine_Input__GetMouseButtonDown(0,0);
    if ((uVar6 & 1) == 0) {
      fVar11 = this.JEGANKKGHDC;
    }
    else {
      fVar11 = 0.0;
      this.JEGANKKGHDC = 0;
      this.HNAIPBGPAKK = this.HNAIPBGPAKK / 100.0;
    }
    fVar17 = (float)UnityEngine_Input__GetAxis(_Str_Mouse_Y,0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    fVar18 = this.HNAIPBGPAKK;
    this.JEGANKKGHDC =
         fVar11 + fVar17 * Main.IONFLBIAGDP * 0.012;
    fVar17 = (float)UnityEngine_Input__GetAxis(_Str_Mouse_X,0);
    fVar11 = this.JEGANKKGHDC;
    if (this.JEGANKKGHDC < -0.1) {
      fVar11 = -0.1;
    }
    fVar18 = fVar18 + fVar17 * Main.IONFLBIAGDP * 0.012;
    this.JEGANKKGHDC = fVar11;
    this.HNAIPBGPAKK = fVar18;
    if (fVar18 != 0.0) {
      fVar11 = this.CGBMLGOHHAO;
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      CameraGarage.EEDHGFMOCFO =
           fVar11 + (fVar11 - CameraGarage.OLCNKJJGCJA) *
                    this.MCMIJDNMMEC * 6.5;
    }
    CameraGarage__PHMMMLBENKN(__this);
  }
  else {
    iVar4 = UnityEngine_Input__get_touchCount(0);
    if ((iVar4 == 1) && (this.FCOFECAJPJA != '\0')) {
      CameraGarage__ADGKBFDJPFH(__this);
    }
    else {
LAB_00c3ea1c:
      CameraGarage__LBPODLFBDIK(__this);
    }
  }
  uVar16 = this.CGBMLGOHHAO;
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  CameraGarage.OLCNKJJGCJA = uVar16;
  fVar17 = this.ALNBGFBLINB;
  fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
  bVar2 = fVar11 < 0.0;
  if (1.0 < fVar11) {
    fVar11 = 1.0;
  }
  if (bVar2) {
    fVar11 = 0.0;
  }
  fVar17 = fVar17 + (10.0 - fVar17) * fVar11;
  this.ALNBGFBLINB = fVar17;
  if (CameraGarage.NNIIAKELHON == 0.0) {
LAB_00c3ec34:
    fVar19 = this.JEGANKKGHDC;
    fVar20 = this.DNGCKJMGBPI;
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar18 = this.CGBMLGOHHAO;
    fVar21 = this.HNAIPBGPAKK;
    fVar22 = this.DNGCKJMGBPI;
    this.ALNBGFBLINB = fVar17 - fVar11 * fVar19 * fVar20 * 7.0 * 400.0;
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar18 = fVar18 + fVar11 * fVar21 * fVar22 * 7.0 * 400.0;
    this.CGBMLGOHHAO = fVar18;
    lVar7 = _CameraGarage_TypeInfo;
  }
  else {
    fVar11 = (float)UnityEngine_Time__get_time(0);
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = CameraGarage.<statics>;
    if (1.5 <= fVar11 - *(float *)(lVar7 + 0x1c)) {
      fVar17 = this.ALNBGFBLINB;
      goto LAB_00c3ec34;
    }
    fVar11 = this.CGBMLGOHHAO;
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = CameraGarage.<statics>;
    }
    fVar17 = *(float *)(lVar7 + 0x10);
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar7 = _CameraGarage_TypeInfo;
    if (300.0 < ABS(fVar11 - fVar17)) {
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar7 = _CameraGarage_TypeInfo;
      lVar8 = CameraGarage.<statics>;
      fVar17 = *(float *)(lVar8 + 0x10);
      fVar11 = fVar17 + 360.0;
      if (0.0 <= fVar17) {
        fVar11 = fVar17;
      }
      fVar18 = fVar11 + -360.0;
      if (fVar11 <= 360.0) {
        fVar18 = fVar11;
      }
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      fVar11 = 0.5;
      if (fVar17 - *(float *)(lVar8 + 0x14) < 0.0) {
        fVar11 = -0.5;
      }
      *(float *)(lVar8 + 0x10) = fVar11 + fVar18;
    }
    fVar18 = this.CGBMLGOHHAO;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x00a67a30();
      lVar7 = _CameraGarage_TypeInfo;
    }
    fVar19 = *(float *)(*(long *)(lVar7 + 0xb8) + 0x10);
    fVar17 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar17 = fVar17 * 3.0;
    fVar11 = fVar17;
    if (1.0 < fVar17) {
      fVar11 = 1.0;
    }
    if (fVar17 < 0.0) {
      fVar11 = 0.0;
    }
    fVar18 = fVar18 + (fVar19 - fVar18) * fVar11;
    this.CGBMLGOHHAO = fVar18;
    fVar11 = this.HNAIPBGPAKK;
    fVar19 = CameraGarage.EEDHGFMOCFO - fVar18;
    fVar17 = 1.0;
    if (fVar19 < 0.0) {
      fVar17 = -1.0;
    }
    fVar20 = 1.0;
    if (fVar11 < 0.0) {
      fVar20 = -1.0;
    }
    lVar7 = _CameraGarage_TypeInfo;
    if (fVar17 != fVar20) {
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        fVar18 = this.CGBMLGOHHAO;
        fVar19 = CameraGarage.EEDHGFMOCFO - fVar18;
      }
      lVar7 = _CameraGarage_TypeInfo;
      if (fVar19 < 0.0) {
        fVar11 = -fVar11;
      }
      this.HNAIPBGPAKK = fVar11;
    }
  }
  fVar19 = this.ALNBGFBLINB;
  fVar17 = this.FLHLDIMKJMH;
  fVar11 = this.BCPCBFAGAAG;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    func_0x00a67a30();
    fVar18 = this.CGBMLGOHHAO;
  }
  fVar20 = fVar19 + 360.0;
  if (-360.0 <= fVar19) {
    fVar20 = fVar19;
  }
  fVar19 = fVar20 + -360.0;
  if (fVar20 <= 360.0) {
    fVar19 = fVar20;
  }
  if (fVar19 <= fVar11) {
    fVar11 = fVar19;
  }
  if (fVar19 < fVar17) {
    fVar11 = fVar17;
  }
  fVar17 = fVar18 + 360.0;
  if (0.0 <= fVar18) {
    fVar17 = fVar18;
  }
  fVar18 = fVar17 + -360.0;
  if (fVar17 <= 360.0) {
    fVar18 = fVar17;
  }
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  this.CGBMLGOHHAO = fVar18;
  this.ALNBGFBLINB = fVar11;
  fVar11 = this.MMCJPAFDKPO;
  fVar17 = this.IGMCNCFECPC;
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  fVar18 = 0.0;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c3f014;
    fVar18 = CarController.KECGFPHIEHF.NDPILGPNEFL;
  }
  fVar19 = (fVar17 - fVar18) - this.APFHDPAINHB;
  fVar18 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar17 = fVar19;
  if (0.0 < fVar19) {
    fVar17 = 0.0;
  }
  if (fVar19 < -5.9) {
    fVar17 = -5.9;
  }
  if (fVar18 < 0.0) {
    fVar18 = 0.0;
  }
  uVar15 = (ulong)(uint)fVar18;
  this.MMCJPAFDKPO = fVar11 + fVar18 * (fVar17 - fVar11);
  uVar13 = (ulong)(uint)(this.CGBMLGOHHAO * 0.017453292);
  uVar14 = 0;
  uVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (this.ALNBGFBLINB * 0.017453292,uVar13,0,0);
  uVar6 = uVar13;
  uVar9 = uVar14;
  fVar11 = (float)UnityEngine_Quaternion__op_Multiply(0);
  if (this.LOENHIOALIO == 0) {
LAB_00c3f014:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar17 = (float)uVar9;
  fVar18 = (float)uVar6;
  fVar19 = (float)UnityEngine_Transform__get_position(this.LOENHIOALIO,0);
  if (this.LIEHBGFFHFF == 0) goto LAB_00c3f014;
  UnityEngine_Transform__set_rotation(uVar12,uVar13,uVar14,uVar15,this.LIEHBGFFHFF,0);
  if (this.LIEHBGFFHFF == 0) goto LAB_00c3f014;
  UnityEngine_Transform__set_position
            (fVar11 + fVar19,(float)uVar6 + fVar18,(float)uVar9 + fVar17,
             this.LIEHBGFFHFF,0);
  iVar4 = this.PCIELBPDKBH;
  iVar5 = UnityEngine_Screen__get_width(0);
  if ((iVar4 == iVar5) &&
     (iVar4 = this.AKEFMNGNIFJ, iVar5 = UnityEngine_Screen__get_height(0),
     iVar4 == iVar5)) {
    return;
  }
  uVar16 = UnityEngine_Screen__get_height(0);
  this.AKEFMNGNIFJ = uVar16;
  uVar16 = UnityEngine_Screen__get_width(0);
  this.PCIELBPDKBH = uVar16;
  if ((bRam0000000001917120 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917120 = 1;
  }
  uVar9 = this.EIKILFDFMFB;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar6 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  iVar4 = UnityEngine_Screen__get_width(0);
  iVar5 = UnityEngine_Screen__get_height(0);
  fVar11 = (float)iVar4 / (float)iVar5;
  if (fVar11 <= 1.26) {
    lVar7 = this.EIKILFDFMFB;
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42820000;
  }
  else if (fVar11 <= 1.34) {
    lVar7 = this.EIKILFDFMFB;
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42780000;
  }
  else if (fVar11 <= 1.51) {
    lVar7 = this.EIKILFDFMFB;
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x42680000;
  }
  else {
    lVar7 = this.EIKILFDFMFB;
    if (1.61 <= fVar11) {
      if (lVar7 == 0) {
LAB_00c3f2ac:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Camera__set_fieldOfView(0x425c0000,lVar7,0);
      if (1.8 <= fVar11) {
        this.APFHDPAINHB = 0x3eb33333;
      }
      goto LAB_00c3f258;
    }
    if (lVar7 == 0) goto LAB_00c3f2ac;
    uVar9 = 0x426c0000;
  }
  UnityEngine_Camera__set_fieldOfView(uVar9,lVar7,0);
LAB_00c3f258:
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar9 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x278), lVar7 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar7,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar7);
      UnityEngine_RectTransform__get_anchorMax(lVar7);
      UnityEngine_RectTransform__get_anchorMin(lVar7);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar7,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void LBPODLFBDIK() { }   @0xb3f018

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__LBPODLFBDIK(void *__this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((this.ALNBGFBLINB < 0.1) ||
     (this.BCPCBFAGAAG + -0.1 < this.ALNBGFBLINB)) {
    fVar3 = 0.0;
    this.JEGANKKGHDC = 0;
  }
  else {
    fVar3 = this.JEGANKKGHDC;
  }
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar2 = fVar2 * 5.0;
  bVar1 = fVar2 < 0.0;
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar6 = this.HNAIPBGPAKK;
  if (bVar1) {
    fVar2 = 0.0;
  }
  fVar5 = this.EAGLNJLLKIL;
  this.JEGANKKGHDC = fVar3 + (0.0 - fVar3) * fVar2;
  fVar2 = (float)UnityEngine_Time__get_deltaTime(0);
  fVar2 = fVar2 * 4.0;
  fVar3 = fVar2;
  if (1.0 < fVar2) {
    fVar3 = 1.0;
  }
  fVar4 = 0.0;
  if (fVar5 != 0.0) {
    fVar4 = *(float *)(&UNK_0059ca68 + (ulong)(0.0 <= fVar6) * 4);
  }
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  this.HNAIPBGPAKK = fVar6 + (fVar4 - fVar6) * fVar3;
  return;
}


// ==== public static float HAAFHAFPABK(float BIECADNFNCH, float CHNHFDOHLKB, float FPMAPKMIPKO) { }   @0xb3f100

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float CameraGarage__HAAFHAFPABK(float BIECADNFNCH,float CHNHFDOHLKB,float FPMAPKMIPKO)

{
  float fVar1;
  float fVar2;
  
  fVar1 = BIECADNFNCH + 360.0;
  if (0.0 <= BIECADNFNCH) {
    fVar1 = BIECADNFNCH;
  }
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 360.0) {
    fVar2 = fVar1;
  }
  if (fVar2 <= FPMAPKMIPKO) {
    FPMAPKMIPKO = fVar2;
  }
  if (fVar2 < CHNHFDOHLKB) {
    FPMAPKMIPKO = CHNHFDOHLKB;
  }
  return FPMAPKMIPKO;
}


// ==== private void GFOMIMMNDBH() { }   @0xb3f13c

/* WARNING: Removing unreachable block (ram,0x0149383c) */
/* WARNING: Removing unreachable block (ram,0x01493884) */
/* WARNING: Removing unreachable block (ram,0x014938e4) */
/* WARNING: Removing unreachable block (ram,0x01493904) */
/* WARNING: Removing unreachable block (ram,0x01493910) */
/* WARNING: Removing unreachable block (ram,0x01493924) */
/* WARNING: Removing unreachable block (ram,0x01493954) */
/* WARNING: Removing unreachable block (ram,0x01493938) */
/* WARNING: Removing unreachable block (ram,0x0149394c) */
/* WARNING: Removing unreachable block (ram,0x01493958) */
/* WARNING: Removing unreachable block (ram,0x01493964) */
/* WARNING: Removing unreachable block (ram,0x01493968) */
/* WARNING: Removing unreachable block (ram,0x0149398c) */
/* WARNING: Removing unreachable block (ram,0x01493998) */
/* WARNING: Removing unreachable block (ram,0x014939ac) */
/* WARNING: Removing unreachable block (ram,0x01493974) */
/* WARNING: Removing unreachable block (ram,0x014939cc) */
/* WARNING: Removing unreachable block (ram,0x01493978) */
/* WARNING: Removing unreachable block (ram,0x014939c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__GFOMIMMNDBH(void *__this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001917120 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917120 = 1;
  }
  uVar5 = this.EIKILFDFMFB;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar6 = (float)iVar1 / (float)iVar2;
  if (fVar6 <= 1.26) {
    lVar4 = this.EIKILFDFMFB;
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42820000;
  }
  else if (fVar6 <= 1.34) {
    lVar4 = this.EIKILFDFMFB;
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42780000;
  }
  else if (fVar6 <= 1.51) {
    lVar4 = this.EIKILFDFMFB;
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x42680000;
  }
  else {
    lVar4 = this.EIKILFDFMFB;
    if (1.61 <= fVar6) {
      if (lVar4 == 0) {
LAB_00c3f2ac:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      UnityEngine_Camera__set_fieldOfView(0x425c0000,lVar4,0);
      if (1.8 <= fVar6) {
        this.APFHDPAINHB = 0x3eb33333;
      }
      goto LAB_00c3f258;
    }
    if (lVar4 == 0) goto LAB_00c3f2ac;
    uVar5 = 0x426c0000;
  }
  UnityEngine_Camera__set_fieldOfView(uVar5,lVar4,0);
LAB_00c3f258:
  if ((bRam000000000191711e & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam000000000191711e = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    uVar5 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF != 0) &&
        (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x278), lVar4 != 0)) {
      UnityEngine_RectTransform__get_sizeDelta(lVar4,1,0);
      UnityEngine_RectTransform__GetParentSize(lVar4);
      UnityEngine_RectTransform__get_anchorMax(lVar4);
      UnityEngine_RectTransform__get_anchorMin(lVar4);
      if (pcRam000000000191c810 == (code *)0x0) {
        pcRam000000000191c810 = (code *)func_0x00a678c4(&UNK_0059f9bb);
      }
      (*pcRam000000000191c810)(lVar4,&stack0xffffffffffffffe8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public IEnumerator OIKFBMHJDBN() { }   @0xb3f2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * CameraGarage__OIKFBMHJDBN(void *__this)

{
  void *pvVar1;
  
  if ((bRam0000000001917121 & 1) == 0) {
    func_0x00a67900(&CameraGarage_KMAJDDIIPLH_TypeInfo);
    bRam0000000001917121 = 1;
  }
  pvVar1 = (void *)func_0x00a67b44(_CameraGarage_KMAJDDIIPLH_TypeInfo);
  System_Object___ctor(pvVar1,0);
  *(undefined4 *)((long)pvVar1 + 0x10) = 0;
  *(void **)((long)pvVar1 + 0x20) = __this;
  return pvVar1;
}


// ==== public static void IKDKLJMPOKM(EHKCLJKMBLO KENMLPFOLCH) { }   @0xb3f338

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__IKDKLJMPOKM(int KENMLPFOLCH)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  
  if ((bRam0000000001917122 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    bRam0000000001917122 = 1;
  }
  uVar5 = UnityEngine_Time__get_time(0);
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = _CameraGarage_TypeInfo;
  lVar1 = CameraGarage.<statics>;
  *(undefined4 *)(lVar1 + 0x1c) = uVar5;
  switch(KENMLPFOLCH) {
  case 1:
code_r0x00c3f40c:
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((bRam000000000191711c & 1) == 0) {
      func_0x00a67900(&CameraGarage_TypeInfo);
      func_0x00a67900(&System_Math_TypeInfo);
      bRam000000000191711c = 1;
    }
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
    lVar4 = *plVar3;
    if (lVar4 == 0) {
code_r0x00c3e408:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      fVar8 = *(float *)((long)plVar3 + 0x14);
      iVar7 = *(int *)(lVar4 + 0x20);
      fVar6 = fVar8;
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_System_Math_TypeInfo);
        plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar4 = *plVar3;
        if (lVar4 == 0) goto code_r0x00c3e408;
        fVar6 = *(float *)((long)plVar3 + 0x14);
      }
      if (1 < *(uint *)(lVar4 + 0x18)) {
        iVar9 = *(int *)(lVar4 + 0x24);
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
          lVar4 = *plVar3;
          if (lVar4 == 0) goto code_r0x00c3e408;
        }
        if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
          if (1 < *(uint *)(lVar4 + 0x18)) {
            piVar2 = (int *)(lVar4 + 0x24);
            goto code_r0x00c3e3e4;
          }
        }
        else if (*(uint *)(lVar4 + 0x18) != 0) {
          piVar2 = (int *)(lVar4 + 0x20);
code_r0x00c3e3e4:
          iVar7 = *piVar2;
          *(float *)(plVar3 + 2) = (float)iVar7;
          *(float *)((long)plVar3 + 0x14) = (float)iVar7;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  case 2:
    goto code_r0x00c3f4b0;
  case 3:
    break;
  case 4:
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((bRam0000000001917125 & 1) == 0) {
      func_0x00a67900(&CameraGarage_TypeInfo);
      func_0x00a67900(&System_Math_TypeInfo);
      bRam0000000001917125 = 1;
    }
    if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar4 = CameraGarage.<statics>;
    lVar1 = *(long *)(lVar4 + 8);
    if (lVar1 == 0) {
LAB_00c3f614:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      fVar8 = *(float *)(lVar4 + 0x14);
      iVar7 = *(int *)(lVar1 + 0x20);
      fVar6 = fVar8;
      if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_System_Math_TypeInfo);
        lVar4 = CameraGarage.<statics>;
        lVar1 = *(long *)(lVar4 + 8);
        if (lVar1 == 0) goto LAB_00c3f614;
        fVar6 = *(float *)(lVar4 + 0x14);
      }
      if (1 < *(uint *)(lVar1 + 0x18)) {
        iVar9 = *(int *)(lVar1 + 0x24);
        if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar4 = CameraGarage.<statics>;
          lVar1 = *(long *)(lVar4 + 8);
          if (lVar1 == 0) goto LAB_00c3f614;
        }
        if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
          if (1 < *(uint *)(lVar1 + 0x18)) {
            piVar2 = (int *)(lVar1 + 0x24);
            goto LAB_00c3f5f0;
          }
        }
        else if (*(uint *)(lVar1 + 0x18) != 0) {
          piVar2 = (int *)(lVar1 + 0x20);
LAB_00c3f5f0:
          iVar7 = *piVar2;
          *(float *)(lVar4 + 0x10) = (float)iVar7;
          *(float *)(lVar4 + 0x14) = (float)iVar7;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  default:
    goto LAB_00c3f4cc;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar1 = CameraGarage.<statics>;
    lVar4 = _CameraGarage_TypeInfo;
  }
  fVar6 = *(float *)(lVar1 + 0x14);
  if (160.0 < fVar6) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
      fVar6 = CameraGarage.OLCNKJJGCJA;
      lVar4 = _CameraGarage_TypeInfo;
    }
    if (fVar6 < 200.0) goto code_r0x00c3f40c;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = _CameraGarage_TypeInfo;
  }
  fVar6 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x14);
  if (0.0 <= fVar6) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x00a67a30();
      fVar6 = CameraGarage.OLCNKJJGCJA;
      lVar4 = _CameraGarage_TypeInfo;
    }
    if (fVar6 < 20.0) goto code_r0x00c3f4b0;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
    lVar4 = _CameraGarage_TypeInfo;
  }
  if (*(float *)(*(long *)(lVar4 + 0xb8) + 0x14) <= 340.0) {
LAB_00c3f4cc:
    return;
  }
code_r0x00c3f4b0:
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191711d & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam000000000191711d = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
  lVar4 = *plVar3;
  if (lVar4 == 0) {
code_r0x00c3e54c:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (2 < *(uint *)(lVar4 + 0x18)) {
    fVar8 = *(float *)((long)plVar3 + 0x14);
    iVar7 = *(int *)(lVar4 + 0x28);
    fVar6 = fVar8;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
      lVar4 = *plVar3;
      if (lVar4 == 0) goto code_r0x00c3e54c;
      fVar6 = *(float *)((long)plVar3 + 0x14);
    }
    if (3 < *(uint *)(lVar4 + 0x18)) {
      iVar9 = *(int *)(lVar4 + 0x2c);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        plVar3 = *(long **)(_CameraGarage_TypeInfo + 0xb8);
        lVar4 = *plVar3;
        if (lVar4 == 0) goto code_r0x00c3e54c;
      }
      if (ABS(fVar6 - (float)iVar9) <= ABS(fVar8 - (float)iVar7)) {
        if (3 < *(uint *)(lVar4 + 0x18)) {
          piVar2 = (int *)(lVar4 + 0x2c);
          goto code_r0x00c3e528;
        }
      }
      else if (2 < *(uint *)(lVar4 + 0x18)) {
        piVar2 = (int *)(lVar4 + 0x28);
code_r0x00c3e528:
        iVar7 = *piVar2;
        *(float *)(plVar3 + 2) = (float)iVar7;
        *(float *)((long)plVar3 + 0x14) = (float)iVar7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private static void KDCDGKBJAMB() { }   @0xb3f4dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__KDCDGKBJAMB(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if ((bRam0000000001917125 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&System_Math_TypeInfo);
    bRam0000000001917125 = 1;
  }
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = CameraGarage.<statics>;
  lVar3 = *(long *)(lVar2 + 8);
  if (lVar3 == 0) {
LAB_00c3f614:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    fVar5 = *(float *)(lVar2 + 0x14);
    iVar4 = *(int *)(lVar3 + 0x20);
    fVar6 = fVar5;
    if (*(int *)(_System_Math_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_System_Math_TypeInfo);
      lVar2 = CameraGarage.<statics>;
      lVar3 = *(long *)(lVar2 + 8);
      if (lVar3 == 0) goto LAB_00c3f614;
      fVar6 = *(float *)(lVar2 + 0x14);
    }
    if (1 < *(uint *)(lVar3 + 0x18)) {
      iVar7 = *(int *)(lVar3 + 0x24);
      if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar2 = CameraGarage.<statics>;
        lVar3 = *(long *)(lVar2 + 8);
        if (lVar3 == 0) goto LAB_00c3f614;
      }
      if (ABS(fVar6 - (float)iVar7) <= ABS(fVar5 - (float)iVar4)) {
        if (1 < *(uint *)(lVar3 + 0x18)) {
          piVar1 = (int *)(lVar3 + 0x24);
          goto LAB_00c3f5f0;
        }
      }
      else if (*(uint *)(lVar3 + 0x18) != 0) {
        piVar1 = (int *)(lVar3 + 0x20);
LAB_00c3f5f0:
        iVar4 = *piVar1;
        *(float *)(lVar2 + 0x10) = (float)iVar4;
        *(float *)(lVar2 + 0x14) = (float)iVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b58();
}


// ==== private void Start() { }   @0xb3f618

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage__Start(void *__this)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_28;
  
  if ((bRam0000000001917123 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&CarController_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Camera___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&System_Random_TypeInfo);
    bRam0000000001917123 = 1;
  }
  uVar3 = UnityEngine_Component__get_transform(__this,0);
  this.LIEHBGFFHFF = uVar3;
  if (*(int *)(_CameraGarage_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar6 = CameraGarage.HOJJLFJFOAE;
  plVar4 = (long *)func_0x00a67b44(_System_Random_TypeInfo);
  System_Random___ctor(plVar4,0);
  if (((CameraGarage.HOJJLFJFOAE != 0) && (plVar4 != (long *)0x0)) &&
     (uVar1 = (**(code **)(*plVar4 + 0x198))
                        (plVar4,0,CameraGarage.HOJJLFJFOAE.Length
                         ,*(undefined8 *)(*plVar4 + 0x1a0)), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    fVar7 = (float)*(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20);
    this.CGBMLGOHHAO = fVar7;
    lVar6 = CameraGarage.<statics>;
    *(float *)(lVar6 + 0x14) = fVar7;
    *(float *)(lVar6 + 0x18) = fVar7;
    *(float *)(lVar6 + 0x10) = fVar7;
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
              (__this,&uStack_28,_Method_UnityEngine_Component_GetComponent_Camera___);
    this.EIKILFDFMFB = uStack_28;
    CameraGarage__GFOMIMMNDBH(__this);
    uVar2 = UnityEngine_Screen__get_height(0);
    this.AKEFMNGNIFJ = uVar2;
    uVar2 = UnityEngine_Screen__get_width(0);
    this.PCIELBPDKBH = uVar2;
    uVar3 = this.EJBDOAADILD;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (this.EJBDOAADILD == 0) goto LAB_00c3f860;
      CatGarage__KHDFDGMBOIJ(this.EJBDOAADILD,0);
    }
    fVar7 = this.MMCJPAFDKPO;
    this.IGMCNCFECPC = fVar7;
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar3 = CarController.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    fVar8 = 0.0;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (CarController.KECGFPHIEHF == 0) goto LAB_00c3f860;
      fVar8 = CarController.KECGFPHIEHF.NDPILGPNEFL;
    }
    fVar8 = (fVar7 - fVar8) - this.APFHDPAINHB;
    fVar7 = fVar8;
    if (0.0 < fVar8) {
      fVar7 = 0.0;
    }
    if (fVar8 < -5.9) {
      fVar7 = -5.9;
    }
    this.MMCJPAFDKPO = fVar7;
    return;
  }
LAB_00c3f860:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private static void .cctor() { }   @0xb3f868

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CameraGarage___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000001917124 & 1) == 0) {
    func_0x00a67900(&CameraGarage_TypeInfo);
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&
                    Field__PrivateImplementationDetails__3D82E6070EE256DDAEF8919AA1D686E12C4A04051F9
                   );
    bRam0000000001917124 = 1;
  }
  uVar1 = func_0x00a679a0(_int___TypeInfo,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            (uVar1,_Field__PrivateImplementationDetails__3D82E6070EE256DDAEF8919AA1D686E12C4A04051F9
             ,0);
  CameraGarage.HOJJLFJFOAE = uVar1;
  lVar2 = func_0x00a679a0(_int___TypeInfo,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined4 *)(lVar2 + 0x20) = 0x10e, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined4 *)(lVar2 + 0x24) = 0x5a;
      lVar3 = CameraGarage.<statics>;
      *(long *)(lVar3 + 8) = lVar2;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



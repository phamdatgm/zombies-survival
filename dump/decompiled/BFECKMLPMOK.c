/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class BFECKMLPMOK // TypeDefIndex: 5140
{
	// Fields
	public int FCFBPKDADGO; // 0x10
	public string MBHKJPKMOAB; // 0x18
	public string BHLJGNDAMPG; // 0x20
	public string HALGNOOBBNJ; // 0x28
	public string ONGNBMJJKGD; // 0x30
	public TimeSpan APBJADLGNAC; // 0x38
	public string KPDKPBFMBKE; // 0x40
	public string MKDCFKMFIJH; // 0x48
	public string CPIEBEEGNPA; // 0x50
	public bool NOGKMBMIMJD; // 0x58
	public bool LHAEELMIGPO; // 0x59
	public string HCELMJAAIAA; // 0x60
	public bool NFKNDDJKGLH; // 0x68
	public int[] BCMHOEHDIIB; // 0x70
	public bool IEPODPKOLEP; // 0x78
	public int BBCFLOMLIHH; // 0x7C
	public int MAOGFBFIJIL; // 0x80
	public Color OFNNCIKLGHE; // 0x84
	public FPKBDOPAFGP LKGJLGKPMGG; // 0x94
	public Color GHDBHPGDGNH; // 0x98
	public string HDGFKGAAIGL; // 0xA8
	public ONKJFGIIAJE GKEJOOJNMJJ; // 0xB0
	public IIMCICACCIB BCGIFKONEJG; // 0xB4
	public string APKAGPMDJPN; // 0xB8
	public bool NANCJLFGADC; // 0xC0
	public TimeSpan LHFIHNDPFNE; // 0xC8

	// Methods

	public void .ctor() { }
}
*/

// ==== public void .ctor() { }   @0xb02928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void BFECKMLPMOK___ctor(void *__this)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001916f37 & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&Str__0__new_notifications);
    bRam0000000001916f37 = 1;
  }
  uVar1 = _Str__0__new_notifications;
  this.LHAEELMIGPO = 1;
  this.NFKNDDJKGLH = 1;
  this.BHLJGNDAMPG = uVar1;
  lVar2 = func_0x00a679a0(_int___TypeInfo,2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined4 *)(lVar2 + 0x20) = 1000, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined4 *)(lVar2 + 0x24) = 1000;
      this.BCMHOEHDIIB = lVar2;
      this.IEPODPKOLEP = 1;
      this.BBCFLOMLIHH = 0xbb800000bb8;
      *(undefined8 *)((long)__this + 0x8c) = 0x3f80000000000000;
      this.OFNNCIKLGHE = 0x3f80000000000000;
      this.GKEJOOJNMJJ = 0x300000001;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



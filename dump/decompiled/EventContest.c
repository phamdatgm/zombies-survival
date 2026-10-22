/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class EventContest // TypeDefIndex: 5103
{
	// Fields
	public int id; // 0x10
	public int lvl_id; // 0x14
	public MDGGLDMKCFB mode; // 0x18
	public MMOCGEKHBKE status; // 0x1C
	public RewardContest[] reward; // 0x20
	public int time; // 0x28
	public Replay[] replays; // 0x30

	// Properties
	public int TimeLeft { get; }
	public PMJPCDJMHPK sort { get; }
	public string desc { get; }
	public int car_id { get; }
	public bool IsUseCustonPoints { get; }

	// Methods

	public int get_TimeLeft() { }

	public PMJPCDJMHPK get_sort() { }

	public string get_desc() { }

	public int get_car_id() { }

	public bool get_IsUseCustonPoints() { }

	public void .ctor() { }
}
*/

// ==== public int get_TimeLeft() { }   @0xaef30c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EventContest__get_TimeLeft(void *__this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((bRam0000000001916ed0 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    bRam0000000001916ed0 = 1;
  }
  iVar2 = this.time;
  fVar3 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  iVar1 = -0x80000000;
  if (fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  return (iVar2 - iVar1) + BridgePHP.last_event_time_loaded;
}


// ==== public PMJPCDJMHPK get_sort() { }   @0xaf347c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EventContest__get_sort(void *__this)

{
  if (this.mode == 2) {
    return 2;
  }
  return (int)(this.mode == 5);
}


// ==== public string get_desc() { }   @0xaf349c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * EventContest__get_desc(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001916ed1 & 1) == 0) {
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str_EVENT_GOAL_);
    bRam0000000001916ed1 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uStack_24 = this.mode;
  lVar3 = Translate.KECGFPHIEHF;
  uVar1 = System_Int32__ToString(&uStack_24,0);
  uVar1 = System_String__Concat(_Str_EVENT_GOAL_,uVar1,0);
  if (lVar3 != 0) {
    pvVar2 = (void *)Translate__JJJNIPAKLJF(lVar3,uVar1,0);
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int get_car_id() { }   @0xaf3554

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int EventContest__get_car_id(void *__this)

{
  uint uVar1;
  
  uVar1 = this.mode - 1;
  if (uVar1 < 7) {
    return *(int *)(&UNK_005b9f5c + (long)(int)uVar1 * 4);
  }
  return -1;
}


// ==== public bool get_IsUseCustonPoints() { }   @0xaf357c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool EventContest__get_IsUseCustonPoints(void *__this)

{
  return this.mode - 2U < 6;
}


// ==== public void .ctor() { }   @0xaf3590

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void EventContest___ctor(void *__this)

{
  return;
}



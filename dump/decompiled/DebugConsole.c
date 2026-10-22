/* ---- class definition (Il2CppDumper) ----

// Namespace: Assets.SimpleAndroidNotifications.Helpers
public class DebugConsole : MonoBehaviour // TypeDefIndex: 5249
{
	// Fields
	public Rect DBAHOAIEIKJ; // 0x20
	public Rect COKPLAGLKCA; // 0x30
	public Rect EEIHFLADFHB; // 0x40
	public bool HEGIHOAJOKK; // 0x50
	public bool ANHGJEBKHIE; // 0x51
	private bool JDNANLAJJBB; // 0x52
	private Vector2 LGFMPJGGENL; // 0x54
	private int IJGKFIIDCAL; // 0x5C
	private readonly StringBuilder CJDABCLGDDE; // 0x60
	private readonly StringBuilder ELOBMGBFKFD; // 0x68
	private bool NNLGKJBBAMN; // 0x70

	// Methods

	public void Update() { }

	public string AFJJHCLKNPE() { }

	public void Awake() { }

	public void .ctor() { }

	public void EDLNLBFNEOO(string NGLPJEMCGCD, string PKPMNMFFKJL, LogType FHOFNGHGNGF) { }

	public void EDPEBPCDFGO() { }

	public void OnGUI() { }
}
*/

// ==== public void Update() { }   @0xb4cc88

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__Update(void *__this)

{
  ulong uVar1;
  
  uVar1 = UnityEngine_Input__GetKeyDown(0x60,0);
  if ((uVar1 & 1) != 0) {
    this.JDNANLAJJBB = this.JDNANLAJJBB ^ 1;
  }
  return;
}


// ==== public string AFJJHCLKNPE() { }   @0xb4ccb4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Assets_SimpleAndroidNotifications_Helpers_DebugConsole__AFJJHCLKNPE(void *__this)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = this.ELOBMGBFKFD;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4cccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void Awake() { }   @0xb4ccd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__Awake(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917176 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__);
    func_0x00a67900(&UnityEngine_Application_LogCallback_TypeInfo);
    bRam0000000001917176 = 1;
  }
  if (this.NNLGKJBBAMN == '\0') {
    uVar1 = func_0x00a67b44(_UnityEngine_Application_LogCallback_TypeInfo);
    UnityEngine_Application_LogCallback___ctor
              (uVar1,__this,
               _Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__,0);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__add_logMessageReceived(uVar1,0);
    this.NNLGKJBBAMN = 1;
  }
  return;
}


// ==== public void EDPEBPCDFGO() { }   @0xb4ccd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__EDPEBPCDFGO(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917176 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Application_TypeInfo);
    func_0x00a67900(&Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__);
    func_0x00a67900(&UnityEngine_Application_LogCallback_TypeInfo);
    bRam0000000001917176 = 1;
  }
  if (this.NNLGKJBBAMN == '\0') {
    uVar1 = func_0x00a67b44(_UnityEngine_Application_LogCallback_TypeInfo);
    UnityEngine_Application_LogCallback___ctor
              (uVar1,__this,
               _Method_Assets_SimpleAndroidNotifications_Helpers_DebugConsole_EDLNLBFNEOO__,0);
    if (*(int *)(_UnityEngine_Application_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Application__add_logMessageReceived(uVar1,0);
    this.NNLGKJBBAMN = 1;
  }
  return;
}


// ==== public void .ctor() { }   @0xb4cd88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam0000000001917175 & 1) == 0) {
    func_0x00a67900(&System_Text_StringBuilder_TypeInfo);
    bRam0000000001917175 = 1;
  }
  *(undefined8 *)((long)__this + 0x28) = 0x42a0000043480000;
  this.DBAHOAIEIKJ = 0;
  *(undefined8 *)((long)__this + 0x38) = 0x447a0000447a0000;
  this.COKPLAGLKCA = 0x42a0000000000000;
  *(undefined8 *)((long)__this + 0x48) = 0x447a0000447a0000;
  this.EEIHFLADFHB = 0;
  uVar1 = func_0x00a67b44(_System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(uVar1,0);
  this.CJDABCLGDDE = uVar1;
  uVar1 = func_0x00a67b44(_System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(uVar1,0);
  this.ELOBMGBFKFD = uVar1;
  if ((bRam000000000191c370 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo,0);
    bRam000000000191c370 = 1;
  }
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return;
}


// ==== public void EDLNLBFNEOO(string NGLPJEMCGCD, string PKPMNMFFKJL, LogType FHOFNGHGNGF) { }   @0xb4ce20

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__EDLNLBFNEOO
               (void *__this,void *NGLPJEMCGCD,void *PKPMNMFFKJL,int FHOFNGHGNGF)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (this.CJDABCLGDDE != 0) {
    System_Text_StringBuilder__AppendLine(this.CJDABCLGDDE,NGLPJEMCGCD,0,FHOFNGHGNGF);
    if (this.ANHGJEBKHIE != '\0') {
      if (this.CJDABCLGDDE == 0) goto LAB_00c4ce90;
      System_Text_StringBuilder__AppendLine(this.CJDABCLGDDE,PKPMNMFFKJL,0);
    }
    if (this.ELOBMGBFKFD != 0) {
      System_Text_StringBuilder__AppendLine(this.ELOBMGBFKFD,NGLPJEMCGCD,0);
      lVar5 = this.ELOBMGBFKFD;
      if (lVar5 != 0) {
        System_Text_StringBuilder__Append(lVar5,PKPMNMFFKJL,0);
        lVar6 = System_Environment__get_NewLine(0);
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar5 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          uVar2 = *(uint *)(lVar5 + 0x20);
          iVar1 = *(int *)(lVar6 + 0x10);
          if ((int)(iVar1 + uVar2) < *(int *)(lVar7 + 0x18)) {
            if (iVar1 < 3) {
              if (0 < iVar1) {
                uVar3 = System_String__get_Chars(lVar6,0,0);
                if (*(uint *)(lVar7 + 0x18) <= uVar2) {
LAB_00e30da4:
                    /* WARNING: Subroutine does not return */
                  il2cpp_throw_967b58();
                }
                *(undefined2 *)(lVar7 + (long)(int)uVar2 * 2 + 0x20) = uVar3;
                if (1 < iVar1) {
                  uVar3 = System_String__get_Chars(lVar6,1,0);
                  if (*(uint *)(lVar7 + 0x18) <= uVar2 + 1) goto LAB_00e30da4;
                  *(undefined2 *)(lVar7 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar3;
                }
              }
            }
            else {
              iVar4 = System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData(0);
              if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_00e30da4;
              System_String__wstrcpy(lVar7 + (long)(int)uVar2 * 2 + 0x20,lVar6 + iVar4,iVar1,0);
            }
            *(uint *)(lVar5 + 0x20) = iVar1 + uVar2;
          }
          else {
            System_Text_StringBuilder__AppendHelper(lVar5,lVar6);
          }
        }
        return;
      }
    }
  }
LAB_00c4ce90:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void OnGUI() { }   @0xb4ce94

/* WARNING: Removing unreachable block (ram,0x014b1470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Assets_SimpleAndroidNotifications_Helpers_DebugConsole__OnGUI(void *__this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  byte bVar11;
  float *pfVar12;
  long lVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  if ((bRam0000000001917177 & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    func_0x00a67900(&Str_Console);
    bRam0000000001917177 = 1;
  }
  if (this.HEGIHOAJOKK == '\0') {
    return;
  }
  uVar23 = this.DBAHOAIEIKJ;
  uVar19 = *(undefined4 *)((long)__this + 0x24);
  uVar22 = *(undefined4 *)((long)__this + 0x28);
  uVar18 = *(undefined4 *)((long)__this + 0x2c);
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = UnityEngine_GUI__Button(uVar23,uVar19,uVar22,uVar18,_Str_Console,0);
  bVar11 = this.JDNANLAJJBB;
  if ((uVar7 & 1) != 0) {
    bVar11 = bVar11 ^ 1;
    this.JDNANLAJJBB = bVar11;
  }
  if (bVar11 == 0) {
    return;
  }
  uVar18 = this.COKPLAGLKCA;
  uVar19 = *(undefined4 *)((long)__this + 0x34);
  uVar22 = *(undefined4 *)((long)__this + 0x38);
  uVar23 = *(undefined4 *)((long)__this + 0x3c);
  uVar25 = this.LGFMPJGGENL;
  uVar24 = *(undefined4 *)((long)__this + 0x58);
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar18 = UnityEngine_GUI__BeginScrollView(uVar18,uVar19,uVar22,uVar23,uVar25,uVar24,0);
  plVar8 = this.CJDABCLGDDE;
  this.LGFMPJGGENL = uVar18;
  *(undefined4 *)((long)__this + 0x58) = uVar19;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  fVar15 = *(float *)((long)__this + 0x48);
  uVar18 = *(undefined4 *)((long)__this + 0x4c);
  uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  fVar21 = 0.0;
  UnityEngine_GUI__TextArea(0,0,fVar15 + -50.0,uVar18,uVar9,0);
  if ((bRam000000000191ce2c & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    bRam000000000191ce2c = 1;
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191ce2d & 1) == 0) {
    func_0x00a67900(&UnityEngine_GUIUtility_TypeInfo);
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    func_0x00a67900(&UnityEngine_ScrollViewState_TypeInfo);
    bRam000000000191ce2d = 1;
  }
  if (*(int *)(_UnityEngine_GUIUtility_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_GUIUtility__CheckOnGUI();
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar8 = *(long **)(UnityEngine_GUI.<statics> + 0x50);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  iVar5 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar8 = *(long **)(UnityEngine_GUI.<statics> + 0x50);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(_UnityEngine_ScrollViewState_TypeInfo + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) +
                  (ulong)*(byte *)(_UnityEngine_ScrollViewState_TypeInfo + 0x130) * 8 + -8) !=
        _UnityEngine_ScrollViewState_TypeInfo)) {
      func_0x00a67eec(plVar8);
      if (pcRam000000000191ce70 == (code *)0x0) {
        pcRam000000000191ce70 = (code *)func_0x00a678c4(&UNK_005a4c1a);
      }
                    /* WARNING: Could not recover jumptable at 0x014b1754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191ce70)();
      return;
    }
  }
  if (pcRam000000000191ce70 == (code *)0x0) {
    pcRam000000000191ce70 = (code *)func_0x00a678c4(&UNK_005a4c1a);
  }
  (*pcRam000000000191ce70)();
  if (cRam000000000191d174 == '\0') {
    func_0x00a67900(&UnityEngine_GUI_TypeInfo);
    cRam000000000191d174 = '\x01';
  }
  if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  plVar10 = *(long **)(UnityEngine_GUI.<statics> + 0x50);
  if (plVar10 == (long *)0x0) goto LAB_014b1724;
  (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
  fVar15 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (plVar8 == (long *)0x0) goto LAB_014b1724;
  fVar20 = *(float *)((long)plVar8 + 100);
  uVar18 = UnityEngine_Time__get_realtimeSinceStartup(0);
  *(undefined4 *)((long)plVar8 + 100) = uVar18;
  if ((bRam000000000191cd88 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Event_TypeInfo);
    bRam000000000191cd88 = 1;
  }
  lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
  if (lVar13 == 0) goto LAB_014b1724;
  if (pcRam000000000191cd20 == (code *)0x0) {
    pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
  }
  fVar15 = fVar15 - fVar20;
  uVar7 = (ulong)(uint)fVar15;
  iVar5 = (*pcRam000000000191cd20)(lVar13);
  if (iVar5 == 7) {
    uVar9 = *(undefined8 *)((long)plVar8 + 0x5c);
    if (cRam0000000001916788 == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916788 = '\x01';
    }
    fVar20 = (float)uVar9 - (float)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
    fVar17 = (float)((ulong)uVar9 >> 0x20) -
             (float)((ulong)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8) >> 0x20);
    if (fVar20 * fVar20 + fVar17 * fVar17 < 9.9999994e-11) goto LAB_014b0e10;
    fVar20 = (float)func_0x016ded40(0x3dcccccd);
    bVar1 = false;
    fVar17 = 0.1 / fVar15;
    bVar4 = true;
    do {
      bVar2 = bVar4;
      fVar21 = (float)uVar7;
      if (bVar2) {
        fVar16 = fVar20 * *(float *)((long)plVar8 + 0x5c);
        *(float *)((long)plVar8 + 0x5c) = fVar16;
      }
      else {
        fVar16 = fVar20 * *(float *)(plVar8 + 0xc);
        *(float *)(plVar8 + 0xc) = fVar16;
      }
      if (fVar17 <= ABS(fVar16)) {
        if (bVar2) {
          fVar21 = fVar17;
          if (0.0 <= *(float *)((long)plVar8 + 0x5c)) {
            fVar21 = -fVar17;
          }
          fVar21 = *(float *)((long)plVar8 + 0x5c) + fVar21;
          *(float *)((long)plVar8 + 0x5c) = fVar21;
          pfVar12 = (float *)(plVar8 + 8);
        }
        else {
          fVar21 = fVar17;
          if (0.0 <= *(float *)(plVar8 + 0xc)) {
            fVar21 = -fVar17;
          }
          fVar21 = *(float *)(plVar8 + 0xc) + fVar21;
          *(float *)(plVar8 + 0xc) = fVar21;
          pfVar12 = (float *)((long)plVar8 + 0x44);
        }
        uVar7 = (ulong)(uint)*pfVar12;
        *pfVar12 = *pfVar12 + fVar15 * fVar21;
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        uVar18 = UnityEngine_Event__get_mousePosition();
        bVar1 = true;
        *(undefined4 *)((long)plVar8 + 0x4c) = uVar18;
        *(int *)(plVar8 + 10) = (int)uVar7;
        *(long *)((long)plVar8 + 0x54) = plVar8[8];
      }
      else {
        if (!bVar2) {
          *(undefined4 *)(plVar8 + 0xc) = 0;
          break;
        }
        *(undefined4 *)((long)plVar8 + 0x5c) = 0;
      }
      fVar21 = (float)uVar7;
      bVar4 = false;
    } while (bVar2);
    uVar9 = *(undefined8 *)((long)plVar8 + 0x5c);
    if (cRam0000000001916788 == '\0') {
      func_0x00a67900(&UnityEngine_Vector2_TypeInfo);
      cRam0000000001916788 = '\x01';
    }
    fVar20 = (float)uVar9 - (float)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8);
    fVar17 = (float)((ulong)uVar9 >> 0x20) -
             (float)((ulong)**(undefined8 **)(_UnityEngine_Vector2_TypeInfo + 0xb8) >> 0x20);
    if (9.9999994e-11 <= fVar20 * fVar20 + fVar17 * fVar17) {
      if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (pcRam000000000191ce00 == (code *)0x0) {
        pcRam000000000191ce00 = (code *)func_0x00a678c4(&UNK_005b9747);
      }
      (*pcRam000000000191ce00)();
    }
  }
  else {
LAB_014b0e10:
    bVar1 = false;
  }
  if ((bRam000000000191cd88 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Event_TypeInfo);
    bRam000000000191cd88 = 1;
  }
  lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
  if (lVar13 == 0) goto LAB_014b1724;
  if (pcRam000000000191cd20 == (code *)0x0) {
    pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
  }
  iVar5 = (*pcRam000000000191cd20)(lVar13);
  if (iVar5 == 6) {
LAB_014b0f78:
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 6) {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
      fVar20 = (float)UnityEngine_Event__get_mousePosition();
      if ((((*(float *)(plVar8 + 2) <= fVar20) &&
           (fVar20 < *(float *)(plVar8 + 2) + *(float *)(plVar8 + 3))) &&
          (*(float *)((long)plVar8 + 0x14) <= fVar21)) &&
         (fVar21 < *(float *)((long)plVar8 + 0x14) + *(float *)((long)plVar8 + 0x1c))) {
        fVar15 = *(float *)(plVar8 + 8);
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        fVar21 = (float)UnityEngine_Event__get_delta();
        fVar15 = fVar15 + fVar21 * 20.0;
        fVar21 = *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5);
        if (fVar15 <= *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5)) {
          fVar21 = fVar15;
        }
        fVar20 = fVar21;
        if (fVar15 < 0.0) {
          fVar20 = 0.0;
        }
        *(float *)(plVar8 + 8) = fVar20;
        fVar15 = *(float *)((long)plVar8 + 0x44);
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        UnityEngine_Event__get_delta();
        fVar15 = fVar15 + fVar21 * 20.0;
        fVar21 = *(float *)((long)plVar8 + 0x3c) - *(float *)((long)plVar8 + 0x2c);
        if (fVar15 <= fVar21) {
          fVar21 = fVar15;
        }
        if (fVar15 < 0.0) {
          fVar21 = 0.0;
        }
        *(float *)((long)plVar8 + 0x44) = fVar21;
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        UnityEngine_Event__Use();
        goto LAB_014b11ac;
      }
    }
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1e) {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
      if (lVar13 == 0) goto LAB_014b1724;
      if (pcRam000000000191ccc0 == (code *)0x0) {
        pcRam000000000191ccc0 = (code *)func_0x00a678c4(&UNK_005a57b2);
      }
      uVar6 = (*pcRam000000000191ccc0)(lVar13);
      if ((uVar6 >> 2 & 1) != 0) {
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
        fVar20 = (float)UnityEngine_Event__get_mousePosition();
        if (((*(float *)(plVar8 + 2) <= fVar20) &&
            (fVar20 < *(float *)(plVar8 + 2) + *(float *)(plVar8 + 3))) &&
           ((*(float *)((long)plVar8 + 0x14) <= fVar21 &&
            (fVar21 < *(float *)((long)plVar8 + 0x14) + *(float *)((long)plVar8 + 0x1c))))) {
          *(undefined1 *)((long)plVar8 + 0x49) = 1;
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          uVar18 = UnityEngine_Event__get_mousePosition();
          *(undefined4 *)((long)plVar8 + 0x4c) = uVar18;
          *(float *)(plVar8 + 10) = fVar21;
          *(long *)((long)plVar8 + 0x54) = plVar8[8];
          if (*(int *)(_UnityEngine_GUI_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar13 = plVar8[2];
          uVar19 = *(undefined4 *)((long)plVar8 + 0x14);
          lVar3 = plVar8[3];
          uVar22 = *(undefined4 *)((long)plVar8 + 0x1c);
          uVar18 = *(undefined4 *)(UnityEngine_GUI.<statics> + 0x24);
          if (*(int *)(_UnityEngine_GUIUtility_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          UnityEngine_GUIUtility__GetControlID((int)lVar13,uVar19,(int)lVar3,uVar22,uVar18,2);
          UnityEngine_GUIUtility__set_hotControl();
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__Use();
          goto joined_r0x014b14a4;
        }
      }
    }
    pcVar14 = (char *)((long)plVar8 + 0x49);
    if (*pcVar14 != '\0') {
      if ((bRam000000000191cd88 & 1) == 0) {
        func_0x00a67900(&UnityEngine_Event_TypeInfo);
        bRam000000000191cd88 = 1;
      }
      lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
      if (lVar13 == 0) goto LAB_014b1724;
      if (pcRam000000000191cd20 == (code *)0x0) {
        pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
      }
      iVar5 = (*pcRam000000000191cd20)(lVar13);
      if (iVar5 == 0x1f) {
        *pcVar14 = '\0';
      }
      else if (*pcVar14 != '\0') {
        if ((bRam000000000191cd88 & 1) == 0) {
          func_0x00a67900(&UnityEngine_Event_TypeInfo);
          bRam000000000191cd88 = 1;
        }
        lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
        if (lVar13 == 0) goto LAB_014b1724;
        if (pcRam000000000191cd20 == (code *)0x0) {
          pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
        }
        iVar5 = (*pcRam000000000191cd20)(lVar13);
        if (iVar5 == 0x20) {
          lVar13 = plVar8[8];
          fVar21 = *(float *)((long)plVar8 + 0x54);
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) {
LAB_014b1724:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          fVar20 = (float)UnityEngine_Event__get_mousePosition();
          fVar21 = fVar21 - (fVar20 - *(float *)((long)plVar8 + 0x4c));
          fVar20 = *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5);
          if (fVar21 <= *(float *)(plVar8 + 7) - *(float *)(plVar8 + 5)) {
            fVar20 = fVar21;
          }
          fVar17 = fVar20;
          if (fVar21 < 0.0) {
            fVar17 = 0.0;
          }
          *(float *)(plVar8 + 8) = fVar17;
          fVar21 = *(float *)(plVar8 + 0xb);
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__get_mousePosition();
          fVar21 = fVar21 - (fVar20 - *(float *)(plVar8 + 10));
          fVar20 = *(float *)((long)plVar8 + 0x3c) - *(float *)((long)plVar8 + 0x2c);
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          if (fVar21 < 0.0) {
            fVar20 = 0.0;
          }
          *(float *)((long)plVar8 + 0x44) = fVar20;
          if ((bRam000000000191cd88 & 1) == 0) {
            func_0x00a67900(&UnityEngine_Event_TypeInfo);
            bRam000000000191cd88 = 1;
          }
          if (**(long **)(_UnityEngine_Event_TypeInfo + 0xb8) == 0) goto LAB_014b1724;
          UnityEngine_Event__Use();
          fVar21 = fVar15 * 10.0;
          if (fVar15 * 10.0 < 0.0) {
            fVar21 = 0.0;
          }
          fVar20 = (float)*(undefined8 *)((long)plVar8 + 0x5c);
          fVar17 = (float)((ulong)*(undefined8 *)((long)plVar8 + 0x5c) >> 0x20);
          *(ulong *)((long)plVar8 + 0x5c) =
               CONCAT44(fVar17 + (((float)((ulong)plVar8[8] >> 0x20) -
                                  (float)((ulong)lVar13 >> 0x20)) / fVar15 - fVar17) * fVar21,
                        fVar20 + (((float)plVar8[8] - (float)lVar13) / fVar15 - fVar20) * fVar21);
          goto LAB_014b11ac;
        }
      }
    }
  }
  else {
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1e) goto LAB_014b0f78;
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x1f) goto LAB_014b0f78;
    if ((bRam000000000191cd88 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Event_TypeInfo);
      bRam000000000191cd88 = 1;
    }
    lVar13 = **(long **)(_UnityEngine_Event_TypeInfo + 0xb8);
    if (lVar13 == 0) goto LAB_014b1724;
    if (pcRam000000000191cd20 == (code *)0x0) {
      pcRam000000000191cd20 = (code *)func_0x00a678c4(&UNK_0059ddd7);
    }
    iVar5 = (*pcRam000000000191cd20)(lVar13);
    if (iVar5 == 0x20) goto LAB_014b0f78;
  }
joined_r0x014b14a4:
  if (!bVar1) {
    return;
  }
LAB_014b11ac:
  if (*(float *)(plVar8 + 8) < 0.0) {
    *(undefined4 *)(plVar8 + 8) = 0;
  }
  if (*(float *)((long)plVar8 + 0x44) < 0.0) {
    *(undefined4 *)((long)plVar8 + 0x44) = 0;
  }
  *(undefined1 *)(plVar8 + 9) = 1;
  return;
}



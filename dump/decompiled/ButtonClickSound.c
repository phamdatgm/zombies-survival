/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public class ButtonClickSound : MonoBehaviour // TypeDefIndex: 5231
{
	// Methods

	public void Awake() { }

	public void .ctor() { }

	public void EAFFPOKJHCK() { }

	[CompilerGenerated]
	private void DFDCLIIOIGE(BaseEventData HPKNEPPAEIB) { }
}
*/

// ==== public void Awake() { }   @0xb49838

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound__Awake(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam0000000001917158 & 1) == 0) {
    func_0x00a67900(&Method_ButtonClickSound_DFDCLIIOIGE__);
    func_0x00a67900(&Method_ButtonClickSound_EAFFPOKJHCK__);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_Button___);
    func_0x00a67900(&Method_UnityEngine_Component_GetComponent_EventTrigger___);
    func_0x00a67900(&Method_System_Linq_Enumerable_SingleOrDefault_EventTrigger_Entry___);
    func_0x00a67900(&System_Func_EventTrigger_Entry__bool__TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Method_ButtonClickSound___c_LCOKJMOJPCM__);
    func_0x00a67900(&ButtonClickSound___c_TypeInfo);
    func_0x00a67900(&UnityEngine_Events_UnityAction_BaseEventData__TypeInfo);
    func_0x00a67900(&UnityEngine_Events_UnityAction_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Events_UnityEvent_BaseEventData__AddListener__);
    bRam0000000001917158 = 1;
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_38,_Method_UnityEngine_Component_GetComponent_Button___);
  lVar3 = lStack_38;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (lVar3 == 0) goto LAB_00c49ad8;
    lVar3 = *(long *)(lVar3 + 0x100);
    uVar2 = func_0x00a67b44(_UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor(uVar2,__this,_Method_ButtonClickSound_EAFFPOKJHCK__,0);
    if (lVar3 == 0) goto LAB_00c49ad8;
    UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar2,0);
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
            (__this,&lStack_38,_Method_UnityEngine_Component_GetComponent_EventTrigger___);
  lVar3 = lStack_38;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (lVar3 == 0) {
LAB_00c49ad8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = UnityEngine_EventSystems_EventTrigger__get_triggers(lVar3,0);
    if (*(int *)(_ButtonClickSound___c_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_ButtonClickSound___c_TypeInfo);
    }
    lVar3 = *(long *)(ButtonClickSound___c.<statics> + 8);
    if (lVar3 == 0) {
      if (*(int *)(_ButtonClickSound___c_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_ButtonClickSound___c_TypeInfo);
      }
      uVar4 = **(undefined8 **)(_ButtonClickSound___c_TypeInfo + 0xb8);
      lVar3 = func_0x00a67b44(_System_Func_EventTrigger_Entry__bool__TypeInfo);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
                (lVar3,uVar4,_Method_ButtonClickSound___c_LCOKJMOJPCM__,0);
      *(long *)(ButtonClickSound___c.<statics> + 8) = lVar3;
    }
    System_Linq_Enumerable__SingleOrDefault___Il2CppFullySharedGenericType_
              (uVar2,lVar3,&lStack_38,
               _Method_System_Linq_Enumerable_SingleOrDefault_EventTrigger_Entry___);
    if (lStack_38 != 0) {
      lVar3 = *(long *)(lStack_38 + 0x18);
      uVar2 = func_0x00a67b44(_UnityEngine_Events_UnityAction_BaseEventData__TypeInfo);
      UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor
                (uVar2,__this,_Method_ButtonClickSound_DFDCLIIOIGE__,0);
      if (lVar3 == 0) goto LAB_00c49ad8;
      UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener
                (lVar3,uVar2,_Method_UnityEngine_Events_UnityEvent_BaseEventData__AddListener__);
    }
  }
  return;
}


// ==== public void .ctor() { }   @0xb49adc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound___ctor(void *__this)

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


// ==== public void EAFFPOKJHCK() { }   @0xb49ae4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound__EAFFPOKJHCK(void *__this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  if ((bRam0000000001917159 & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917159 = 1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar4 = 0;
  lVar1 = SoundScript.ECFNFAMPDND;
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
    uVar4 = extraout_x1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    uVar4 = extraout_x1_00;
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo,uVar4);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 != 0) {
    uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar1 != 0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(lVar1,0);
          return;
        }
        goto LAB_00c5d08c;
      }
    }
    return;
  }
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== private void DFDCLIIOIGE(BaseEventData HPKNEPPAEIB) { }   @0xb49b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ButtonClickSound__DFDCLIIOIGE(void *__this,void *HPKNEPPAEIB)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *extraout_x1;
  undefined8 uVar4;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  if ((bRam0000000001917159 & 1) == 0) {
    func_0x00a67900(&SoundScript_TypeInfo);
    bRam0000000001917159 = 1;
    HPKNEPPAEIB = extraout_x1;
  }
  if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_SoundScript_TypeInfo,HPKNEPPAEIB);
  }
  uVar4 = 0;
  lVar1 = SoundScript.ECFNFAMPDND;
  if ((bRam0000000001917246 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001917246 = 1;
    uVar4 = extraout_x1_00;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    uVar4 = extraout_x1_01;
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo,uVar4);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar2 = Main.FBDDKIOEKDM;
  if (lVar2 != 0) {
    uVar3 = DAFNMLEKHAD__BMMOMBGDEKF(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar3 = UnityEngine_Object__op_Inequality(lVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar1 != 0) {
          if (pcRam000000000191b620 == (code *)0x0) {
            pcRam000000000191b620 = (code *)func_0x00a678c4(&UNK_005a4326,0);
          }
                    /* WARNING: Could not recover jumptable at 0x01464c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191b620)(lVar1,0);
          return;
        }
        goto LAB_00c5d08c;
      }
    }
    return;
  }
LAB_00c5d08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}



/* ---- class definition (Il2CppDumper) ----

// Namespace: 
[Serializable]
public class Level // TypeDefIndex: 5190
{
	// Fields
	public const int event_id_offset = 100;
	public int id; // 0x10
	public string translate_key; // 0x18
	public string scene_id; // 0x20
	public LevelTasks[] tasks; // 0x28
	public int unlock_after_lvl_id; // 0x30
	public int[] progress_percent; // 0x38
	private GUILevel _gui; // 0x40
	private float road_anim_time; // 0x48
	private bool is_hidden; // 0x4C
	private bool is_already_animated; // 0x4D
	public static int last_finished; // 0x0
	public static int total_story_levels; // 0x4
	public EventContest event_contest; // 0x50
	public RewardContest reward_completed_event; // 0x58
	public Replay event_replay_ghost; // 0x60
	public bool is_event_attention_icon; // 0x68
	private float start_task_scale_x; // 0x6C

	// Properties
	public string SceneId { get; }
	public bool IsTutorial { get; }
	public bool IsEvent { get; }
	public int EventId { get; }
	public GUILevel gui { get; }
	public bool IsAvailable { get; }

	// Methods

	public void BBGODPBKHPF() { }

	public void FKJAANMGOMP() { }

	public string get_SceneId() { }

	public bool get_IsAvailable() { }

	public static Level FHMGLDDPEDJ(int HKGEOJPHLAN) { }

	public void BIBHMOPJLCO() { }

	public int MNPHCGOJNCN() { }

	public string DBEGLMBGKNL() { }

	private void CBKFPGOAMCA() { }

	public GUILevel get_gui() { }

	public int get_EventId() { }

	public void POIIKNJOHOP() { }

	public bool get_IsEvent() { }

	public void HMPEMADOAAL() { }

	public bool get_IsTutorial() { }

	private static void .cctor() { }

	public void FOOFLNEEJFI() { }

	public void ICIKEDJLOBK() { }

	public void .ctor() { }
}
*/

// ==== public void BBGODPBKHPF() { }   @0xb2f27c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__BBGODPBKHPF(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam00000000019170bc & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170bc = 1;
  }
  if (this.is_already_animated != '\0') {
    return;
  }
  if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Level.last_finished < 0) {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if (lVar4 == 0) {
LAB_00c2f510:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x50);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  fVar10 = this.road_anim_time;
  fVar9 = (float)UnityEngine_Time__get_time(0);
  if (fVar9 < fVar10) {
    lVar4 = Level__get_gui(__this);
    if (lVar4 != 0) {
      plVar8 = *(long **)(lVar4 + 0x50);
      fVar10 = this.road_anim_time;
      fVar9 = (float)UnityEngine_Time__get_time(0);
      fVar10 = (fVar10 - fVar9) * 1.33;
      fVar9 = fVar10;
      if (1.0 < fVar10) {
        fVar9 = 1.0;
      }
      if (fVar10 < 0.0) {
        fVar9 = 0.0;
      }
      if (plVar8 != (long *)0x0) {
        fVar10 = fVar9 * 0.0 + 1.0;
                    /* WARNING: Could not recover jumptable at 0x00c2f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x2a8))
                  (fVar10,fVar10,fVar10,1.0 - fVar9,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        return;
      }
    }
    goto LAB_00c2f510;
  }
  if (this.is_hidden == '\0') {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
  goto LAB_00c2f510;
  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar4 = Level__get_gui(__this);
  if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
  goto LAB_00c2f510;
  UnityEngine_GameObject__SetActive(lVar4,1,0);
  this.is_hidden = 0x100;
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c2f510;
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0))
      goto LAB_00c2f510;
      GUIGarage__AEBFNHHILNI(lVar4,0);
    }
  }
  if ((bRam00000000019170c4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 != 0) {
    lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,this.id,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    uVar7 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c2fa24;
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    iVar1 = this.id;
    if (99 < iVar1) {
      return;
    }
    if (iVar1 == 1) {
      if (this.is_hidden != '\0') {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != Main.NMDEEOMHAGP) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = Main.FBDDKIOEKDM;
          if ((lVar4 == 0) || (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0,0), lVar4 == 0))
          goto LAB_00c2fa24;
          uVar2 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          if (((Menu.KECGFPHIEHF == 0) ||
              (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
             (lVar4 = *(long *)(lVar4 + 0x2f8), lVar4 == 0)) goto LAB_00c2fa24;
          uVar2 = uVar2 & 1;
          goto LAB_00c2fa0c;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0))
      goto LAB_00c2fa24;
      lVar4 = *(long *)(lVar4 + 0x2f8);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != Main.NMDEEOMHAGP) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF != 0) &&
              (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
             (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 != 0)) {
            UnityEngine_GameObject__SetActive(lVar4,1,0);
            if ((Menu.KECGFPHIEHF != 0) &&
               (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
              if ((bRam0000000001916fcc & 1) == 0) {
                func_0x00a67900(&Main_TypeInfo,0);
                bRam0000000001916fcc = 1;
              }
              uVar5 = GUIGarage__DCFAACLJPKH(lVar4);
              if ((((uVar5 & 1) == 0) || (*(long *)(lVar4 + 0x238) == 0)) ||
                 (*(long *)(*(long *)(lVar4 + 0x238) + 0x18) == 0)) {
                return;
              }
              if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                 (lVar3 = UnityEngine_GameObject__get_gameObject(*(long *)(lVar4 + 0x2f0),0),
                 lVar3 != 0)) {
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                   (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1c0),0),
                   lVar3 != 0)) {
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                  if ((uVar5 & 1) != 0) {
                    return;
                  }
                  if (*(char *)(lVar4 + 0x250) != '\0') {
                    return;
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (cRam0000000001916e67 == '\0') {
                    func_0x00a67900(&Main_TypeInfo);
                    cRam0000000001916e67 = '\x01';
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar3 = Main.FBDDKIOEKDM;
                  if (lVar3 != 0) {
                    if (*(int *)(lVar3 + 0x108) == 0) {
                      return;
                    }
                    if (*(long *)(lVar4 + 0x1d0) != 0) {
                      lVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar4 + 0x1d0),0);
                      if ((*(long *)(lVar4 + 0x70) != 0) &&
                         (uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x70),0),
                         lVar3 != 0)) {
                        UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                        if (*(long *)(lVar4 + 0x1c0) != 0) {
                          lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1c0),0);
                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                             (uVar7 = UnityEngine_Component__get_transform
                                                (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                            if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                               (lVar3 = UnityEngine_Component__get_transform
                                                  (*(long *)(lVar4 + 0x1c0),0), lVar3 != 0)) {
                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                              lVar3 = *(long *)(lVar4 + 0x238);
                              if (lVar3 != 0) {
                                if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00c17730:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b58();
                                }
                                if (*(long *)(lVar3 + 0x20) != 0) {
                                  lVar3 = UnityEngine_Component__get_transform
                                                    (*(long *)(lVar3 + 0x20),0);
                                  if ((*(long *)(lVar4 + 0x70) != 0) &&
                                     (uVar7 = UnityEngine_Component__get_transform
                                                        (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                                    UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                    lVar3 = *(long *)(lVar4 + 0x238);
                                    if (lVar3 != 0) {
                                      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c17730;
                                      if ((*(long *)(lVar3 + 0x20) != 0) &&
                                         (lVar3 = UnityEngine_Component__get_transform
                                                            (*(long *)(lVar3 + 0x20),0), lVar3 != 0)
                                         ) {
                                        UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                        if (*(long *)(lVar4 + 0x2f0) != 0) {
                                          lVar3 = UnityEngine_GameObject__get_transform
                                                            (*(long *)(lVar4 + 0x2f0),0);
                                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                                             (uVar7 = UnityEngine_Component__get_transform
                                                                (*(long *)(lVar4 + 0x70),0),
                                             lVar3 != 0)) {
                                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                            if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                                               (lVar3 = UnityEngine_GameObject__get_transform
                                                                  (*(long *)(lVar4 + 0x2f0),0),
                                               lVar3 != 0)) {
                                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                              if (*(long *)(lVar4 + 0x1c8) != 0) {
                                                UnityEngine_MonoBehaviour__StopCoroutine
                                                          (lVar4,*(long *)(lVar4 + 0x1c8),0);
                                              }
                                              lVar3 = GUIGarage__KEPPKPEAEOO(lVar4);
                                              *(long *)(lVar4 + 0x1c8) = lVar3;
                                              if (lVar3 == 0) {
                                                func_0x00a67914(&
                                                  System_NullReferenceException_TypeInfo,0,0);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&Str_routine_is_null);
                                                System_NullReferenceException___ctor(uVar6,uVar7,0);
                                              }
                                              else {
                                                if (pcRam000000000191c478 == (code *)0x0) {
                                                  pcRam000000000191c478 =
                                                       (code *)func_0x00a678c4(&UNK_005a63bb);
                                                }
                                                uVar5 = (*pcRam000000000191c478)(lVar4);
                                                if ((uVar5 & 1) != 0) {
                                                  if (pcRam000000000191c488 == (code *)0x0) {
                                                    pcRam000000000191c488 =
                                                         (code *)func_0x00a678c4(&UNK_005ac95e);
                                                  }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*pcRam000000000191c488)(lVar4,lVar3);
                                                  return;
                                                }
                                                func_0x00a67914(&System_ArgumentException_TypeInfo);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&
                                                  Str_Coroutines_can_only_be_stopped_on_a_Mono);
                                                System_ArgumentException___ctor(uVar6,uVar7,0);
                                              }
                                              uVar7 = func_0x00a67914(&
                                                  Method_UnityEngine_MonoBehaviour_StartCoroutine__)
                                              ;
                                              auVar11 = func_0x00a67a20(uVar6,uVar7);
                                              if (pcRam000000000191c488 == (code *)0x0) {
                                                pcRam000000000191c488 =
                                                     (code *)func_0x00a678c4(&UNK_005ac95e);
                                              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*pcRam000000000191c488)(auVar11._0_8_,auVar11._8_8_);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
          }
          goto LAB_00c2fa24;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 == 0)) goto LAB_00c2fa24;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x1c0), lVar4 == 0)) goto LAB_00c2fa24;
      lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
    }
    if (lVar4 != 0) {
      uVar2 = 0;
LAB_00c2fa0c:
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar4,uVar2);
      return;
    }
  }
LAB_00c2fa24:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public GUILevel get_gui() { }   @0xb2f514

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__get_gui(void *__this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((bRam00000000019170c5 & 1) == 0) {
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c5 = 1;
  }
  uVar6 = this._gui;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar3 = Menu.KECGFPHIEHF;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) {
LAB_00c2f668:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    if (*(long *)(*(long *)(lVar3 + 0x20) + 0x238) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
        lVar3 = Menu.KECGFPHIEHF;
        if (lVar3 == 0) goto LAB_00c2f668;
      }
      if ((*(long *)(lVar3 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x20) + 0x238), lVar4 == 0)) goto LAB_00c2f668;
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar3 = Menu.KECGFPHIEHF;
          if (lVar3 == 0) goto LAB_00c2f668;
        }
        if ((*(long *)(lVar3 + 0x20) == 0) ||
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x238), lVar3 == 0)) goto LAB_00c2f668;
        iVar1 = *(int *)(lVar3 + 0x18);
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            if (iVar1 == iVar5) {
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b58();
            }
            lVar4 = *(long *)(lVar3 + (long)iVar5 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_00c2f668;
            if (*(int *)(lVar4 + 0x20) == this.id) {
              this._gui = lVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
      }
    }
  }
  return this._gui;
}


// ==== private void CBKFPGOAMCA() { }   @0xb2f670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__CBKFPGOAMCA(void *__this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam00000000019170c4 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c4 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (cRam0000000001916e67 == '\0') {
    func_0x00a67900(&Main_TypeInfo);
    cRam0000000001916e67 = '\x01';
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar4 = Main.FBDDKIOEKDM;
  if (lVar4 != 0) {
    lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,this.id,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    uVar7 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c2fa24;
    uVar7 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    iVar1 = this.id;
    if (99 < iVar1) {
      return;
    }
    if (iVar1 == 1) {
      if (this.is_hidden != '\0') {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != Main.NMDEEOMHAGP) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar4 = Main.FBDDKIOEKDM;
          if ((lVar4 == 0) || (lVar4 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar4,0,0), lVar4 == 0))
          goto LAB_00c2fa24;
          uVar2 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          if (((Menu.KECGFPHIEHF == 0) ||
              (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
             (lVar4 = *(long *)(lVar4 + 0x2f8), lVar4 == 0)) goto LAB_00c2fa24;
          uVar2 = uVar2 & 1;
          goto LAB_00c2fa0c;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0))
      goto LAB_00c2fa24;
      lVar4 = *(long *)(lVar4 + 0x2f8);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != Main.NMDEEOMHAGP) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (((Menu.KECGFPHIEHF != 0) &&
              (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) &&
             (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 != 0)) {
            UnityEngine_GameObject__SetActive(lVar4,1,0);
            if ((Menu.KECGFPHIEHF != 0) &&
               (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 != 0)) {
              if ((bRam0000000001916fcc & 1) == 0) {
                func_0x00a67900(&Main_TypeInfo,0);
                bRam0000000001916fcc = 1;
              }
              uVar5 = GUIGarage__DCFAACLJPKH(lVar4);
              if ((((uVar5 & 1) == 0) || (*(long *)(lVar4 + 0x238) == 0)) ||
                 (*(long *)(*(long *)(lVar4 + 0x238) + 0x18) == 0)) {
                return;
              }
              if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                 (lVar3 = UnityEngine_GameObject__get_gameObject(*(long *)(lVar4 + 0x2f0),0),
                 lVar3 != 0)) {
                uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                   (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x1c0),0),
                   lVar3 != 0)) {
                  uVar5 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
                  if ((uVar5 & 1) != 0) {
                    return;
                  }
                  if (*(char *)(lVar4 + 0x250) != '\0') {
                    return;
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (cRam0000000001916e67 == '\0') {
                    func_0x00a67900(&Main_TypeInfo);
                    cRam0000000001916e67 = '\x01';
                  }
                  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar3 = Main.FBDDKIOEKDM;
                  if (lVar3 != 0) {
                    if (*(int *)(lVar3 + 0x108) == 0) {
                      return;
                    }
                    if (*(long *)(lVar4 + 0x1d0) != 0) {
                      lVar3 = UnityEngine_GameObject__get_transform(*(long *)(lVar4 + 0x1d0),0);
                      if ((*(long *)(lVar4 + 0x70) != 0) &&
                         (uVar7 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x70),0),
                         lVar3 != 0)) {
                        UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                        if (*(long *)(lVar4 + 0x1c0) != 0) {
                          lVar3 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x1c0),0);
                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                             (uVar7 = UnityEngine_Component__get_transform
                                                (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                            if ((*(long *)(lVar4 + 0x1c0) != 0) &&
                               (lVar3 = UnityEngine_Component__get_transform
                                                  (*(long *)(lVar4 + 0x1c0),0), lVar3 != 0)) {
                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                              lVar3 = *(long *)(lVar4 + 0x238);
                              if (lVar3 != 0) {
                                if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00c17730:
                    /* WARNING: Subroutine does not return */
                                  il2cpp_throw_967b58();
                                }
                                if (*(long *)(lVar3 + 0x20) != 0) {
                                  lVar3 = UnityEngine_Component__get_transform
                                                    (*(long *)(lVar3 + 0x20),0);
                                  if ((*(long *)(lVar4 + 0x70) != 0) &&
                                     (uVar7 = UnityEngine_Component__get_transform
                                                        (*(long *)(lVar4 + 0x70),0), lVar3 != 0)) {
                                    UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                    lVar3 = *(long *)(lVar4 + 0x238);
                                    if (lVar3 != 0) {
                                      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00c17730;
                                      if ((*(long *)(lVar3 + 0x20) != 0) &&
                                         (lVar3 = UnityEngine_Component__get_transform
                                                            (*(long *)(lVar3 + 0x20),0), lVar3 != 0)
                                         ) {
                                        UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                        if (*(long *)(lVar4 + 0x2f0) != 0) {
                                          lVar3 = UnityEngine_GameObject__get_transform
                                                            (*(long *)(lVar4 + 0x2f0),0);
                                          if ((*(long *)(lVar4 + 0x70) != 0) &&
                                             (uVar7 = UnityEngine_Component__get_transform
                                                                (*(long *)(lVar4 + 0x70),0),
                                             lVar3 != 0)) {
                                            UnityEngine_Transform__SetParent(lVar3,uVar7,0);
                                            if ((*(long *)(lVar4 + 0x2f0) != 0) &&
                                               (lVar3 = UnityEngine_GameObject__get_transform
                                                                  (*(long *)(lVar4 + 0x2f0),0),
                                               lVar3 != 0)) {
                                              UnityEngine_Transform__SetAsLastSibling(lVar3,0);
                                              if (*(long *)(lVar4 + 0x1c8) != 0) {
                                                UnityEngine_MonoBehaviour__StopCoroutine
                                                          (lVar4,*(long *)(lVar4 + 0x1c8),0);
                                              }
                                              lVar3 = GUIGarage__KEPPKPEAEOO(lVar4);
                                              *(long *)(lVar4 + 0x1c8) = lVar3;
                                              if (lVar3 == 0) {
                                                func_0x00a67914(&
                                                  System_NullReferenceException_TypeInfo,0,0);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&Str_routine_is_null);
                                                System_NullReferenceException___ctor(uVar6,uVar7,0);
                                              }
                                              else {
                                                if (pcRam000000000191c478 == (code *)0x0) {
                                                  pcRam000000000191c478 =
                                                       (code *)func_0x00a678c4(&UNK_005a63bb);
                                                }
                                                uVar5 = (*pcRam000000000191c478)(lVar4);
                                                if ((uVar5 & 1) != 0) {
                                                  if (pcRam000000000191c488 == (code *)0x0) {
                                                    pcRam000000000191c488 =
                                                         (code *)func_0x00a678c4(&UNK_005ac95e);
                                                  }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*pcRam000000000191c488)(lVar4,lVar3);
                                                  return;
                                                }
                                                func_0x00a67914(&System_ArgumentException_TypeInfo);
                                                uVar6 = func_0x00a67b44();
                                                uVar7 = func_0x00a67914(&
                                                  Str_Coroutines_can_only_be_stopped_on_a_Mono);
                                                System_ArgumentException___ctor(uVar6,uVar7,0);
                                              }
                                              uVar7 = func_0x00a67914(&
                                                  Method_UnityEngine_MonoBehaviour_StartCoroutine__)
                                              ;
                                              auVar8 = func_0x00a67a20(uVar6,uVar7);
                                              if (pcRam000000000191c488 == (code *)0x0) {
                                                pcRam000000000191c488 =
                                                     (code *)func_0x00a678c4(&UNK_005ac95e);
                                              }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*pcRam000000000191c488)(auVar8._0_8_,auVar8._8_8_);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_throw_967b50();
            }
          }
          goto LAB_00c2fa24;
        }
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x2f0), lVar4 == 0)) goto LAB_00c2fa24;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar4 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar4 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 0x1c0), lVar4 == 0)) goto LAB_00c2fa24;
      lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
    }
    if (lVar4 != 0) {
      uVar2 = 0;
LAB_00c2fa0c:
      if (pcRam000000000191c3f8 == (code *)0x0) {
        pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
      }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000191c3f8)(lVar4,uVar2);
      return;
    }
  }
LAB_00c2fa24:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void FKJAANMGOMP() { }   @0xb2fa28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__FKJAANMGOMP(void *__this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((bRam00000000019170bd & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&EventContest_TypeInfo);
    func_0x00a67900(&int_TypeInfo);
    func_0x00a67900(&MMOCGEKHBKE_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&RatingEventController_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&System_TimeSpan_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__0_);
    func_0x00a67900(&Str_0_00_00);
    func_0x00a67900(&Str___lvl__);
    func_0x00a67900(&Str___1_);
    func_0x00a67900(&Str____status__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_Set_Cached_Event__Id__);
    func_0x00a67900(&Str__0___1_00___2_00_);
    bRam00000000019170bd = 1;
  }
  uStack_48 = 0;
  uVar4 = Level__get_IsAvailable(__this);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar10 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c3036c;
      uVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
      if ((((uVar4 & 1) != 0) && (this.event_contest != 0)) &&
         (this.event_contest.mode != 0)) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0))
        goto LAB_00c3036c;
        uVar10 = *(undefined8 *)(lVar8 + 0x48);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar4 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (BridgePHP.is_need_update_game == '\0') {
            if (this.event_contest != 0) {
              iVar2 = EventContest__get_TimeLeft(this.event_contest,0);
              if (iVar2 < 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF != 0) &&
                    (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 != 0)) &&
                   (plVar5 = *(long **)(lVar8 + 0x340), plVar5 != (long *)0x0)) {
                  (**(code **)(*plVar5 + 0x5a8))
                            (plVar5,_Str_0_00_00,*(undefined8 *)(*plVar5 + 0x5b0));
                  lVar8 = Level__get_gui(__this);
                  if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
                    (**(code **)(*plVar5 + 0x5a8))(plVar5,_Str_,*(undefined8 *)(*plVar5 + 0x5b0));
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (BridgePHP.is_start_updating_event_from_server != '\0') {
                      return;
                    }
                    fVar12 = (float)UnityEngine_Time__get_time(0);
                    if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if (fVar12 <= BridgePHP.last_check_event_for_refresh) {
                      return;
                    }
                    lVar8 = this.event_contest;
                    this.event_replay_ghost = 0;
                    if (lVar8 != 0) {
                      if (*(int *)(lVar8 + 0x1c) == 0) {
                        *(undefined4 *)(lVar8 + 0x1c) = 1;
                        lVar8 = func_0x00a679a0(_string___TypeInfo,6);
                        if (lVar8 == 0) goto LAB_00c3036c;
                        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_00c30370:
                    /* WARNING: Subroutine does not return */
                          il2cpp_throw_967b58();
                        }
                        *(undefined8 *)(lVar8 + 0x20) = _Str_Set_Cached_Event__Id__;
                        if (this.event_contest == 0) goto LAB_00c3036c;
                        uVar10 = System_Int32__ToString(this.event_contest + 0x10,0);
                        if ((*(uint *)(lVar8 + 0x18) < 2) ||
                           (*(undefined8 *)(lVar8 + 0x28) = uVar10, *(uint *)(lVar8 + 0x18) == 2))
                        goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x30) = _Str___lvl__;
                        if (this.event_contest == 0) goto LAB_00c3036c;
                        uVar10 = System_Int32__ToString(this.event_contest + 0x14,0);
                        if ((*(uint *)(lVar8 + 0x18) < 4) ||
                           (*(undefined8 *)(lVar8 + 0x38) = uVar10, *(uint *)(lVar8 + 0x18) == 4))
                        goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x40) = _Str____status__;
                        if (this.event_contest == 0) goto LAB_00c3036c;
                        uStack_58 = this.event_contest.status;
LAB_00c3016c:
                        uStack_60 = 0xffffffffffffffff;
                        uStack_68 = _MMOCGEKHBKE_TypeInfo;
                        uVar10 = System_Enum__ToString(&uStack_68,0);
                        if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_00c30370;
                        *(undefined8 *)(lVar8 + 0x48) = uVar10;
                        uVar10 = System_String__Concat(lVar8,0);
                        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30(_Main_TypeInfo);
                        }
                        Main__GEMDEAMAGPG(uVar10,0,0);
                      }
                      else {
                        if (((*(int *)(lVar8 + 0x1c) == 1) &&
                            (lVar8 = RatingEventController.GBOBBEDAFKH, lVar8 != 0
                            )) && (uVar1 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar1)) {
                          lVar9 = 0;
                          do {
                            if (uVar1 <= (uint)lVar9) goto LAB_00c30370;
                            lVar11 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
                            if (lVar11 == 0) goto LAB_00c3036c;
                            if ((*(int *)(lVar11 + 0x1c) == 0) &&
                               (*(int *)(lVar11 + 0x14) + 100 == this.id)) {
                              this.event_contest = lVar11;
                              lVar8 = func_0x00a679a0(_string___TypeInfo,6);
                              if (lVar8 == 0) goto LAB_00c3036c;
                              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x20) = _Str_Set_Cached_Event__Id__;
                              uVar10 = System_Int32__ToString(lVar11 + 0x10,0);
                              if ((*(uint *)(lVar8 + 0x18) < 2) ||
                                 (*(undefined8 *)(lVar8 + 0x28) = uVar10,
                                 *(uint *)(lVar8 + 0x18) == 2)) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x30) = _Str___lvl__;
                              uVar10 = System_Int32__ToString(lVar11 + 0x14,0);
                              if ((*(uint *)(lVar8 + 0x18) < 4) ||
                                 (*(undefined8 *)(lVar8 + 0x38) = uVar10,
                                 *(uint *)(lVar8 + 0x18) == 4)) goto LAB_00c30370;
                              *(undefined8 *)(lVar8 + 0x40) = _Str____status__;
                              uStack_58 = *(undefined4 *)(lVar11 + 0x1c);
                              goto LAB_00c3016c;
                            }
                            lVar9 = lVar9 + 1;
                          } while ((int)lVar9 < (int)uVar1);
                        }
                        uVar10 = func_0x00a67b44(_EventContest_TypeInfo);
                        EventContest___ctor(uVar10,0);
                        this.event_contest = uVar10;
                      }
                      Level__HMPEMADOAAL(__this);
                      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (Main.NMDEEOMHAGP == __this) {
                        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        if ((Menu.KECGFPHIEHF == 0) ||
                           (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0
                           )) goto LAB_00c3036c;
                        GUIGarage__PGEEGDGGHLL(lVar8,__this,0,0);
                      }
                      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      if (((Menu.KECGFPHIEHF != 0) &&
                          (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 != 0)
                          ) && (lVar8 = *(long *)(lVar8 + 0x48), lVar8 != 0)) {
                        RatingEventController__OJBAJGILIJN(lVar8,__this,1);
                        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
                          func_0x00a67a30();
                        }
                        BridgePHP.is_start_updating_event_from_server = 1;
                        fVar12 = (float)UnityEngine_Time__get_time(0);
                        BridgePHP.last_check_event_for_refresh = fVar12 + 20.0;
                        return;
                      }
                    }
                  }
                }
              }
              else {
                if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uStack_48 = System_TimeSpan__FromSeconds((double)iVar2,0);
                iVar2 = System_TimeSpan__get_Days(&uStack_48,0);
                if (iVar2 < 1) {
                  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar3 = System_TimeSpan__get_Hours(&uStack_48,0);
                  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
                  uVar10 = func_0x00a67a38(_int_TypeInfo,&uStack_68);
                  uStack_4c = System_TimeSpan__get_Minutes(&uStack_48,0);
                  uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_4c);
                  uStack_50 = System_TimeSpan__get_Seconds(&uStack_48,0);
                  uVar7 = func_0x00a67a38(_int_TypeInfo,&uStack_50);
                  uVar10 = System_String__Format(_Str__0___1_00___2_00_,uVar10,uVar6,uVar7,0);
                }
                else {
                  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  lVar8 = Translate.KECGFPHIEHF;
                  if (lVar8 == 0) goto LAB_00c3036c;
                  uVar10 = System_String__Concat
                                     (_Str__0_,*(undefined8 *)(lVar8 + 0x20),_Str___1_,
                                      *(undefined8 *)(lVar8 + 0x28),0);
                  if (*(int *)(_System_TimeSpan_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30(_System_TimeSpan_TypeInfo);
                  }
                  uVar3 = System_TimeSpan__get_Days(&uStack_48,0);
                  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
                  uVar6 = func_0x00a67a38(_int_TypeInfo,&uStack_68);
                  uStack_4c = System_TimeSpan__get_Hours(&uStack_48,0);
                  uVar7 = func_0x00a67a38(_int_TypeInfo,&uStack_4c);
                  uVar10 = System_String__Format(uVar10,uVar6,uVar7,0);
                }
                if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (Main.NMDEEOMHAGP == __this) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0)) ||
                     (plVar5 = *(long **)(lVar8 + 0x340), plVar5 == (long *)0x0)) goto LAB_00c3036c;
                  (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x5b0));
                }
                lVar8 = Level__get_gui(__this);
                if (((lVar8 != 0) && (this.event_contest != 0)) &&
                   (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
                  if (this.event_contest.status != 1) {
                    uVar10 = _Str_;
                  }
                  (**(code **)(*plVar5 + 0x5a8))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x5b0));
                  return;
                }
              }
            }
            goto LAB_00c3036c;
          }
        }
      }
    }
  }
  lVar8 = Level__get_gui(__this);
  if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x40), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5a8))(plVar5,_Str_,*(undefined8 *)(*plVar5 + 0x5b0));
    return;
  }
LAB_00c3036c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool get_IsAvailable() { }   @0xb30374

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsAvailable(void *__this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam00000000019170bf & 1) == 0) {
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__);
    func_0x00a67900(&Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__);
    func_0x00a67900(&Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170bf = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (this.id < 100) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = Main.FBDDKIOEKDM;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x120), lVar2 != 0)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator
                (lVar2,&uStack_48,
                 _Method_System_Collections_Generic_List_DJKGLJOCFCE__GetEnumerator__);
      bVar4 = true;
      while( true ) {
        do {
          uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext
                            (&uStack_48,
                             _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__MoveNext__
                            );
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose
                      (&uStack_48,
                       _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__Dispose__);
            return bVar4;
          }
          func_0x00b947ec(&uStack_48,&lStack_28,
                          _Method_System_Collections_Generic_List_Enumerator_DJKGLJOCFCE__get_Current__
                         );
        } while (this.id < 1);
        if (lStack_28 == 0) break;
        if (this.id + -1 == *(int *)(lStack_28 + 0x10)) {
          bVar1 = DJKGLJOCFCE__MCDLFBJCNNA(lStack_28,0);
          bVar4 = (bool)(bVar4 & bVar1);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
LAB_00c30600:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if (0 < this.unlock_after_lvl_id) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar2 = Main.FBDDKIOEKDM;
    if (lVar2 == 0) goto LAB_00c30600;
    lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,this.unlock_after_lvl_id,0);
    if (lVar2 != 0) {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar2 = Main.FBDDKIOEKDM;
      if ((lVar2 == 0) ||
         (lVar2 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar2,this.unlock_after_lvl_id,0), lVar2 == 0
         )) goto LAB_00c30600;
      bVar1 = DJKGLJOCFCE__MCDLFBJCNNA(lVar2,0);
      goto LAB_00c305bc;
    }
  }
  bVar1 = 1;
LAB_00c305bc:
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  return (bool)(bVar1 & Main.OJDDINBFCNH == '\0');
}


// ==== public void HMPEMADOAAL() { }   @0xb30684

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__HMPEMADOAAL(void *__this)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((bRam00000000019170c6 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&NotificationsManager_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str__GrayscaleValue);
    bRam00000000019170c6 = 1;
  }
  bVar3 = Level__get_IsAvailable(__this);
  if (bVar3) {
    Level__ICIKEDJLOBK(__this);
    iVar2 = this.id;
    lVar4 = Level__get_gui(__this);
    if (lVar4 == 0) goto LAB_00c30bc0;
    if (iVar2 < 100) {
      plVar6 = *(long **)(lVar4 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_00c30bc0;
      lVar4 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Main_TypeInfo);
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar8 = Main.FBDDKIOEKDM;
      if (lVar8 == 0) goto LAB_00c30bc0;
      lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,this.id,0);
      uVar9 = _Str__GrayscaleValue;
      if (lVar8 == 0) {
        uVar10 = 0x3f800000;
      }
      else {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar8 = Main.FBDDKIOEKDM;
        if ((lVar8 == 0) ||
           (lVar8 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar8,this.id,0),
           lVar8 == 0)) goto LAB_00c30bc0;
        uVar5 = DJKGLJOCFCE__MCDLFBJCNNA(lVar8,0);
        uVar10 = 0;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0x3f800000;
        }
      }
      if (lVar4 == 0) goto LAB_00c30bc0;
      UnityEngine_Material__SetFloat(uVar10,lVar4,uVar9,0);
      Level__MNPHCGOJNCN(__this);
    }
    else {
      if (*(long *)(lVar4 + 0x58) == 0) goto LAB_00c30bc0;
      UnityEngine_GameObject__SetActive
                (*(long *)(lVar4 + 0x58),this.is_event_attention_icon,0);
      lVar4 = Level__get_gui(__this);
      if ((lVar4 == 0) || (this.event_contest == 0)) goto LAB_00c30bc0;
      lVar4 = *(long *)(lVar4 + 0x28);
      iVar2 = this.event_contest.status;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar8 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar8 == 0)) ||
         (lVar4 == 0)) goto LAB_00c30bc0;
      lVar1 = 0x358;
      if (iVar2 < 1) {
        lVar1 = 0x360;
      }
      UnityEngine_UI_Image__set_sprite(lVar4,*(undefined8 *)(lVar8 + lVar1),0);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (__this != Main.NMDEEOMHAGP) {
      lVar4 = Level__get_gui(__this);
      if (lVar4 == 0) goto LAB_00c30bc0;
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = Level__get_gui(__this);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_00c30bc0;
        fVar11 = (float)UnityEngine_Transform__get_localScale(*(long *)(lVar4 + 0x30),0);
        if (1.01 < fVar11) {
          lVar4 = Level__get_gui(__this);
          if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_00c30bc0;
          UnityEngine_Transform__set_localScale
                    (0x3f800000,0x3f800000,0x3f800000,*(long *)(lVar4 + 0x30),0);
        }
      }
    }
    if (this.is_already_animated == '\0') {
      lVar4 = Level__get_gui(__this);
      if (lVar4 == 0) goto LAB_00c30bc0;
      uVar9 = *(undefined8 *)(lVar4 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        iVar2 = this.id;
        iVar7 = Level.last_finished;
        if (iVar7 + 1 == iVar2) {
          if (99 < iVar2) {
LAB_00c30ad8:
            if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
              iVar7 = Level.last_finished;
            }
            if (iVar7 != this.unlock_after_lvl_id) goto LAB_00c30b8c;
          }
          this.is_hidden = 1;
          fVar11 = (float)UnityEngine_Time__get_time(0);
          this.road_anim_time = fVar11 + 0.75;
          lVar4 = Level__get_gui(__this);
          if ((lVar4 == 0) || (plVar6 = *(long **)(lVar4 + 0x50), plVar6 == (long *)0x0))
          goto LAB_00c30bc0;
          (**(code **)(*plVar6 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          if (99 < this.id) {
            lVar4 = this.event_contest;
            uVar10 = 0;
            if (lVar4 == 0) goto LAB_00c30b90;
            if (*(int *)(_NotificationsManager_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            NotificationsManager__HFGMIIHKBPC(lVar4,0);
          }
          uVar10 = 0;
        }
        else {
          if (99 < iVar2) goto LAB_00c30ad8;
LAB_00c30b8c:
          uVar10 = 1;
        }
LAB_00c30b90:
        lVar4 = Level__get_gui(__this);
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x50) == 0)) ||
           (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x50),0), lVar4 == 0))
        goto LAB_00c30bc0;
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        goto LAB_00c30a98;
      }
    }
    uVar10 = 1;
  }
  else {
    lVar4 = Level__get_gui(__this);
    if (lVar4 == 0) goto LAB_00c30bc0;
    uVar9 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      lVar4 = Level__get_gui(__this);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x50) == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x50),0), lVar4 == 0))
      goto LAB_00c30bc0;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    uVar10 = 0;
  }
LAB_00c30a98:
  Level__CBKFPGOAMCA(__this);
  lVar4 = Level__get_gui(__this);
  if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
    if (pcRam000000000191c3f8 == (code *)0x0) {
      pcRam000000000191c3f8 = (code *)func_0x00a678c4(&UNK_005b5004);
    }
                    /* WARNING: Could not recover jumptable at 0x0148b518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000191c3f8)(lVar4,uVar10);
    return;
  }
LAB_00c30bc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public string get_SceneId() { }   @0xb30df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__get_SceneId(void *__this)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 uStack_14;
  
  if ((bRam00000000019170be & 1) == 0) {
    func_0x00a67900(&Str_level_event_);
    bRam00000000019170be = 1;
  }
  if ((this.id < 100) || (this.event_contest == 0)) {
    pvVar2 = this.scene_id;
  }
  else {
    uStack_14 = this.event_contest.mode;
    uVar1 = System_Int32__ToString(&uStack_14,0);
    pvVar2 = (void *)System_String__Concat(_Str_level_event_,uVar1,0);
  }
  return pvVar2;
}


// ==== public bool get_IsEvent() { }   @0xb30e74

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsEvent(void *__this)

{
  return 99 < this.id;
}


// ==== public static Level FHMGLDDPEDJ(int HKGEOJPHLAN) { }   @0xb30e84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__FHMGLDDPEDJ(int HKGEOJPHLAN)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  
  if ((bRam00000000019170c0 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    bRam00000000019170c0 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Main.KECGFPHIEHF != 0) &&
     (lVar3 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      pvVar5 = (void *)0x0;
    }
    else {
      iVar4 = 0;
      pvVar2 = (void *)0x0;
      do {
        if (iVar1 == iVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        pvVar5 = *(void **)(lVar3 + (long)iVar4 * 8 + 0x20);
        if (pvVar5 == (void *)0x0) goto LAB_00c30f38;
        iVar4 = iVar4 + 1;
        if (*(int *)((long)pvVar5 + 0x10) != HKGEOJPHLAN) {
          pvVar5 = pvVar2;
        }
        pvVar2 = pvVar5;
      } while (iVar1 != iVar4);
    }
    return pvVar5;
  }
LAB_00c30f38:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void BIBHMOPJLCO() { }   @0xb30f3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__BIBHMOPJLCO(void *__this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  byte bVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  long lStack_68;
  long *in_stack_ffffffffffffffc8;
  
  if ((bRam00000000019170c1 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    bRam00000000019170c1 = 1;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = Main.<statics>;
  if (*(void **)(lVar12 + 0x40) != __this) {
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = Main.<statics>;
    }
    *(void **)(lVar12 + 0x40) = __this;
    uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
    Main.LNHNCBOIGOF = uVar19;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
    goto LAB_00c310d0;
    if ((bRam0000000001916f75 & 1) == 0) {
      func_0x00a67900(&Main_TypeInfo,0);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&Str_UpdateMap);
      bRam0000000001916f75 = 1;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Main.KECGFPHIEHF == 0) ||
       (lVar16 = Main.KECGFPHIEHF.IHPBACJOJMA, lVar16 == 0)) {
LAB_00c0b950:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar2 = *(uint *)(lVar16 + 0x18);
    if (0 < (int)uVar2) {
      uVar17 = 0;
      do {
        if (uVar2 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (lVar15 == Main.NMDEEOMHAGP) {
          GUIGarage__PGEEGDGGHLL(lVar12,lVar15,1);
        }
        if (lVar15 == 0) goto LAB_00c0b950;
        uVar5 = Level__get_IsEvent(lVar15,0);
        if ((uVar5 & 1) != 0) {
          Level__FKJAANMGOMP(lVar15,0);
        }
        Level__HMPEMADOAAL(lVar15,0);
        uVar2 = *(uint *)(lVar16 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar2);
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c0b950;
    uVar14 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar12 == 0))
      goto LAB_00c0b950;
      BridgePHP__RefreshUserProfileAndEvents(lVar12,0);
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    plVar7 = _Str_UpdateMap;
    if ((bRam0000000001917206 & 1) == 0) {
      func_0x00a67900(&UnityEngine_Debug_TypeInfo,0,0);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      bRam0000000001917206 = 1;
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (cRam0000000001916e67 == '\0') {
      func_0x00a67900(&Main_TypeInfo);
      cRam0000000001916e67 = '\x01';
    }
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = Main.FBDDKIOEKDM;
    if (lVar12 == 0) {
LAB_00c590c8:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b50();
    }
    uVar5 = DAFNMLEKHAD__LLEFEIHEJDE(lVar12,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_UnityEngine_Debug_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    UnityEngine_Debug__Log(plVar7,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c590c8;
    uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) || (plVar7 == (long *)0x0)) goto LAB_00c590c8;
    lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (lVar12 == 0) goto LAB_00c590c8;
    if ((bRam0000000001916fbb & 1) == 0) {
      func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_Text___,uVar14,0,0);
      func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&float_TypeInfo);
      func_0x00a67900(&string___TypeInfo);
      func_0x00a67900(&Str____color___);
      func_0x00a67900(&Str__FF4E4A);
      func_0x00a67900(&Str__0_f2_);
      func_0x00a67900(&Str___);
      func_0x00a67900(&Str__78e938);
      func_0x00a67900(&Str_);
      func_0x00a67900(&Str__color_);
      bRam0000000001916fbb = 1;
    }
    plVar7 = *(long **)(lVar12 + 0x1e8);
    if ((plVar7 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)),
       lVar16 == 0)) goto LAB_00c16768;
    if (10000 < *(int *)(lVar16 + 0x10)) {
      if (*(long *)(lVar12 + 0x1e8) == 0) goto LAB_00c16768;
      uVar8 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x1e8),0);
      if ((*(long *)(lVar12 + 0x1e8) == 0) ||
         (lVar16 = UnityEngine_Component__get_transform(*(long *)(lVar12 + 0x1e8),0), lVar16 == 0))
      goto LAB_00c16768;
      uVar9 = UnityEngine_Transform__get_parent(lVar16,0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      lVar16 = UnityEngine_Object__Instantiate_object_
                         (uVar8,uVar9,_Method_UnityEngine_Object_Instantiate_GameObject___);
      if (lVar16 == 0) goto LAB_00c16768;
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                (lVar16,&stack0xffffffffffffffc8,_Method_UnityEngine_GameObject_GetComponent_Text___
                );
      *(long **)(lVar12 + 0x1e8) = in_stack_ffffffffffffffc8;
      if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_00c16768;
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x5a8))
                (in_stack_ffffffffffffffc8,_Str_,*(undefined8 *)(*in_stack_ffffffffffffffc8 + 0x5b0)
                );
    }
    plVar7 = *(long **)(lVar12 + 0x1e8);
    lVar12 = func_0x00a679a0(_string___TypeInfo,8);
    if ((plVar7 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar7 + 0x598))(plVar7,*(undefined8 *)(*plVar7 + 0x5a0)), lVar12 != 0
       )) {
      uVar2 = *(uint *)(lVar12 + 0x18);
      if ((uVar2 != 0) &&
         (((*(undefined8 *)(lVar12 + 0x20) = uVar8, uVar2 != 1 &&
           (*(undefined8 *)(lVar12 + 0x28) = _Str__color_, 2 < uVar2)) &&
          (*(undefined8 *)(lVar12 + 0x30) = _Str__78e938, uVar2 != 3)))) {
        *(undefined8 *)(lVar12 + 0x38) = _Str___;
        UnityEngine_Time__get_time(0);
        uVar8 = func_0x00a67a38(_float_TypeInfo,&stack0xffffffffffffffc4);
        uVar8 = System_String__Format(_Str__0_f2_,uVar8,0);
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (((4 < uVar2) && (*(undefined8 *)(lVar12 + 0x40) = uVar8, uVar2 != 5)) &&
           (*(undefined8 *)(lVar12 + 0x48) = _Str____color___, 6 < uVar2)) {
          *(undefined8 *)(lVar12 + 0x50) = uVar14;
          uVar14 = System_Environment__get_NewLine(0);
          if (7 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = uVar14;
            uVar14 = System_String__Concat(lVar12,0);
            (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
LAB_00c16768:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  iVar3 = this.id;
  if (99 < iVar3) {
    if (*(int *)(_Level_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar12 = Level__FHMGLDDPEDJ(iVar3);
    if (lVar12 == 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar16 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar16 == 0))
    goto LAB_00c310d0;
    if ((bRam0000000001916fa5 & 1) == 0) {
      func_0x00a67900(&BridgePHP_TypeInfo,lVar12,1,0);
      func_0x00a67900(&Method_UnityEngine_Component_GetComponent_RectTransform___);
      func_0x00a67900(&Main_TypeInfo);
      func_0x00a67900(&Menu_TypeInfo);
      func_0x00a67900(&UnityEngine_Object_TypeInfo);
      func_0x00a67900(&Translate_TypeInfo);
      func_0x00a67900(&Str_EVENT_TIME_START_IN);
      func_0x00a67900(&Str_EVENT_TIME_END_IN);
      func_0x00a67900(&Str_EVENT_ANY_CAR);
      func_0x00a67900(&Str_);
      bRam0000000001916fa5 = 1;
    }
    if ((lVar12 == 0) || (uVar5 = Level__get_IsEvent(lVar12,0), (uVar5 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      bVar1 = *(int *)(*(long *)(lVar12 + 0x50) + 0x1c) == 1;
    }
    if (bVar1) {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (BridgePHP.is_need_update_game == '\0') {
        if (*(long *)(lVar16 + 0x48) == 0) goto LAB_00c12d8c;
        RatingEventController__OJBAJGILIJN(*(long *)(lVar16 + 0x48),lVar12,0,0);
      }
    }
    if (lVar12 == 0) goto LAB_00c12d8c;
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
LAB_00c12828:
      bVar18 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) goto LAB_00c12828;
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      bVar18 = BridgePHP.is_need_update_game ^ 1;
    }
    lVar15 = *(long *)(lVar16 + 0x300);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,~uVar2 & 1,0);
    lVar15 = *(long *)(lVar16 + 0x308);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar2 & 1,0);
    if (*(long *)(lVar16 + 0x310) == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(*(long *)(lVar16 + 0x310),bVar18 != 0,0);
    lVar15 = *(long *)(lVar16 + 0x350);
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
      cVar11 = '\0';
    }
    else {
      if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      cVar11 = BridgePHP.is_need_update_game;
    }
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,cVar11 != '\0',0);
    lVar15 = *(long *)(lVar16 + 0x330);
    uVar2 = Level__get_IsEvent(lVar12,0);
    if (lVar15 == 0) goto LAB_00c12d8c;
    UnityEngine_GameObject__SetActive(lVar15,uVar2 & 1,0);
    GUIGarage__ADMNOIMMGGA(lVar16,bVar18 != 0);
    uVar5 = Level__get_IsEvent(lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar16 + 0x328) == 0) goto LAB_00c12d8c;
      lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar16 + 0x328),0);
joined_r0x00c12a74:
      if (lVar12 == 0) goto LAB_00c12d8c;
      uVar14 = 0;
    }
    else {
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      plVar7 = *(long **)(lVar16 + 0x318);
      uVar14 = EventContest__get_desc(*(long *)(lVar12 + 0x50),0);
      if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      lVar15 = *(long *)(lVar16 + 0x368);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (lVar15 == 0) goto LAB_00c12d8c;
      UnityEngine_GameObject__SetActive
                (lVar15,Main.LHBBBLINMIE,0);
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      iVar3 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
      if (iVar3 < 0) {
LAB_00c12a7c:
        plVar7 = *(long **)(lVar16 + 800);
        if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Translate.KECGFPHIEHF == 0) ||
           (uVar14 = Translate__JJJNIPAKLJF
                               (Translate.KECGFPHIEHF,_Str_EVENT_ANY_CAR,0),
           plVar7 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      }
      else {
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        iVar3 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
        }
        lVar15 = Main.KECGFPHIEHF;
        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_00c12d8c;
        if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) <= iVar3) goto LAB_00c12a7c;
        plVar7 = *(long **)(lVar16 + 800);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_Main_TypeInfo);
          lVar15 = Main.KECGFPHIEHF;
          if (lVar15 == 0) goto LAB_00c12d8c;
        }
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        lVar15 = *(long *)(lVar15 + 0x28);
        uVar2 = EventContest__get_car_id(*(long *)(lVar12 + 0x50),0);
        if (lVar15 == 0) goto LAB_00c12d8c;
        if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          il2cpp_throw_967b58();
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        if ((lVar15 == 0) || (plVar7 == (long *)0x0)) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))
                  (plVar7,*(undefined8 *)(lVar15 + 0x10),*(undefined8 *)(*plVar7 + 0x5b0));
      }
      if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
      plVar7 = *(long **)(lVar16 + 0x338);
      iVar3 = *(int *)(*(long *)(lVar12 + 0x50) + 0x1c);
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00c12d8c;
      puVar13 = (undefined8 *)&Str_EVENT_TIME_END_IN;
      if (iVar3 != 1) {
        puVar13 = (undefined8 *)&Str_EVENT_TIME_START_IN;
      }
      uVar14 = Translate__JJJNIPAKLJF(Translate.KECGFPHIEHF,*puVar13,0);
      if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
      (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
      if (*(long *)(lVar16 + 0x338) == 0) goto LAB_00c12d8c;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType_
                (*(long *)(lVar16 + 0x338),&stack0xffffffffffffffc8,
                 _Method_UnityEngine_Component_GetComponent_RectTransform___);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(in_stack_ffffffffffffffc8,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(lVar12 + 0x50) == 0) || (in_stack_ffffffffffffffc8 == (long *)0x0))
        goto LAB_00c12d8c;
        uVar19 = 0x43c30000;
        if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) {
          uVar19 = 0x44688000;
        }
        UnityEngine_RectTransform__SetSizeWithCurrentAnchors(uVar19,in_stack_ffffffffffffffc8,0,0);
        uVar19 = UnityEngine_RectTransform__get_anchoredPosition(in_stack_ffffffffffffffc8,0);
        if (*(long *)(lVar12 + 0x50) == 0) goto LAB_00c12d8c;
        uVar21 = 0x42b20000;
        if (*(int *)(*(long *)(lVar12 + 0x50) + 0x1c) != 1) {
          uVar21 = 0x42960000;
        }
        UnityEngine_RectTransform__set_anchoredPosition(uVar19,uVar21,in_stack_ffffffffffffffc8,0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar12 == 0))
      goto LAB_00c12d8c;
      uVar14 = BridgePHP__GetErrors(lVar12,1,0);
      uVar5 = System_String__op_Inequality(uVar14,_Str_,0);
      if ((*(long *)(lVar16 + 0x328) == 0) ||
         (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar16 + 0x328),0), lVar12 == 0))
      goto LAB_00c12d8c;
      if ((uVar5 & 1) != 0) {
        UnityEngine_GameObject__SetActive(lVar12,1,0);
        if (*(long *)(lVar16 + 0x308) == 0) goto LAB_00c12d8c;
        UnityEngine_GameObject__SetActive(*(long *)(lVar16 + 0x308),0,0);
        plVar7 = *(long **)(lVar16 + 0x328);
        if (plVar7 == (long *)0x0) goto LAB_00c12d8c;
        (**(code **)(*plVar7 + 0x5a8))(plVar7,uVar14,*(undefined8 *)(*plVar7 + 0x5b0));
        lVar12 = *(long *)(lVar16 + 0x330);
        goto joined_r0x00c12a74;
      }
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      lVar12 = *(long *)(lVar16 + 0x330);
      if (lVar12 == 0) goto LAB_00c12d8c;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar14,0);
    GUIGarage__KBINLNMDLEC(lVar16);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    bVar1 = Main__KCHOEBEIOCE();
    if (bVar1) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar12 = Menu.KECGFPHIEHF;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x58) == 0)) {
LAB_00c12d8c:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      if (*(char *)(*(long *)(lVar12 + 0x58) + 0x30) != '\0') {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
          lVar12 = Menu.KECGFPHIEHF;
          if (lVar12 == 0) goto LAB_00c12d8c;
        }
        if (*(void **)(lVar12 + 0x58) == (void *)0x0) goto LAB_00c12d8c;
        GamePadController__PKDDGJPLNAP(*(void **)(lVar12 + 0x58));
      }
    }
    return;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((Menu.KECGFPHIEHF == 0) ||
     (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) {
LAB_00c310d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001916f81 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo,0);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam0000000001916f81 = 1;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = Menu.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c0dbe0;
    uVar5 = Menu__CLJDAMIIAKE(Menu.KECGFPHIEHF,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c0dbe0;
      if (Menu.KECGFPHIEHF.LADJPNBMCBN == '\0') {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LCFFGBBHMPH = 0;
        GUIGarage__PIHABGKNPDI(lVar12,1);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF != 0) {
          lVar16 = Menu__LBKMBBLLINK(Menu.KECGFPHIEHF,0,0);
          if (lVar16 == 0) {
            func_0x00a67914(&System_NullReferenceException_TypeInfo,0,0);
            uVar8 = func_0x00a67b44();
            uVar14 = func_0x00a67914(&Str_routine_is_null);
            System_NullReferenceException___ctor(uVar8,uVar14,0);
          }
          else {
            if (pcRam000000000191c478 == (code *)0x0) {
              pcRam000000000191c478 = (code *)func_0x00a678c4(&UNK_005a63bb);
            }
            uVar5 = (*pcRam000000000191c478)(lVar12);
            if ((uVar5 & 1) != 0) {
              if (pcRam000000000191c488 == (code *)0x0) {
                pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
              }
                    /* WARNING: Could not recover jumptable at 0x0148c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam000000000191c488)(lVar12,lVar16);
              return;
            }
            func_0x00a67914(&System_ArgumentException_TypeInfo);
            uVar8 = func_0x00a67b44();
            uVar14 = func_0x00a67914(&Str_Coroutines_can_only_be_stopped_on_a_Mono);
            System_ArgumentException___ctor(uVar8,uVar14,0);
          }
          uVar14 = func_0x00a67914(&Method_UnityEngine_MonoBehaviour_StartCoroutine__);
          auVar22 = func_0x00a67a20(uVar8,uVar14);
          if (pcRam000000000191c488 == (code *)0x0) {
            pcRam000000000191c488 = (code *)func_0x00a678c4(&UNK_005ac95e);
          }
                    /* WARNING: Could not recover jumptable at 0x0148c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000191c488)(auVar22._0_8_,auVar22._8_8_);
          return;
        }
        goto LAB_00c0dbe0;
      }
    }
  }
  pvVar6 = *(void **)(lVar12 + 0x78);
  *(undefined1 *)(lVar12 + 0x630) = 1;
  if (pvVar6 == (void *)0x0) {
LAB_00c0dbe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b50();
  }
  if ((bRam0000000001917151 & 1) == 0) {
    func_0x00a67900(&CarController_TypeInfo,0,0);
    func_0x00a67900(&GUIWindow_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_DonateItem___);
    func_0x00a67900(&Method_UnityEngine_GameObject_GetComponent_RectTransform___);
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&Method_UnityEngine_Object_Instantiate_GameObject___);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&SoundScript_TypeInfo);
    func_0x00a67900(&string___TypeInfo);
    func_0x00a67900(&Str_Try_to_Show__);
    func_0x00a67900(&Str_Window__Show__);
    func_0x00a67900(&Str_null);
    func_0x00a67900(&Str____Child__);
    func_0x00a67900(&Str___last__);
    func_0x00a67900(&Str___current__);
    bRam0000000001917151 = 1;
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,8);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x20) = _Str_Try_to_Show__;
  lVar16 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar16 == 0) goto LAB_00c485b8;
  uVar14 = UnityEngine_Object__get_name(lVar16,0);
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar14, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___current__;
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 4) ||
     (*(undefined8 *)(lVar12 + 0x38) = uVar14, *(uint *)(lVar12 + 0x18) == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str___last__;
  uVar14 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar16 = GUIWindow.PADNIFKFMPL;
    if (lVar16 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar16,0);
  }
  uVar2 = *(uint *)(lVar12 + 0x18);
  if ((uVar2 < 6) || (*(undefined8 *)(lVar12 + 0x48) = uVar14, uVar2 == 6)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x50) = _Str____Child__;
  plVar7 = GUIWindow.DNEPGKHAOBF;
  uVar14 = 0;
  if (plVar7 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar2 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar2 < 8) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x58) = uVar14;
  uVar14 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    uVar14 = GUIWindow.DNEPGKHAOBF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar14 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar14,pvVar6,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar14 = GUIWindow.DNEPGKHAOBF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  lVar12 = _GUIWindow_TypeInfo;
  if ((uVar5 & 1) != 0) {
    lVar12 = GUIWindow.DNEPGKHAOBF;
    if (lVar12 == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(lVar12,0);
    lVar12 = _GUIWindow_TypeInfo;
    GUIWindow.DNEPGKHAOBF = 0;
  }
  uVar14 = **(undefined8 **)(lVar12 + 0xb8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    GUIWindow__JGDCBENNDFO(GUIWindow.OFEJBBPBBFG,0);
  }
  lVar12 = GUIWindow__FEHHGIGJIKL();
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)((long)pvVar6 + 0x20) == '\0') {
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) == 0) goto LAB_00c46b74;
      uVar19 = UnityEngine_Time__get_time(0);
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = 0;
      Menu.GCDHNMAHOEP = uVar19;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if (((uVar5 & 1) != 0) && (*(char *)((long)pvVar6 + 0x21) != '\0')) {
        fVar20 = (float)UnityEngine_Time__get_time(0);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.GCDHNMAHOEP + 0.5 < fVar20) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          Menu__EDKJPDKMJGB(Menu.KECGFPHIEHF,lVar12,0);
          goto LAB_00c46b74;
        }
      }
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar14 = 1;
    }
    UnityEngine_GameObject__SetActive(lVar12,uVar14,0);
  }
LAB_00c46b74:
  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar14 = CarController.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar14 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) != '\0') {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) != 0) {
            iVar3 = UnityEngine_Screen__get_width(0);
            iVar4 = UnityEngine_Screen__get_height(0);
            fVar20 = (float)iVar3 / (float)iVar4;
            if (fVar20 <= 1.51) goto LAB_00c46f40;
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0)
               ) goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar12 + 0x58);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((CarController.KECGFPHIEHF == 0) ||
                 (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                 lVar12 == 0)) goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar12 + 0x68);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
              if ((uVar5 & 1) != 0) {
                if (1.61 <= fVar20) {
                  if ((fVar20 <= 1.61) || (1.8 <= fVar20)) {
                    if (fVar20 < 1.8) goto LAB_00c46f40;
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x70);
                    uVar21 = 0x3f51eb85;
                    uVar19 = 0x428c0000;
                  }
                  else {
                    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((CarController.KECGFPHIEHF == 0) ||
                       (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                       lVar12 == 0)) goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x70);
                    uVar21 = 0x3f5eb852;
                    uVar19 = 0x42840000;
                  }
                }
                else {
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x70);
                  uVar21 = 0x3f733333;
                  uVar19 = 0x425c0000;
                }
                goto LAB_00c46f38;
              }
            }
            else {
              if (1.61 <= fVar20) {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar12 == 0)) goto LAB_00c485b8;
                if (1.8 <= fVar20) {
                  if (*(long *)(lVar12 + 0x240) == 0) goto LAB_00c485b8;
                  uVar5 = UnityEngine_GameObject__get_activeSelf(*(long *)(lVar12 + 0x240),0);
                  if ((uVar5 & 1) != 0) goto LAB_00c46f70;
                  if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((CarController.KECGFPHIEHF == 0) ||
                     (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                     lVar12 == 0)) goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x60);
                  uVar21 = 0x3f51eb85;
                  uVar19 = 0x41a00000;
                }
                else {
                  uVar14 = *(undefined8 *)(lVar12 + 0x60);
                  uVar21 = 0x3f5eb852;
                  uVar19 = 0x40a00000;
                }
              }
              else {
                if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((CarController.KECGFPHIEHF == 0) ||
                   (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG,
                   lVar12 == 0)) goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0x60);
                uVar19 = 0xc0a00000;
                uVar21 = 0;
              }
LAB_00c46f38:
              GUIWindow__EPGDFDEPGCB(uVar19,uVar21,pvVar6,uVar14);
            }
LAB_00c46f40:
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
            goto LAB_00c485b8;
            AdvController__MJBKAAENPCL(lVar12,0);
            goto LAB_00c46f70;
          }
        }
        GUIWindow__IPELKJAHFGL(pvVar6);
      }
    }
  }
LAB_00c46f70:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
      uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(char *)((long)pvVar6 + 0x40) == '\0') {
LAB_00c47120:
          GUIWindow__IPELKJAHFGL(pvVar6);
        }
        else {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
          goto LAB_00c485b8;
          uVar5 = AdvController__EDNAEPDDBPJ(lVar12,0);
          if ((uVar5 & 1) == 0) goto LAB_00c47120;
          iVar3 = UnityEngine_Screen__get_width(0);
          iVar4 = UnityEngine_Screen__get_height(0);
          fVar20 = (float)iVar3 / (float)iVar4;
          if (1.51 < fVar20) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
            goto LAB_00c485b8;
            uVar14 = *(undefined8 *)(lVar12 + 0x180);
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
              goto LAB_00c485b8;
              uVar14 = *(undefined8 *)(lVar12 + 0xa8);
              if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0xe0);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
                if ((uVar5 & 1) == 0) {
                  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                  if (lVar12 == 0) goto LAB_00c485b8;
                  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                            (lVar12,&lStack_68,
                             _Method_UnityEngine_GameObject_GetComponent_DonateItem___);
                  lVar12 = lStack_68;
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality(lVar12,0,0);
                  if ((uVar5 & 1) != 0) {
                    if (lVar12 == 0) goto LAB_00c485b8;
                    if (*(int *)(lVar12 + 0x2c) == 3) {
                      lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
                      if (lVar12 == 0) goto LAB_00c485b8;
                      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType_
                                (lVar12,&lStack_68,
                                 _Method_UnityEngine_GameObject_GetComponent_RectTransform___);
                      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                        func_0x00a67a30();
                      }
                      uVar5 = UnityEngine_Object__op_Inequality(lStack_68,0,0);
                      if ((uVar5 & 1) != 0) {
                        if (1.61 <= fVar20) {
                          if (1.8 <= fVar20) {
                            uVar21 = 0x3f59999a;
                            uVar19 = 0x42700000;
                          }
                          else {
                            uVar19 = 0x428c0000;
                            uVar21 = 0;
                          }
                        }
                        else {
                          uVar19 = 0x41a00000;
                          uVar21 = 0;
                        }
                        goto LAB_00c47304;
                      }
                    }
                  }
                  goto LAB_00c47308;
                }
                if (1.61 <= fVar20) {
                  if (fVar20 < 1.8) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                    goto LAB_00c485b8;
                    lStack_68 = *(long *)(lVar12 + 0xe8);
                    uVar21 = 0x3f733333;
                    uVar19 = 0x428c0000;
                    goto LAB_00c47304;
                  }
                  goto LAB_00c47338;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xe8);
                uVar19 = 0x41f00000;
              }
              else {
                if (1.61 <= fVar20) {
                  if (1.8 <= fVar20) goto LAB_00c47338;
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                  goto LAB_00c485b8;
                  lStack_68 = *(long *)(lVar12 + 0xb0);
                  uVar21 = 0x3f6e147b;
                  uVar19 = 0;
                  goto LAB_00c47304;
                }
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0xb0);
                uVar19 = 0xc1c80000;
              }
LAB_00c4729c:
              uVar21 = 0;
            }
            else {
              if (fVar20 < 1.61) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                goto LAB_00c485b8;
                lStack_68 = *(long *)(lVar12 + 0x188);
                uVar19 = 0x41200000;
                goto LAB_00c4729c;
              }
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if ((Menu.KECGFPHIEHF == 0) ||
                 (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
              goto LAB_00c485b8;
              lStack_68 = *(long *)(lVar12 + 0x188);
              if (1.8 <= fVar20) {
                uVar21 = 0x3f51eb85;
                uVar19 = 0x42180000;
              }
              else {
                uVar21 = 0x3f733333;
                uVar19 = 0x420c0000;
              }
            }
LAB_00c47304:
            GUIWindow__EPGDFDEPGCB(uVar19,uVar21,pvVar6,lStack_68);
          }
LAB_00c47308:
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
          goto LAB_00c485b8;
          AdvController__MJBKAAENPCL(lVar12,0);
        }
      }
    }
  }
LAB_00c47338:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar12 = Menu.<statics>;
  if (*(char *)(lVar12 + 0x1a) != '\0') {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar12 = Menu.<statics>;
    }
    if (*(char *)(lVar12 + 0xc) != '\0') {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar14 = Menu.KECGFPHIEHF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_UnityEngine_Object_TypeInfo);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        uVar14 = Menu.KECGFPHIEHF.ANIMNONMFFH;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
          uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
            goto LAB_00c485b8;
            if (*(char *)(lVar12 + 0x6c) != '\0') {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (cRam0000000001916e67 == '\0') {
                func_0x00a67900(&Main_TypeInfo);
                cRam0000000001916e67 = '\x01';
              }
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              lVar12 = Main.FBDDKIOEKDM;
              if (lVar12 == 0) goto LAB_00c485b8;
              uVar5 = DAFNMLEKHAD__MHBEPDHNNFH(lVar12,0);
              if ((uVar5 & 1) == 0) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if ((Menu.KECGFPHIEHF == 0) ||
                   (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
                goto LAB_00c485b8;
                uVar14 = *(undefined8 *)(lVar12 + 0x90);
                if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
                if ((uVar5 & 1) != 0) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if ((Menu.KECGFPHIEHF == 0) ||
                     (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
                  goto LAB_00c485b8;
                  uVar14 = *(undefined8 *)(lVar12 + 0x78);
                  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(pvVar6,uVar14,0);
                  if ((uVar5 & 1) != 0) {
                    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    if ((Menu.KECGFPHIEHF == 0) ||
                       (lVar12 = Menu.KECGFPHIEHF.ANIMNONMFFH, lVar12 == 0))
                    goto LAB_00c485b8;
                    uVar14 = *(undefined8 *)(lVar12 + 0x88);
                    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
                      func_0x00a67a30();
                    }
                    uVar14 = UnityEngine_Object__Instantiate_object_
                                       (uVar14,_Method_UnityEngine_Object_Instantiate_GameObject___)
                    ;
                    *(undefined8 *)(lVar12 + 0x90) = uVar14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar12 = UnityEngine_Component__get_gameObject(pvVar6,0);
  if (lVar12 == 0) goto LAB_00c485b8;
  UnityEngine_GameObject__SetActive(lVar12,1,0);
  puVar13 = *(undefined8 **)(_GUIWindow_TypeInfo + 0xb8);
  puVar13[2] = *puVar13;
  *puVar13 = pvVar6;
  if (*(char *)((long)pvVar6 + 0x23) != '\0') {
    pvVar10 = GUIWindow__FAAELIPKLCB(pvVar6);
    UnityEngine_MonoBehaviour__StartCoroutine(pvVar6,pvVar10,0);
  }
  lVar12 = func_0x00a679a0(_string___TypeInfo,6);
  if (lVar12 == 0) goto LAB_00c485b8;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00c485b4:
                    /* WARNING: Subroutine does not return */
    il2cpp_throw_967b58();
  }
  *(undefined8 *)(lVar12 + 0x20) = _Str_Window__Show__;
  uVar14 = GUIWindow.OFEJBBPBBFG;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    if (GUIWindow.OFEJBBPBBFG == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(GUIWindow.OFEJBBPBBFG,0);
  }
  if ((*(uint *)(lVar12 + 0x18) < 2) ||
     (*(undefined8 *)(lVar12 + 0x28) = uVar14, *(uint *)(lVar12 + 0x18) == 2)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x30) = _Str___last__;
  uVar14 = GUIWindow.PADNIFKFMPL;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
  uVar14 = _Str_null;
  if ((uVar5 & 1) != 0) {
    lVar16 = GUIWindow.PADNIFKFMPL;
    if (lVar16 == 0) goto LAB_00c485b8;
    uVar14 = UnityEngine_Object__get_name(lVar16,0);
  }
  uVar2 = *(uint *)(lVar12 + 0x18);
  if ((uVar2 < 4) || (*(undefined8 *)(lVar12 + 0x38) = uVar14, uVar2 == 4)) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x40) = _Str____Child__;
  plVar7 = GUIWindow.DNEPGKHAOBF;
  uVar14 = 0;
  if (plVar7 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar2 = *(uint *)(lVar12 + 0x18);
  }
  if (uVar2 < 6) goto LAB_00c485b4;
  *(undefined8 *)(lVar12 + 0x48) = uVar14;
  uVar14 = System_String__Concat(lVar12,0);
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_Main_TypeInfo);
  }
  Main__GEMDEAMAGPG(uVar14,0,0);
  bVar1 = Main__KCHOEBEIOCE();
  if (bVar1) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (Menu.KECGFPHIEHF.ONNBLPAKJHK == 0)) goto LAB_00c485b8;
    GamePadController__KCAHLEAKNNK();
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.MDLMIEDLJMC == '\0') {
LAB_00c47a5c:
    if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (CarController.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar14 = CarController.KECGFPHIEHF.CDDOBCENBOG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((CarController.KECGFPHIEHF == 0) ||
         (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0x50);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
      if ((uVar5 & 1) == 0) {
        uVar14 = GUIWindow.OFEJBBPBBFG;
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0))
        goto LAB_00c485b8;
        uVar8 = *(undefined8 *)(lVar12 + 0x68);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
        if ((uVar5 & 1) == 0) {
          uVar14 = GUIWindow.OFEJBBPBBFG;
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0))
          goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(lVar12 + 0x58);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((CarController.KECGFPHIEHF == 0) ||
               (pvVar6 = CarController.KECGFPHIEHF.CDDOBCENBOG,
               pvVar6 == (void *)0x0)) goto LAB_00c485b8;
            GUIGameplay__PIHHDKCEMGD(pvVar6);
          }
        }
        else {
          if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((CarController.KECGFPHIEHF == 0) ||
             (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0))
          goto LAB_00c485b8;
          GUIGameplay__CCDFIOJMHGC(lVar12,0);
        }
      }
      else {
        if (*(int *)(_CarController_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((CarController.KECGFPHIEHF == 0) ||
           (lVar12 = CarController.KECGFPHIEHF.CDDOBCENBOG, lVar12 == 0))
        goto LAB_00c485b8;
        lVar12 = *(long *)(lVar12 + 0x178);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar16 = Main.FBDDKIOEKDM;
        if ((lVar16 == 0) || (uVar2 = DAFNMLEKHAD__EFDKHACIIEC(lVar16,0), lVar12 == 0))
        goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive(lVar12,uVar2 & 1,0);
      }
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar14 = Menu.KECGFPHIEHF;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
    uVar14 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
    if ((uVar5 & 1) == 0) goto LAB_00c47a5c;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
    goto LAB_00c485b8;
    uVar5 = GUIGarage__ABAHNKCPCFA(lVar12,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
        (lVar12 = *(long *)(lVar12 + 0x78), lVar12 == 0)) ||
       (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0)) goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
         ((lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0 ||
          (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
      goto LAB_00c485b8;
      uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
      if ((uVar5 & 1) != 0) goto LAB_00c47948;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,0,0);
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)) goto LAB_00c485b8;
      uVar19 = 0;
    }
    else {
LAB_00c47948:
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (((Menu.KECGFPHIEHF == 0) ||
          (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x1d0), lVar12 == 0)) goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (pvVar10 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar10 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__NFJNJCLENFD(pvVar10);
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
      goto LAB_00c485b8;
      lVar12 = *(long *)(lVar12 + 0x3e0);
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar16 = Main.FBDDKIOEKDM;
      if ((lVar16 == 0) || (uVar2 = DAFNMLEKHAD__EFDKHACIIEC(lVar16,0), lVar12 == 0))
      goto LAB_00c485b8;
      UnityEngine_GameObject__SetActive(lVar12,uVar2 & 1,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         ((lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0 ||
          (lVar12 = *(long *)(lVar12 + 0x1b8), lVar12 == 0)))) goto LAB_00c485b8;
      uVar19 = 0xc2b00000;
    }
    UnityEngine_RectTransform__set_offsetMax(0,uVar19,lVar12,0);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
       ((lVar12 = *(long *)(lVar12 + 0x60), lVar12 == 0 ||
        (lVar12 = UnityEngine_Component__get_gameObject(lVar12,0), lVar12 == 0))))
    goto LAB_00c485b8;
    uVar5 = UnityEngine_GameObject__get_activeSelf(lVar12,0);
    if ((uVar5 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30(_Menu_TypeInfo);
      }
      bVar1 = Menu.NDMIIEOKFGB != '\0';
    }
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_Menu_TypeInfo);
    }
    if (((Menu.KECGFPHIEHF == 0) ||
        (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x68), lVar12 == 0)) goto LAB_00c485b8;
    UnityEngine_GameObject__SetActive(lVar12,*(undefined1 *)((long)pvVar6 + 0x22),0);
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
    goto LAB_00c485b8;
    uVar14 = *(undefined8 *)(lVar12 + 0x78);
    uVar8 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar8,uVar14,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0x80);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar14,uVar8,0);
      if ((uVar5 & 1) != 0) {
        uVar14 = GUIWindow.PADNIFKFMPL;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
        if ((uVar5 & 1) != 0) {
          uVar14 = GUIWindow.PADNIFKFMPL;
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
          goto LAB_00c485b8;
          uVar8 = *(undefined8 *)(lVar12 + 0x70);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
            Menu__OODBEAHDBMH(Menu.KECGFPHIEHF,0);
          }
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = Menu.KECGFPHIEHF;
        if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) ||
           (lVar12 = *(long *)(lVar12 + 0x4e0), lVar12 == 0)) goto LAB_00c485b8;
        UnityEngine_GameObject__SetActive
                  (lVar12,*(undefined1 *)((long)*(long **)(_Menu_TypeInfo + 0xb8) + 0xe),0);
        uVar19 = UnityEngine_Time__get_realtimeSinceStartup(0);
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        Main.LNHNCBOIGOF = uVar19;
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        Menu__OLOGKIHIIEL(Menu.KECGFPHIEHF,0);
      }
    }
    uVar14 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar12 + 0x60);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
    if ((uVar5 & 1) == 0) {
      uVar14 = GUIWindow.OFEJBBPBBFG;
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
      goto LAB_00c485b8;
      uVar8 = *(undefined8 *)(lVar12 + 0xe0);
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if ((Menu.KECGFPHIEHF == 0) ||
           (pvVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar6 == (void *)0x0))
        goto LAB_00c485b8;
        GUIGarage__ANCCFOEBAGI(pvVar6);
      }
    }
    else {
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar12 = Main.FBDDKIOEKDM;
      if (lVar12 == 0) goto LAB_00c485b8;
      uVar5 = DAFNMLEKHAD__LKKDIBOKNMJ(lVar12,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC != '\0') {
          if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar14 = SoundScript.FPOJDHNIFPP;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar5 = UnityEngine_Object__op_Inequality(uVar14,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            lVar12 = SoundScript.FPOJDHNIFPP;
            if (lVar12 == 0) goto LAB_00c485b8;
            uVar5 = UnityEngine_AudioSource__get_isPlaying(lVar12,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(_SoundScript_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              SoundScript__HCEFONCADKE
                        (SoundScript.FPOJDHNIFPP,0,0);
            }
          }
        }
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (cRam0000000001916e67 == '\0') {
        func_0x00a67900(&Main_TypeInfo);
        cRam0000000001916e67 = '\x01';
      }
      if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      lVar12 = Main.FBDDKIOEKDM;
      if (lVar12 == 0) goto LAB_00c485b8;
      lVar12 = DAFNMLEKHAD__DKJLCJPBPPN(lVar12,0xffffffff,1,0);
      if (lVar12 == 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = Main.FBDDKIOEKDM;
        if (lVar12 == 0) goto LAB_00c485b8;
        Main.LCFFGBBHMPH = *(undefined4 *)(lVar12 + 0x104);
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) goto LAB_00c485b8;
        Menu__CKPDEIAFHEC(Menu.KECGFPHIEHF,0);
      }
      if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if ((Menu.KECGFPHIEHF == 0) ||
         (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
      goto LAB_00c485b8;
      GUIGarage__OCLHKDAFKLI(lVar12,0);
      if ((Menu.KECGFPHIEHF == 0) ||
         (pvVar6 = Menu.KECGFPHIEHF.ALPCPBBNEBA, pvVar6 == (void *)0x0))
      goto LAB_00c485b8;
      GUIGarage__HJMGNJDAJJJ(pvVar6);
    }
    uVar14 = GUIWindow.OFEJBBPBBFG;
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
    goto LAB_00c485b8;
    uVar8 = *(undefined8 *)(lVar12 + 0x70);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar14,uVar8,0);
    if ((uVar5 & 1) != 0) {
      uVar14 = GUIWindow.DNEPGKHAOBF;
      if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar14,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Main.NMDEEOMHAGP == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if ((Menu.KECGFPHIEHF == 0) ||
             (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
          goto LAB_00c485b8;
          GUIGarage__ButtonMapHidePanel(lVar12,0,0);
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar12 = Menu.KECGFPHIEHF;
        *(undefined1 *)(*(long **)(_Menu_TypeInfo + 0xb8) + 1) = 0;
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) goto LAB_00c485b8;
        GUIGarage__AGFKGLDJDLE(lVar12,0);
        if ((Menu.KECGFPHIEHF == 0) ||
           (lVar12 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar12 == 0))
        goto LAB_00c485b8;
        GUIGarage__AEBFNHHILNI(lVar12,0);
      }
    }
    if (bVar1) {
      return;
    }
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if (Menu.KECGFPHIEHF != 0) {
    Menu__GDEFDCOIDNM(Menu.KECGFPHIEHF,0);
    return;
  }
LAB_00c485b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public int MNPHCGOJNCN() { }   @0xb310d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Level__MNPHCGOJNCN(void *__this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *CIDKMFLFJEJ;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  int iStack_74;
  
  if ((bRam00000000019170c2 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&Str____);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_Not_Found_stars_image_for_level_id_);
    bRam00000000019170c2 = 1;
  }
  iStack_74 = 0;
  lVar9 = this.tasks;
  if (lVar9 != 0) {
    uVar12 = 0;
    piVar1 = (int *)(&this.id);
    lVar16 = 4;
    do {
      uVar15 = (int)lVar16 - 4;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar15) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar13 = Menu.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.MDLMIEDLJMC == '\0') {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (Menu.KECGFPHIEHF == 0) break;
        uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        uVar13 = Level__get_gui(__this);
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) == 0) {
          return uVar12;
        }
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (((Menu.KECGFPHIEHF == 0) ||
            (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
           (lVar9 = *(long *)(lVar9 + 0x248), lVar9 == 0)) break;
        if (((int)uVar12 < *(int *)(lVar9 + 0x18)) && (*piVar1 < 100)) {
          lVar9 = Level__get_gui(__this);
          if (lVar9 == 0) break;
          uVar13 = *(undefined8 *)(lVar9 + 0x48);
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_UnityEngine_Object_TypeInfo);
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) == 0) {
            uVar13 = System_Int32__ToString(piVar1,0);
            CIDKMFLFJEJ = (void *)System_String__Concat
                                            (_Str_Not_Found_stars_image_for_level_id_,uVar13,0);
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30(_Main_TypeInfo);
            }
            Main__EEKNCFLMGDP(CIDKMFLFJEJ);
          }
          else {
            lVar9 = Level__get_gui(__this);
            if (lVar9 == 0) break;
            lVar9 = *(long *)(lVar9 + 0x48);
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (((Menu.KECGFPHIEHF == 0) ||
                (lVar16 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar16 == 0)) ||
               (lVar16 = *(long *)(lVar16 + 0x248), lVar16 == 0)) break;
            if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_00c31afc;
            if (lVar9 == 0) break;
            UnityEngine_UI_Image__set_sprite
                      (lVar9,*(undefined8 *)(lVar16 + (long)(int)uVar12 * 8 + 0x20),0);
          }
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (__this != Main.NMDEEOMHAGP) {
          return uVar12;
        }
        lVar9 = 4;
        goto LAB_00c319c8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
      lVar9 = *(long *)(lVar9 + lVar16 * 8);
      if (lVar9 == 0) goto LAB_00c31af0;
      if (*(int *)(lVar9 + 0x14) < 1) {
        if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar13 = Menu.KECGFPHIEHF;
        if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30(_UnityEngine_Object_TypeInfo);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c31af0;
          uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (__this == Main.NMDEEOMHAGP) {
              if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (((Menu.KECGFPHIEHF == 0) ||
                  (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                 (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
              lVar9 = *(long *)(lVar9 + lVar16 * 8);
              if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x18), plVar14 == (long *)0x0))
              goto LAB_00c31af0;
              (**(code **)(*plVar14 + 0x5a8))(plVar14,_Str____,*(undefined8 *)(*plVar14 + 0x5b0));
            }
          }
        }
      }
      else {
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        if (cRam0000000001916e67 == '\0') {
          func_0x00a67900(&Main_TypeInfo);
          cRam0000000001916e67 = '\x01';
        }
        if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        lVar9 = Main.FBDDKIOEKDM;
        if (lVar9 == 0) goto LAB_00c31af0;
        lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,*piVar1,0);
        if (lVar9 != 0) {
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (cRam0000000001916e67 == '\0') {
            func_0x00a67900(&Main_TypeInfo);
            cRam0000000001916e67 = '\x01';
          }
          if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          lVar9 = Main.FBDDKIOEKDM;
          if (lVar9 == 0) {
LAB_00c31af0:
                    /* WARNING: Subroutine does not return */
            il2cpp_throw_967b50();
          }
          lVar9 = DAFNMLEKHAD__PJDAAMCNMHJ(lVar9,this.id,0);
          lVar10 = this.tasks;
          if (lVar10 == 0) goto LAB_00c31af0;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_00c31afc;
          lVar10 = *(long *)(lVar10 + lVar16 * 8);
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_00c31af0;
          iStack_74 = DJKGLJOCFCE__HPCKHLLBFPL(lVar9,*(undefined4 *)(lVar10 + 0x10),0);
          lVar9 = this.tasks;
          if (lVar9 == 0) goto LAB_00c31af0;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
          lVar9 = *(long *)(lVar9 + lVar16 * 8);
          if (lVar9 == 0) goto LAB_00c31af0;
          iVar4 = *(int *)(lVar9 + 0x14);
          iVar2 = iVar4;
          if (iStack_74 <= iVar4) {
            iVar2 = iStack_74;
          }
          bVar5 = -1 < iStack_74;
          iStack_74 = 0;
          if (bVar5) {
            iStack_74 = iVar2;
          }
          if (iVar4 <= iStack_74) {
            uVar12 = uVar12 + 1;
          }
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30(_Menu_TypeInfo);
          }
          uVar13 = Menu.KECGFPHIEHF;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
          if ((uVar6 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if (Menu.KECGFPHIEHF == 0) goto LAB_00c31af0;
            uVar13 = Menu.KECGFPHIEHF.ALPCPBBNEBA;
            if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            uVar6 = UnityEngine_Object__op_Inequality(uVar13,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
                func_0x00a67a30();
              }
              if (__this == Main.NMDEEOMHAGP) {
                if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                  func_0x00a67a30();
                }
                if (((Menu.KECGFPHIEHF == 0) ||
                    (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                   (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                plVar14 = *(long **)(lVar9 + 0x18);
                uVar13 = System_Int32__ToString(&iStack_74,0);
                lVar9 = this.tasks;
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                uVar7 = System_Int32__ToString(lVar9 + 0x14,0);
                uVar13 = System_String__Concat(uVar13,_Str__,uVar7,0);
                if (plVar14 == (long *)0x0) goto LAB_00c31af0;
                (**(code **)(*plVar14 + 0x5a8))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x5b0));
                lVar9 = this.tasks;
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (iStack_74 < *(int *)(lVar9 + 0x14)) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x10), plVar14 == (long *)0x0))
                  goto LAB_00c31af0;
                  pcVar11 = *(code **)(*plVar14 + 0x2a8);
                  uVar13 = *(undefined8 *)(*plVar14 + 0x2b0);
                  uVar18 = 0x3ecccccd;
                }
                else {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if ((lVar9 == 0) || (plVar14 = *(long **)(lVar9 + 0x10), plVar14 == (long *)0x0))
                  goto LAB_00c31af0;
                  pcVar11 = *(code **)(*plVar14 + 0x2a8);
                  uVar13 = *(undefined8 *)(*plVar14 + 0x2b0);
                  uVar18 = 0x3f800000;
                }
                (*pcVar11)(0x3f800000,0x3f800000,0x3f800000,uVar18,plVar14,uVar13);
                lVar9 = this.tasks;
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                lVar9 = *(long *)(lVar9 + lVar16 * 8);
                if (lVar9 == 0) goto LAB_00c31af0;
                if (*(int *)(lVar9 + 0x10) - 1U < 2) {
                  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
                    func_0x00a67a30();
                  }
                  if (((Menu.KECGFPHIEHF == 0) ||
                      (lVar9 = Menu.KECGFPHIEHF.ALPCPBBNEBA, lVar9 == 0)) ||
                     (lVar9 = *(long *)(lVar9 + 0x2c0), lVar9 == 0)) goto LAB_00c31af0;
                  if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar9 = *(long *)(lVar9 + lVar16 * 8);
                  if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) ||
                     (lVar9 = UnityEngine_UI_Graphic__get_rectTransform(lVar9,0), lVar9 == 0))
                  goto LAB_00c31af0;
                  fVar17 = (float)UnityEngine_Transform__get_localScale(lVar9,0);
                  fVar19 = this.start_task_scale_x;
                  if (this.start_task_scale_x == -1.0) {
                    this.start_task_scale_x = fVar17;
                    fVar19 = fVar17;
                  }
                  lVar10 = this.tasks;
                  if (lVar10 == 0) goto LAB_00c31af0;
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_00c31afc;
                  lVar10 = *(long *)(lVar10 + lVar16 * 8);
                  if (lVar10 == 0) goto LAB_00c31af0;
                  fVar17 = -ABS(fVar19);
                  if (*(int *)(lVar10 + 0x10) != 1) {
                    fVar17 = ABS(fVar19);
                  }
                  UnityEngine_Transform__set_localScale(fVar17,lVar9,0);
                }
              }
            }
          }
        }
      }
      lVar9 = this.tasks;
      lVar16 = lVar16 + 1;
    } while (lVar9 != 0);
  }
LAB_00c31750:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
LAB_00c319c8:
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  lVar16 = Menu.KECGFPHIEHF;
  if (((lVar16 == 0) || (*(long *)(lVar16 + 0x20) == 0)) ||
     (lVar10 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar10 == 0)) goto LAB_00c31750;
  uVar6 = lVar9 - 4;
  if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar6) {
    return uVar12;
  }
  if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
    lVar16 = Menu.KECGFPHIEHF;
    if (lVar16 == 0) goto LAB_00c31750;
  }
  if ((*(long *)(lVar16 + 0x20) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar16 == 0)) goto LAB_00c31750;
  if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_00c31afc;
  uVar13 = *(undefined8 *)(lVar16 + lVar9 * 8);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar8 = UnityEngine_Object__op_Inequality(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    lVar16 = Menu.KECGFPHIEHF;
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0x20) == 0)) ||
       (lVar10 = *(long *)(*(long *)(lVar16 + 0x20) + 0x2a8), lVar10 == 0)) goto LAB_00c31750;
    if (*(uint *)(lVar10 + 0x18) <= uVar6) {
LAB_00c31afc:
                    /* WARNING: Subroutine does not return */
      il2cpp_throw_967b58();
    }
    lVar10 = *(long *)(lVar10 + lVar9 * 8);
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
      lVar16 = Menu.KECGFPHIEHF;
      if (lVar16 == 0) goto LAB_00c31750;
    }
    if ((*(long *)(lVar16 + 0x20) == 0) || (lVar10 == 0)) goto LAB_00c31750;
    lVar3 = 0x2b0;
    if ((long)(int)uVar12 <= (long)uVar6) {
      lVar3 = 0x2b8;
    }
    UnityEngine_UI_Image__set_sprite(lVar10,*(undefined8 *)(*(long *)(lVar16 + 0x20) + lVar3),0);
  }
  lVar9 = lVar9 + 1;
  goto LAB_00c319c8;
}


// ==== public string DBEGLMBGKNL() { }   @0xb31b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * Level__DBEGLMBGKNL(void *__this)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iStack_34;
  
  if ((bRam00000000019170c3 & 1) == 0) {
    func_0x00a67900(&BridgePHP_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    func_0x00a67900(&string_TypeInfo);
    func_0x00a67900(&Translate_TypeInfo);
    func_0x00a67900(&Str__);
    func_0x00a67900(&Str_Level__);
    func_0x00a67900(&Str_);
    func_0x00a67900(&Str_LEVEL);
    func_0x00a67900(&Str_EVENT_);
    func_0x00a67900(&Str_EVENT);
    bRam00000000019170c3 = 1;
  }
  if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar7 = Translate.KECGFPHIEHF;
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar1 & 1) != 0) {
    return _Str_Level__;
  }
  uVar1 = System_String__op_Equality
                    (this.translate_key,**(undefined8 **)(_string_TypeInfo + 0xb8)
                     ,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if (Translate.KECGFPHIEHF == 0) goto LAB_00c31e54;
    lVar5 = _Translate_TypeInfo;
    lVar4 = this.translate_key;
LAB_00c31d70:
    pvVar3 = (void *)Translate__JJJNIPAKLJF(lVar5,lVar4);
  }
  else {
    if (this.id < 100) {
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) goto LAB_00c31e54;
      uVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_LEVEL);
      iStack_34 = this.id + 1;
    }
    else {
      if ((this.event_contest != 0) &&
         (this.event_contest.mode != 0)) {
        if (*(int *)(_BridgePHP_TypeInfo + 0xe0) == 0) {
          func_0x00a67a30();
        }
        uVar1 = System_String__op_Equality
                          (BridgePHP.sid,_Str_,0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (Menu.KECGFPHIEHF == 0) goto LAB_00c31e54;
          uVar7 = Menu.KECGFPHIEHF.DGKLJGCAGBJ;
          if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar7,0,0);
          if ((uVar1 & 1) != 0) {
            if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
              func_0x00a67a30();
            }
            if ((Menu.KECGFPHIEHF == 0) ||
               (lVar5 = Menu.KECGFPHIEHF.DGKLJGCAGBJ, lVar5 == 0))
            goto LAB_00c31e54;
            if (*(long *)(lVar5 + 0x58) != 0) goto LAB_00c31d0c;
          }
          if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
            func_0x00a67a30();
          }
          if (this.event_contest == 0) goto LAB_00c31e54;
          iStack_34 = this.event_contest.mode;
          lVar6 = Translate.KECGFPHIEHF;
          uVar7 = System_Int32__ToString(&iStack_34,0);
          lVar5 = System_String__Concat(_Str_EVENT_,uVar7,0);
          lVar4 = lVar5;
          if (lVar6 == 0) goto LAB_00c31e54;
          goto LAB_00c31d70;
        }
      }
LAB_00c31d0c:
      if (*(int *)(_Translate_TypeInfo + 0xe0) == 0) {
        func_0x00a67a30();
      }
      if (Translate.KECGFPHIEHF == 0) {
LAB_00c31e54:
                    /* WARNING: Subroutine does not return */
        il2cpp_throw_967b50();
      }
      uVar7 = Translate__JJJNIPAKLJF(_Translate_TypeInfo,_Str_EVENT);
      iStack_34 = this.id + -99;
    }
    uVar2 = System_Int32__ToString(&iStack_34,0);
    pvVar3 = (void *)System_String__Concat(uVar7,_Str__,uVar2,0);
  }
  return pvVar3;
}


// ==== public int get_EventId() { }   @0xb31f4c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int Level__get_EventId(void *__this)

{
  return this.id + -100;
}


// ==== public void POIIKNJOHOP() { }   @0xb31f58

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__POIIKNJOHOP(void *__this)

{
  this.is_hidden = 0;
  this.road_anim_time = 0;
  return;
}


// ==== public void ICIKEDJLOBK() { }   @0xb31f64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__ICIKEDJLOBK(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  if ((bRam00000000019170c9 & 1) == 0) {
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c9 = 1;
  }
  uVar1 = Level__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = Level__get_gui(__this);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30(_UnityEngine_Object_TypeInfo);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar3 = Level__get_gui(__this);
    if (lVar3 != 0) {
      plVar5 = *(long **)(lVar3 + 0x38);
      pvVar4 = Level__DBEGLMBGKNL(__this);
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c3203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x5a8))(plVar5,pvVar4,*(undefined8 *)(*plVar5 + 0x5b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public bool get_IsTutorial() { }   @0xb32050

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool Level__get_IsTutorial(void *__this)

{
  return this.id == 0;
}


// ==== private static void .cctor() { }   @0xb32060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level___cctor(void)

{
  if ((bRam00000000019170c7 & 1) == 0) {
    func_0x00a67900(&Level_TypeInfo);
    bRam00000000019170c7 = 1;
  }
  Level.last_finished = 0xaffffffff;
  return;
}


// ==== public void FOOFLNEEJFI() { }   @0xb320b0

/* WARNING: Removing unreachable block (ram,0x00c321fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level__FOOFLNEEJFI(void *__this)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000019170c8 & 1) == 0) {
    func_0x00a67900(&Main_TypeInfo);
    func_0x00a67900(&Menu_TypeInfo);
    func_0x00a67900(&UnityEngine_Object_TypeInfo);
    bRam00000000019170c8 = 1;
  }
  uVar1 = Level__get_gui(__this);
  if (*(int *)(_UnityEngine_Object_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30(_UnityEngine_Object_TypeInfo);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar2 = Main__KCHOEBEIOCE(0);
  if ((uVar2 & 1) == 0) {
LAB_00c321ac:
    UnityEngine_Time__get_realtimeSinceStartup(0);
    if (*(int *)(_Main_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
  }
  else {
    if (*(int *)(_Menu_TypeInfo + 0xe0) == 0) {
      func_0x00a67a30();
    }
    if ((Menu.KECGFPHIEHF == 0) ||
       (lVar3 = Menu.KECGFPHIEHF.ONNBLPAKJHK, lVar3 == 0))
    goto LAB_00c3225c;
    if (*(char *)(lVar3 + 0x30) == '\0') goto LAB_00c321ac;
  }
  lVar3 = Level__get_gui(__this);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x30), lVar3 != 0)) {
    if (pcRam000000000191c8c0 == (code *)0x0) {
      pcRam000000000191c8c0 = (code *)func_0x00a678c4(&UNK_005b50fa,0);
    }
    (*pcRam000000000191c8c0)(lVar3,&stack0xffffffffffffffd0);
    return;
  }
LAB_00c3225c:
                    /* WARNING: Subroutine does not return */
  il2cpp_throw_967b50();
}


// ==== public void .ctor() { }   @0xb32260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void Level___ctor(void *__this)

{
  undefined8 uVar1;
  
  if ((bRam00000000019170ca & 1) == 0) {
    func_0x00a67900(&int___TypeInfo);
    func_0x00a67900(&LevelTasks___TypeInfo);
    bRam00000000019170ca = 1;
  }
  uVar1 = func_0x00a679a0(_LevelTasks___TypeInfo,4);
  this.tasks = uVar1;
  uVar1 = func_0x00a679a0(_int___TypeInfo,0x15);
  this.progress_percent = uVar1;
  this.start_task_scale_x = 0xbf800000;
  return;
}



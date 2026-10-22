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
  
  if (*(long *)((long)__this + 0x60) != 0) {
    System_Text_StringBuilder__AppendLine(*(long *)((long)__this + 0x60),NGLPJEMCGCD,0,FHOFNGHGNGF);
    if (*(char *)((long)__this + 0x51) != '\0') {
      if (*(long *)((long)__this + 0x60) == 0) goto LAB_00c4ce90;
      System_Text_StringBuilder__AppendLine(*(long *)((long)__this + 0x60),PKPMNMFFKJL,0);
    }
    if (*(long *)((long)__this + 0x68) != 0) {
      System_Text_StringBuilder__AppendLine(*(long *)((long)__this + 0x68),NGLPJEMCGCD,0);
      lVar5 = *(long *)((long)__this + 0x68);
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



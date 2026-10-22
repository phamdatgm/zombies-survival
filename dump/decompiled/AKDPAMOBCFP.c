/* ---- class definition (Il2CppDumper) ----

// Namespace: 
public sealed class AKDPAMOBCFP : MulticastDelegate // TypeDefIndex: 5141
{
	// Methods

	public void .ctor(object JPHMBPHCDPM, IntPtr AHFAMLAFKPO) { }

	public virtual bool Invoke(Renderer DJABKIAKBPB) { }
}
*/

// ==== public void .ctor(object JPHMBPHCDPM, IntPtr AHFAMLAFKPO) { }   @0xb02a04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void AKDPAMOBCFP___ctor(void *__this,void *JPHMBPHCDPM,long AHFAMLAFKPO)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(AHFAMLAFKPO + 8);
  *(void **)((long)__this + 0x20) = JPHMBPHCDPM;
  *(long *)((long)__this + 0x28) = AHFAMLAFKPO;
  *(undefined8 *)((long)__this + 0x10) = uVar5;
  cVar1 = *(char *)(AHFAMLAFKPO + 0x52);
  *(void **)((long)__this + 0x40) = __this;
  uVar2 = func_0x00a679b8(AHFAMLAFKPO);
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\0') {
      if (JPHMBPHCDPM == (void *)0x0) {
        uVar5 = func_0x00a67b6c(0,&UNK_005b1a65);
        auVar7 = func_0x00a67a20(uVar5,0);
        lVar4 = auVar7._0_8_;
                    /* WARNING: Could not recover jumptable at 0x00c02b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),auVar7._8_8_,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      goto LAB_00c02a58;
    }
    if (*(char *)((long)__this + 0x70) == '\0') {
      puVar6 = &UNK_009beacc;
    }
    else {
      uVar2 = func_0x00a679b0(AHFAMLAFKPO);
      uVar3 = func_0x00a67f44(AHFAMLAFKPO);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          puVar6 = &UNK_009beafc;
        }
        else {
          puVar6 = &UNK_009beb28;
        }
      }
      else if ((uVar3 & 1) == 0) {
        puVar6 = &UNK_009bebac;
      }
      else {
        puVar6 = &UNK_009bebe8;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_00c02a58:
      *(undefined8 *)((long)__this + 0x18) = *(undefined8 *)((long)__this + 0x10);
      *(undefined8 *)((long)__this + 0x40) = *(undefined8 *)((long)__this + 0x20);
      goto LAB_00c02ad0;
    }
    puVar6 = &UNK_009beaec;
  }
  *(undefined **)((long)__this + 0x18) = puVar6;
LAB_00c02ad0:
  *(undefined **)((long)__this + 0x38) = &UNK_009bea78;
  return;
}


// ==== public virtual bool Invoke(Renderer DJABKIAKBPB) { }   @0xb02b04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool AKDPAMOBCFP__Invoke(void *__this,void *DJABKIAKBPB)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00c02b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((long)__this + 0x18))
                    (*(undefined8 *)((long)__this + 0x40),DJABKIAKBPB,
                     *(undefined8 *)((long)__this + 0x28));
  return (bool)uVar1;
}



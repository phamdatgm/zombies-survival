// ==== private void Start() { }   @0xb49de4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MapClouds__Start(void *__this)

{
  int iVar1;
  
  iVar1 = UnityEngine_Random__Range(0,100,0);
  if (iVar1 < 0x32) {
    *(undefined4 *)((long)__this + 0x30) = 0xbf800000;
  }
  return;
}



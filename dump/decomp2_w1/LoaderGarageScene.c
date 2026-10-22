// ==== private void Awake() { }   @0xb49d74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void LoaderGarageScene__Awake(void *__this)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam000000000191715c & 1) == 0) {
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    func_0x00a67900(&Str_garage);
    bRam000000000191715c = 1;
  }
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  uVar1 = _Str_garage;
  if ((bRam000000000191ca2a & 1) == 0) {
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo,0);
    bRam000000000191ca2a = 1;
  }
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  if ((bRam000000000191ca2b & 1) == 0) {
    func_0x00a67900(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    bRam000000000191ca2b = 1;
  }
  if (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo + 0xe0) == 0) {
    func_0x00a67a30();
  }
  UnityEngine_SceneManagement_SceneManager__LoadSceneAsyncNameIndexInternal(uVar1,0xffffffff,0,1);
  if (pcRam000000000191ca18 == (code *)0x0) {
    pcRam000000000191ca18 = (code *)func_0x00a678c4(&UNK_005ada5a);
  }
  iVar2 = (*pcRam000000000191ca18)();
  UnityEngine_SceneManagement_SceneManager__GetSceneAt(iVar2 + -1);
  return;
}



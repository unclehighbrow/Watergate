#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InterstitialManager
struct InterstitialManager_t18;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t7;

// System.Void InterstitialManager::.ctor()
extern "C" void InterstitialManager__ctor_m45 (InterstitialManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InterstitialManager::Start()
extern "C" void InterstitialManager_Start_m46 (InterstitialManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InterstitialManager::NextLevel(System.Int32)
extern "C" Object_t * InterstitialManager_NextLevel_m47 (InterstitialManager_t18 * __this, int32_t ___scriptSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InterstitialManager::Update()
extern "C" void InterstitialManager_Update_m48 (InterstitialManager_t18 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InterstitialManager::DoDisplayLine(System.String,UnityEngine.Sprite,System.Int32)
extern "C" Object_t * InterstitialManager_DoDisplayLine_m49 (InterstitialManager_t18 * __this, String_t* ___text, Sprite_t7 * ___sprite, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;

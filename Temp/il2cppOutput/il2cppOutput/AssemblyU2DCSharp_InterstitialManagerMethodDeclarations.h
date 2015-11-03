#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// InterstitialManager
struct InterstitialManager_t25;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t8;

#include "codegen/il2cpp-codegen.h"

// System.Void InterstitialManager::.ctor()
extern "C" void InterstitialManager__ctor_m52 (InterstitialManager_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InterstitialManager::Start()
extern "C" void InterstitialManager_Start_m53 (InterstitialManager_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InterstitialManager::NextLevel(System.Int32)
extern "C" Object_t * InterstitialManager_NextLevel_m54 (InterstitialManager_t25 * __this, int32_t ___scriptSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InterstitialManager::Update()
extern "C" void InterstitialManager_Update_m55 (InterstitialManager_t25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InterstitialManager::DoDisplayLine(System.String,UnityEngine.Sprite,System.Int32)
extern "C" Object_t * InterstitialManager_DoDisplayLine_m56 (InterstitialManager_t25 * __this, String_t* ___text, Sprite_t8 * ___sprite, int32_t ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
